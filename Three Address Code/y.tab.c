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
    extern FILE *yyin;
    
    int label = 0;
    int tempVariable = 0;
    int loopL[100];
    int indent = 0;

    char* genTempVariable(int id){
        char* temp = (char*)malloc(10*sizeof(char));
        temp[0] = 'T';
        snprintf(temp, 10, "T%d", id);
        return temp;
    }

    int gencode(char* lhs, char* op, char* rhs){
        printf("\nT%d := %s %s %s \n", tempVariable, lhs, op, rhs);
        return tempVariable;
    }

    void assignment(char* lhs, char* rhs){
        printf("\n%s := %s \n", lhs, rhs);
    }
    
    void assignment_arr(char* lhs1, char* lhs2, char* rhs){
    	printf("\n%s[%s] := %s \n", lhs1, lhs2, rhs);
    }
    
    void increment_var(char* var){
    	printf("%s = %s + 1\n", var, var);
    }
    
    void decrement_var(char* var){
    	printf("%s = %s - 1\n", var, var);
    }

#line 114 "y.tab.c"

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

#line 289 "y.tab.c"

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
  YYSYMBOL_PROGRAM = 9,                    /* PROGRAM  */
  YYSYMBOL_INT = 10,                       /* INT  */
  YYSYMBOL_REAL = 11,                      /* REAL  */
  YYSYMBOL_BOOLEAN = 12,                   /* BOOLEAN  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_VAR = 14,                       /* VAR  */
  YYSYMBOL_TYPE = 15,                      /* TYPE  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_THEN = 17,                      /* THEN  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_DO = 20,                        /* DO  */
  YYSYMBOL_WHILE = 21,                     /* WHILE  */
  YYSYMBOL_ARRAY = 22,                     /* ARRAY  */
  YYSYMBOL_TO = 23,                        /* TO  */
  YYSYMBOL_DOWNTO = 24,                    /* DOWNTO  */
  YYSYMBOL_OF = 25,                        /* OF  */
  YYSYMBOL_START = 26,                     /* START  */
  YYSYMBOL_END = 27,                       /* END  */
  YYSYMBOL_READ = 28,                      /* READ  */
  YYSYMBOL_WRITE = 29,                     /* WRITE  */
  YYSYMBOL_PLUS = 30,                      /* PLUS  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_MUL = 32,                       /* MUL  */
  YYSYMBOL_DIV = 33,                       /* DIV  */
  YYSYMBOL_MOD = 34,                       /* MOD  */
  YYSYMBOL_GTR = 35,                       /* GTR  */
  YYSYMBOL_LESS = 36,                      /* LESS  */
  YYSYMBOL_GTR_EQ = 37,                    /* GTR_EQ  */
  YYSYMBOL_LESS_EQ = 38,                   /* LESS_EQ  */
  YYSYMBOL_EQ = 39,                        /* EQ  */
  YYSYMBOL_NOT_EQ = 40,                    /* NOT_EQ  */
  YYSYMBOL_AND = 41,                       /* AND  */
  YYSYMBOL_OR = 42,                        /* OR  */
  YYSYMBOL_NOT = 43,                       /* NOT  */
  YYSYMBOL_ASS = 44,                       /* ASS  */
  YYSYMBOL_SEMICOLON = 45,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 46,                     /* COMMA  */
  YYSYMBOL_COLON = 47,                     /* COLON  */
  YYSYMBOL_LPAREN = 48,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 49,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 50,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 51,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 52,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 53,                  /* RBRACKET  */
  YYSYMBOL_SQT = 54,                       /* SQT  */
  YYSYMBOL_DQT = 55,                       /* DQT  */
  YYSYMBOL_DOT = 56,                       /* DOT  */
  YYSYMBOL_NEWLINE = 57,                   /* NEWLINE  */
  YYSYMBOL_UNK = 58,                       /* UNK  */
  YYSYMBOL_END_OF_FILE = 59,               /* END_OF_FILE  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_S = 61,                         /* S  */
  YYSYMBOL_BLOCK = 62,                     /* BLOCK  */
  YYSYMBOL_VAR_DECL = 63,                  /* VAR_DECL  */
  YYSYMBOL_VAR_DECL_LIST = 64,             /* VAR_DECL_LIST  */
  YYSYMBOL_VAR_DECL_ITEM = 65,             /* VAR_DECL_ITEM  */
  YYSYMBOL_IDENTIFIER_LIST = 66,           /* IDENTIFIER_LIST  */
  YYSYMBOL_READ_LIST = 67,                 /* READ_LIST  */
  YYSYMBOL_TYPE_SPECIFIER = 68,            /* TYPE_SPECIFIER  */
  YYSYMBOL_STMT_LIST = 69,                 /* STMT_LIST  */
  YYSYMBOL_SMP_STMT_LIST = 70,             /* SMP_STMT_LIST  */
  YYSYMBOL_STMT = 71,                      /* STMT  */
  YYSYMBOL_72_1 = 72,                      /* $@1  */
  YYSYMBOL_73_2 = 73,                      /* $@2  */
  YYSYMBOL_SMP_STMT = 74,                  /* SMP_STMT  */
  YYSYMBOL_75_3 = 75,                      /* $@3  */
  YYSYMBOL_ASSIGNMENT_STMT = 76,           /* ASSIGNMENT_STMT  */
  YYSYMBOL_READ_STMT = 77,                 /* READ_STMT  */
  YYSYMBOL_WRITE_STMT = 78,                /* WRITE_STMT  */
  YYSYMBOL_VAR_LIST = 79,                  /* VAR_LIST  */
  YYSYMBOL_IF_STMT = 80,                   /* IF_STMT  */
  YYSYMBOL_81_4 = 81,                      /* $@4  */
  YYSYMBOL_IF_CONT = 82,                   /* IF_CONT  */
  YYSYMBOL_83_5 = 83,                      /* $@5  */
  YYSYMBOL_84_6 = 84,                      /* $@6  */
  YYSYMBOL_WHILE_STMT = 85,                /* WHILE_STMT  */
  YYSYMBOL_86_7 = 86,                      /* $@7  */
  YYSYMBOL_87_8 = 87,                      /* $@8  */
  YYSYMBOL_FOR_STMT = 88,                  /* FOR_STMT  */
  YYSYMBOL_89_9 = 89,                      /* $@9  */
  YYSYMBOL_90_10 = 90,                     /* $@10  */
  YYSYMBOL_91_11 = 91,                     /* $@11  */
  YYSYMBOL_92_12 = 92,                     /* $@12  */
  YYSYMBOL_EXPR = 93,                      /* EXPR  */
  YYSYMBOL_ARITHMETIC = 94,                /* ARITHMETIC  */
  YYSYMBOL_COMP_OP = 95,                   /* COMP_OP  */
  YYSYMBOL_TERM = 96,                      /* TERM  */
  YYSYMBOL_FACTOR = 97,                    /* FACTOR  */
  YYSYMBOL_ARR_ACCESS = 98,                /* ARR_ACCESS  */
  YYSYMBOL_CONST = 99                      /* CONST  */
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
#define YYLAST   210

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


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
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    62,    64,    65,    68,    69,    72,    73,
      78,    79,    82,    83,    84,    85,    88,    89,    90,    91,
      94,    95,    98,    99,   102,   102,   103,   103,   104,   107,
     108,   109,   110,   110,   113,   114,   117,   120,   121,   122,
     125,   126,   129,   129,   132,   132,   132,   133,   136,   144,
     136,   151,   162,   151,   168,   179,   168,   187,   192,   195,
     200,   205,   210,   213,   214,   215,   216,   217,   218,   221,
     226,   231,   236,   241,   244,   245,   250,   251,   252,   255,
     257,   258,   259,   260
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
  "PROGRAM", "INT", "REAL", "BOOLEAN", "CHAR", "VAR", "TYPE", "IF", "THEN",
  "ELSE", "FOR", "DO", "WHILE", "ARRAY", "TO", "DOWNTO", "OF", "START",
  "END", "READ", "WRITE", "PLUS", "MINUS", "MUL", "DIV", "MOD", "GTR",
  "LESS", "GTR_EQ", "LESS_EQ", "EQ", "NOT_EQ", "AND", "OR", "NOT", "ASS",
  "SEMICOLON", "COMMA", "COLON", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "LBRACKET", "RBRACKET", "SQT", "DQT", "DOT", "NEWLINE", "UNK",
  "END_OF_FILE", "$accept", "S", "BLOCK", "VAR_DECL", "VAR_DECL_LIST",
  "VAR_DECL_ITEM", "IDENTIFIER_LIST", "READ_LIST", "TYPE_SPECIFIER",
  "STMT_LIST", "SMP_STMT_LIST", "STMT", "$@1", "$@2", "SMP_STMT", "$@3",
  "ASSIGNMENT_STMT", "READ_STMT", "WRITE_STMT", "VAR_LIST", "IF_STMT",
  "$@4", "IF_CONT", "$@5", "$@6", "WHILE_STMT", "$@7", "$@8", "FOR_STMT",
  "$@9", "$@10", "$@11", "$@12", "EXPR", "ARITHMETIC", "COMP_OP", "TERM",
  "FACTOR", "ARR_ACCESS", "CONST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-114)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-48)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    23,    28,   -13,  -114,    31,  -114,    24,    38,    67,
    -114,    50,  -114,    51,    -7,   -14,    52,    54,    72,    93,
     150,    76,  -114,   157,  -114,  -114,  -114,  -114,   171,    79,
      14,    14,   172,     8,  -114,    50,    14,  -114,   173,  -114,
      14,  -114,  -114,  -114,  -114,  -114,  -114,   125,  -114,   126,
    -114,  -114,  -114,  -114,    14,    14,   130,    18,   -10,  -114,
    -114,  -114,    80,   127,   -42,   174,   -41,   130,  -114,    47,
     136,    37,   176,    14,  -114,   123,  -114,  -114,  -114,  -114,
    -114,  -114,    14,    14,    14,    14,    14,    14,    14,    14,
     139,    14,   181,  -114,   131,    14,  -114,   159,    14,   161,
     132,    86,  -114,    18,   -10,   -10,   -10,  -114,  -114,  -114,
    -114,    14,    92,   137,    -2,   130,  -114,   117,  -114,   134,
    -114,   130,  -114,    14,    14,  -114,    30,    14,    14,    30,
     186,   111,     6,  -114,   147,    68,    74,   166,   141,  -114,
    -114,   168,    30,   170,   175,   152,   177,  -114,  -114,  -114,
    -114,  -114,   180,   124,    30,    30,   178,  -114,  -114,  -114,
    -114,   179,   182,    30,  -114,  -114,   183,  -114
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     5,     7,     0,     0,     4,
       2,    21,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,    29,    30,    31,     6,     0,     0,
       0,     0,     0,     0,     3,    21,     0,    25,     0,    27,
       0,    33,    11,    16,    17,    18,    19,     0,     8,    76,
      83,    80,    81,    82,     0,     0,    34,    58,    62,    73,
      78,    77,     0,    12,     0,     0,     0,    41,    20,     0,
       0,     0,     0,     0,    75,     0,    63,    64,    65,    66,
      68,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,    39,     0,     0,     0,
       0,     0,    74,    57,    59,    60,    61,    69,    70,    71,
      72,     0,     0,    14,     0,    40,    48,     0,    42,     0,
      79,    35,    13,     0,     0,    37,    23,     0,     0,    23,
       0,     0,     0,    49,     0,     0,     0,     0,     0,    15,
      38,     0,    23,     0,     0,    44,     0,    50,    22,    51,
      54,    43,     0,     0,    23,    23,     0,     9,    52,    55,
      45,     0,     0,    23,    53,    56,     0,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,    46,   165,
    -113,  -114,  -114,  -114,    -8,  -114,  -114,  -114,  -114,    81,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,   -30,   121,  -114,    59,   -52,  -114,  -114
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     7,     8,     9,    13,    14,    64,    48,    18,
     133,    19,    20,    21,   134,    23,    24,    25,    26,    66,
      41,   129,   151,   152,   163,    37,   126,   141,    39,   154,
     161,   155,   162,    67,    57,    82,    58,    59,    60,    61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    62,    74,    22,    92,    95,    69,    93,    96,     1,
      71,    49,    50,    51,    52,    53,   137,    49,    50,    51,
      52,    53,    86,    87,    88,    75,     3,    22,     4,   148,
      30,    89,     5,    15,   107,   108,   109,   110,    31,    28,
      29,   158,   159,   101,   124,     6,   -32,   125,    83,    84,
     166,    54,    95,    15,    99,   140,    55,    54,    16,    17,
      85,   112,    55,    65,    11,   115,   -32,    97,   117,   -26,
      12,   -24,    76,    77,    78,    79,    80,    81,    16,    17,
      10,   121,    76,    77,    78,    79,    80,    81,   143,    43,
      44,    45,    46,   131,   144,    38,    27,   135,   136,    34,
      32,    47,    33,    76,    77,    78,    79,    80,    81,    76,
      77,    78,    79,    80,    81,    76,    77,    78,    79,    80,
      81,    76,    77,    78,    79,    80,    81,    76,    77,    78,
      79,    80,    81,    90,    43,    44,    45,    46,    35,   120,
     127,   128,   104,   105,   106,   122,    76,    77,    78,    79,
      80,    81,    76,    77,    78,    79,    80,    81,    76,    77,
      78,    79,    80,    81,   139,    76,    77,    78,    79,    80,
      81,    36,   102,    40,    42,    63,    70,    72,    73,    91,
      98,   100,    94,   111,   113,   116,   114,   118,   119,   123,
     130,   138,   142,   145,   146,   147,   149,   -47,   156,   157,
      68,   150,   153,   103,   160,   132,   164,     0,     0,   165,
     167
};

static const yytype_int16 yycheck[] =
{
      30,    31,    54,    11,    46,    46,    36,    49,    49,     9,
      40,     3,     4,     5,     6,     7,   129,     3,     4,     5,
       6,     7,    32,    33,    34,    55,     3,    35,     0,   142,
      44,    41,    45,     3,    86,    87,    88,    89,    52,    46,
      47,   154,   155,    73,    46,    14,    16,    49,    30,    31,
     163,    43,    46,     3,    17,    49,    48,    43,    28,    29,
      42,    91,    48,    55,    26,    95,    16,    20,    98,    19,
       3,    21,    35,    36,    37,    38,    39,    40,    28,    29,
      56,   111,    35,    36,    37,    38,    39,    40,    20,    10,
      11,    12,    13,   123,    20,    19,    45,   127,   128,    27,
      48,    22,    48,    35,    36,    37,    38,    39,    40,    35,
      36,    37,    38,    39,    40,    35,    36,    37,    38,    39,
      40,    35,    36,    37,    38,    39,    40,    35,    36,    37,
      38,    39,    40,    53,    10,    11,    12,    13,    45,    53,
      23,    24,    83,    84,    85,    53,    35,    36,    37,    38,
      39,    40,    35,    36,    37,    38,    39,    40,    35,    36,
      37,    38,    39,    40,    53,    35,    36,    37,    38,    39,
      40,    21,    49,    16,     3,     3,     3,    52,    52,    52,
      44,     5,     8,    44,     3,    26,    55,    26,    56,    52,
      56,     5,    45,    27,    53,    27,    26,    45,    18,   153,
      35,    26,    25,    82,    26,   124,    27,    -1,    -1,    27,
      27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    61,     3,     0,    45,    14,    62,    63,    64,
      56,    26,     3,    65,    66,     3,    28,    29,    69,    71,
      72,    73,    74,    75,    76,    77,    78,    45,    46,    47,
      44,    52,    48,    48,    27,    45,    21,    85,    19,    88,
      16,    80,     3,    10,    11,    12,    13,    22,    68,     3,
       4,     5,     6,     7,    43,    48,    93,    94,    96,    97,
      98,    99,    93,     3,    67,    55,    79,    93,    69,    93,
       3,    93,    52,    52,    97,    93,    35,    36,    37,    38,
      39,    40,    95,    30,    31,    42,    32,    33,    34,    41,
      53,    52,    46,    49,     8,    46,    49,    20,    44,    17,
       5,    93,    49,    94,    96,    96,    96,    97,    97,    97,
      97,    44,    93,     3,    55,    93,    26,    93,    26,    56,
      53,    93,    53,    52,    46,    49,    86,    23,    24,    81,
      56,    93,    79,    70,    74,    93,    93,    70,     5,    53,
      49,    87,    45,    20,    20,    27,    53,    27,    70,    26,
      26,    82,    83,    25,    89,    91,    18,    68,    70,    70,
      26,    90,    92,    84,    27,    27,    70,    27
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    63,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    67,    67,    68,    68,    68,    68,
      69,    69,    70,    70,    72,    71,    73,    71,    71,    74,
      74,    74,    75,    74,    76,    76,    77,    78,    78,    78,
      79,    79,    81,    80,    83,    84,    82,    82,    86,    87,
      85,    89,    90,    88,    91,    92,    88,    93,    93,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    98,
      99,    99,    99,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     2,     0,     3,     0,     3,    11,
       1,     3,     1,     4,     3,     6,     1,     1,     1,     1,
       3,     0,     3,     0,     0,     2,     0,     2,     1,     1,
       1,     1,     0,     2,     3,     6,     4,     6,     8,     4,
       3,     1,     0,     8,     0,     0,     6,     0,     0,     0,
       8,     0,     0,    12,     0,     0,    12,     3,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     1,     3,     2,     1,     1,     1,     4,
       1,     1,     1,     1
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
  case 16: /* TYPE_SPECIFIER: INT  */
#line 88 "AMMTV007.y"
                     {(yyval.lexeme) = "int";}
#line 1492 "y.tab.c"
    break;

  case 17: /* TYPE_SPECIFIER: REAL  */
#line 89 "AMMTV007.y"
                      {(yyval.lexeme) = "real";}
#line 1498 "y.tab.c"
    break;

  case 18: /* TYPE_SPECIFIER: BOOLEAN  */
#line 90 "AMMTV007.y"
                         {(yyval.lexeme) = "boolean";}
#line 1504 "y.tab.c"
    break;

  case 19: /* TYPE_SPECIFIER: CHAR  */
#line 91 "AMMTV007.y"
                      {(yyval.lexeme) = "char";}
#line 1510 "y.tab.c"
    break;

  case 24: /* $@1: %empty  */
#line 102 "AMMTV007.y"
       {printf("\nL%d: \n", ++label);}
#line 1516 "y.tab.c"
    break;

  case 26: /* $@2: %empty  */
#line 103 "AMMTV007.y"
       {printf("\nL%d: \n", ++label);}
#line 1522 "y.tab.c"
    break;

  case 32: /* $@3: %empty  */
#line 110 "AMMTV007.y"
           {printf("\nL%d:\n", ++label);}
#line 1528 "y.tab.c"
    break;

  case 34: /* ASSIGNMENT_STMT: IDENTIFIER ASS EXPR  */
#line 113 "AMMTV007.y"
                                      {assignment((yyvsp[-2].lexeme), (yyvsp[0].lexeme));}
#line 1534 "y.tab.c"
    break;

  case 35: /* ASSIGNMENT_STMT: IDENTIFIER LBRACKET EXPR RBRACKET ASS EXPR  */
#line 114 "AMMTV007.y"
                                                             {assignment_arr((yyvsp[-5].lexeme), (yyvsp[-3].lexeme), (yyvsp[0].lexeme));}
#line 1540 "y.tab.c"
    break;

  case 42: /* $@4: %empty  */
#line 129 "AMMTV007.y"
                              {printf("if false %s goto L%d\n",(yyvsp[-2].lexeme)  ,++label);}
#line 1546 "y.tab.c"
    break;

  case 44: /* $@5: %empty  */
#line 132 "AMMTV007.y"
          {printf("goto L%d\n", label+1);}
#line 1552 "y.tab.c"
    break;

  case 45: /* $@6: %empty  */
#line 132 "AMMTV007.y"
                                                      {printf("L%d: \n",label);}
#line 1558 "y.tab.c"
    break;

  case 46: /* IF_CONT: $@5 ELSE START $@6 SMP_STMT_LIST END  */
#line 132 "AMMTV007.y"
                                                                                                   {printf("L%d:\n", ++label);}
#line 1564 "y.tab.c"
    break;

  case 47: /* IF_CONT: %empty  */
#line 133 "AMMTV007.y"
          {printf("L%d: \n",label);}
#line 1570 "y.tab.c"
    break;

  case 48: /* $@7: %empty  */
#line 136 "AMMTV007.y"
                                 {
        printf("L%d:\n", ++label);
        loopL[indent]=label;
        
        printf("if false %s goto L%d\n", (yyvsp[-2].lexeme), ++label);
        loopL[indent+1]=label; 
     }
#line 1582 "y.tab.c"
    break;

  case 49: /* $@8: %empty  */
#line 144 "AMMTV007.y"
     { 
        printf("goto L%d\n", loopL[indent]); 
        printf("L%d:\n", loopL[++indent]); 
    }
#line 1591 "y.tab.c"
    break;

  case 51: /* $@9: %empty  */
#line 151 "AMMTV007.y"
                                                    {
                        printf("for_loop:\n");
                        assignment((yyvsp[-6].lexeme), (yyvsp[-4].lexeme));
                        printf("L%d:\n", ++label); 
                        loopL[indent]=label;
                        printf("if %s <= %s goto L%d\n", (yyvsp[-6].lexeme), (yyvsp[-2].lexeme), ++label); 
                        printf("goto L%d\n", ++label);
                        loopL[indent+1]=label; 
                        printf("L%d:\n", label - 1); 
	   }
#line 1606 "y.tab.c"
    break;

  case 52: /* $@10: %empty  */
#line 162 "AMMTV007.y"
           {
                        increment_var((yyvsp[-8].lexeme)); 
                        printf("goto L%d\n", loopL[indent]); 
                        printf("L%d:\n", loopL[++indent]); 
    	   }
#line 1616 "y.tab.c"
    break;

  case 54: /* $@11: %empty  */
#line 168 "AMMTV007.y"
                                                        {
                        printf("for_loop:\n");
                        assignment((yyvsp[-6].lexeme), (yyvsp[-4].lexeme));
                        printf("L%d:\n", ++label); 
                        loopL[indent]=label;
                        printf("if %s >= %s goto L%d\n", (yyvsp[-6].lexeme), (yyvsp[-2].lexeme), ++label); 
                        printf("goto L%d\n", ++label);
                        loopL[indent+1]=label; 
                        printf("L%d:\n", label - 1); 
    }
#line 1631 "y.tab.c"
    break;

  case 55: /* $@12: %empty  */
#line 179 "AMMTV007.y"
    {
                        decrement_var((yyvsp[-8].lexeme));
                        printf("goto L%d\n", loopL[indent]);
                        printf("L%d:\n", loopL[++indent]);
                    }
#line 1641 "y.tab.c"
    break;

  case 57: /* EXPR: EXPR COMP_OP ARITHMETIC  */
#line 187 "AMMTV007.y"
                               {int a = gencode((yyvsp[-2].lexeme), (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
		                char* tempVar = genTempVariable(a);
		                (yyval.lexeme) = tempVar;
		                tempVariable++;
		               }
#line 1651 "y.tab.c"
    break;

  case 58: /* EXPR: ARITHMETIC  */
#line 192 "AMMTV007.y"
                  {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1657 "y.tab.c"
    break;

  case 59: /* ARITHMETIC: ARITHMETIC PLUS TERM  */
#line 195 "AMMTV007.y"
                                  {int a = gencode((yyvsp[-2].lexeme), (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
		                   char* tempVar = genTempVariable(a);
		                   (yyval.lexeme) = tempVar;
		                   tempVariable++;
		                  }
#line 1667 "y.tab.c"
    break;

  case 60: /* ARITHMETIC: ARITHMETIC MINUS TERM  */
#line 200 "AMMTV007.y"
                                   {int a = gencode((yyvsp[-2].lexeme), (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
                          	    char* tempVar = genTempVariable(a);
                          	    (yyval.lexeme) = tempVar;
                          	    tempVariable++;
                         	   }
#line 1677 "y.tab.c"
    break;

  case 61: /* ARITHMETIC: ARITHMETIC OR TERM  */
#line 205 "AMMTV007.y"
                                {int a = gencode((yyvsp[-2].lexeme), (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
                          	 char* tempVar = genTempVariable(a);
                          	 (yyval.lexeme) = tempVar;
                          	 tempVariable++;
                         	}
#line 1687 "y.tab.c"
    break;

  case 62: /* ARITHMETIC: TERM  */
#line 210 "AMMTV007.y"
                  {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1693 "y.tab.c"
    break;

  case 63: /* COMP_OP: GTR  */
#line 213 "AMMTV007.y"
              {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1699 "y.tab.c"
    break;

  case 64: /* COMP_OP: LESS  */
#line 214 "AMMTV007.y"
               {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1705 "y.tab.c"
    break;

  case 65: /* COMP_OP: GTR_EQ  */
#line 215 "AMMTV007.y"
                 {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1711 "y.tab.c"
    break;

  case 66: /* COMP_OP: LESS_EQ  */
#line 216 "AMMTV007.y"
                  {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1717 "y.tab.c"
    break;

  case 67: /* COMP_OP: NOT_EQ  */
#line 217 "AMMTV007.y"
                 {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1723 "y.tab.c"
    break;

  case 68: /* COMP_OP: EQ  */
#line 218 "AMMTV007.y"
             {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1729 "y.tab.c"
    break;

  case 69: /* TERM: TERM MUL FACTOR  */
#line 221 "AMMTV007.y"
                       {int a = gencode((yyvsp[-2].lexeme), (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
                        char* tempVar = genTempVariable(a);
                        (yyval.lexeme) = tempVar;
                        tempVariable++;
                       }
#line 1739 "y.tab.c"
    break;

  case 70: /* TERM: TERM DIV FACTOR  */
#line 226 "AMMTV007.y"
                       {int a = gencode((yyvsp[-2].lexeme), (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
                        char* tempVar = genTempVariable(a);
                        (yyval.lexeme) = tempVar;
                        tempVariable++;
                       }
#line 1749 "y.tab.c"
    break;

  case 71: /* TERM: TERM MOD FACTOR  */
#line 231 "AMMTV007.y"
                       {int a = gencode((yyvsp[-2].lexeme), (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
                        char* tempVar = genTempVariable(a);
                        (yyval.lexeme) = tempVar;
                        tempVariable++;
                       }
#line 1759 "y.tab.c"
    break;

  case 72: /* TERM: TERM AND FACTOR  */
#line 236 "AMMTV007.y"
                       {int a = gencode((yyvsp[-2].lexeme), (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
                        char* tempVar = genTempVariable(a);
                        (yyval.lexeme) = tempVar;
                        tempVariable++;
     		       }
#line 1769 "y.tab.c"
    break;

  case 73: /* TERM: FACTOR  */
#line 241 "AMMTV007.y"
              {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1775 "y.tab.c"
    break;

  case 74: /* FACTOR: LPAREN EXPR RPAREN  */
#line 244 "AMMTV007.y"
                            {(yyval.lexeme) = (yyvsp[-1].lexeme);}
#line 1781 "y.tab.c"
    break;

  case 75: /* FACTOR: NOT FACTOR  */
#line 245 "AMMTV007.y"
                    {int a = gencode("", (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
		     char* tempVar = genTempVariable(a);
		     (yyval.lexeme) = tempVar;
		     tempVariable++;
		    }
#line 1791 "y.tab.c"
    break;

  case 76: /* FACTOR: IDENTIFIER  */
#line 250 "AMMTV007.y"
                    {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1797 "y.tab.c"
    break;

  case 77: /* FACTOR: CONST  */
#line 251 "AMMTV007.y"
               {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1803 "y.tab.c"
    break;

  case 78: /* FACTOR: ARR_ACCESS  */
#line 252 "AMMTV007.y"
                    {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1809 "y.tab.c"
    break;

  case 79: /* ARR_ACCESS: IDENTIFIER LBRACKET EXPR RBRACKET  */
#line 255 "AMMTV007.y"
                                               {(yyval.lexeme) = strcat((yyvsp[-3].lexeme),strcat((yyvsp[-2].lexeme),strcat((yyvsp[-1].lexeme),(yyvsp[0].lexeme))));}
#line 1815 "y.tab.c"
    break;

  case 80: /* CONST: INT_CONST  */
#line 257 "AMMTV007.y"
                  {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1821 "y.tab.c"
    break;

  case 81: /* CONST: REAL_CONST  */
#line 258 "AMMTV007.y"
                   {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1827 "y.tab.c"
    break;

  case 82: /* CONST: CHAR_CONST  */
#line 259 "AMMTV007.y"
                   {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1833 "y.tab.c"
    break;

  case 83: /* CONST: BOOLEAN_CONST  */
#line 260 "AMMTV007.y"
                      {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1839 "y.tab.c"
    break;


#line 1843 "y.tab.c"

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

#line 263 "AMMTV007.y"


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
    return 0;
}
