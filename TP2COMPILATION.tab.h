
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     integer_type = 258,
     char_type = 259,
     real_type = 260,
     UNSIGNED_ENTIER = 261,
     while_keyword = 262,
     do_keyword = 263,
     of_keyword = 264,
     array_keyword = 265,
     endif_keyword = 266,
     program_keyword = 267,
     begin_keyword = 268,
     end_keyword = 269,
     procedure_keyword = 270,
     function_keyword = 271,
     var_keyword = 272,
     if_keyword = 273,
     then_keyword = 274,
     else_keyword = 275,
     write_keyword = 276,
     read_keyword = 277,
     virgule = 278,
     deux_points = 279,
     OP_AFFECT = 280,
     parenthese_ouvrante = 281,
     parenthese_fermante = 282,
     Number = 283,
     OP_MULTIPLICATION = 284,
     OP_DIVISION = 285,
     OP_ADDITION = 286,
     OP_SOUSTRACTION = 287,
     COMMENT_LINE = 288,
     point_virgule = 289,
     MULTILINE_COMMENT = 290,
     crochet_fermant = 291,
     crochet_ouvrant = 292,
     DEUX_POINTS_HORIZ = 293,
     single_quote_string = 294,
     double_quote_string = 295,
     identifier = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


