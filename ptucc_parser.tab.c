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
#line 11 "ptucc_parser.y" /* yacc.c:355  */

	char* crepr;

#line 169 "ptucc_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 186 "ptucc_parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   421

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  158

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
       0,   102,   102,   118,   120,   122,   123,   125,   126,   129,
     130,   132,   134,   135,   137,   138,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   171,   172,   175,   176,   177,
     178,   179,   181,   183,   184,   186,   187,   189,   190,   193,
     194,   196,   197,   199,   200,   203,   204,   206,   207,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220
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
  "expression", "data_type", "basic_data_type", "array_of_type",
  "type_declaration", "type_decl_list", "type_decl", "var_declaration",
  "var_decl_list", "var_decl", "var_ident", "array_size", "instruction", YY_NULLPTR
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

#define YYPACT_NINF -53

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-53)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,     5,     9,   -30,   -40,   -53,    19,    -9,   -53,   -23,
      19,   -53,    23,    22,     7,   -53,   -28,   -17,   -53,   -27,
     384,   -19,   -53,   -18,   -53,   -53,   -53,   -53,   -16,   -53,
     -53,    23,    23,   392,   -43,    -7,    40,   -53,     8,    52,
     384,     8,   -53,    54,    -6,   -53,   -53,   -53,   -53,   216,
       8,    37,   -53,   -53,   -53,   -18,   -53,     8,     8,   384,
       8,   -53,     6,   -53,   -53,   -53,     8,   -53,   -53,     8,
       8,     8,     8,     8,     8,     8,   -53,   212,    17,    44,
     237,   -53,   384,   -53,   157,   216,    51,   312,    21,    16,
     312,   -53,   312,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
      43,     8,     8,     8,   384,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,   384,   -53,
      15,    24,   216,   -53,     8,   -53,   332,   -53,   -53,    57,
     130,    18,    18,    18,    18,    18,    18,     4,     4,   -53,
     -53,   182,   312,   -53,   -53,   -53,   -53,   312,   384,     8,
       8,   -53,   262,   287,   384,   384,   -53,   -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    53,     0,     1,     0,    59,     3,     0,
      54,    55,     0,     0,     0,    56,    65,     0,    61,     0,
       5,     0,    51,     0,    48,    50,    49,    47,     0,    45,
      46,     0,    60,     0,     0,     0,     0,    80,     0,     0,
       0,     0,    69,     0,     6,     7,     9,    10,     2,     0,
       0,     0,    57,    66,    62,     0,    63,     0,    12,     0,
       0,    79,    18,    16,    17,    21,     0,    19,    20,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     4,     0,    52,     0,     0,     0,    70,     0,    13,
      14,    78,    71,    33,    23,    24,    25,    26,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
      67,     0,     0,    11,     0,    22,    42,    31,    32,    72,
      43,    37,    40,    41,    36,    38,    39,    28,    27,    29,
      30,     0,    77,    76,    68,    58,    64,    15,     0,     0,
       0,    73,     0,     0,     0,     0,    74,    75
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -53,    70,   -53,   -53,   -38,   -20,   -53,   -53,
      49,    53,   -48,   -53,   -53,   -53,    75,   -53,   -53,    68,
      71,   -52,   -53
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    42,    43,    44,    45,    76,    88,    89,
      77,    28,    29,    30,     7,    10,    11,    13,    17,    18,
      19,    51,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      46,    83,    79,    86,    57,     1,    49,     6,     4,     5,
      22,    62,    63,    64,    65,   102,    58,   103,     8,    59,
      46,    91,     9,    23,    12,    14,    16,    66,    24,   102,
      20,   103,    25,    31,    26,    33,    27,   121,    48,    46,
      60,    32,    52,    61,   119,    50,    67,    68,    69,    70,
      71,    72,    82,   101,   102,    78,   103,   114,   115,    73,
      74,    85,    46,    81,   116,    58,   129,    75,   144,   112,
     113,   114,   115,   105,   146,   122,   117,   124,    50,   148,
     143,   123,   145,    21,    46,    15,    56,   106,   107,   108,
      80,   109,   110,   111,   112,   113,   114,   115,    46,    84,
      54,     0,    53,   125,     0,     0,    87,    90,     0,    92,
     151,     0,     0,     0,     0,    93,   156,   157,    94,    95,
      96,    97,    98,    99,   100,     0,     0,     0,    46,     0,
       0,     0,     0,     0,    46,    46,     0,     0,     0,     0,
     101,   102,     0,   103,     0,     0,     0,     0,     0,     0,
     126,   127,   128,     0,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   101,   102,     0,
     103,     0,     0,   147,   106,   107,   108,     0,   109,   110,
     111,   112,   113,   114,   115,     0,     0,   105,     0,     0,
       0,     0,   101,   102,     0,   103,     0,     0,   152,   153,
       0,   106,   107,   108,     0,   109,   110,   111,   112,   113,
     114,   115,   105,     0,     0,     0,     0,   149,   150,    22,
       0,   120,   101,   102,     0,   103,   106,   107,   108,     0,
     109,   110,   111,   112,   113,   114,   115,    24,   104,     0,
       0,    25,   105,    26,     0,    27,     0,   101,   102,     0,
     103,     0,     0,     0,   118,     0,   106,   107,   108,     0,
     109,   110,   111,   112,   113,   114,   115,   105,     0,     0,
       0,     0,   101,   102,     0,   103,     0,     0,     0,   154,
       0,   106,   107,   108,     0,   109,   110,   111,   112,   113,
     114,   115,   105,     0,     0,     0,     0,   101,   102,     0,
     103,     0,     0,     0,   155,     0,   106,   107,   108,     0,
     109,   110,   111,   112,   113,   114,   115,   105,     0,     0,
       0,     0,   101,   102,     0,   103,     0,     0,     0,     0,
       0,   106,   107,   108,     0,   109,   110,   111,   112,   113,
     114,   115,   105,   102,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,     0,
     109,   110,   111,   112,   113,   114,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,     0,
     109,   110,   111,   112,   113,   114,   115,    34,     0,     0,
       0,     0,    20,     0,     0,    22,     0,     0,     0,    35,
       0,     0,    36,     0,    37,     0,     0,    38,    55,     0,
       0,     0,    39,    24,     0,    40,     0,    25,    41,    26,
       0,    27
};

static const yytype_int16 yycheck[] =
{
      20,    49,    40,    55,    47,     7,    24,    37,     3,     0,
       3,     3,     4,     5,     6,    11,    59,    13,    58,    62,
      40,    59,     3,    16,    33,    48,     3,    19,    21,    11,
       8,    13,    25,    61,    27,    62,    29,    85,    57,    59,
      47,    58,    58,     3,    82,    63,    38,    39,    40,    41,
      42,    43,    58,    10,    11,     3,    13,    53,    54,    51,
      52,    24,    82,     9,    47,    59,   104,    59,   120,    51,
      52,    53,    54,    30,   122,    24,    32,    61,    63,    22,
     118,    60,    58,    13,   104,    10,    33,    44,    45,    46,
      41,    48,    49,    50,    51,    52,    53,    54,   118,    50,
      32,    -1,    31,    60,    -1,    -1,    57,    58,    -1,    60,
     148,    -1,    -1,    -1,    -1,    66,   154,   155,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,   154,   155,    -1,    -1,    -1,    -1,
      10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,    -1,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    10,    11,    -1,
      13,    -1,    -1,   124,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    10,    11,    -1,    13,    -1,    -1,   149,   150,
      -1,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    30,    -1,    -1,    -1,    -1,    35,    36,     3,
      -1,    64,    10,    11,    -1,    13,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    21,    26,    -1,
      -1,    25,    30,    27,    -1,    29,    -1,    10,    11,    -1,
      13,    -1,    -1,    -1,    17,    -1,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    30,    -1,    -1,
      -1,    -1,    10,    11,    -1,    13,    -1,    -1,    -1,    17,
      -1,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    30,    -1,    -1,    -1,    -1,    10,    11,    -1,
      13,    -1,    -1,    -1,    17,    -1,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    30,    -1,    -1,
      -1,    -1,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    30,    11,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,     3,    -1,    -1,
      -1,    -1,     8,    -1,    -1,     3,    -1,    -1,    -1,    15,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    16,    -1,
      -1,    -1,    28,    21,    -1,    31,    -1,    25,    34,    27,
      -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    66,    67,     3,     0,    37,    79,    58,     3,
      80,    81,    33,    82,    48,    81,     3,    83,    84,    85,
       8,    68,     3,    16,    21,    25,    27,    29,    76,    77,
      78,    61,    58,    62,     3,    15,    18,    20,    23,    28,
      31,    34,    68,    69,    70,    71,    72,    87,    57,    24,
      63,    86,    58,    85,    84,    16,    76,    47,    59,    62,
      47,     3,     3,     4,     5,     6,    19,    38,    39,    40,
      41,    42,    43,    51,    52,    59,    72,    75,     3,    71,
      75,     9,    58,    77,    75,    24,    86,    75,    73,    74,
      75,    71,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    10,    11,    13,    26,    30,    44,    45,    46,    48,
      49,    50,    51,    52,    53,    54,    47,    32,    17,    71,
      64,    77,    24,    60,    61,    60,    75,    75,    75,    71,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    71,    86,    58,    77,    75,    22,    35,
      36,    71,    75,    75,    17,    17,    71,    71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    68,    69,    69,    70,    70,    71,
      71,    72,    73,    73,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     3,     3,     0,     1,     1,     3,     1,
       1,     4,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     2,     1,     2,     4,     7,     0,
       3,     1,     3,     3,     6,     1,     3,     3,     4,     1,
       3,     3,     4,     6,     8,     8,     4,     4,     3,     2,
       1
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
#line 103 "ptucc_parser.y" /* yacc.c:1646  */
    { 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* Program %s */ \n\n", (yyvsp[-4].crepr));
		printf("/* Type declaration: */\n%s\n", (yyvsp[-3].crepr));
		printf("/* Variable declaration: */\n%s\n", (yyvsp[-2].crepr));
		//printf("/* Function declaration: */\n%s", $4);
		printf("/* Main: */\nint main() %s \n", (yyvsp[-1].crepr));
	}
}
#line 1444 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 118 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1450 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 120 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("{\n%s }\n", (yyvsp[-1].crepr)); }
#line 1456 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 122 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1462 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 123 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1468 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 126 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1474 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 129 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;\n", (yyvsp[0].crepr)); }
#line 1480 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 130 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1486 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 132 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1492 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 134 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1498 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 135 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1504 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 137 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1510 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 138 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1516 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 140 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr)); }
#line 1522 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 141 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr)); }
#line 1528 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 142 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr)); }
#line 1534 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 143 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("1"); }
#line 1540 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 144 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("0"); }
#line 1546 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 145 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = string_ptuc2c((yyvsp[0].crepr)); }
#line 1552 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 146 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)", (yyvsp[-1].crepr)); }
#line 1558 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 147 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(int)%s", (yyvsp[0].crepr)); }
#line 1564 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 148 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(int)%s", (yyvsp[0].crepr)); }
#line 1570 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 149 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(char)%s", (yyvsp[0].crepr)); }
#line 1576 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 150 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(double)%s", (yyvsp[0].crepr)); }
#line 1582 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 151 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1588 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 152 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1594 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 153 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1600 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 154 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1606 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 155 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1612 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 156 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s % %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1618 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 157 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("!%s", (yyvsp[0].crepr)); }
#line 1624 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 158 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr)); }
#line 1630 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 159 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1636 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 160 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1642 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 161 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1648 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 162 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s < %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1654 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 163 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1660 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 164 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1666 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 165 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1672 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 166 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1678 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 167 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1684 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 168 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1690 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 171 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1696 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 172 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1702 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 175 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("int"); }
#line 1708 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 176 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("int"); }
#line 1714 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 177 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("char"); }
#line 1720 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 178 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("double"); }
#line 1726 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 179 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1732 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 181 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*", (yyvsp[0].crepr)); }
#line 1738 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 183 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1744 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 184 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1750 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 186 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1756 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 187 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1762 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 189 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1768 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 190 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s%s;\n", (yyvsp[-1].crepr), (yyvsp[-6].crepr), (yyvsp[-3].crepr)); }
#line 1774 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 193 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1780 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 194 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1786 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 196 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1792 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 197 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1798 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 199 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;\n", (yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1804 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 200 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s%s;\n", (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr)); }
#line 1810 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 203 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1816 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 204 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1822 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 206 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]", (yyvsp[-1].crepr)); }
#line 1828 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 207 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1834 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 209 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1840 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 210 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s;\n", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1846 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 211 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return %s;\n", (yyvsp[0].crepr)); }
#line 1852 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 212 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if (%s)\n%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1858 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 213 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if (%s)\n%selse %s", (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1864 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 214 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("for (%s = %s; %s <= %s; %s++)\n%s", (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-6].crepr), (yyvsp[-2].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr)); }
#line 1870 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 215 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("for (%s = %s; %s >= %s; %s--) %s", (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-6].crepr), (yyvsp[-2].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr)); }
#line 1876 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 216 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("while (%s) %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1882 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 217 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("do\n%swhile (%s);\n", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1888 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 218 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s:%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1894 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 219 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("goto %s;\n", (yyvsp[0].crepr)); }
#line 1900 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 220 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("break;\n"); }
#line 1906 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 1910 "ptucc_parser.tab.c" /* yacc.c:1646  */
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
#line 222 "ptucc_parser.y" /* yacc.c:1906  */


