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
#line 1 "ptucc_parser.y" /* yacc.c:339  */

#include <stdarg.h>
#include <stdio.h>	
#include "cgen.h"

extern int yylex(void);
extern int line_num;

#line 75 "ptucc_parser.tab.c" /* yacc.c:339  */

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
   by #include "ptucc_parser.tab.h".  */
#ifndef YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
# define YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
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
    LIB_RS = 293,
    LIB_RI = 294,
    LIB_RR = 295,
    KW_TRUE = 296,
    KW_FALSE = 297,
    CAST_INTEGER = 298,
    CAST_BOOLEAN = 299,
    CAST_CHAR = 300,
    CAST_REAL = 301,
    OP_INEQUAL = 302,
    OP_LESSEQ = 303,
    OP_GREATEREQ = 304,
    ASSIGN = 305,
    UMINUS = 306,
    UPLUS = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "ptucc_parser.y" /* yacc.c:355  */

	char* crepr;

#line 172 "ptucc_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 189 "ptucc_parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   548

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      62,    63,    56,    55,    64,    54,    60,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    61,
      52,    51,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   130,   132,   134,   136,   137,   139,   140,
     143,   144,   146,   148,   149,   151,   152,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   185,   186,   188,
     189,   190,   191,   192,   194,   196,   197,   199,   200,   202,
     203,   204,   205,   207,   208,   210,   211,   213,   214,   215,
     216,   218,   219,   221,   223,   224,   225,   226,   228,   229,
     231,   232,   233,   234,   236,   238,   239,   241,   242,   244,
     245,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264
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
  "KW_TYPE", "LIB_RS", "LIB_RI", "LIB_RR", "KW_TRUE", "KW_FALSE",
  "CAST_INTEGER", "CAST_BOOLEAN", "CAST_CHAR", "CAST_REAL", "OP_INEQUAL",
  "OP_LESSEQ", "OP_GREATEREQ", "ASSIGN", "'='", "'<'", "'>'", "'-'", "'+'",
  "'*'", "'/'", "UMINUS", "UPLUS", "'.'", "';'", "'('", "')'", "','",
  "':'", "'['", "']'", "$accept", "program", "program_decl", "main_body",
  "body", "statements", "statement_list", "statement", "proc_call",
  "arguments", "arglist", "expression", "data_type", "basic_data_type",
  "array_of_type", "type_declaration", "type_decl_list", "type_decl",
  "var_declaration", "var_decl_list", "var_decl", "subroutine_decl_list",
  "subroutine", "subroutine_decl", "sub_arg_decl_list", "sub_arg_decl",
  "subroutine_body", "var_ident", "array_call", "array_size",
  "instruction", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    61,    60,    62,    45,    43,    42,    47,   306,   307,
      46,    59,    40,    41,    44,    58,    91,    93
};
# endif

#define YYPACT_NINF -89

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-89)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      29,    12,    27,    25,     5,   -89,    70,    47,   -89,    26,
      70,   -89,    82,   -89,    22,   -89,    33,    37,   -89,    43,
      10,   -89,    50,    -3,   -89,   -89,   -89,   -89,    48,   -89,
     -89,    82,    82,    98,   298,   110,   112,    56,   -89,    25,
       2,   149,   242,    96,   -89,   -89,   -89,    62,    -3,   -89,
     -21,   298,    76,   125,   -89,   242,   127,   298,   242,   -89,
     122,    72,   -89,   -89,   -89,    73,    77,   -89,    47,    83,
     -26,   -89,    84,   -89,   -36,   -89,   -89,   -89,   -89,   242,
     -89,   -89,   242,   242,   242,   242,   242,   242,   242,   -89,
     289,   149,     4,   126,   242,   298,   101,   -89,   145,    49,
     -89,   379,   100,   132,   407,   -89,   298,     6,     7,   -89,
     233,    82,   102,   394,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   317,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   100,   108,   114,
      15,   149,   117,   111,   491,   -89,   236,   -89,   115,   119,
     121,   491,   298,   134,   242,   298,   -89,   120,    20,   129,
      23,    34,   162,   131,   -89,   233,   150,    -3,   -89,   -89,
      89,   -89,   -89,   178,     3,     3,     3,     3,     3,     3,
      18,    18,   -89,   -89,   -89,   -89,   233,   148,   -89,   -89,
     242,   152,   153,   157,   491,   158,   159,   160,   202,   242,
     491,   -89,   233,   172,   -89,   177,   298,   182,   -89,   183,
       8,   226,   -89,   233,   491,   189,   190,   193,   -89,   -89,
     -89,   298,   347,   198,   233,   -89,   254,   -89,   -89,   200,
      44,   149,   -89,   -89,   -89,   -89,   -89,   242,   242,   -89,
     205,   -89,   233,   203,   -89,   435,   463,   -89,   -89,   233,
     298,   298,   -89,   -89,   -89
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    55,     0,     1,     0,    63,     3,     0,
      56,    57,     0,    71,     0,    58,    85,     0,    65,     0,
       0,    53,     0,     0,    50,    52,    51,    49,     0,    47,
      48,     0,    64,     0,     6,     0,     0,     0,    72,    55,
       0,     0,     0,     0,    59,    86,    66,     0,     0,    67,
      87,     6,     0,     0,   102,     0,     0,     0,     0,    91,
       0,     7,     8,    10,    11,     0,     0,     2,    63,     0,
       0,    78,     0,    54,    87,    17,    18,    23,    20,     0,
      21,    22,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,    13,     0,     0,    88,     0,     0,
     101,     0,    87,     0,     0,     4,     0,     0,     0,    71,
       0,     0,     0,     0,    19,    35,    25,    26,    27,    28,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,    14,    15,   100,     0,     5,     0,     0,
       0,    93,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,    80,    24,
      44,    33,    34,    45,    39,    42,    43,    38,    40,    41,
      30,    29,    31,    32,    90,    60,     0,     0,    68,    12,
       0,     0,     0,     0,    92,     0,     0,     0,    94,     0,
      99,    98,     0,     0,    75,     0,     6,     0,    62,     0,
       0,     0,    70,     0,    16,     0,     0,     0,   106,   107,
     108,     0,     0,     0,     0,    74,     0,    73,    61,     0,
       0,     0,    69,   103,   104,   105,    95,     0,     0,    77,
       0,    84,     0,     0,    81,     0,     0,    76,    83,     0,
       0,     0,    82,    96,    97
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   -89,   -89,   -43,   -89,   -56,   -34,   -89,
     -89,    74,   -31,   -35,   -89,   228,   -89,   259,   204,   -89,
     238,   180,   -89,   -89,   -88,   181,   -89,     1,   -62,   -20,
     -89
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    37,    59,    60,    61,    62,    89,   142,
     143,    90,    28,    29,    30,     7,    10,    11,    13,    17,
      18,    20,    38,    39,    70,    71,   207,    72,    96,    97,
      64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      63,   103,    49,    43,   140,    16,    73,    16,    98,    16,
      16,    16,   114,    19,   124,     4,   125,    63,    34,   158,
     160,    41,    35,    63,    36,    21,    94,     5,    93,   124,
      42,   125,    45,    19,    22,   111,     1,   112,    23,   145,
     153,    94,   206,    24,    95,    42,    35,    25,    36,    26,
     156,    27,    74,    75,    76,    77,   138,   133,   134,   135,
     136,    63,     6,    42,    78,    69,     8,   139,    79,   157,
     159,   229,    63,     9,   135,   136,   111,    14,   187,   163,
      12,   111,   168,   203,   111,    16,   205,   148,   149,   150,
      80,    81,    82,    83,    84,    85,   198,    31,    32,   201,
     124,    21,   125,    86,    87,   111,   188,   243,    33,    44,
      47,    88,    40,    65,    48,    66,    67,   184,    63,    24,
      91,    63,   230,    25,    92,    26,    99,    27,   100,   101,
     102,   105,   104,   106,   209,   107,   127,   128,   129,   108,
     130,   131,   132,   133,   134,   135,   136,   211,   110,   113,
     141,   146,    21,   115,   147,   212,   116,   117,   118,   119,
     120,   121,   122,   226,   154,   236,    42,   165,   144,   185,
      24,   223,    63,   151,    25,   190,    26,   195,    27,   186,
     189,   196,   232,   197,   199,   202,    41,    63,   123,   124,
     204,   125,   208,   240,   253,   254,   244,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   248,   210,   213,   215,   216,    63,    63,   252,   217,
     194,   218,   219,   220,   221,   127,   128,   129,   200,   130,
     131,   132,   133,   134,   135,   136,    21,   224,   225,    74,
      75,    76,    77,   227,   228,    74,    75,    76,    77,   162,
     231,    78,   233,   234,    24,    79,   235,    78,    25,   239,
      26,    79,    27,   241,   214,   242,   247,    68,   249,    15,
      46,     0,   109,   222,   191,   192,   193,    80,    81,    82,
      83,    84,    85,    80,    81,    82,    83,    84,    85,   161,
      86,    87,   164,     0,     0,     0,    86,    87,    88,   123,
     124,    50,   125,     0,    88,     0,    51,     0,     0,     0,
       0,   245,   246,    52,     0,     0,    53,     0,    54,   126,
       0,    55,     0,     0,     0,     0,    56,   123,   124,    57,
     125,     0,    58,     0,     0,     0,   127,   128,   129,     0,
     130,   131,   132,   133,   134,   135,   136,   126,     0,     0,
       0,     0,     0,     0,     0,     0,   137,   123,   124,     0,
     125,     0,     0,     0,   127,   128,   129,     0,   130,   131,
     132,   133,   134,   135,   136,     0,     0,   126,     0,     0,
     169,     0,   237,   238,     0,     0,     0,     0,     0,   123,
     124,     0,   125,     0,   127,   128,   129,    21,   130,   131,
     132,   133,   134,   135,   136,   152,   166,     0,     0,   126,
     167,     0,     0,     0,     0,    24,     0,   123,   124,    25,
     125,    26,     0,    27,   155,     0,   127,   128,   129,     0,
     130,   131,   132,   133,   134,   135,   136,   126,     0,     0,
       0,     0,     0,     0,     0,   123,   124,     0,   125,     0,
       0,     0,   250,     0,   127,   128,   129,     0,   130,   131,
     132,   133,   134,   135,   136,   126,     0,     0,     0,     0,
       0,     0,     0,   123,   124,     0,   125,     0,     0,     0,
     251,     0,   127,   128,   129,     0,   130,   131,   132,   133,
     134,   135,   136,   126,     0,     0,     0,     0,     0,     0,
       0,   123,   124,     0,   125,     0,     0,     0,     0,     0,
     127,   128,   129,     0,   130,   131,   132,   133,   134,   135,
     136,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   127,   128,
     129,     0,   130,   131,   132,   133,   134,   135,   136
};

static const yytype_int16 yycheck[] =
{
      34,    57,    33,    23,    92,     3,    41,     3,    51,     3,
       3,     3,    74,    12,    11,     3,    13,    51,     8,   107,
     108,    24,    12,    57,    14,     3,    62,     0,    48,    11,
      66,    13,    31,    32,    12,    61,     7,    63,    16,    95,
     102,    62,     8,    21,    65,    66,    12,    25,    14,    27,
     106,    29,     3,     4,     5,     6,    91,    54,    55,    56,
      57,    95,    37,    66,    15,    63,    61,    63,    19,    63,
      63,    63,   106,     3,    56,    57,    61,    51,    63,   110,
      33,    61,   113,    63,    61,     3,    63,    38,    39,    40,
      41,    42,    43,    44,    45,    46,   152,    64,    61,   155,
      11,     3,    13,    54,    55,    61,   141,    63,    65,    61,
      12,    62,    62,     3,    16,     3,    60,   137,   152,    21,
      24,   155,   210,    25,    62,    27,    50,    29,     3,    55,
       3,     9,    58,    61,   165,    62,    47,    48,    49,    62,
      51,    52,    53,    54,    55,    56,    57,   167,    65,    65,
      24,    50,     3,    79,     9,   186,    82,    83,    84,    85,
      86,    87,    88,   206,    32,   221,    66,    65,    94,    61,
      21,   202,   206,    99,    25,    64,    27,    62,    29,    65,
      63,    62,   213,    62,    50,    65,    24,   221,    10,    11,
      61,    13,    61,   224,   250,   251,   231,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   242,    62,    65,    62,    62,   250,   251,   249,    62,
     146,    63,    63,    63,    22,    47,    48,    49,   154,    51,
      52,    53,    54,    55,    56,    57,     3,    65,    61,     3,
       4,     5,     6,    61,    61,     3,     4,     5,     6,    16,
      24,    15,    63,    63,    21,    19,    63,    15,    25,    61,
      27,    19,    29,     9,   190,    65,    61,    39,    65,    10,
      32,    -1,    68,   199,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    41,    42,    43,    44,    45,    46,   109,
      54,    55,   111,    -1,    -1,    -1,    54,    55,    62,    10,
      11,     3,    13,    -1,    62,    -1,     8,    -1,    -1,    -1,
      -1,   237,   238,    15,    -1,    -1,    18,    -1,    20,    30,
      -1,    23,    -1,    -1,    -1,    -1,    28,    10,    11,    31,
      13,    -1,    34,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    10,    11,    -1,
      13,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    30,    -1,    -1,
      63,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    10,
      11,    -1,    13,    -1,    47,    48,    49,     3,    51,    52,
      53,    54,    55,    56,    57,    26,    12,    -1,    -1,    30,
      16,    -1,    -1,    -1,    -1,    21,    -1,    10,    11,    25,
      13,    27,    -1,    29,    17,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,    -1,
      -1,    -1,    17,    -1,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    13,    -1,    -1,    -1,
      17,    -1,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    69,    70,     3,     0,    37,    83,    61,     3,
      84,    85,    33,    86,    51,    85,     3,    87,    88,    95,
      89,     3,    12,    16,    21,    25,    27,    29,    80,    81,
      82,    64,    61,    65,     8,    12,    14,    71,    90,    91,
      62,    24,    66,    97,    61,    95,    88,    12,    16,    80,
       3,     8,    15,    18,    20,    23,    28,    31,    34,    72,
      73,    74,    75,    76,    98,     3,     3,    60,    83,    63,
      92,    93,    95,    81,     3,     4,     5,     6,    15,    19,
      41,    42,    43,    44,    45,    46,    54,    55,    62,    76,
      79,    24,    62,    97,    62,    65,    96,    97,    73,    50,
       3,    79,     3,    75,    79,     9,    61,    62,    62,    86,
      65,    61,    63,    65,    96,    79,    79,    79,    79,    79,
      79,    79,    79,    10,    11,    13,    30,    47,    48,    49,
      51,    52,    53,    54,    55,    56,    57,    67,    81,    63,
      92,    24,    77,    78,    79,    75,    50,     9,    38,    39,
      40,    79,    26,    96,    32,    17,    75,    63,    92,    63,
      92,    89,    16,    80,    93,    65,    12,    16,    80,    63,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    97,    61,    65,    63,    81,    63,
      64,    38,    39,    40,    79,    62,    62,    62,    75,    50,
      79,    75,    65,    63,    61,    63,     8,    94,    61,    80,
      62,    97,    80,    65,    79,    62,    62,    62,    63,    63,
      63,    22,    79,    80,    65,    61,    73,    61,    61,    63,
      92,    24,    80,    63,    63,    63,    75,    35,    36,    61,
      80,     9,    65,    63,    81,    79,    79,    61,    80,    65,
      17,    17,    80,    75,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    71,    72,    73,    73,    74,    74,
      75,    75,    76,    77,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    80,    80,    81,
      81,    81,    81,    81,    82,    83,    83,    84,    84,    85,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    89,    89,    90,    91,    91,    91,    91,    92,    92,
      93,    93,    93,    93,    94,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     3,     3,     3,     0,     1,     1,     3,
       1,     1,     4,     0,     1,     1,     3,     1,     1,     2,
       1,     1,     1,     1,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     2,     1,     2,     4,
       7,     9,     8,     0,     3,     1,     3,     3,     6,     8,
       7,     0,     2,     6,     6,     5,     8,     7,     1,     3,
       3,     6,     8,     7,     3,     1,     3,     0,     1,     3,
       4,     1,     4,     3,     4,     6,     9,     9,     4,     4,
       3,     2,     1,     6,     6,     6,     5,     5,     5
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
#line 115 "ptucc_parser.y" /* yacc.c:1646  */
    { 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* Program %s */ \n\n", (yyvsp[-5].crepr));
		printf("/* Type declaration: */\n%s\n", (yyvsp[-4].crepr));
		printf("/* Variable declaration: */\n%s\n", (yyvsp[-3].crepr));
		printf("/* Function declaration: */\n%s", (yyvsp[-2].crepr));
		printf("/* Main: */\nint main() %s \n", (yyvsp[-1].crepr));
	}
}
#line 1512 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 130 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1518 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 132 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("{\n\t%s\nreturn 0;\n\n}\n", (yyvsp[-1].crepr)); }
#line 1524 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 134 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n\t{\n\t%s\t}\n", (yyvsp[-1].crepr)); }
#line 1530 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 136 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1536 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 137 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1542 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 140 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\t%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1548 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 143 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;\n", (yyvsp[0].crepr)); }
#line 1554 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 144 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1560 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 146 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1566 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 148 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1572 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 149 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1578 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 151 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1584 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 152 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1590 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 154 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr)); }
#line 1596 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 155 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr)); }
#line 1602 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 156 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1608 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 157 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("result"); }
#line 1614 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 158 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("1"); }
#line 1620 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 159 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("0"); }
#line 1626 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 160 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = string_ptuc2c((yyvsp[0].crepr)); }
#line 1632 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 161 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)", (yyvsp[-1].crepr)); }
#line 1638 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 162 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(int)%s", (yyvsp[0].crepr)); }
#line 1644 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 163 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(int)%s", (yyvsp[0].crepr)); }
#line 1650 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 164 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(char)%s", (yyvsp[0].crepr)); }
#line 1656 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 165 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(double)%s", (yyvsp[0].crepr)); }
#line 1662 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 166 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1668 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 167 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1674 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1680 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 169 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1686 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 170 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1692 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 171 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %% %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1698 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 172 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("!%s", (yyvsp[0].crepr)); }
#line 1704 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 173 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr)); }
#line 1710 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 174 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1716 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 175 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1722 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 176 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1728 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 177 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s < %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1734 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 178 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1740 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 179 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1746 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 180 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1752 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 181 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1758 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 182 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1764 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 183 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1770 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 185 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1776 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 186 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1782 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 188 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("int"); }
#line 1788 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 189 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("int"); }
#line 1794 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 190 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("char"); }
#line 1800 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 191 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("double"); }
#line 1806 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 192 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1812 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 194 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*", (yyvsp[0].crepr)); }
#line 1818 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 196 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1824 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 197 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1830 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 199 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1836 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 200 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1842 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 202 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1848 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 203 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s%s;\n", (yyvsp[-1].crepr), (yyvsp[-6].crepr), (yyvsp[-3].crepr)); }
#line 1854 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 204 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s (*%s)(%s);\n", (yyvsp[-1].crepr), (yyvsp[-8].crepr), (yyvsp[-4].crepr)); }
#line 1860 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 205 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s (*%s)();\n", (yyvsp[-1].crepr), (yyvsp[-7].crepr)); }
#line 1866 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 207 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1872 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 208 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1878 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 210 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1884 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 211 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1890 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 213 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;\n", (yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1896 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 214 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s%s;\n", (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr)); }
#line 1902 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 215 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s (*%s)(%s);\n", (yyvsp[0].crepr), (yyvsp[-7].crepr), (yyvsp[-3].crepr)); }
#line 1908 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 216 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s (*%s)();\n", (yyvsp[0].crepr), (yyvsp[-6].crepr)); }
#line 1914 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 218 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1920 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1926 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 221 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\t%s\t%s\n\t%s%s}\n\n", (yyvsp[-5].crepr), (yyvsp[-4].crepr), (yyvsp[-3].crepr), (yyvsp[-2].crepr), (yyvsp[-1].crepr)); }
#line 1932 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 223 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("void %s(%s)\n{\n", (yyvsp[-4].crepr), (yyvsp[-2].crepr));  }
#line 1938 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 224 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("void %s()\n{\n", (yyvsp[-3].crepr));  }
#line 1944 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 225 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s(%s)\n{\n\t%s result;\n", (yyvsp[-1].crepr), (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr));  }
#line 1950 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 226 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s()\n{\n%s result;\n", (yyvsp[-1].crepr), (yyvsp[-5].crepr), (yyvsp[-1].crepr));  }
#line 1956 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 228 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1962 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 229 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1968 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 231 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = fix_subroutine_idents((yyvsp[-2].crepr), (yyvsp[0].crepr), NULL); }
#line 1974 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 232 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = fix_subroutine_idents((yyvsp[-5].crepr), (yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1980 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 233 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s (*%s)(%s)", (yyvsp[0].crepr), (yyvsp[-7].crepr), (yyvsp[-3].crepr)); }
#line 1986 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 234 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s (*%s)()", (yyvsp[0].crepr), (yyvsp[-6].crepr)); }
#line 1992 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 236 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 1998 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 238 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 2004 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 239 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2010 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 241 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 2016 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 242 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2022 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 244 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]", (yyvsp[-1].crepr)); }
#line 2028 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 245 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2034 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 247 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2040 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 248 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s = %s;\n", (yyvsp[-3].crepr), (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2046 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 249 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("result = %s;\n", (yyvsp[0].crepr)); }
#line 2052 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 250 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if (%s) %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2058 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 251 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if (%s) %s\telse %s", (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2064 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 252 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("for (%s%s = %s; %s%s <= %s; %s%s++) %s", (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[-2].crepr), (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr)); }
#line 2070 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 253 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("for (%s%s = %s; %s%s >= %s; %s%s--) %s", (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[-2].crepr), (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr)); }
#line 2076 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 254 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("while (%s) %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2082 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 255 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("do%s\twhile (!%s);\n", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2088 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 256 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s:%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2094 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 257 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("goto %s;\n", (yyvsp[0].crepr)); }
#line 2100 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 258 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return result;\n"); }
#line 2106 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 259 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%s\", &%s%s);\n", (yyvsp[-5].crepr), (yyvsp[-4].crepr)); }
#line 2112 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 260 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%d\", &%s%s);\n", (yyvsp[-5].crepr), (yyvsp[-4].crepr)); }
#line 2118 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 261 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%lf\", &%s%s);\n", (yyvsp[-5].crepr), (yyvsp[-4].crepr)); }
#line 2124 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 262 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%s\", &result);\n"); }
#line 2130 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 263 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%d\", &result);\n"); }
#line 2136 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 264 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%lf\", &result);\n"); }
#line 2142 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2146 "ptucc_parser.tab.c" /* yacc.c:1646  */
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
#line 266 "ptucc_parser.y" /* yacc.c:1906  */


