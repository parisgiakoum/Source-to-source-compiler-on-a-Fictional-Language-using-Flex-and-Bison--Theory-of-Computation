/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "fl_parser.y" /* yacc.c:339  */

#include <stdarg.h>
#include <stdio.h>	
#include "cgen.h"

extern int yylex(void);
extern int line_num;

#line 75 "fl_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "fl_parser.tab.h".  */
#ifndef YY_YY_FL_PARSER_TAB_H_INCLUDED
# define YY_YY_FL_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    POSINT = 259,
    REAL = 260,
    STRING = 261,
    KW_PROGRAM = 262,
    KW_BEGIN = 263,
    KW_END = 264,
    KW_AND = 265,
    KW_DIV = 266,
    KW_FUNCTION = 267,
    KW_MOD = 268,
    KW_PROCEDURE = 269,
    KW_RESULT = 270,
    KW_ARRAY = 271,
    KW_DO = 272,
    KW_GOTO = 273,
    KW_NOT = 274,
    KW_RETURN = 275,
    KW_BOOLEAN = 276,
    KW_ELSE = 277,
    KW_IF = 278,
    KW_OF = 279,
    KW_REAL = 280,
    KW_THEN = 281,
    KW_CHAR = 282,
    KW_FOR = 283,
    KW_INTEGER = 284,
    KW_OR = 285,
    KW_REPEAT = 286,
    KW_UNTIL = 287,
    KW_VAR = 288,
    KW_WHILE = 289,
    KW_TO = 290,
    KW_DOWNTO = 291,
    KW_TYPE = 292,
    KW_TRUE = 293,
    KW_FALSE = 294,
    CAST_INTEGER = 295,
    CAST_BOOLEAN = 296,
    CAST_CHAR = 297,
    CAST_REAL = 298,
    OP_INEQUAL = 299,
    OP_LESSEQ = 300,
    OP_GREATEREQ = 301,
    ASSIGN = 302,
    UMINUS = 303,
    UPLUS = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "fl_parser.y" /* yacc.c:355  */

	char* crepr;

#line 169 "fl_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_FL_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 186 "fl_parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   449

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,    60,    53,    52,    61,    51,    57,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    62,    58,
      49,    48,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   106,   106,   119,   121,   123,   124,   126,   127,   130,
     132,   134,   135,   137,   138,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   171,   172,   173,   174,   175,
     176,   177,   179,   181,   182,   184,   185,   187,   188,   190,
     192,   193,   195,   197,   199,   200,   202,   203,   205,   206,
     208,   210,   211,   212,   213,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "POSINT", "REAL", "STRING",
  "KW_PROGRAM", "KW_BEGIN", "KW_END", "KW_AND", "KW_DIV", "KW_FUNCTION",
  "KW_MOD", "KW_PROCEDURE", "KW_RESULT", "KW_ARRAY", "KW_DO", "KW_GOTO",
  "KW_NOT", "KW_RETURN", "KW_BOOLEAN", "KW_ELSE", "KW_IF", "KW_OF",
  "KW_REAL", "KW_THEN", "KW_CHAR", "KW_FOR", "KW_INTEGER", "KW_OR",
  "KW_REPEAT", "KW_UNTIL", "KW_VAR", "KW_WHILE", "KW_TO", "KW_DOWNTO",
  "KW_TYPE", "KW_TRUE", "KW_FALSE", "CAST_INTEGER", "CAST_BOOLEAN",
  "CAST_CHAR", "CAST_REAL", "OP_INEQUAL", "OP_LESSEQ", "OP_GREATEREQ",
  "ASSIGN", "'='", "'<'", "'>'", "'-'", "'+'", "'*'", "'/'", "UMINUS",
  "UPLUS", "'.'", "';'", "'('", "')'", "','", "':'", "'['", "']'",
  "$accept", "program", "program_decl", "body", "statements",
  "statement_list", "statement", "proc_call", "arguments", "arglist",
  "expression", "data_type", "func_data_type", "var_decl", "var_decl_list",
  "var_ident", "array_decl", "array_size", "array_call", "array_call_size",
  "type_decl", "type_decl_list", "subroutine_list", "subroutine",
  "subroutine_decl", "instruction", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    61,    60,
      62,    45,    43,    42,    47,   303,   304,    46,    59,    40,
      41,    44,    58,    91,    93
};
# endif

#define YYPACT_NINF -116

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-116)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,     8,    23,     6,   -34,  -116,    39,    11,  -116,    -3,
      39,    44,  -116,   123,    39,    -7,     2,    14,     0,  -116,
      20,    19,  -116,  -116,  -116,  -116,    22,  -116,  -116,    44,
      44,   123,    84,    80,    90,    38,  -116,     6,    44,   126,
      70,  -116,  -116,    42,  -116,   -13,    49,    94,  -116,   126,
     100,    84,   126,  -116,    96,    48,  -116,  -116,  -116,    50,
      52,  -116,    11,   -43,   -50,  -116,  -116,  -116,   126,  -116,
    -116,   126,   126,   126,   126,   126,   126,   126,  -116,   145,
    -116,   123,    44,   126,   126,    84,   126,  -116,   251,    61,
      82,   276,  -116,    84,    17,    18,  -116,    54,   126,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,   195,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,    19,  -116,   351,    57,    58,   351,  -116,   351,
      84,   126,   126,    84,  -116,    59,   -25,    62,   -19,     0,
     123,   170,  -116,   395,  -116,  -116,   372,     5,     5,     5,
       5,     5,     5,    37,    37,  -116,  -116,  -116,  -116,   126,
     102,   222,   351,  -116,   123,    60,  -116,    75,    83,  -116,
      19,   351,    84,   126,   126,    85,   123,  -116,  -116,  -116,
    -116,   301,   326,  -116,    89,    84,    84,  -116,  -116,  -116
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    64,     0,     1,     0,    53,     3,     0,
      65,     0,    68,     0,    67,    57,     0,     0,     0,    51,
       0,    60,    46,    48,    47,    45,     0,    50,    49,     0,
      54,     0,     5,     0,     0,     0,    69,    64,     0,     0,
       0,    66,    58,    56,    55,     0,     0,     0,    86,     0,
       0,     0,     0,    75,     0,     6,     7,    87,     9,     0,
       0,     2,    53,     0,    17,    15,    16,    20,     0,    18,
      19,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,     0,    11,     0,     0,    85,     0,     0,
       0,     0,     4,     0,     0,     0,    68,     0,     0,    62,
      32,    22,    23,    24,    25,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    59,    76,     0,    12,    13,    84,    77,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,    21,    41,    30,    31,    42,    36,    39,    40,
      35,    37,    38,    27,    26,    28,    29,    61,    10,     0,
      78,     0,    83,    82,     0,     0,    72,     0,     0,    52,
      60,    14,     0,     0,     0,     0,     0,    71,    70,    63,
      79,     0,     0,    74,     0,     0,     0,    73,    80,    81
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,   -14,  -116,  -116,    45,   -32,  -116,  -116,
     -46,   -30,  -116,    87,    -6,   113,  -116,  -115,  -116,  -116,
     114,   151,    63,  -116,  -116,   -49
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    53,    54,    55,    56,    78,   125,   126,
      79,    26,    27,    12,    43,    17,    28,    40,    80,    99,
       7,    14,    18,    36,    37,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,    44,    90,    88,    35,    16,    91,   157,    32,    84,
       1,     4,    33,    98,    34,    82,   109,    97,   110,    57,
      15,    15,   100,     5,     8,   101,   102,   103,   104,   105,
     106,   107,    63,    82,    83,   165,   128,   124,   127,    82,
     129,   167,     9,     6,    11,    13,    84,    15,   109,    85,
     110,   123,   141,    57,    29,   179,   118,   119,   120,   121,
      30,    57,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    31,   135,   137,    38,
      41,   160,    39,    59,   163,   161,   162,    45,   136,   138,
     120,   121,    32,    60,    81,    61,    86,    87,    57,    46,
      82,    57,    47,    89,    48,    92,    93,    49,   131,    94,
     169,    95,    50,   171,   132,    51,   140,   158,    52,   159,
     166,   164,   176,   180,   172,   168,    19,   181,   182,    64,
      65,    66,    67,   177,   175,    20,   188,   189,   134,    21,
      57,   178,    42,   183,    22,    68,   184,   187,    23,    96,
      24,    62,    25,    57,    57,   108,   109,    10,   110,   139,
       0,     0,     0,     0,    69,    70,    71,    72,    73,    74,
       0,     0,     0,     0,     0,   111,     0,    75,    76,     0,
     108,   109,     0,   110,     0,    77,     0,     0,     0,   112,
     113,   114,     0,   115,   116,   117,   118,   119,   120,   121,
     111,     0,     0,     0,     0,   108,   109,     0,   110,   122,
       0,     0,     0,     0,   112,   113,   114,     0,   115,   116,
     117,   118,   119,   120,   121,   111,     0,     0,     0,     0,
       0,     0,   108,   109,   170,   110,     0,     0,     0,   112,
     113,   114,     0,   115,   116,   117,   118,   119,   120,   121,
       0,     0,   111,     0,     0,   142,     0,   173,   174,     0,
       0,   108,   109,     0,   110,     0,   112,   113,   114,     0,
     115,   116,   117,   118,   119,   120,   121,   130,     0,     0,
       0,   111,     0,     0,     0,     0,   108,   109,     0,   110,
       0,     0,     0,   133,     0,   112,   113,   114,     0,   115,
     116,   117,   118,   119,   120,   121,   111,     0,     0,     0,
       0,   108,   109,     0,   110,     0,     0,     0,   185,     0,
     112,   113,   114,     0,   115,   116,   117,   118,   119,   120,
     121,   111,     0,     0,     0,     0,   108,   109,     0,   110,
       0,     0,     0,   186,     0,   112,   113,   114,     0,   115,
     116,   117,   118,   119,   120,   121,   111,     0,     0,     0,
       0,   108,   109,     0,   110,     0,     0,     0,     0,     0,
     112,   113,   114,     0,   115,   116,   117,   118,   119,   120,
     121,   111,   108,   109,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,   113,   114,     0,   115,
     116,   117,   118,   119,   120,   121,   109,     0,   110,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   114,     0,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
     113,   114,     0,   115,   116,   117,   118,   119,   120,   121
};

static const yytype_int16 yycheck[] =
{
      32,    31,    51,    49,    18,    11,    52,   122,     8,    59,
       7,     3,    12,    63,    14,    58,    11,    60,    13,    51,
       3,     3,    68,     0,    58,    71,    72,    73,    74,    75,
      76,    77,    38,    58,    47,    60,    85,    83,    84,    58,
      86,    60,     3,    37,    33,    48,    59,     3,    11,    62,
      13,    81,    98,    85,    61,   170,    51,    52,    53,    54,
      58,    93,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    62,    60,    60,    59,
      58,   130,    63,     3,   133,   131,   132,     3,    94,    95,
      53,    54,     8,     3,    24,    57,    47,     3,   130,    15,
      58,   133,    18,     3,    20,     9,    58,    23,    47,    59,
     140,    59,    28,   159,    32,    31,    62,    60,    34,    61,
      58,    62,    62,   172,    22,   139,     3,   173,   174,     3,
       4,     5,     6,    58,   164,    12,   185,   186,    93,    16,
     172,    58,    29,    58,    21,    19,   176,    58,    25,    62,
      27,    37,    29,   185,   186,    10,    11,     6,    13,    96,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    51,    52,    -1,
      10,    11,    -1,    13,    -1,    59,    -1,    -1,    -1,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      30,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,    64,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    64,    13,    -1,    -1,    -1,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    30,    -1,    -1,    60,    -1,    35,    36,    -1,
      -1,    10,    11,    -1,    13,    -1,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    -1,    17,    -1,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    30,    -1,    -1,    -1,
      -1,    10,    11,    -1,    13,    -1,    -1,    -1,    17,    -1,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    30,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    -1,    17,    -1,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    30,    -1,    -1,    -1,
      -1,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    30,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    11,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    66,    67,     3,     0,    37,    85,    58,     3,
      86,    33,    78,    48,    86,     3,    79,    80,    87,     3,
      12,    16,    21,    25,    27,    29,    76,    77,    81,    61,
      58,    62,     8,    12,    14,    68,    88,    89,    59,    63,
      82,    58,    80,    79,    76,     3,    15,    18,    20,    23,
      28,    31,    34,    68,    69,    70,    71,    72,    90,     3,
       3,    57,    85,    79,     3,     4,     5,     6,    19,    38,
      39,    40,    41,    42,    43,    51,    52,    59,    72,    75,
      83,    24,    58,    47,    59,    62,    47,     3,    75,     3,
      90,    75,     9,    58,    59,    59,    78,    60,    63,    84,
      75,    75,    75,    75,    75,    75,    75,    75,    10,    11,
      13,    30,    44,    45,    46,    48,    49,    50,    51,    52,
      53,    54,    64,    76,    75,    73,    74,    75,    90,    75,
      26,    47,    32,    17,    71,    60,    79,    60,    79,    87,
      62,    75,    60,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    82,    60,    61,
      90,    75,    75,    90,    62,    60,    58,    60,    68,    76,
      64,    75,    22,    35,    36,    76,    62,    58,    58,    82,
      90,    75,    75,    58,    76,    17,    17,    58,    90,    90
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    68,    69,    69,    70,    70,    71,
      72,    73,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    77,    78,    78,    79,    79,    80,    80,    81,
      82,    82,    83,    84,    85,    85,    86,    86,    87,    87,
      88,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     3,     3,     0,     1,     1,     3,     1,
       4,     0,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     0,     3,     3,     3,     1,     3,     4,
       0,     4,     2,     4,     0,     2,     4,     2,     0,     2,
       6,     6,     5,     8,     7,     1,     3,     3,     4,     6,
       8,     8,     4,     4,     3,     2,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 107 "fl_parser.y" /* yacc.c:1646  */
    { 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */ \n\n", (yyvsp[-5].crepr));
		printf("int main() %s \n", (yyvsp[-4].crepr)); //WRONG!!!
	}
}
#line 1455 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 119 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1461 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 121 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("{\n %s \n }\n", (yyvsp[-1].crepr)); }
#line 1467 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 123 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1473 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 124 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1479 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1485 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 130 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;\n", (yyvsp[0].crepr)); }
#line 1491 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 132 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1497 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 134 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1503 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1509 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1515 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 138 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1521 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 143 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("1"); }
#line 1527 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 144 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("0"); }
#line 1533 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 145 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = string_ptuc2c((yyvsp[0].crepr)); }
#line 1539 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 146 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)", (yyvsp[-1].crepr)); }
#line 1545 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 147 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(int) %s", (yyvsp[0].crepr)); }
#line 1551 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 148 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(int) %s", (yyvsp[0].crepr)); }
#line 1557 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 149 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(char) %s", (yyvsp[0].crepr)); }
#line 1563 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 150 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(double) %s", (yyvsp[0].crepr)); }
#line 1569 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 151 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1575 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 152 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1581 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 153 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1587 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 154 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1593 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 155 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1599 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 156 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s % %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1605 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 157 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("!%s", (yyvsp[0].crepr)); }
#line 1611 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 158 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr)); }
#line 1617 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 159 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1623 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 160 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1629 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1635 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 162 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s < %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1641 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 163 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1647 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 164 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1653 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 165 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1659 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 166 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1665 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 167 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1671 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 171 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("int"); }
#line 1677 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 172 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("int"); }
#line 1683 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 173 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("char"); }
#line 1689 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 174 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("real"); }
#line 1695 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 175 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1701 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 176 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1707 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 181 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1713 "fl_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 205 "fl_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1719 "fl_parser.tab.c" /* yacc.c:1646  */
    break;


#line 1723 "fl_parser.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 229 "fl_parser.y" /* yacc.c:1906  */


int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
