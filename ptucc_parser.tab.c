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
#define YYLAST   513

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

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
       0,   113,   113,   129,   131,   133,   134,   136,   137,   140,
     141,   143,   145,   146,   148,   149,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   182,   183,   186,   187,
     188,   189,   190,   192,   194,   195,   197,   198,   200,   201,
     204,   205,   207,   208,   210,   211,   214,   215,   217,   219,
     220,   221,   222,   224,   225,   227,   228,   233,   235,   236,
     238,   239,   241,   242,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261
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
  "':'", "'['", "']'", "$accept", "program", "program_decl", "body",
  "statements", "statement_list", "statement", "proc_call", "arguments",
  "arglist", "expression", "data_type", "basic_data_type", "array_of_type",
  "type_declaration", "type_decl_list", "type_decl", "var_declaration",
  "var_decl_list", "var_decl", "subroutine_decl_list", "subroutine",
  "subroutine_decl", "sub_arg_decl_list", "sub_arg_decl",
  "subproutine_body", "var_ident", "array_call", "array_size",
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

#define YYPACT_NINF -55

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-55)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,     7,    30,    -6,   -22,   -55,    40,    13,   -55,    34,
      40,   -55,    58,   -55,   120,   -55,    16,    33,   -55,    31,
       9,   -55,   -17,   -55,   -55,   -55,   -55,    36,   -55,   -55,
      58,    58,   339,   209,    87,    95,    39,   -55,    -6,   129,
     216,    76,   -55,   -55,   -55,   -17,   -55,   -54,    51,   100,
     -55,   216,   103,   209,   216,   -55,   111,    60,   -55,   -55,
     -55,    62,    63,   -55,    13,   -55,   -37,   -55,   -55,   -55,
     -55,   216,   -55,   -55,   216,   216,   216,   216,   216,   216,
     216,   -55,   234,   129,    98,   216,   209,    79,   -55,    29,
     -55,   324,    64,    94,   352,   -55,   209,    -1,     2,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   262,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,    64,    70,   129,    71,    69,   436,   -55,
      73,    75,    78,    81,   436,   209,    96,   216,   209,   -55,
      83,   -21,   -55,    92,    77,    32,    10,   -55,   456,   -55,
     -55,     3,    53,    53,    53,    53,    53,    53,    25,    25,
     -55,   -55,   -55,   -55,   -55,   -55,   216,    91,    99,   109,
     436,   112,   113,   115,   152,   216,   436,   -55,   367,    58,
     116,   395,   -55,   121,   209,   122,   436,   124,   125,   126,
     -55,   -55,   -55,   209,   292,   160,   130,   -55,   367,   -17,
     -55,   -55,   181,   -55,   -55,   -55,   -55,   -55,   216,   216,
     -55,   131,   169,   -55,   380,   408,   -55,   129,   209,   209,
     -55,   -55,   -55
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    54,     0,     1,     0,    60,     3,     0,
      55,    56,     0,    66,     0,    57,    78,     0,    62,     0,
       0,    52,     0,    49,    51,    50,    48,     0,    46,    47,
       0,    61,     0,     5,     0,     0,     0,    67,    54,     0,
       0,     0,    58,    79,    63,     0,    64,    80,     0,     0,
      95,     0,     0,     0,     0,    84,     0,     6,     7,     9,
      10,     0,     0,     2,    60,    53,    80,    16,    17,    22,
      19,     0,    20,    21,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,    12,     0,     0,    81,     0,
      94,     0,    80,     0,     0,     4,     0,     0,     0,    66,
      18,    34,    24,    25,    26,    27,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,     0,     0,    13,    14,    93,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     8,
       0,     0,    73,     0,     0,     0,     0,    23,    43,    32,
      33,    44,    38,    41,    42,    37,    39,    40,    29,    28,
      30,    31,    83,    59,    65,    11,     0,     0,     0,     0,
      85,     0,     0,     0,    87,     0,    92,    91,     0,     0,
       0,     0,    70,     0,     5,     0,    15,     0,     0,     0,
      99,   100,   101,     0,     0,     0,     0,    74,     0,     0,
      75,    69,     0,    68,    96,    97,    98,    88,     0,     0,
      72,     0,     0,    77,     0,     0,    71,     0,     0,     0,
      76,    89,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   -55,   -55,   174,    11,   -55,   -49,   -33,   -55,   -55,
      88,   -26,   -38,   -55,   158,   -55,   201,   149,   -55,   183,
     117,   -55,   -55,   128,    44,   -55,    -3,   -51,   -19,   -55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    55,    56,    57,    58,    81,   126,   127,
      82,    27,    28,    29,     7,    10,    11,    13,    17,    18,
      20,    37,    38,   141,   142,   185,   143,    87,    88,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      59,    65,    16,    41,    93,    16,    46,    39,    85,    19,
       4,    86,    40,   109,   110,   100,   111,    33,   184,     1,
      59,    34,    34,    35,    35,    85,    84,    43,    19,    40,
       5,     6,    66,    67,    68,    69,   110,   129,   111,     8,
     179,   136,   180,     9,    70,   124,    12,   139,    71,    40,
     113,   114,   115,    59,   116,   117,   118,   119,   120,   121,
     122,    16,   140,    59,   110,   144,   111,   131,   132,   133,
      72,    73,    74,    75,    76,    77,    66,    67,    68,    69,
      30,   121,   122,    78,    79,    14,   174,   164,    70,   177,
      61,    80,    71,   179,    31,   183,    32,    42,    62,    63,
      83,    89,    59,    90,   162,    59,    92,   119,   120,   121,
     122,   167,   168,   169,    72,    73,    74,    75,    76,    77,
      95,    96,   125,    21,    97,    98,   137,    78,    79,   130,
      40,   163,    21,   166,   165,    80,    22,   171,   182,    91,
     172,    23,    94,   173,   207,    24,   175,    25,   178,    26,
      23,    59,   196,   187,    24,   200,    25,   181,    26,   101,
      59,   188,   102,   103,   104,   105,   106,   107,   108,   221,
     222,   189,   211,   128,   193,   190,   191,   134,   192,   220,
     212,   198,   201,   203,    39,    59,    59,   204,   205,   206,
     213,   210,   216,   217,    36,   202,    64,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,    15,    47,    99,    44,     0,   146,    33,   170,    66,
      67,    68,    69,   197,    48,   176,   145,    49,     0,    50,
       0,    70,    51,     0,     0,    71,     0,    52,     0,     0,
      53,     0,     0,    54,   109,   110,     0,   111,     0,     0,
       0,     0,     0,     0,   186,     0,     0,    72,    73,    74,
      75,    76,    77,   194,   112,     0,     0,     0,     0,     0,
      78,    79,   109,   110,     0,   111,     0,     0,    80,     0,
       0,   113,   114,   115,     0,   116,   117,   118,   119,   120,
     121,   122,   112,     0,     0,     0,   214,   215,     0,     0,
       0,   123,   109,   110,     0,   111,     0,     0,     0,   113,
     114,   115,     0,   116,   117,   118,   119,   120,   121,   122,
       0,     0,   112,     0,     0,   147,     0,   208,   209,     0,
       0,     0,     0,     0,   109,   110,     0,   111,     0,   113,
     114,   115,    21,   116,   117,   118,   119,   120,   121,   122,
     135,     0,     0,     0,   112,    45,     0,     0,     0,     0,
      23,     0,   109,   110,    24,   111,    25,     0,    26,   138,
      21,   113,   114,   115,     0,   116,   117,   118,   119,   120,
     121,   122,   112,   195,     0,     0,     0,     0,    23,     0,
     109,   110,    24,   111,    25,     0,    26,   218,    21,   113,
     114,   115,     0,   116,   117,   118,   119,   120,   121,   122,
     112,   199,     0,     0,     0,     0,    23,     0,   109,   110,
      24,   111,    25,     0,    26,   219,     0,   113,   114,   115,
       0,   116,   117,   118,   119,   120,   121,   122,   112,     0,
       0,     0,     0,     0,     0,     0,   109,   110,     0,   111,
       0,     0,     0,     0,     0,   113,   114,   115,     0,   116,
     117,   118,   119,   120,   121,   122,   112,   110,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,   115,     0,   116,   117,   118,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,   115,     0,   116,   117,   118,
     119,   120,   121,   122
};

static const yytype_int16 yycheck[] =
{
      33,    39,     3,    22,    53,     3,    32,    24,    62,    12,
       3,    65,    66,    10,    11,    66,    13,     8,     8,     7,
      53,    12,    12,    14,    14,    62,    45,    30,    31,    66,
       0,    37,     3,     4,     5,     6,    11,    86,    13,    61,
      61,    92,    63,     3,    15,    83,    33,    96,    19,    66,
      47,    48,    49,    86,    51,    52,    53,    54,    55,    56,
      57,     3,    63,    96,    11,    63,    13,    38,    39,    40,
      41,    42,    43,    44,    45,    46,     3,     4,     5,     6,
      64,    56,    57,    54,    55,    51,   135,   125,    15,   138,
       3,    62,    19,    61,    61,    63,    65,    61,     3,    60,
      24,    50,   135,     3,   123,   138,     3,    54,    55,    56,
      57,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       9,    61,    24,     3,    62,    62,    32,    54,    55,    50,
      66,    61,     3,    64,    63,    62,    16,    62,    61,    51,
      62,    21,    54,    62,   193,    25,    50,    27,    65,    29,
      21,   184,   178,    62,    25,   181,    27,    65,    29,    71,
     193,    62,    74,    75,    76,    77,    78,    79,    80,   218,
     219,    62,   198,    85,    22,    63,    63,    89,    63,   217,
     199,    65,    61,    61,    24,   218,   219,    63,    63,    63,
       9,    61,    61,    24,    20,   184,    38,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    10,     3,    64,    31,    -1,    99,     8,   130,     3,
       4,     5,     6,   179,    15,   137,    98,    18,    -1,    20,
      -1,    15,    23,    -1,    -1,    19,    -1,    28,    -1,    -1,
      31,    -1,    -1,    34,    10,    11,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,   166,    -1,    -1,    41,    42,    43,
      44,    45,    46,   175,    30,    -1,    -1,    -1,    -1,    -1,
      54,    55,    10,    11,    -1,    13,    -1,    -1,    62,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    30,    -1,    -1,    -1,   208,   209,    -1,    -1,
      -1,    67,    10,    11,    -1,    13,    -1,    -1,    -1,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    30,    -1,    -1,    63,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    10,    11,    -1,    13,    -1,    47,
      48,    49,     3,    51,    52,    53,    54,    55,    56,    57,
      26,    -1,    -1,    -1,    30,    16,    -1,    -1,    -1,    -1,
      21,    -1,    10,    11,    25,    13,    27,    -1,    29,    17,
       3,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    30,    16,    -1,    -1,    -1,    -1,    21,    -1,
      10,    11,    25,    13,    27,    -1,    29,    17,     3,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      30,    16,    -1,    -1,    -1,    -1,    21,    -1,    10,    11,
      25,    13,    27,    -1,    29,    17,    -1,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    30,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    69,    70,     3,     0,    37,    82,    61,     3,
      83,    84,    33,    85,    51,    84,     3,    86,    87,    94,
      88,     3,    16,    21,    25,    27,    29,    79,    80,    81,
      64,    61,    65,     8,    12,    14,    71,    89,    90,    24,
      66,    96,    61,    94,    87,    16,    79,     3,    15,    18,
      20,    23,    28,    31,    34,    71,    72,    73,    74,    75,
      97,     3,     3,    60,    82,    80,     3,     4,     5,     6,
      15,    19,    41,    42,    43,    44,    45,    46,    54,    55,
      62,    75,    78,    24,    96,    62,    65,    95,    96,    50,
       3,    78,     3,    74,    78,     9,    61,    62,    62,    85,
      95,    78,    78,    78,    78,    78,    78,    78,    78,    10,
      11,    13,    30,    47,    48,    49,    51,    52,    53,    54,
      55,    56,    57,    67,    80,    24,    76,    77,    78,    74,
      50,    38,    39,    40,    78,    26,    95,    32,    17,    74,
      63,    91,    92,    94,    63,    91,    88,    63,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    96,    61,    80,    63,    64,    38,    39,    40,
      78,    62,    62,    62,    74,    50,    78,    74,    65,    61,
      63,    65,    61,    63,     8,    93,    78,    62,    62,    62,
      63,    63,    63,    22,    78,    16,    79,    92,    65,    16,
      79,    61,    72,    61,    63,    63,    63,    74,    35,    36,
      61,    79,    96,     9,    78,    78,    61,    24,    17,    17,
      80,    74,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    71,    72,    72,    73,    73,    74,
      74,    75,    76,    76,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    80,    80,
      80,    80,    80,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    89,    90,
      90,    90,    90,    91,    91,    92,    92,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     3,     3,     0,     1,     1,     3,     1,
       1,     4,     0,     1,     1,     3,     1,     1,     2,     1,
       1,     1,     1,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     2,     1,     2,     4,     7,
       0,     3,     1,     3,     3,     6,     0,     2,     6,     6,
       5,     8,     7,     1,     3,     3,     6,     3,     1,     3,
       0,     1,     3,     4,     1,     4,     3,     4,     6,     9,
       9,     4,     4,     3,     2,     1,     6,     6,     6,     5,
       5,     5
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
#line 114 "ptucc_parser.y" /* yacc.c:1646  */
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
#line 1495 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 129 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1501 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 131 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("{\n%s}\n", (yyvsp[-1].crepr)); }
#line 1507 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 133 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1513 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 134 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1519 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 137 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1525 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 140 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;\n", (yyvsp[0].crepr)); }
#line 1531 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 141 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1537 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 143 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1543 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 145 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1549 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 146 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1555 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 148 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1561 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 149 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1567 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 151 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr)); }
#line 1573 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 152 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr)); }
#line 1579 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 153 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1585 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 154 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("result"); }
#line 1591 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 155 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("1"); }
#line 1597 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 156 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("0"); }
#line 1603 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 157 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = string_ptuc2c((yyvsp[0].crepr)); }
#line 1609 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 158 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)", (yyvsp[-1].crepr)); }
#line 1615 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 159 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(int)%s", (yyvsp[0].crepr)); }
#line 1621 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 160 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(int)%s", (yyvsp[0].crepr)); }
#line 1627 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 161 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(char)%s", (yyvsp[0].crepr)); }
#line 1633 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 162 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(double)%s", (yyvsp[0].crepr)); }
#line 1639 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 163 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1645 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 164 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1651 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 165 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1657 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 166 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1663 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 167 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1669 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 168 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %% %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1675 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 169 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("!%s", (yyvsp[0].crepr)); }
#line 1681 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 170 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr)); }
#line 1687 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 171 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1693 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 172 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1699 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 173 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1705 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 174 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s < %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1711 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 175 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1717 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 176 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1723 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 177 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1729 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 178 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1735 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 179 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1741 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 180 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1747 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 182 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1753 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 183 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1759 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 186 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("int"); }
#line 1765 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 187 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("int"); }
#line 1771 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 188 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("char"); }
#line 1777 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 189 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("double"); }
#line 1783 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 190 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1789 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 192 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*", (yyvsp[0].crepr)); }
#line 1795 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 194 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1801 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 195 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1807 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 197 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1813 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 198 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1819 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 200 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1825 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 201 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s%s;\n", (yyvsp[-1].crepr), (yyvsp[-6].crepr), (yyvsp[-3].crepr)); }
#line 1831 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 204 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1837 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 205 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1843 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 207 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1849 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 208 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1855 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 210 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;\n", (yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1861 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 211 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s%s;\n", (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr)); }
#line 1867 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 214 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1873 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 215 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1879 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 217 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s%s\n%s\n%s}\n\n", (yyvsp[-5].crepr), (yyvsp[-4].crepr), (yyvsp[-3].crepr), (yyvsp[-2].crepr), (yyvsp[-1].crepr));  }
#line 1885 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 219 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("void %s(%s)\n{\n", (yyvsp[-4].crepr), (yyvsp[-2].crepr));  }
#line 1891 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 220 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("void %s()\n{\n", (yyvsp[-3].crepr));  }
#line 1897 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 221 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s(%s)\n{\n%s result;\n", (yyvsp[-1].crepr), (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr));  }
#line 1903 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 222 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s()\n{\n%s result;\n", (yyvsp[-1].crepr), (yyvsp[-5].crepr), (yyvsp[-1].crepr));  }
#line 1909 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 224 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1915 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 225 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1921 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 227 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = fix_subroutine_idents((yyvsp[-2].crepr), (yyvsp[0].crepr), NULL); }
#line 1927 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 228 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = fix_subroutine_idents((yyvsp[-5].crepr), (yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1933 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 233 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 1939 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 235 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1945 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 236 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1951 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 238 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1957 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 239 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1963 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 241 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]", (yyvsp[-1].crepr)); }
#line 1969 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 242 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1975 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 244 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1981 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 245 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s = %s;\n", (yyvsp[-3].crepr), (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1987 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 246 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("result = %s;\n", (yyvsp[0].crepr)); }
#line 1993 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 247 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if (%s)\n%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1999 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 248 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if (%s)\n%selse %s", (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2005 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 249 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("for (%s%s = %s; %s%s <= %s; %s%s++)\n%s", (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[-2].crepr), (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr)); }
#line 2011 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 250 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("for (%s%s = %s; %s%s >= %s; %s%s--) %s", (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[-2].crepr), (yyvsp[-7].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr)); }
#line 2017 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 251 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("while (%s) %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2023 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 252 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("do\n%swhile (%s);\n", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2029 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 253 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s:%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2035 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 254 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("goto %s;\n", (yyvsp[0].crepr)); }
#line 2041 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 255 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return result;\n"); }
#line 2047 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 256 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("gets(%s%s);\n", (yyvsp[-5].crepr), (yyvsp[-4].crepr)); }
#line 2053 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 257 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%d\", &%s%s);\n", (yyvsp[-5].crepr), (yyvsp[-4].crepr)); }
#line 2059 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 258 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%g\", &%s%s);\n", (yyvsp[-5].crepr), (yyvsp[-4].crepr)); }
#line 2065 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 259 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("gets(result);\n"); }
#line 2071 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 260 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%d\", &result);\n"); }
#line 2077 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 261 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%g\", &result);\n"); }
#line 2083 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2087 "ptucc_parser.tab.c" /* yacc.c:1646  */
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
#line 263 "ptucc_parser.y" /* yacc.c:1906  */


