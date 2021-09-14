#include "TP3SEMANTIQUE.h"

TABLE_SEMANTIQUE table, tableLocale;
NOEUD node, nodeProc;
NOEUD listIdentifiers[100];
TYPE_IDENTIFIANT currentTyoe;
int wIndex;
int isInProc;
int isProcParameters;
int nbParams;

NOEUD createNode (const char* nom, TYPE_IDENTIFIANT type, CLASSE classe, NOEUD suivant){
    NOEUD noeud = (NOEUD)malloc(sizeof(struct NOEUD));
    noeud->nom = (char *)malloc(strlen(nom)+1);
    strcpy(noeud->nom, nom);
    noeud->type = type;
    noeud->classe = classe;
    noeud->suivant = suivant;
    noeud->isInit = 0;
    noeud->isUsed = 0;
    return noeud;
}

NOEUD insertNode (NOEUD noeud, TABLE_SEMANTIQUE table) {
    if( !table ) {
        return noeud;
    }
    else {
        NOEUD last = table;
        while( last->suivant ) {
            last = last->suivant;
        }
        last->suivant = noeud;
        return table;
    }
}

NOEUD lookupNode (const char* nom, TABLE_SEMANTIQUE table) {
    if( !table )
        return NULL;
    NOEUD noeud = table;
    while( noeud && ( strcmp(nom, noeud->nom) != 0 ) )
        noeud = noeud->suivant;
    return noeud;
}

void destroySymbolsTable( TABLE_SEMANTIQUE table )
{
    if( !table )
        return;
    NOEUD noeud = table;
    while( noeud )
    {
        free(noeud->nom);
        free(noeud);
        noeud = noeud->suivant;
    }
}


void displaySymbolsTable( TABLE_SEMANTIQUE SymbolsTable ){
    if( !SymbolsTable )
        return;
    NOEUD Node = SymbolsTable;
    while( Node )
    {
        switch( Node->type )
        {
            case type_Int :
                printf("int ");
                break;

            case type_Char :
                printf("char ");
                break;
            case type_Real :
                printf("real ");
                break;
            case type_Array :
                printf("array ");
                break;

            case NODE_TYPE_UNKNOWN :
                switch (Node->classe)
                {
                    case procedure:
                        printf("procedure ");
                        break;

                    default:
                        break;
                }

            default :
                printf("Unknown ");
        }

        switch (Node->classe)
        {
            case variable:
                printf("variable ");
                break;

            case parametre:
                printf("parametre ");
                break;

            default:
                break;
        }

        printf("%s  ", Node->nom);
        printf("%d  ", Node->isInit);
        printf("%d  ", Node->isUsed);
        printf("\n");

        Node = Node->suivant;
    }
}


void checkIdentifier (char* nom, int nbline){
    CLASSE classe;

    if (isInProc){
        if (isProcParameters){
            classe = parametre;
            nbParams ++;
        }else{
            classe = variable;
        }
        if( lookupNode(nom, tableLocale) ){
            print_error(concat("identifier deja defini: ", nom),nbline);
        }else{
            NOEUD noeud = createNode(nom, currentTyoe, classe ,NULL);
            tableLocale = insertNode(noeud, tableLocale);
            listIdentifiers[wIndex] = noeud;
            wIndex++;
        }
    }else{
        //printf("table globale: \n");
        //displaySymbolsTable(table);
        if( lookupNode(nom, table) ){
            print_error(concat("identifier deja defini: ", nom),nbline);
        }else{
            //printf("ajout d'une nouvelle variable %s \n", nom);
            NOEUD noeud = createNode(nom, currentTyoe, variable ,NULL);
            table = insertNode(noeud, table);
            listIdentifiers[wIndex] = noeud;
            wIndex++;
        }
    }
}

void display(){
    if (!isInProc){
    printf("main table: \n");
    displaySymbolsTable(table);
    } else {
    printf("secondary table: \n");
    displaySymbolsTable(tableLocale);        
    }

}

int checkIdentifierDeclared (char* nom, int nbline){

    NOEUD noeud;

    if (isInProc){
        noeud = lookupNode(nom,tableLocale);
        if ( !noeud ){
            noeud = lookupNode(nom,table);
            if( !noeud ){
                print_error(concat("variable non declaree: ", nom),nbline);
                return 0;
            }else
            {
                noeud->isUsed = 1;
            }
        }else
        {
            noeud->isUsed = 1;
        }
    }else{
        noeud = lookupNode(nom,table);
        if( !noeud ){
            print_error(concat("variable non declaree: ", nom),nbline);
            return 0;
        }else
        {
            noeud->isUsed = 1;
        }
    }
    return 1;
}

void varInitialized (char* nom){

    NOEUD noeud;

    if (isInProc){
        noeud = lookupNode(nom,tableLocale);
        if ( !noeud )
            noeud = lookupNode(nom,table);
    }else{
        noeud = lookupNode(nom,table);
    }
    noeud->isInit = 1;
}

void checkVarInit (char* nom,int nbline){

    NOEUD noeud;

    if (isInProc){
        noeud = lookupNode(nom,tableLocale);
        if ( !noeud )
            noeud = lookupNode(nom,table);
    }else{
        noeud = lookupNode(nom,table);
    }
    if(noeud && noeud->classe == variable && !noeud->isInit)
        print_error("var non initialisee",nbline);
}

void endProc(int nbline)
{
    NOEUD tmp_table;
    printf("%d", isInProc);
    if (isInProc == 1){
        printf("verification de l'utilisation des variables dans la procedure\n");
        isInProc = 0;
        tmp_table = tableLocale;
        tableLocale = NULL;
    }else{
        tmp_table = table;
    }
    while( tmp_table ){
        if (tmp_table->classe == variable && !tmp_table->isUsed)
        {
            char* message;
            //printf("in procedure: ");
            const char* msg = "var declaree non utilisee: \n ";
            message = malloc(strlen(msg)+ strlen(tmp_table->nom));
            strcpy(message, msg);
            strcat(message, tmp_table->nom);
            print_error(message,nbline);
        }

        tmp_table = tmp_table->suivant;
    }
}

int print_error(char * msg, int nbline)
{
    printf("semantic error on line %d : %s\n", nbline, msg);
    return(1);
}


void checkID(char* nom, int nbline){
    if(checkIdentifierDeclared(nom, nbline)) {
        checkVarInit(nom, nbline);
    }
}


void checkIDOnInit(char* nom, int nbline){
    if(checkIdentifierDeclared(nom,nbline)) {
        varInitialized (nom);
    }
}

char* concat(char* s1, char* s2){
    char* message;
    message = malloc(strlen(s1)+ strlen(s2));
    strcpy(message, s1);
    strcat(message, s2);
    return message;
}