/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "AMMTV007.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include<ctype.h>
    #include<limits.h>
    #include "graph.c"
    extern FILE *yyin;
    
    int yylex();
    int ex (nodeType *p, int flag);
    /* function prototype to create a node for an operation */ 
    nodeType *opr(int oper, int nops, ...);
    /* function prototype to create a node for an identifier */
    nodeType *id(char *identifier);
    /* function prototype to create a node for a constat */
    nodeType *con(char *value, char *type);
    
    int decCounter = 0;

#line 93 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    FUNC = 316,                    /* FUNC  */
    GLOBAL = 317,                  /* GLOBAL  */
    NUL = 318                      /* NUL  */
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
#define FUNC 316
#define GLOBAL 317
#define NUL 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "AMMTV007.y"

    int ival;
    nodeType *nPtr;
    char string[100];

#line 278 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_BOOLEAN_CONST = 4,              /* BOOLEAN_CONST  */
  YYSYMBOL_INT_CONST = 5,                  /* INT_CONST  */
  YYSYMBOL_REAL_CONST = 6,                 /* REAL_CONST  */
  YYSYMBOL_CHAR_CONST = 7,                 /* CHAR_CONST  */
  YYSYMBOL_STRING = 8,                     /* STRING  */
  YYSYMBOL_ARR = 9,                        /* ARR  */
  YYSYMBOL_TO = 10,                        /* TO  */
  YYSYMBOL_DOWNTO = 11,                    /* DOWNTO  */
  YYSYMBOL_PROGRAM = 12,                   /* PROGRAM  */
  YYSYMBOL_INT = 13,                       /* INT  */
  YYSYMBOL_REAL = 14,                      /* REAL  */
  YYSYMBOL_BOOLEAN = 15,                   /* BOOLEAN  */
  YYSYMBOL_CHAR = 16,                      /* CHAR  */
  YYSYMBOL_VAR = 17,                       /* VAR  */
  YYSYMBOL_TYPE = 18,                      /* TYPE  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_THEN = 20,                      /* THEN  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_DO = 23,                        /* DO  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_ARRAY = 25,                     /* ARRAY  */
  YYSYMBOL_OF = 26,                        /* OF  */
  YYSYMBOL_START = 27,                     /* START  */
  YYSYMBOL_END = 28,                       /* END  */
  YYSYMBOL_READ = 29,                      /* READ  */
  YYSYMBOL_WRITE = 30,                     /* WRITE  */
  YYSYMBOL_PLUS = 31,                      /* PLUS  */
  YYSYMBOL_MINUS = 32,                     /* MINUS  */
  YYSYMBOL_MUL = 33,                       /* MUL  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_MOD = 35,                       /* MOD  */
  YYSYMBOL_GTR = 36,                       /* GTR  */
  YYSYMBOL_LESS = 37,                      /* LESS  */
  YYSYMBOL_GTR_EQ = 38,                    /* GTR_EQ  */
  YYSYMBOL_LESS_EQ = 39,                   /* LESS_EQ  */
  YYSYMBOL_EQ = 40,                        /* EQ  */
  YYSYMBOL_NOT_EQ = 41,                    /* NOT_EQ  */
  YYSYMBOL_AND = 42,                       /* AND  */
  YYSYMBOL_OR = 43,                        /* OR  */
  YYSYMBOL_NOT = 44,                       /* NOT  */
  YYSYMBOL_ASS = 45,                       /* ASS  */
  YYSYMBOL_SEMICOLON = 46,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 47,                     /* COMMA  */
  YYSYMBOL_COLON = 48,                     /* COLON  */
  YYSYMBOL_LPAREN = 49,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 50,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 51,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 52,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 53,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 54,                  /* RBRACKET  */
  YYSYMBOL_SQT = 55,                       /* SQT  */
  YYSYMBOL_DQT = 56,                       /* DQT  */
  YYSYMBOL_DOT = 57,                       /* DOT  */
  YYSYMBOL_NEWLINE = 58,                   /* NEWLINE  */
  YYSYMBOL_UNK = 59,                       /* UNK  */
  YYSYMBOL_END_OF_FILE = 60,               /* END_OF_FILE  */
  YYSYMBOL_FUNC = 61,                      /* FUNC  */
  YYSYMBOL_GLOBAL = 62,                    /* GLOBAL  */
  YYSYMBOL_NUL = 63,                       /* NUL  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_S = 65,                         /* S  */
  YYSYMBOL_TEMP = 66,                      /* TEMP  */
  YYSYMBOL_BLOCK = 67,                     /* BLOCK  */
  YYSYMBOL_VAR_DECL = 68,                  /* VAR_DECL  */
  YYSYMBOL_VAR_DECL_LIST = 69,             /* VAR_DECL_LIST  */
  YYSYMBOL_VAR_DECL_ITEM = 70,             /* VAR_DECL_ITEM  */
  YYSYMBOL_IDENTIFIER_LIST = 71,           /* IDENTIFIER_LIST  */
  YYSYMBOL_TYPE_SPECIFIER = 72,            /* TYPE_SPECIFIER  */
  YYSYMBOL_STMT_LIST = 73,                 /* STMT_LIST  */
  YYSYMBOL_SMP_STMT_LIST = 74,             /* SMP_STMT_LIST  */
  YYSYMBOL_STMT = 75,                      /* STMT  */
  YYSYMBOL_SMP_STMT = 76,                  /* SMP_STMT  */
  YYSYMBOL_ASSIGNMENT_STMT = 77,           /* ASSIGNMENT_STMT  */
  YYSYMBOL_READ_STMT = 78,                 /* READ_STMT  */
  YYSYMBOL_READ_LIST = 79,                 /* READ_LIST  */
  YYSYMBOL_WRITE_STMT = 80,                /* WRITE_STMT  */
  YYSYMBOL_VAR_LIST = 81,                  /* VAR_LIST  */
  YYSYMBOL_IF_STMT = 82,                   /* IF_STMT  */
  YYSYMBOL_WHILE_STMT = 83,                /* WHILE_STMT  */
  YYSYMBOL_FOR_STMT = 84,                  /* FOR_STMT  */
  YYSYMBOL_EXPR = 85,                      /* EXPR  */
  YYSYMBOL_ARITHMETIC = 86,                /* ARITHMETIC  */
  YYSYMBOL_TERM = 87,                      /* TERM  */
  YYSYMBOL_FACTOR = 88,                    /* FACTOR  */
  YYSYMBOL_ARR_ACCESS = 89,                /* ARR_ACCESS  */
  YYSYMBOL_CONST = 90                      /* CONST  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    40,    40,    43,    45,    48,    52,    53,    56,    59,
      64,    70,    78,    79,    80,    81,    84,    85,    88,    89,
      92,    93,    94,    97,    98,    99,   100,   103,   104,   107,
     110,   111,   112,   113,   116,   117,   118,   121,   122,   125,
     126,   130,   133,   134,   137,   138,   139,   140,   141,   142,
     143,   146,   147,   148,   149,   152,   153,   154,   155,   156,
     159,   160,   161,   162,   163,   166,   168,   169,   170,   171
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "BOOLEAN_CONST", "INT_CONST", "REAL_CONST", "CHAR_CONST", "STRING",
  "ARR", "TO", "DOWNTO", "PROGRAM", "INT", "REAL", "BOOLEAN", "CHAR",
  "VAR", "TYPE", "IF", "THEN", "ELSE", "FOR", "DO", "WHILE", "ARRAY", "OF",
  "START", "END", "READ", "WRITE", "PLUS", "MINUS", "MUL", "DIV", "MOD",
  "GTR", "LESS", "GTR_EQ", "LESS_EQ", "EQ", "NOT_EQ", "AND", "OR", "NOT",
  "ASS", "SEMICOLON", "COMMA", "COLON", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "LBRACKET", "RBRACKET", "SQT", "DQT", "DOT", "NEWLINE", "UNK",
  "END_OF_FILE", "FUNC", "GLOBAL", "NUL", "$accept", "S", "TEMP", "BLOCK",
  "VAR_DECL", "VAR_DECL_LIST", "VAR_DECL_ITEM", "IDENTIFIER_LIST",
  "TYPE_SPECIFIER", "STMT_LIST", "SMP_STMT_LIST", "STMT", "SMP_STMT",
  "ASSIGNMENT_STMT", "READ_STMT", "READ_LIST", "WRITE_STMT", "VAR_LIST",
  "IF_STMT", "WHILE_STMT", "FOR_STMT", "EXPR", "ARITHMETIC", "TERM",
  "FACTOR", "ARR_ACCESS", "CONST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-91)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,    44,    48,    25,   -91,    55,    71,    32,   -91,    69,
     -91,    71,    53,    -7,   -91,    51,    70,   -91,    87,     4,
     -18,     9,   131,     9,    86,    89,   111,    94,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,    96,   -91,     9,     9,   122,   -91,   -91,   -91,   -91,
       9,     9,    68,    19,    59,   -91,   -91,   -91,   138,    74,
     181,     0,   -91,    51,   136,   132,    46,     9,   -91,   126,
     158,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,   159,   134,   -39,   180,   -22,
     132,   -91,   133,   144,    82,   -91,     7,    19,    19,    19,
      19,    19,    19,    59,    59,    59,   -91,   -91,   -91,   -91,
      28,     7,     9,   188,   -91,   137,     9,   -91,   135,     9,
     -91,   166,   149,     9,     9,   168,    88,   145,    -5,   132,
     192,   132,   178,     7,   107,   114,   -91,   -91,     9,     9,
     -91,   146,   174,   -91,   175,   176,   120,     5,   179,     7,
       7,     7,   -91,   -91,    63,   182,   183,   184,   -91,   -91,
     -91,   -91
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     3,     0,
      10,     5,     0,     0,     2,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    20,    21,     6,    11,    12,    13,    14,
      15,     0,     8,     0,     0,    62,    69,    66,    67,    68,
       0,     0,     0,    50,    54,    59,    64,    63,     0,     0,
       0,     0,     4,    17,     0,    27,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
      38,    16,     0,     0,     0,    60,     0,    44,    45,    46,
      47,    49,    48,    51,    52,    53,    55,    56,    57,    58,
       0,     0,     0,     0,    29,     0,     0,    36,     0,     0,
      65,     0,     0,     0,     0,     0,     0,    32,     0,    37,
       0,    28,    40,    19,     0,     0,    41,    31,     0,     0,
      34,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    35,     0,     0,     0,     0,     9,    39,
      42,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   -91,   -91,   -91,   -91,   193,   -91,    52,   150,
     -90,   -91,    -6,   -91,   -91,   -91,   -91,    75,   -91,   -91,
     -91,   -21,   106,    54,   -49,   -91,   -91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     7,     8,     9,    11,    12,    13,    42,    26,
     121,    27,   122,    29,    30,    87,    31,    89,    32,    33,
      34,    90,    53,    54,    55,    56,    57
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      52,    68,    59,    45,    46,    47,    48,    49,   113,    28,
      20,   114,    45,    46,    47,    48,    49,    37,    38,    39,
      40,   125,    65,    66,     1,   116,    21,    43,   117,    41,
      69,   106,   107,   108,   109,    44,    24,    25,   123,   124,
      18,    19,   139,   143,    50,   140,    94,     3,     4,    51,
      77,    78,   116,    50,    20,   153,    88,    28,    51,   155,
     156,   157,    79,   110,    71,    72,    73,    74,    75,    76,
      21,     5,     6,    22,    10,    23,    37,    38,    39,    40,
      24,    25,    71,    72,    73,    74,    75,    76,    70,    14,
      36,   126,    80,    81,    82,   129,    15,    85,   131,    17,
      93,    83,   134,   135,    71,    72,    73,    74,    75,    76,
      71,    72,    73,    74,    75,    76,    35,   146,    71,    72,
      73,    74,    75,    76,    71,    72,    73,    74,    75,    76,
     144,   103,   104,   105,    58,    60,   120,   145,    61,    62,
      63,    92,   137,    71,    72,    73,    74,    75,    76,    64,
      71,    72,    73,    74,    75,    76,    71,    72,    73,    74,
      75,    76,    71,    72,    73,    74,    75,    76,    71,    72,
      73,    74,    75,    76,   152,    67,    95,    97,    98,    99,
     100,   101,   102,    84,    86,    96,   111,   112,   115,   119,
     118,   127,   130,   128,   132,   133,   136,   141,   138,   142,
     148,   149,   150,   151,    16,   154,   158,     0,     0,     0,
     159,   160,   161,    91,   147
};

static const yytype_int16 yycheck[] =
{
      21,    50,    23,     3,     4,     5,     6,     7,    47,    15,
       3,    50,     3,     4,     5,     6,     7,    13,    14,    15,
      16,   111,    43,    44,    12,    47,    19,    45,    50,    25,
      51,    80,    81,    82,    83,    53,    29,    30,    10,    11,
      47,    48,    47,   133,    44,    50,    67,     3,     0,    49,
      31,    32,    47,    44,     3,    50,    56,    63,    49,   149,
     150,   151,    43,    84,    36,    37,    38,    39,    40,    41,
      19,    46,    17,    22,     3,    24,    13,    14,    15,    16,
      29,    30,    36,    37,    38,    39,    40,    41,    20,    57,
       3,   112,    33,    34,    35,   116,    27,    23,   119,    46,
      54,    42,   123,   124,    36,    37,    38,    39,    40,    41,
      36,    37,    38,    39,    40,    41,    46,   138,    36,    37,
      38,    39,    40,    41,    36,    37,    38,    39,    40,    41,
      23,    77,    78,    79,     3,    49,    54,    23,    49,    28,
      46,     5,    54,    36,    37,    38,    39,    40,    41,    53,
      36,    37,    38,    39,    40,    41,    36,    37,    38,    39,
      40,    41,    36,    37,    38,    39,    40,    41,    36,    37,
      38,    39,    40,    41,    54,    53,    50,    71,    72,    73,
      74,    75,    76,    45,     3,    27,    27,    53,     8,    45,
      57,     3,    57,    56,    28,    46,    28,     5,    53,    21,
      54,    27,    27,    27,    11,    26,   154,    -1,    -1,    -1,
      28,    28,    28,    63,   139
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    65,     3,     0,    46,    17,    66,    67,    68,
       3,    69,    70,    71,    57,    27,    70,    46,    47,    48,
       3,    19,    22,    24,    29,    30,    73,    75,    76,    77,
      78,    80,    82,    83,    84,    46,     3,    13,    14,    15,
      16,    25,    72,    45,    53,     3,     4,     5,     6,     7,
      44,    49,    85,    86,    87,    88,    89,    90,     3,    85,
      49,    49,    28,    46,    53,    85,    85,    53,    88,    85,
      20,    36,    37,    38,    39,    40,    41,    31,    32,    43,
      33,    34,    35,    42,    45,    23,     3,    79,    56,    81,
      85,    73,     5,    54,    85,    50,    27,    86,    86,    86,
      86,    86,    86,    87,    87,    87,    88,    88,    88,    88,
      85,    27,    53,    47,    50,     8,    47,    50,    57,    45,
      54,    74,    76,    10,    11,    74,    85,     3,    56,    85,
      57,    85,    28,    46,    85,    85,    28,    54,    53,    47,
      50,     5,    21,    74,    23,    23,    85,    81,    54,    27,
      27,    27,    54,    50,    26,    74,    74,    74,    72,    28,
      28,    28
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    66,    67,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    72,    73,    73,    74,    74,
      75,    75,    75,    76,    76,    76,    76,    77,    77,    78,
      79,    79,    79,    79,    80,    80,    80,    81,    81,    82,
      82,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    86,    87,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    89,    90,    90,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     1,     4,     2,     3,     2,     3,    11,
       1,     3,     1,     1,     1,     1,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     6,     4,
       1,     4,     3,     6,     6,     8,     4,     3,     1,    10,
       6,     6,    10,    10,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     2,     1,     1,     1,     4,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* S: PROGRAM IDENTIFIER SEMICOLON TEMP DOT  */
#line 40 "AMMTV007.y"
                                          {ex((yyvsp[-1].nPtr), 0);}
#line 1463 "y.tab.c"
    break;

  case 3: /* TEMP: BLOCK  */
#line 43 "AMMTV007.y"
             {(yyval.nPtr) = opr(GLOBAL, 2, (yyvsp[0].nPtr), opr(NUL, 0));}
#line 1469 "y.tab.c"
    break;

  case 4: /* BLOCK: VAR_DECL START STMT_LIST END  */
#line 45 "AMMTV007.y"
                                     {(yyval.nPtr) = opr(FUNC, 2, (yyvsp[-3].nPtr), (yyvsp[-1].nPtr));}
#line 1475 "y.tab.c"
    break;

  case 5: /* VAR_DECL: VAR VAR_DECL_LIST  */
#line 48 "AMMTV007.y"
                             {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1481 "y.tab.c"
    break;

  case 6: /* VAR_DECL_LIST: VAR_DECL_LIST VAR_DECL_ITEM SEMICOLON  */
#line 52 "AMMTV007.y"
                                                      {(yyval.nPtr) = opr(SEMICOLON, 2, (yyvsp[-1].nPtr), (yyvsp[-2].nPtr));}
#line 1487 "y.tab.c"
    break;

  case 7: /* VAR_DECL_LIST: VAR_DECL_ITEM SEMICOLON  */
#line 53 "AMMTV007.y"
                                        {(yyval.nPtr) = opr(SEMICOLON, 2, (yyvsp[-1].nPtr), opr(NUL,0));}
#line 1493 "y.tab.c"
    break;

  case 8: /* VAR_DECL_ITEM: IDENTIFIER_LIST COLON TYPE_SPECIFIER  */
#line 56 "AMMTV007.y"
                                                     {(yyval.nPtr) = (yyvsp[-2].nPtr);
						      insertEntry((yyvsp[0].string));
						      }
#line 1501 "y.tab.c"
    break;

  case 9: /* VAR_DECL_ITEM: IDENTIFIER_LIST COLON ARRAY LBRACKET INT_CONST DOT DOT INT_CONST RBRACKET OF TYPE_SPECIFIER  */
#line 59 "AMMTV007.y"
                                                                                                            {(yyval.nPtr) = (yyvsp[-10].nPtr); insertEntryArr((yyvsp[0].string), (yyvsp[-6].string), (yyvsp[-3].string));}
#line 1507 "y.tab.c"
    break;

  case 10: /* IDENTIFIER_LIST: IDENTIFIER  */
#line 64 "AMMTV007.y"
                             {(yyval.nPtr) = id((yyvsp[0].string));
			      dec[decCounter] = *(struct dec*)malloc(sizeof(dec));
			      dec[decCounter].name = strdup((yyvsp[0].string)); 
			      dec[decCounter].val = INT_MIN; 
			      decCounter++;
			      }
#line 1518 "y.tab.c"
    break;

  case 11: /* IDENTIFIER_LIST: IDENTIFIER_LIST COMMA IDENTIFIER  */
#line 70 "AMMTV007.y"
                                                   {(yyval.nPtr) = opr(COMMA, 2, id((yyvsp[0].string)), (yyvsp[-2].nPtr));
                				    dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); 
						    dec[decCounter].name = strdup((yyvsp[0].string)); 
						    dec[decCounter].val = INT_MIN; 
						    decCounter++;
						    }
#line 1529 "y.tab.c"
    break;

  case 12: /* TYPE_SPECIFIER: INT  */
#line 78 "AMMTV007.y"
                     {strcpy((yyval.string), "int");}
#line 1535 "y.tab.c"
    break;

  case 13: /* TYPE_SPECIFIER: REAL  */
#line 79 "AMMTV007.y"
                      {strcpy((yyval.string), "real");}
#line 1541 "y.tab.c"
    break;

  case 14: /* TYPE_SPECIFIER: BOOLEAN  */
#line 80 "AMMTV007.y"
                         {strcpy((yyval.string), "boolean");}
#line 1547 "y.tab.c"
    break;

  case 15: /* TYPE_SPECIFIER: CHAR  */
#line 81 "AMMTV007.y"
                      {strcpy((yyval.string), "char");}
#line 1553 "y.tab.c"
    break;

  case 16: /* STMT_LIST: STMT SEMICOLON STMT_LIST  */
#line 84 "AMMTV007.y"
                                     {(yyval.nPtr) = opr(SEMICOLON, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1559 "y.tab.c"
    break;

  case 17: /* STMT_LIST: STMT SEMICOLON  */
#line 85 "AMMTV007.y"
                           {(yyval.nPtr) = opr(SEMICOLON, 2, (yyvsp[-1].nPtr), opr(NUL,0));}
#line 1565 "y.tab.c"
    break;

  case 18: /* SMP_STMT_LIST: SMP_STMT SEMICOLON SMP_STMT_LIST  */
#line 88 "AMMTV007.y"
                                                 {(yyval.nPtr) = opr(SEMICOLON, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1571 "y.tab.c"
    break;

  case 19: /* SMP_STMT_LIST: SMP_STMT SEMICOLON  */
#line 89 "AMMTV007.y"
                                   {(yyval.nPtr) = opr(SEMICOLON, 2, (yyvsp[-1].nPtr), opr(NUL,0));}
#line 1577 "y.tab.c"
    break;

  case 20: /* STMT: WHILE_STMT  */
#line 92 "AMMTV007.y"
                  {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1583 "y.tab.c"
    break;

  case 21: /* STMT: FOR_STMT  */
#line 93 "AMMTV007.y"
                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1589 "y.tab.c"
    break;

  case 22: /* STMT: SMP_STMT  */
#line 94 "AMMTV007.y"
                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1595 "y.tab.c"
    break;

  case 23: /* SMP_STMT: ASSIGNMENT_STMT  */
#line 97 "AMMTV007.y"
                           {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1601 "y.tab.c"
    break;

  case 24: /* SMP_STMT: READ_STMT  */
#line 98 "AMMTV007.y"
                     {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1607 "y.tab.c"
    break;

  case 25: /* SMP_STMT: WRITE_STMT  */
#line 99 "AMMTV007.y"
                      {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1613 "y.tab.c"
    break;

  case 26: /* SMP_STMT: IF_STMT  */
#line 100 "AMMTV007.y"
                   {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1619 "y.tab.c"
    break;

  case 27: /* ASSIGNMENT_STMT: IDENTIFIER ASS EXPR  */
#line 103 "AMMTV007.y"
                                      {(yyval.nPtr) = opr(ASS, 2, id((yyvsp[-2].string)), (yyvsp[0].nPtr));}
#line 1625 "y.tab.c"
    break;

  case 28: /* ASSIGNMENT_STMT: IDENTIFIER LBRACKET EXPR RBRACKET ASS EXPR  */
#line 104 "AMMTV007.y"
                                                             {(yyval.nPtr) = opr(ASS, 2, opr(ARR, 2, id((yyvsp[-5].string)), (yyvsp[-3].nPtr)), (yyvsp[0].nPtr));}
#line 1631 "y.tab.c"
    break;

  case 29: /* READ_STMT: READ LPAREN READ_LIST RPAREN  */
#line 107 "AMMTV007.y"
                                         {(yyval.nPtr) = opr(READ, 2, (yyvsp[-1].nPtr), opr(NUL,0));}
#line 1637 "y.tab.c"
    break;

  case 30: /* READ_LIST: IDENTIFIER  */
#line 110 "AMMTV007.y"
                       {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1643 "y.tab.c"
    break;

  case 31: /* READ_LIST: IDENTIFIER LBRACKET EXPR RBRACKET  */
#line 111 "AMMTV007.y"
                                              {(yyval.nPtr) = opr(ARR, 2, id((yyvsp[-3].string)), (yyvsp[-1].nPtr));}
#line 1649 "y.tab.c"
    break;

  case 32: /* READ_LIST: READ_LIST COMMA IDENTIFIER  */
#line 112 "AMMTV007.y"
                                       {(yyval.nPtr) = opr(COMMA, 2, (yyvsp[-2].nPtr), id((yyvsp[0].string)));}
#line 1655 "y.tab.c"
    break;

  case 33: /* READ_LIST: READ_LIST COMMA IDENTIFIER LBRACKET EXPR RBRACKET  */
#line 113 "AMMTV007.y"
                                                              {(yyval.nPtr) = opr(COMMA, 2, (yyvsp[-5].nPtr), opr(ARR, 2, id((yyvsp[-3].string)), (yyvsp[-1].nPtr)));}
#line 1661 "y.tab.c"
    break;

  case 34: /* WRITE_STMT: WRITE LPAREN DQT STRING DQT RPAREN  */
#line 116 "AMMTV007.y"
                                                {(yyval.nPtr) = opr(WRITE, 2, con((yyvsp[-2].string), "string"), opr(NUL,0));}
#line 1667 "y.tab.c"
    break;

  case 35: /* WRITE_STMT: WRITE LPAREN DQT STRING DQT COMMA VAR_LIST RPAREN  */
#line 117 "AMMTV007.y"
                                                               {(yyval.nPtr) = opr(WRITE, 2, con((yyvsp[-4].string), "string"), (yyvsp[-1].nPtr));}
#line 1673 "y.tab.c"
    break;

  case 36: /* WRITE_STMT: WRITE LPAREN VAR_LIST RPAREN  */
#line 118 "AMMTV007.y"
                                          {(yyval.nPtr) = opr(WRITE, 2, (yyvsp[-1].nPtr), opr(NUL,0));}
#line 1679 "y.tab.c"
    break;

  case 37: /* VAR_LIST: VAR_LIST COMMA EXPR  */
#line 121 "AMMTV007.y"
                               {(yyval.nPtr) = opr(COMMA, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1685 "y.tab.c"
    break;

  case 38: /* VAR_LIST: EXPR  */
#line 122 "AMMTV007.y"
                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1691 "y.tab.c"
    break;

  case 39: /* IF_STMT: IF EXPR THEN START SMP_STMT_LIST END ELSE START SMP_STMT_LIST END  */
#line 125 "AMMTV007.y"
                                                                             {(yyval.nPtr) = opr(IF, 3, (yyvsp[-8].nPtr), (yyvsp[-5].nPtr), opr(ELSE, 1, (yyvsp[-1].nPtr)));}
#line 1697 "y.tab.c"
    break;

  case 40: /* IF_STMT: IF EXPR THEN START SMP_STMT_LIST END  */
#line 126 "AMMTV007.y"
                                                {(yyval.nPtr) = opr(IF, 3, (yyvsp[-4].nPtr), (yyvsp[-1].nPtr), opr(NUL, 0));}
#line 1703 "y.tab.c"
    break;

  case 41: /* WHILE_STMT: WHILE EXPR DO START SMP_STMT_LIST END  */
#line 130 "AMMTV007.y"
                                                   {(yyval.nPtr) = opr(WHILE, 2, (yyvsp[-4].nPtr), (yyvsp[-1].nPtr));}
#line 1709 "y.tab.c"
    break;

  case 42: /* FOR_STMT: FOR IDENTIFIER ASS EXPR TO EXPR DO START SMP_STMT_LIST END  */
#line 133 "AMMTV007.y"
                                                                      {(yyval.nPtr) = opr(FOR, 5, id((yyvsp[-8].string)), (yyvsp[-6].nPtr), con((yyvsp[-5].string), "to"), (yyvsp[-4].nPtr), (yyvsp[-1].nPtr));}
#line 1715 "y.tab.c"
    break;

  case 43: /* FOR_STMT: FOR IDENTIFIER ASS EXPR DOWNTO EXPR DO START SMP_STMT_LIST END  */
#line 134 "AMMTV007.y"
                                                                          {(yyval.nPtr) = opr(FOR, 5, id((yyvsp[-8].string)), (yyvsp[-6].nPtr), con((yyvsp[-5].string), "downto"), (yyvsp[-4].nPtr), (yyvsp[-1].nPtr));}
#line 1721 "y.tab.c"
    break;

  case 44: /* EXPR: EXPR GTR ARITHMETIC  */
#line 137 "AMMTV007.y"
                           {(yyval.nPtr) = opr(GTR, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1727 "y.tab.c"
    break;

  case 45: /* EXPR: EXPR LESS ARITHMETIC  */
#line 138 "AMMTV007.y"
                            {(yyval.nPtr) = opr(LESS, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1733 "y.tab.c"
    break;

  case 46: /* EXPR: EXPR GTR_EQ ARITHMETIC  */
#line 139 "AMMTV007.y"
                              {(yyval.nPtr) = opr(GTR_EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1739 "y.tab.c"
    break;

  case 47: /* EXPR: EXPR LESS_EQ ARITHMETIC  */
#line 140 "AMMTV007.y"
                               {(yyval.nPtr) = opr(LESS_EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1745 "y.tab.c"
    break;

  case 48: /* EXPR: EXPR NOT_EQ ARITHMETIC  */
#line 141 "AMMTV007.y"
                              {(yyval.nPtr) = opr(NOT_EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1751 "y.tab.c"
    break;

  case 49: /* EXPR: EXPR EQ ARITHMETIC  */
#line 142 "AMMTV007.y"
                          {(yyval.nPtr) = opr(EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1757 "y.tab.c"
    break;

  case 50: /* EXPR: ARITHMETIC  */
#line 143 "AMMTV007.y"
                  {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1763 "y.tab.c"
    break;

  case 51: /* ARITHMETIC: ARITHMETIC PLUS TERM  */
#line 146 "AMMTV007.y"
                                  {(yyval.nPtr) = opr(PLUS, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1769 "y.tab.c"
    break;

  case 52: /* ARITHMETIC: ARITHMETIC MINUS TERM  */
#line 147 "AMMTV007.y"
                                   {(yyval.nPtr) = opr(MINUS, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1775 "y.tab.c"
    break;

  case 53: /* ARITHMETIC: ARITHMETIC OR TERM  */
#line 148 "AMMTV007.y"
                                {(yyval.nPtr) = opr(OR, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1781 "y.tab.c"
    break;

  case 54: /* ARITHMETIC: TERM  */
#line 149 "AMMTV007.y"
                  {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1787 "y.tab.c"
    break;

  case 55: /* TERM: TERM MUL FACTOR  */
#line 152 "AMMTV007.y"
                       {(yyval.nPtr) = opr(MUL, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1793 "y.tab.c"
    break;

  case 56: /* TERM: TERM DIV FACTOR  */
#line 153 "AMMTV007.y"
                       {(yyval.nPtr) = opr(DIV, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1799 "y.tab.c"
    break;

  case 57: /* TERM: TERM MOD FACTOR  */
#line 154 "AMMTV007.y"
                       {(yyval.nPtr) = opr(MOD, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1805 "y.tab.c"
    break;

  case 58: /* TERM: TERM AND FACTOR  */
#line 155 "AMMTV007.y"
                       {(yyval.nPtr) = opr(AND, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1811 "y.tab.c"
    break;

  case 59: /* TERM: FACTOR  */
#line 156 "AMMTV007.y"
              {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1817 "y.tab.c"
    break;

  case 60: /* FACTOR: LPAREN EXPR RPAREN  */
#line 159 "AMMTV007.y"
                            {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1823 "y.tab.c"
    break;

  case 61: /* FACTOR: NOT FACTOR  */
#line 160 "AMMTV007.y"
                    {(yyval.nPtr) = opr(NOT, 1, (yyvsp[0].nPtr));}
#line 1829 "y.tab.c"
    break;

  case 62: /* FACTOR: IDENTIFIER  */
#line 161 "AMMTV007.y"
                    {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1835 "y.tab.c"
    break;

  case 63: /* FACTOR: CONST  */
#line 162 "AMMTV007.y"
               {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1841 "y.tab.c"
    break;

  case 64: /* FACTOR: ARR_ACCESS  */
#line 163 "AMMTV007.y"
                    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1847 "y.tab.c"
    break;

  case 65: /* ARR_ACCESS: IDENTIFIER LBRACKET EXPR RBRACKET  */
#line 166 "AMMTV007.y"
                                               {(yyval.nPtr) = opr(ARR, 2, id((yyvsp[-3].string)), (yyvsp[-1].nPtr));}
#line 1853 "y.tab.c"
    break;

  case 66: /* CONST: INT_CONST  */
#line 168 "AMMTV007.y"
                  {(yyval.nPtr) = con((yyvsp[0].string), "int");}
#line 1859 "y.tab.c"
    break;

  case 67: /* CONST: REAL_CONST  */
#line 169 "AMMTV007.y"
                   {(yyval.nPtr) = con((yyvsp[0].string), "real");}
#line 1865 "y.tab.c"
    break;

  case 68: /* CONST: CHAR_CONST  */
#line 170 "AMMTV007.y"
                   {(yyval.nPtr) = con((yyvsp[0].string), "char");}
#line 1871 "y.tab.c"
    break;

  case 69: /* CONST: BOOLEAN_CONST  */
#line 171 "AMMTV007.y"
                      {(yyval.nPtr) = con((yyvsp[0].string), "boolean");}
#line 1877 "y.tab.c"
    break;


#line 1881 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 174 "AMMTV007.y"


void yyerror()
{
    printf("Syntax Error\n");
    exit(0);
}

int main()
{
    yyin = fopen("input.txt","r");
    yyparse();
    printf("Parse Successful!\n");
    printf("\n");
    print_Id_Table();
    printf("\n");
    print_Arr_Table();
    return 0;
}

nodeType *con(char *value, char *type)
{
	if(strcmp(type, "boolean")==0){
		convert_to_lowercase(value);
	}
	else if(strcmp(type, "to")==0){
		convert_to_lowercase(value);
	}
	else if(strcmp(type, "downto")==0){
		convert_to_lowercase(value);
	}
	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(nodeType))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeCon;
	strcpy(p->con.value, value);
	strcpy(p->con.type, type);
	return p;
}
nodeType *id(char *identifier) {
	convert_to_lowercase(identifier);
	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(nodeType))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeId;
	strcpy(p->id.name,identifier);
	return p;
}

nodeType *opr(int oper, int nops, ...)
{
	va_list ap;
	nodeType *p;
	int i;
	/* allocate node, extending op array */
	if ((p = malloc(sizeof(nodeType) +(nops-1) * sizeof(nodeType *))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeOpr;
	p->opr.oper = oper;
	p->opr.nops = nops;
	va_start(ap, nops);
	for (i = 0; i < nops; i++)
		p->opr.op[i] = va_arg(ap, nodeType*);
	va_end(ap);
	return p;
}

void insertEntry(char *t){
    for(int i = 0; i<decCounter; i++){
        insertID(dec[i].name, t);
    }
    decCounter = 0;                   
}

void convert_to_lowercase(char *str) {
  while (*str) {
    *str = tolower(*str);
    str++;
  }
}

void insertID(char *name, char *type){
    convert_to_lowercase(name);
    id_table[id_count] = *(id_sym*)malloc(sizeof(id_sym));
    id_table[id_count].name = strdup(name);
    id_table[id_count].type = strdup(type);
    id_table[id_count].val = INT_MIN;
    id_count++;
}

void insertArr(char *name, char *type, char *c1, char *c2){
    convert_to_lowercase(name);
    arr_table[arr_count] = *(arr_sym*)malloc(sizeof(arr_sym));
    arr_table[arr_count].name = strdup(name);
    arr_table[arr_count].type = strdup(type);
    int tempc1 = atoi(c1);
    int tempc2 = atoi(c2);
    arr_table[arr_count].c1 = tempc1;
    arr_table[arr_count].c2 = tempc2;
    for(int i=tempc1;i<=tempc2;i++){
    	arr_table[arr_count].val[i]=0;
    }
    arr_count++;
}

void insertEntryArr(char *t, char *c1, char *c2){
	for(int i = 0; i<decCounter; i++){
		insertArr(dec[i].name, t, c1, c2);
    	}
    	decCounter = 0;
}
