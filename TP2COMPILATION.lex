%{	
 
#include <stdio.h>	
#include <stdlib.h>	          
#include <string.h>
#include <math.h>	
#include "TP2COMPILATION.tab.h"	

extern char nom[];


%}



%option yylineno
pointvirgule ";"
delim     [ \t]
bl        {delim}+
chiffre   [0-9]
lettre    [a-zA-Z]
id        {lettre}({lettre}|{chiffre})*
nb        ("-")?{chiffre}+("."{chiffre}+)?(("E"|"e")"-"?{chiffre}+)?
integer   "integer"|"int"
iderrone  {chiffre}({lettre}|{chiffre})*
ouvrante  (\()
fermante  (\))
COMMENT_LINE        "//"(.*?)
multiline_comment "/*"([^*]|\*+[^*/])*\*+"/"
unended_comment "/*"[^*/;]+
unsigned_entier {chiffre}+
entier ("-")?{chiffre}+
single_quote_string \'([^'\n]|\'\')+\'
double_quote_string \"([^"\n]|\"\")+\"
bad_sq_string        \'([^'\n]|\'\')+
bad_dq_string        \"([^"\n]|\"\")+


%%
{bl}                                       /* pas d'actions */
"\n" 			                   /* same */
{unsigned_entier}                         return UNSIGNED_ENTIER ;
{integer}                              return integer_type;
"char"                                  return char_type;
"real"                                  return real_type;
"endif"                                 return endif_keyword ;
"of"                                     return of_keyword; 
"array"                                    return array_keyword ;
"program"                                  return program_keyword ;
"begin"                                    return begin_keyword ;
"end"                                      return end_keyword ;
"while"                                    return while_keyword;
"do"                                       return do_keyword;
"procedure"                                return procedure_keyword ;
"function"                                return function_keyword ;
"var"                                     return var_keyword ;
"if"                                     return if_keyword ;
"then"                                     return then_keyword ;
"else"                                     return else_keyword ;
"write"                                     return write_keyword ;
"read"                                     return read_keyword ;
","                                        return virgule ;
":"                                        return deux_points ;
":="                                       return OP_AFFECT ;
{ouvrante}                                 return parenthese_ouvrante ;
{fermante}                                 return parenthese_fermante ;
{nb}                                       return Number ;
"="	                                   return OP_AFFECT ;
"*"                                        return OP_MULTIPLICATION ;
"/"                                        return OP_DIVISION ;
"+"                                        return OP_ADDITION ;
"-"                                        return OP_SOUSTRACTION ;
{COMMENT_LINE}         						/* do nothing */

{iderrone}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
{pointvirgule}         return point_virgule ;
{multiline_comment}    /* do nothing */
"["                    return crochet_ouvrant ;
"]"                    return crochet_fermant ;
".."                   return DEUX_POINTS_HORIZ;
{unended_comment}          {fprintf(stderr,"unfinished comment' on line :%d\n",yylineno); yyterminate();} 
{single_quote_string}                    return single_quote_string ;
{double_quote_string}                    return double_quote_string ;  
{bad_dq_string}                          {fprintf(stderr,"unclosed double quote string \'%s\' on line :%d\n",yytext,yylineno);} 
{bad_sq_string}                          {fprintf(stderr,"unclosed single quote string \'%s\' on line :%d\n",yytext,yylineno);}
{id}                                     { strcpy(nom, yytext);  return identifier ;}
%%
