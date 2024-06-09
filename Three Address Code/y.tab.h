/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    BOOLEAN_CONST = 259,           /* BOOLEAN_CONST  */
    INT_CONST = 260,               /* INT_CONST  */
    REAL_CONST = 261,              /* REAL_CONST  */
    CHAR_CONST = 262,              /* CHAR_CONST  */
    STRING = 263,                  /* STRING  */
    PROGRAM = 264,                 /* PROGRAM  */
    INT = 265,                     /* INT  */
    REAL = 266,                    /* REAL  */
    BOOLEAN = 267,                 /* BOOLEAN  */
    CHAR = 268,                    /* CHAR  */
    VAR = 269,                     /* VAR  */
    TYPE = 270,                    /* TYPE  */
    IF = 271,                      /* IF  */
    THEN = 272,                    /* THEN  */
    ELSE = 273,                    /* ELSE  */
    FOR = 274,                     /* FOR  */
    DO = 275,                      /* DO  */
    WHILE = 276,                   /* WHILE  */
    ARRAY = 277,                   /* ARRAY  */
    TO = 278,                      /* TO  */
    DOWNTO = 279,                  /* DOWNTO  */
    OF = 280,                      /* OF  */
    START = 281,                   /* START  */
    END = 282,                     /* END  */
    READ = 283,                    /* READ  */
    WRITE = 284,                   /* WRITE  */
    PLUS = 285,                    /* PLUS  */
    MINUS = 286,                   /* MINUS  */
    MUL = 287,                     /* MUL  */
    DIV = 288,                     /* DIV  */
    MOD = 289,                     /* MOD  */
    GTR = 290,                     /* GTR  */
    LESS = 291,                    /* LESS  */
    GTR_EQ = 292,                  /* GTR_EQ  */
    LESS_EQ = 293,                 /* LESS_EQ  */
    EQ = 294,                      /* EQ  */
    NOT_EQ = 295,                  /* NOT_EQ  */
    AND = 296,                     /* AND  */
    OR = 297,                      /* OR  */
    NOT = 298,                     /* NOT  */
    ASS = 299,                     /* ASS  */
    SEMICOLON = 300,               /* SEMICOLON  */
    COMMA = 301,                   /* COMMA  */
    COLON = 302,                   /* COLON  */
    LPAREN = 303,                  /* LPAREN  */
    RPAREN = 304,                  /* RPAREN  */
    LBRACE = 305,                  /* LBRACE  */
    RBRACE = 306,                  /* RBRACE  */
    LBRACKET = 307,                /* LBRACKET  */
    RBRACKET = 308,                /* RBRACKET  */
    SQT = 309,                     /* SQT  */
    DQT = 310,                     /* DQT  */
    DOT = 311,                     /* DOT  */
    NEWLINE = 312,                 /* NEWLINE  */
    UNK = 313,                     /* UNK  */
    END_OF_FILE = 314              /* END_OF_FILE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define BOOLEAN_CONST 259
#define INT_CONST 260
#define REAL_CONST 261
#define CHAR_CONST 262
#define STRING 263
#define PROGRAM 264
#define INT 265
#define REAL 266
#define BOOLEAN 267
#define CHAR 268
#define VAR 269
#define TYPE 270
#define IF 271
#define THEN 272
#define ELSE 273
#define FOR 274
#define DO 275
#define WHILE 276
#define ARRAY 277
#define TO 278
#define DOWNTO 279
#define OF 280
#define START 281
#define END 282
#define READ 283
#define WRITE 284
#define PLUS 285
#define MINUS 286
#define MUL 287
#define DIV 288
#define MOD 289
#define GTR 290
#define LESS 291
#define GTR_EQ 292
#define LESS_EQ 293
#define EQ 294
#define NOT_EQ 295
#define AND 296
#define OR 297
#define NOT 298
#define ASS 299
#define SEMICOLON 300
#define COMMA 301
#define COLON 302
#define LPAREN 303
#define RPAREN 304
#define LBRACE 305
#define RBRACE 306
#define LBRACKET 307
#define RBRACKET 308
#define SQT 309
#define DQT 310
#define DOT 311
#define NEWLINE 312
#define UNK 313
#define END_OF_FILE 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "AMMTV007.y"

    char *lexeme;

#line 189 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
