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
    ARR = 264,                     /* ARR  */
    TO = 265,                      /* TO  */
    DOWNTO = 266,                  /* DOWNTO  */
    PROGRAM = 267,                 /* PROGRAM  */
    INT = 268,                     /* INT  */
    REAL = 269,                    /* REAL  */
    BOOLEAN = 270,                 /* BOOLEAN  */
    CHAR = 271,                    /* CHAR  */
    VAR = 272,                     /* VAR  */
    TYPE = 273,                    /* TYPE  */
    IF = 274,                      /* IF  */
    THEN = 275,                    /* THEN  */
    ELSE = 276,                    /* ELSE  */
    FOR = 277,                     /* FOR  */
    DO = 278,                      /* DO  */
    WHILE = 279,                   /* WHILE  */
    ARRAY = 280,                   /* ARRAY  */
    OF = 281,                      /* OF  */
    START = 282,                   /* START  */
    END = 283,                     /* END  */
    READ = 284,                    /* READ  */
    WRITE = 285,                   /* WRITE  */
    PLUS = 286,                    /* PLUS  */
    MINUS = 287,                   /* MINUS  */
    MUL = 288,                     /* MUL  */
    DIV = 289,                     /* DIV  */
    MOD = 290,                     /* MOD  */
    GTR = 291,                     /* GTR  */
    LESS = 292,                    /* LESS  */
    GTR_EQ = 293,                  /* GTR_EQ  */
    LESS_EQ = 294,                 /* LESS_EQ  */
    EQ = 295,                      /* EQ  */
    NOT_EQ = 296,                  /* NOT_EQ  */
    AND = 297,                     /* AND  */
    OR = 298,                      /* OR  */
    NOT = 299,                     /* NOT  */
    ASS = 300,                     /* ASS  */
    SEMICOLON = 301,               /* SEMICOLON  */
    COMMA = 302,                   /* COMMA  */
    COLON = 303,                   /* COLON  */
    LPAREN = 304,                  /* LPAREN  */
    RPAREN = 305,                  /* RPAREN  */
    LBRACE = 306,                  /* LBRACE  */
    RBRACE = 307,                  /* RBRACE  */
    LBRACKET = 308,                /* LBRACKET  */
    RBRACKET = 309,                /* RBRACKET  */
    SQT = 310,                     /* SQT  */
    DQT = 311,                     /* DQT  */
    DOT = 312,                     /* DOT  */
    NEWLINE = 313,                 /* NEWLINE  */
    UNK = 314,                     /* UNK  */
    END_OF_FILE = 315,             /* END_OF_FILE  */
    PROG = 316,                    /* PROG  */
    NUL = 317                      /* NUL  */
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
#define ARR 264
#define TO 265
#define DOWNTO 266
#define PROGRAM 267
#define INT 268
#define REAL 269
#define BOOLEAN 270
#define CHAR 271
#define VAR 272
#define TYPE 273
#define IF 274
#define THEN 275
#define ELSE 276
#define FOR 277
#define DO 278
#define WHILE 279
#define ARRAY 280
#define OF 281
#define START 282
#define END 283
#define READ 284
#define WRITE 285
#define PLUS 286
#define MINUS 287
#define MUL 288
#define DIV 289
#define MOD 290
#define GTR 291
#define LESS 292
#define GTR_EQ 293
#define LESS_EQ 294
#define EQ 295
#define NOT_EQ 296
#define AND 297
#define OR 298
#define NOT 299
#define ASS 300
#define SEMICOLON 301
#define COMMA 302
#define COLON 303
#define LPAREN 304
#define RPAREN 305
#define LBRACE 306
#define RBRACE 307
#define LBRACKET 308
#define RBRACKET 309
#define SQT 310
#define DQT 311
#define DOT 312
#define NEWLINE 313
#define UNK 314
#define END_OF_FILE 315
#define PROG 316
#define NUL 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "AMMTV007.y"

    int ival;
    nodeType *nPtr;
    char string[100];

#line 197 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
