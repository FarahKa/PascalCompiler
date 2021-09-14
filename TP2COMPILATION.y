%{
	

#include "TP3SEMANTIQUE.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 			
int yyerror(char const *msg);	
int yylex(void);
char nom[256];
extern int yylineno;

void Begin();
void End();


%}

%token integer_type
%token char_type
%token real_type
%token UNSIGNED_ENTIER
%token while_keyword
%token do_keyword
%token of_keyword
%token array_keyword
%token endif_keyword
%token program_keyword
%token begin_keyword
%token end_keyword
%token procedure_keyword
%token function_keyword
%token var_keyword
%token if_keyword
%token then_keyword
%token else_keyword
%token write_keyword
%token read_keyword
%token virgule
%token deux_points
%token OP_AFFECT
%token parenthese_ouvrante
%token parenthese_fermante
%token Number
%token OP_MULTIPLICATION
%token OP_DIVISION
%token OP_ADDITION
%token OP_SOUSTRACTION
%token COMMENT_LINE
%token point_virgule
%token MULTILINE_COMMENT
%token crochet_fermant
%token crochet_ouvrant
%token DEUX_POINTS_HORIZ
%token single_quote_string
%token double_quote_string
%token identifier

 

%start program

%%
                                                           
program		    : entete liste_declarations declaration_methodes instruction_composee 
						| entete liste_declarations instruction_composee 
						| entete declaration_methodes instruction_composee 
						| entete instruction_composee 
						| entete 
						;


entete					: program_keyword identifier point_virgule
            			| error identifier point_virgule     {yyerror ("mot clef program attendu on line : "); }
                		| program_keyword error point_virgule        {yyerror ("identifiant attendu on line :"); } 
                		| program_keyword identifier error           {yyerror ("point virgule attendu on line :"); }
                		;


liste_declarations : declaration
                    | declaration liste_declarations
                        ;
declaration : var_keyword declaration_corps point_virgule 
            | error declaration_corps point_virgule {yyerror (" var attendu on line : "); }
            | var_keyword declaration_corps error {yyerror (" point virgule attendu on line : "); }
                ;
declaration_corps : liste_identifiers deux_points type {
                            while( wIndex > 0 ) {
                                wIndex-- ;
                                listIdentifiers[wIndex]->type = currentTyoe;
                            }
                            wIndex = 0 ;
                            display();
                        }
                    | liste_identifiers error type {yyerror (" deux points attendus on line : "); }
                        ;
liste_identifiers : identifier {
							checkIdentifier(nom,yylineno);
						} 
                    | identifier {
                        //printf("here");
							checkIdentifier(nom,yylineno);
						} virgule liste_identifiers 
                    | identifier error liste_identifiers {yyerror (" virgule attendue on line : "); }
                        ;

standard_type : integer_type { currentTyoe = type_Int; } | real_type { currentTyoe = type_Real; }| char_type  { currentTyoe = type_Char; } | error {yyerror(" Type non valide on line : ");};

std_type_array : integer_type | real_type | char_type | error {yyerror("Type non valide on line : ");};

type : standard_type 
        | array_keyword crochet_ouvrant UNSIGNED_ENTIER DEUX_POINTS_HORIZ UNSIGNED_ENTIER crochet_fermant of_keyword std_type_array { currentTyoe = type_Array; }
        | error crochet_ouvrant UNSIGNED_ENTIER DEUX_POINTS_HORIZ UNSIGNED_ENTIER crochet_fermant of_keyword std_type_array {yyerror (" mot cle array attendu on line : "); }
        | array_keyword error UNSIGNED_ENTIER DEUX_POINTS_HORIZ UNSIGNED_ENTIER crochet_fermant of_keyword std_type_array {yyerror (" crochet ouvrant attendu on line : "); }
        | array_keyword crochet_ouvrant error DEUX_POINTS_HORIZ UNSIGNED_ENTIER crochet_fermant of_keyword std_type_array {yyerror (" entier attendu on line : "); }
        | array_keyword crochet_ouvrant UNSIGNED_ENTIER error UNSIGNED_ENTIER crochet_fermant of_keyword std_type_array {yyerror (" deux points attendus on line : "); }
        | array_keyword crochet_ouvrant UNSIGNED_ENTIER DEUX_POINTS_HORIZ error crochet_fermant of_keyword std_type_array {yyerror ("entier attendu on line : "); }
        | array_keyword crochet_ouvrant UNSIGNED_ENTIER DEUX_POINTS_HORIZ UNSIGNED_ENTIER error of_keyword std_type_array{yyerror ("crochet fermant attendu on line : "); }
        | array_keyword crochet_ouvrant UNSIGNED_ENTIER DEUX_POINTS_HORIZ UNSIGNED_ENTIER crochet_fermant error std_type_array{yyerror (" mot cle of attendu on line : "); }
        | array_keyword crochet_ouvrant UNSIGNED_ENTIER DEUX_POINTS_HORIZ UNSIGNED_ENTIER crochet_fermant of_keyword error {yyerror (" type standard attendu on line : "); } 
                ;

declaration_methodes : declaration_methode {display();}
                        | declaration_methode declaration_methodes
                        ;
declaration_methode : entete_methode {isInProc = 1; } instruction_composee 
                    | entete_methode {isInProc = 1; } liste_declarations instruction_composee
                    | entete_methode {printf("this");}
                        ;
entete_methode : procedure_keyword
						  identifier
						  {
                            if( lookupNode(nom, table) ){
                                yyerror("Procedure already defined");
                            }else{
                                nodeProc = createNode(nom, NODE_TYPE_UNKNOWN, procedure, NULL);
                                table = insertNode(nodeProc, table);
                            }
                            isProcParameters = 1;
                        }

						  arguments

						{
						    nodeProc->nbParam = nbParams;
							nbParams = 0;
						}
                        point_virgule



						| procedure_keyword identifier
						 {
                            if( lookupNode(nom, table) ){
                                yyerror("Procedure already defined");
                            }else{
                                nodeProc = createNode(nom, NODE_TYPE_UNKNOWN, procedure, NULL);
                                table = insertNode(nodeProc, table);
                            }
                            //isProcParameters = 1;
                        }
                        point_virgule

                | error identifier {yyerror (" mot clé procedure attendu on line : "); } 
                | error identifier arguments {yyerror (" mot clé procedure attendu on line : "); } 
                | procedure_keyword error {yyerror (" identifier attendu on line : "); } 
                | procedure_keyword error arguments {yyerror (" identifier attendu on line : "); } 
                ;
arguments : parenthese_ouvrante liste_parametres 						
                        {
							 isProcParameters = 0;
						}  parenthese_fermante
            | parenthese_ouvrante parenthese_fermante
            | error liste_parametres parenthese_fermante {yyerror (" parenthese ouvrante attendue on line : "); } 
            | parenthese_ouvrante liste_parametres error {yyerror (" parenthese fermante attendue on line : "); } 
                ;
liste_parametres : declaration_corps 
                    | declaration_corps point_virgule liste_parametres
                    | declaration_corps error liste_parametres {yyerror (" point virgule attendu on line : "); }
                        ;
instruction_composee : begin_keyword end_keyword {endProc(yylineno);}
                        | begin_keyword liste_instructions end_keyword {endProc(yylineno);}
                        | error liste_instructions end_keyword {yyerror (" mot cle begin attendu on line : "); }
                        | begin_keyword liste_instructions error {yyerror (" mot cle end attendu on line : "); }

                        ;
liste_instructions :  instruction point_virgule
                    | instruction point_virgule liste_instructions
                    | bloc 
                    | bloc liste_instructions
                    | instruction error liste_instructions {yyerror (" point virgule attendu on line : "); }
                        ;


bloc : instruction_composee 
            | if_keyword expression then_keyword liste_instructions else_keyword liste_instructions endif_keyword 
            | error expression then_keyword liste_instructions else_keyword liste_instructions endif_keyword  {yyerror (" mot cle if attendu on line : "); }
            | if_keyword expression error liste_instructions else_keyword liste_instructions endif_keyword  {yyerror (" mot cle then attendu on line : "); }
            | if_keyword expression then_keyword liste_instructions error liste_instructions endif_keyword  {yyerror (" mot cle else attendu on line : "); }
            | if_keyword expression then_keyword liste_instructions else_keyword liste_instructions error  {yyerror (" endif attendu on line : "); }
            | while_keyword expression do_keyword liste_instructions 
            | error expression do_keyword liste_instructions {yyerror (" mot cle while attendu on line : "); }
            | while_keyword expression error liste_instructions {yyerror (" mot cle do attendu on line : "); }
            | while_keyword expression do_keyword liste_instructions error {yyerror (" point virgule attendu on line : "); }

instruction : 
            appel_methode  

            |lvalue OP_AFFECT expression
            | lvalue error expression {yyerror (" operateur d'affectation attendu on line : "); }

            
            | write_keyword parenthese_ouvrante parenthese_fermante 
            | write_keyword parenthese_ouvrante liste_expressions parenthese_fermante {
							nbParams = 0;
						}
            | read_keyword parenthese_ouvrante liste_identifiers parenthese_fermante {
							nbParams = 0;
						}

            | error parenthese_ouvrante parenthese_fermante {yyerror (" mot cle write attendu on line : "); }
            | write_keyword error parenthese_fermante {yyerror (" ( attendu on line : "); }
            | write_keyword parenthese_ouvrante error {yyerror (" ) attendu on line : "); }

            | error parenthese_ouvrante liste_expressions parenthese_fermante {yyerror (" mot cle write attendu on line : "); }
            | write_keyword error liste_expressions parenthese_fermante {yyerror (" ( attendu on line : "); }
            | write_keyword parenthese_ouvrante liste_expressions error  {yyerror (" ) attendu on line : "); }

            | error parenthese_ouvrante liste_identifiers parenthese_fermante {yyerror (" mot cle read attendu on line : "); }
            | read_keyword error liste_identifiers parenthese_fermante {yyerror (" ( attendu on line : "); }
            | read_keyword parenthese_ouvrante liste_identifiers error {yyerror (" ) attendu on line : "); }
                ;


lvalue : identifier {
						    checkIDOnInit(nom, yylineno);
					}
        | identifier {
						    checkIDOnInit(nom, yylineno);
					} 
                    crochet_ouvrant expression crochet_fermant
        | error crochet_ouvrant expression crochet_fermant {yyerror (" identifiant attendu on line : "); }
        | identifier error expression crochet_fermant {yyerror (" [ attendu on line : "); }
        | identifier crochet_ouvrant expression error {yyerror ("] attendu on line : "); }
;
appel_methode : identifier
                        {
                            node = lookupNode(nom,table);
                        }
                          parenthese_ouvrante parenthese_fermante
                        {
                            nbParams = 0;
                            if ( node->nbParam != nbParams)
                                yyerror("invalid number of parameters ");
                            nbParams = 0;
                        } {printf("appel methode sans param\n");}
						| 
                        identifier
						{
							node = lookupNode(nom,table);
						}
						  parenthese_ouvrante liste_expressions parenthese_fermante
						{
							if ( node->nbParam != nbParams)
								yyerror("invalid number of parameters ");
							nbParams = 0;
						} {printf("appel methode avec param");}
						| identifier parenthese_ouvrante error parenthese_fermante {yyerror("probleme appel methode\n");}
						;
;
liste_expressions : expression
                    	{
							nbParams ++;
						}  virgule liste_expressions
                    |
                        expression  						
                        {
							nbParams ++;
						} 
                    
                    | expression error liste_expressions {yyerror (" virgule attendu on line : "); }
;
expression : facteur 
            | facteur OP_ADDITION facteur
            | facteur OP_SOUSTRACTION facteur
            | facteur OP_MULTIPLICATION facteur
            | facteur OP_DIVISION facteur

            | error OP_ADDITION facteur {yyerror (" facteur attendu on line : "); }
            | facteur OP_ADDITION error {yyerror (" facteur attendu on line : "); }
            | facteur OP_SOUSTRACTION error {yyerror (" facteur attendu on line : "); }
            | error OP_SOUSTRACTION facteur {yyerror (" facteur attendu on line : "); }
            | error OP_MULTIPLICATION facteur {yyerror (" facteur attendu on line : "); }
            | facteur OP_MULTIPLICATION error {yyerror (" facteur attendu on line : "); }
            | error OP_DIVISION facteur {yyerror (" facteur attendu on line : "); }
            | facteur OP_DIVISION error {yyerror (" facteur attendu on line : "); }
            | facteur error facteur {yyerror (" operateur attendu on line : "); }
;
facteur : UNSIGNED_ENTIER | Number | identifier 
						{
						    checkID(nom, yylineno);
						}
        | identifier 	{
						    checkID(nom, yylineno);
						}
                         crochet_ouvrant expression crochet_fermant
        | identifier error expression crochet_fermant  {yyerror (" crochet ouvrant attendu on line : "); }
        | identifier crochet_ouvrant expression error {yyerror (" crochet fermant attendu on line : "); }
        | parenthese_ouvrante expression parenthese_fermante 
        | error expression parenthese_fermante {yyerror (" parenthese ouvrante attendue on line : "); }
        | parenthese_ouvrante expression error {yyerror (" parenthese fermante attendue on line : "); }
;
%% 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;
void Begin()
{
	table = NULL;
	tableLocale = NULL;

	currentTyoe = NODE_TYPE_UNKNOWN;

	wIndex = 0;
	nbParams = 0;

	isInProc = 0 ;
    isProcParameters = 0 ;
}

void End()
{
	destroySymbolsTable(table);
}

main()
{
    Begin();
    yyparse();
    End();
 
 
}
yywrap()
{
	return(1);
}
  
                   
