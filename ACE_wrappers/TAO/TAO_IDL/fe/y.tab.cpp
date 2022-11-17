// $Id: y.tab.cpp 95761 2012-05-15 18:23:04Z johnnyw $
/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with tao_yy or TAO_YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define TAO_YYBISON 1

/* Bison version.  */
#define TAO_YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define TAO_YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define TAO_YYPURE 0

/* Push parsers.  */
#define TAO_YYPUSH 0

/* Pull parsers.  */
#define TAO_YYPULL 1

/* Using locations.  */
#define TAO_YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 73 "idl.tao_yy"

#include "utl_identifier.h"
#include "utl_err.h"
#include "utl_string.h"
#include "utl_strlist.h"
#include "utl_namelist.h"
#include "utl_exprlist.h"
#include "utl_labellist.h"
#include "utl_decllist.h"

#include "global_extern.h"
#include "nr_extern.h"

#include "ast_argument.h"
#include "ast_array.h"
#include "ast_attribute.h"
#include "ast_field.h"
#include "ast_expression.h"
#include "ast_operation.h"
#include "ast_generator.h"
#include "ast_template_module.h"
#include "ast_template_module_inst.h"
#include "ast_template_module_ref.h"
#include "ast_typedef.h"
#include "ast_valuebox.h"
#include "ast_valuetype.h"
#include "ast_valuetype_fwd.h"
#include "ast_eventtype.h"
#include "ast_eventtype_fwd.h"
#include "ast_component.h"
#include "ast_component_fwd.h"
#include "ast_home.h"
#include "ast_porttype.h"
#include "ast_connector.h"
#include "ast_uses.h"
#include "ast_constant.h"
#include "ast_union.h"
#include "ast_union_fwd.h"
#include "ast_structure_fwd.h"
#include "ast_extern.h"
#include "ast_enum.h"
#include "ast_root.h"
#include "ast_sequence.h"
#include "ast_string.h"
#include "ast_factory.h"
#include "ast_finder.h"
#include "ast_exception.h"
#include "ast_param_holder.h"
#include "ast_visitor_tmpl_module_inst.h"
#include "ast_visitor_tmpl_module_ref.h"
#include "ast_visitor_context.h"

#include "fe_declarator.h"
#include "fe_interface_header.h"
#include "fe_obv_header.h"
#include "fe_component_header.h"
#include "fe_home_header.h"
#include "fe_utils.h"

#if (defined(apollo) || defined(hpux)) && defined(__cplusplus)
extern  "C" int tao_yywrap();
#endif  // (defined(apollo) || defined(hpux)) && defined(__cplusplus)


void tao_yyerror (const char *);
int tao_yylex (void);
extern "C" int tao_yywrap (void);
extern char tao_yytext[];
extern int tao_yyleng;
AST_Enum *tao_enum_constant_decl = 0;
AST_Expression::ExprType t_param_const_type = AST_Expression::EV_none;
#define TAO_YYDEBUG_LEXER_TEXT (tao_yytext[tao_yyleng] = '\0', tao_yytext)
// Force the pretty debugging code to compile.
#define TAO_YYDEBUG 1


/* Line 189 of yacc.c  */
#line 150 "idl.tab.cc"

/* Enabling traces.  */
#ifndef TAO_YYDEBUG
# define TAO_YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef TAO_YYERROR_VERBOSE
# undef TAO_YYERROR_VERBOSE
# define TAO_YYERROR_VERBOSE 1
#else
# define TAO_YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef TAO_YYTOKEN_TABLE
# define TAO_YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef TAO_YYTOKENTYPE
# define TAO_YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum tao_yytokentype {
     IDENTIFIER = 258,
     IDL_CONST = 259,
     IDL_MODULE = 260,
     IDL_INTERFACE = 261,
     IDL_TYPEDEF = 262,
     IDL_LONG = 263,
     IDL_SHORT = 264,
     IDL_UNSIGNED = 265,
     IDL_DOUBLE = 266,
     IDL_FLOAT = 267,
     IDL_CHAR = 268,
     IDL_WCHAR = 269,
     IDL_OCTET = 270,
     IDL_BOOLEAN = 271,
     IDL_FIXED = 272,
     IDL_ANY = 273,
     IDL_OBJECT = 274,
     IDL_STRUCT = 275,
     IDL_UNION = 276,
     IDL_SWITCH = 277,
     IDL_ENUM = 278,
     IDL_SEQUENCE = 279,
     IDL_STRING = 280,
     IDL_WSTRING = 281,
     IDL_EXCEPTION = 282,
     IDL_CASE = 283,
     IDL_DEFAULT = 284,
     IDL_READONLY = 285,
     IDL_ATTRIBUTE = 286,
     IDL_ONEWAY = 287,
     IDL_IDEMPOTENT = 288,
     IDL_VOID = 289,
     IDL_IN = 290,
     IDL_OUT = 291,
     IDL_INOUT = 292,
     IDL_RAISES = 293,
     IDL_CONTEXT = 294,
     IDL_NATIVE = 295,
     IDL_LOCAL = 296,
     IDL_ABSTRACT = 297,
     IDL_CUSTOM = 298,
     IDL_FACTORY = 299,
     IDL_PRIVATE = 300,
     IDL_PUBLIC = 301,
     IDL_SUPPORTS = 302,
     IDL_TRUNCATABLE = 303,
     IDL_VALUETYPE = 304,
     IDL_COMPONENT = 305,
     IDL_CONSUMES = 306,
     IDL_EMITS = 307,
     IDL_EVENTTYPE = 308,
     IDL_FINDER = 309,
     IDL_GETRAISES = 310,
     IDL_HOME = 311,
     IDL_IMPORT = 312,
     IDL_MULTIPLE = 313,
     IDL_PRIMARYKEY = 314,
     IDL_PROVIDES = 315,
     IDL_PUBLISHES = 316,
     IDL_SETRAISES = 317,
     IDL_TYPEID = 318,
     IDL_TYPEPREFIX = 319,
     IDL_USES = 320,
     IDL_MANAGES = 321,
     IDL_TYPENAME = 322,
     IDL_PORT = 323,
     IDL_MIRRORPORT = 324,
     IDL_PORTTYPE = 325,
     IDL_CONNECTOR = 326,
     IDL_ALIAS = 327,
     IDL_INTEGER_LITERAL = 328,
     IDL_UINTEGER_LITERAL = 329,
     IDL_STRING_LITERAL = 330,
     IDL_CHARACTER_LITERAL = 331,
     IDL_FLOATING_PT_LITERAL = 332,
     IDL_TRUETOK = 333,
     IDL_FALSETOK = 334,
     IDL_SCOPE_DELIMITOR = 335,
     IDL_LEFT_SHIFT = 336,
     IDL_RIGHT_SHIFT = 337,
     IDL_WCHAR_LITERAL = 338,
     IDL_WSTRING_LITERAL = 339
   };
#endif



#if ! defined TAO_YYSTYPE && ! defined TAO_YYSTYPE_IS_DECLARED
typedef union TAO_YYSTYPE
{

/* Line 214 of yacc.c  */
#line 153 "idl.tao_yy"

  AST_Decl                      *dcval;         /* Decl value           */
  UTL_StrList                   *slval;         /* String list          */
  UTL_NameList                  *nlval;         /* Name list            */
  UTL_ExprList                  *elval;         /* Expression list      */
  UTL_LabelList                 *llval;         /* Label list           */
  UTL_DeclList                  *dlval;         /* Declaration list     */
  FE_InterfaceHeader            *ihval;         /* Interface header     */
  FE_OBVHeader                  *vhval;         /* Valuetype header     */
  FE_ComponentHeader            *chval;         /* Component header     */
  FE_HomeHeader                 *hhval;         /* Home header          */
  AST_Expression                *exval;         /* Expression value     */
  AST_UnionLabel                *ulval;         /* Union label          */
  AST_Field                     *ffval;         /* Field value          */
  AST_Field::Visibility         vival;          /* N/A, pub or priv     */
  AST_Expression::ExprType      etval;          /* Expression type      */
  AST_Argument::Direction       dival;          /* Argument direction   */
  AST_Operation::Flags          ofval;          /* Operation flags      */
  FE_Declarator                 *deval;         /* Declarator value     */
  ACE_CDR::Boolean              bval;           /* Boolean value        */
  ACE_CDR::LongLong             ival;           /* Long Long value      */
  ACE_CDR::ULongLong            uival;          /* Unsigned long long   */
  ACE_CDR::Double               dval;           /* Double value         */
  ACE_CDR::Float                fval;           /* Float value          */
  ACE_CDR::Char                 cval;           /* Char value           */
  ACE_CDR::WChar                wcval;          /* WChar value          */
  UTL_String                    *sval;          /* String value         */
  char                          *wsval;         /* WString value        */
  char                          *strval;        /* char * value         */
  Identifier                    *idval;         /* Identifier           */
  UTL_IdList                    *idlist;        /* Identifier list      */
  AST_Decl::NodeType            ntval;          /* Node type value      */
  FE_Utils::T_Param_Info        *pival;         /* Template interface param */
  FE_Utils::T_PARAMLIST_INFO    *plval;         /* List of template params */
  FE_Utils::T_ARGLIST           *alval;         /* List of template args */



/* Line 214 of yacc.c  */
#line 309 "idl.tab.cc"
} TAO_YYSTYPE;
# define TAO_YYSTYPE_IS_TRIVIAL 1
# define tao_yystype TAO_YYSTYPE /* obsolescent; will be withdrawn */
# define TAO_YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 321 "idl.tab.cc"

#ifdef short
# undef short
#endif

#ifdef TAO_YYTYPE_UINT8
typedef TAO_YYTYPE_UINT8 tao_yytype_uint8;
#else
typedef unsigned char tao_yytype_uint8;
#endif

#ifdef TAO_YYTYPE_INT8
typedef TAO_YYTYPE_INT8 tao_yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char tao_yytype_int8;
#else
typedef short int tao_yytype_int8;
#endif

#ifdef TAO_YYTYPE_UINT16
typedef TAO_YYTYPE_UINT16 tao_yytype_uint16;
#else
typedef unsigned short int tao_yytype_uint16;
#endif

#ifdef TAO_YYTYPE_INT16
typedef TAO_YYTYPE_INT16 tao_yytype_int16;
#else
typedef short int tao_yytype_int16;
#endif

#ifndef TAO_YYSIZE_T
# ifdef __SIZE_TYPE__
#  define TAO_YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define TAO_YYSIZE_T size_t
# elif ! defined TAO_YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define TAO_YYSIZE_T size_t
# else
#  define TAO_YYSIZE_T unsigned int
# endif
#endif

#define TAO_YYSIZE_MAXIMUM ((TAO_YYSIZE_T) -1)

#ifndef TAO_YY_
# if TAO_YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define TAO_YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef TAO_YY_
#  define TAO_YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define TAO_YYUSE(e) ((void) (e))
#else
# define TAO_YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define TAO_YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
TAO_YYID (int tao_yyi)
#else
static int
TAO_YYID (tao_yyi)
    int tao_yyi;
#endif
{
  return tao_yyi;
}
#endif

#if ! defined tao_yyoverflow || TAO_YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef TAO_YYSTACK_USE_ALLOCA
#  if TAO_YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define TAO_YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define TAO_YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define TAO_YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef TAO_YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define TAO_YYSTACK_FREE(Ptr) do { /* empty */; } while (TAO_YYID (0))
#  ifndef TAO_YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define TAO_YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define TAO_YYSTACK_ALLOC TAO_YYMALLOC
#  define TAO_YYSTACK_FREE TAO_YYFREE
#  ifndef TAO_YYSTACK_ALLOC_MAXIMUM
#   define TAO_YYSTACK_ALLOC_MAXIMUM TAO_YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined TAO_YYMALLOC || defined malloc) \
	     && (defined TAO_YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef TAO_YYMALLOC
#   define TAO_YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (TAO_YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef TAO_YYFREE
#   define TAO_YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined tao_yyoverflow || TAO_YYERROR_VERBOSE */


#if (! defined tao_yyoverflow \
     && (! defined __cplusplus \
	 || (defined TAO_YYSTYPE_IS_TRIVIAL && TAO_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union tao_yyalloc
{
  tao_yytype_int16 tao_yyss_alloc;
  TAO_YYSTYPE tao_yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define TAO_YYSTACK_GAP_MAXIMUM (sizeof (union tao_yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define TAO_YYSTACK_BYTES(N) \
     ((N) * (sizeof (tao_yytype_int16) + sizeof (TAO_YYSTYPE)) \
      + TAO_YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef TAO_YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define TAO_YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define TAO_YYCOPY(To, From, Count)		\
      do					\
	{					\
	  TAO_YYSIZE_T tao_yyi;				\
	  for (tao_yyi = 0; tao_yyi < (Count); tao_yyi++)	\
	    (To)[tao_yyi] = (From)[tao_yyi];		\
	}					\
      while (TAO_YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables TAO_YYSIZE and TAO_YYSTACKSIZE give the old and new number of
   elements in the stack, and TAO_YYPTR gives the new location of the
   stack.  Advance TAO_YYPTR to a properly aligned location for the next
   stack.  */
# define TAO_YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	TAO_YYSIZE_T tao_yynewbytes;						\
	TAO_YYCOPY (&tao_yyptr->Stack_alloc, Stack, tao_yysize);			\
	Stack = &tao_yyptr->Stack_alloc;					\
	tao_yynewbytes = tao_yystacksize * sizeof (*Stack) + TAO_YYSTACK_GAP_MAXIMUM; \
	tao_yyptr += tao_yynewbytes / sizeof (*tao_yyptr);				\
      }									\
    while (TAO_YYID (0))

#endif

/* TAO_YYFINAL -- State number of the termination state.  */
#define TAO_YYFINAL  3
/* TAO_YYLAST -- Last index in TAO_YYTABLE.  */
#define TAO_YYLAST   1303

/* TAO_YYNTOKENS -- Number of terminals.  */
#define TAO_YYNTOKENS  106
/* TAO_YYNNTS -- Number of nonterminals.  */
#define TAO_YYNNTS  384
/* TAO_YYNRULES -- Number of rules.  */
#define TAO_YYNRULES  567
/* TAO_YYNRULES -- Number of states.  */
#define TAO_YYNSTATES  815

/* TAO_YYTRANSLATE(TAO_YYLEX) -- Bison symbol number corresponding to TAO_YYLEX.  */
#define TAO_YYUNDEFTOK  2
#define TAO_YYMAXUTOK   339

#define TAO_YYTRANSLATE(TAO_YYX)						\
  ((unsigned int) (TAO_YYX) <= TAO_YYMAXUTOK ? tao_yytranslate[TAO_YYX] : TAO_YYUNDEFTOK)

/* TAO_YYTRANSLATE[TAO_YYLEX] -- Bison symbol number corresponding to TAO_YYLEX.  */
static const tao_yytype_uint8 tao_yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   100,    95,     2,
     102,   103,    98,    96,    91,    97,     2,    99,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,    85,
      88,    92,    89,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   104,     2,   105,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    93,    87,   101,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if TAO_YYDEBUG
/* TAO_YYPRHS[TAO_YYN] -- Index of the first RHS symbol of rule number TAO_YYN in
   TAO_YYRHS.  */
static const tao_yytype_uint16 tao_yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    14,    17,    20,
      21,    25,    26,    30,    31,    35,    36,    40,    41,    45,
      46,    50,    51,    55,    56,    60,    61,    65,    66,    70,
      71,    75,    76,    80,    81,    85,    86,    90,    91,    95,
      96,    97,    98,   106,   109,   110,   111,   112,   113,   114,
     126,   129,   132,   133,   135,   138,   139,   140,   149,   150,
     151,   158,   160,   162,   163,   164,   165,   173,   174,   178,
     181,   185,   189,   190,   195,   196,   198,   200,   202,   204,
     206,   207,   208,   209,   218,   219,   220,   221,   229,   230,
     231,   232,   241,   242,   247,   248,   252,   254,   255,   258,
     259,   262,   264,   267,   270,   271,   273,   275,   278,   279,
     283,   284,   288,   291,   292,   293,   297,   298,   302,   303,
     307,   308,   312,   313,   317,   318,   322,   323,   327,   328,
     332,   335,   336,   341,   342,   344,   345,   349,   350,   355,
     357,   359,   362,   365,   366,   367,   368,   369,   379,   381,
     383,   385,   387,   389,   391,   393,   395,   397,   399,   401,
     403,   407,   409,   413,   415,   419,   421,   425,   429,   431,
     435,   439,   441,   445,   449,   453,   455,   458,   461,   464,
     466,   468,   472,   474,   476,   478,   480,   482,   484,   486,
     488,   490,   492,   493,   497,   499,   501,   503,   506,   508,
     509,   513,   515,   517,   519,   521,   523,   525,   527,   529,
     531,   533,   535,   537,   539,   541,   543,   545,   547,   549,
     551,   553,   555,   558,   559,   564,   565,   567,   569,   572,
     573,   578,   579,   581,   583,   585,   587,   589,   592,   594,
     597,   601,   604,   606,   608,   611,   613,   615,   617,   619,
     621,   623,   625,   626,   630,   631,   632,   633,   641,   644,
     647,   648,   649,   652,   653,   654,   660,   661,   665,   666,
     670,   671,   672,   673,   674,   675,   676,   691,   693,   695,
     697,   699,   701,   703,   706,   709,   710,   711,   712,   718,
     719,   723,   726,   729,   730,   731,   735,   736,   737,   743,
     744,   748,   750,   752,   753,   754,   755,   756,   766,   769,
     770,   775,   776,   778,   779,   780,   787,   790,   791,   792,
     798,   799,   800,   807,   809,   811,   812,   813,   820,   822,
     824,   825,   829,   832,   835,   836,   837,   838,   844,   846,
     848,   849,   850,   851,   852,   862,   863,   864,   865,   866,
     876,   877,   878,   879,   880,   890,   891,   892,   893,   894,
     905,   907,   909,   910,   912,   914,   915,   916,   917,   925,
     926,   930,   931,   936,   939,   940,   945,   946,   947,   948,
     954,   955,   959,   960,   965,   968,   969,   974,   975,   976,
     977,   983,   985,   987,   989,   991,   993,   995,   997,   998,
     999,  1006,  1007,  1008,  1009,  1016,  1017,  1018,  1019,  1026,
    1027,  1028,  1029,  1036,  1037,  1040,  1041,  1046,  1047,  1051,
    1055,  1057,  1059,  1062,  1063,  1064,  1065,  1073,  1074,  1075,
    1082,  1083,  1087,  1088,  1091,  1092,  1093,  1097,  1098,  1102,
    1103,  1107,  1108,  1112,  1113,  1117,  1118,  1122,  1123,  1127,
    1131,  1133,  1135,  1139,  1142,  1144,  1145,  1149,  1153,  1157,
    1158,  1162,  1163,  1164,  1165,  1166,  1167,  1168,  1182,  1183,
    1187,  1188,  1191,  1192,  1193,  1194,  1200,  1203,  1204,  1206,
    1207,  1211,  1212,  1216,  1217,  1218,  1225,  1226,  1227,  1234,
    1236,  1238,  1240,  1242,  1244,  1247,  1251,  1252,  1253,  1254,
    1263,  1267,  1271,  1274,  1275,  1279,  1280,  1281,  1282,  1291,
    1293,  1295,  1297,  1299,  1301,  1303,  1305,  1307,  1309,  1311,
    1313,  1316,  1319,  1320,  1325,  1326,  1329,  1335,  1338,  1342,
    1343,  1345,  1346,  1347,  1348,  1349,  1359,  1362,  1365,  1366,
    1367,  1371,  1372,  1376,  1377,  1381,  1385,  1389,  1392,  1396,
    1397,  1399,  1402,  1403,  1404,  1410,  1411,  1412,  1418,  1421,
    1422,  1423,  1427,  1428,  1432,  1433,  1437,  1438
};

/* TAO_YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const tao_yytype_int16 tao_yyrhs[] =
{
     107,     0,    -1,   108,    -1,   108,   109,    -1,    -1,   111,
      -1,   133,    85,    -1,   145,    85,    -1,   108,   109,    -1,
      -1,   220,   112,    85,    -1,    -1,   381,   113,    85,    -1,
      -1,   382,   114,    85,    -1,    -1,   202,   115,    85,    -1,
      -1,   330,   116,    85,    -1,    -1,   148,   117,    85,    -1,
      -1,   128,   118,    85,    -1,    -1,   158,   119,    85,    -1,
      -1,   383,   120,    85,    -1,    -1,   411,   121,    85,    -1,
      -1,   436,   122,    85,    -1,    -1,   462,   123,    85,    -1,
      -1,   477,   124,    85,    -1,    -1,     1,   125,    85,    -1,
      -1,     5,   127,   197,    -1,    -1,    -1,    -1,   126,   129,
      86,   130,   110,   131,    87,    -1,   126,    88,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   134,   455,   135,    89,   136,
      86,   137,   139,   138,    87,    -1,   141,   140,    -1,   140,
     141,    -1,    -1,   111,    -1,   142,    85,    -1,    -1,    -1,
      72,   197,   143,    88,   459,    89,   144,   200,    -1,    -1,
      -1,   132,   146,   474,    89,   147,   200,    -1,   149,    -1,
     201,    -1,    -1,    -1,    -1,   155,   150,    86,   151,   184,
     152,    87,    -1,    -1,     6,   154,   200,    -1,   153,   156,
      -1,    41,   153,   156,    -1,    42,   153,   156,    -1,    -1,
      90,   175,   157,   194,    -1,    -1,   163,    -1,   159,    -1,
     167,    -1,   177,    -1,   178,    -1,    -1,    -1,    -1,    43,
     171,   160,    86,   161,   179,   162,    87,    -1,    -1,    -1,
      -1,   171,   164,    86,   165,   179,   166,    87,    -1,    -1,
      -1,    -1,    42,   171,   168,    86,   169,   184,   170,    87,
      -1,    -1,   173,   156,   172,   176,    -1,    -1,    49,   174,
     200,    -1,    48,    -1,    -1,    47,   194,    -1,    -1,    42,
     173,    -1,   173,    -1,   173,   224,    -1,   179,   180,    -1,
      -1,   181,    -1,   185,    -1,   342,    85,    -1,    -1,    46,
     182,   259,    -1,    -1,    45,   183,   259,    -1,   184,   185,
      -1,    -1,    -1,   220,   186,    85,    -1,    -1,   381,   187,
      85,    -1,    -1,   382,   188,    85,    -1,    -1,   202,   189,
      85,    -1,    -1,   330,   190,    85,    -1,    -1,   319,   191,
      85,    -1,    -1,   335,   192,    85,    -1,    -1,     1,   193,
      85,    -1,   197,   195,    -1,    -1,   195,    91,   196,   197,
      -1,    -1,   200,    -1,    -1,    80,   198,   200,    -1,    -1,
     197,    80,   199,   200,    -1,     3,    -1,   153,    -1,    41,
     153,    -1,    42,   153,    -1,    -1,    -1,    -1,    -1,     4,
     203,   207,   204,   200,   205,    92,   206,   208,    -1,   239,
      -1,   244,    -1,   245,    -1,   246,    -1,   242,    -1,   243,
      -1,   304,    -1,   308,    -1,   197,    -1,   209,    -1,   210,
      -1,   211,    -1,   210,    93,   211,    -1,   212,    -1,   211,
      94,   212,    -1,   213,    -1,   212,    95,   213,    -1,   214,
      -1,   213,    81,   214,    -1,   213,    82,   214,    -1,   215,
      -1,   214,    96,   215,    -1,   214,    97,   215,    -1,   216,
      -1,   215,    98,   216,    -1,   215,    99,   216,    -1,   215,
     100,   216,    -1,   217,    -1,    96,   217,    -1,    97,   217,
      -1,   101,   217,    -1,   197,    -1,   218,    -1,   102,   209,
     103,    -1,    73,    -1,    74,    -1,    75,    -1,    84,    -1,
      76,    -1,    83,    -1,    77,    -1,    78,    -1,    79,    -1,
     209,    -1,    -1,     7,   221,   222,    -1,   251,    -1,   265,
      -1,   289,    -1,    40,   237,    -1,   229,    -1,    -1,   224,
     223,   230,    -1,   225,    -1,   228,    -1,   226,    -1,   227,
      -1,   197,    -1,   239,    -1,   242,    -1,   244,    -1,   246,
      -1,   245,    -1,   243,    -1,   247,    -1,   248,    -1,   298,
      -1,   304,    -1,   308,    -1,   251,    -1,   265,    -1,   289,
      -1,   287,    -1,   288,    -1,   233,   231,    -1,    -1,   231,
      91,   232,   233,    -1,    -1,   237,    -1,   238,    -1,   237,
     235,    -1,    -1,   235,    91,   236,   237,    -1,    -1,   200,
      -1,   312,    -1,   240,    -1,   241,    -1,     8,    -1,     8,
       8,    -1,     9,    -1,    10,     8,    -1,    10,     8,     8,
      -1,    10,     9,    -1,    11,    -1,    12,    -1,     8,    11,
      -1,    17,    -1,    13,    -1,    14,    -1,    15,    -1,    16,
      -1,    18,    -1,    19,    -1,    -1,    20,   250,   200,    -1,
      -1,    -1,    -1,   249,   252,    86,   253,   255,   254,    87,
      -1,   257,   256,    -1,   256,   257,    -1,    -1,    -1,   258,
     259,    -1,    -1,    -1,   224,   260,   230,   261,    85,    -1,
      -1,     1,   262,    85,    -1,    -1,    21,   264,   200,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   263,    22,   266,   102,
     267,   272,   268,   103,   269,    86,   270,   273,   271,    87,
      -1,   239,    -1,   244,    -1,   245,    -1,   246,    -1,   289,
      -1,   197,    -1,   275,   274,    -1,   274,   275,    -1,    -1,
      -1,    -1,   279,   276,   285,   277,    85,    -1,    -1,     1,
     278,    85,    -1,   281,   280,    -1,   280,   281,    -1,    -1,
      -1,    29,   282,    90,    -1,    -1,    -1,    28,   283,   209,
     284,    90,    -1,    -1,   224,   286,   233,    -1,   249,    -1,
     263,    -1,    -1,    -1,    -1,    -1,    23,   290,   200,   291,
      86,   292,   294,   293,    87,    -1,   297,   295,    -1,    -1,
     295,    91,   296,   297,    -1,    -1,     3,    -1,    -1,    -1,
     301,    91,   299,   219,   300,    89,    -1,   301,    89,    -1,
      -1,    -1,    24,   302,    88,   303,   225,    -1,    -1,    -1,
     307,    88,   305,   219,   306,    89,    -1,   307,    -1,    25,
      -1,    -1,    -1,   311,    88,   309,   219,   310,    89,    -1,
     311,    -1,    26,    -1,    -1,   200,   313,   314,    -1,   316,
     315,    -1,   315,   316,    -1,    -1,    -1,    -1,   104,   317,
     219,   318,   105,    -1,   320,    -1,   325,    -1,    -1,    -1,
      -1,    -1,    30,   321,    31,   322,   364,   323,   234,   324,
     366,    -1,    -1,    -1,    -1,    -1,    31,   326,   364,   327,
     234,   328,   369,   329,   372,    -1,    -1,    -1,    -1,    -1,
      27,   331,   200,   332,    86,   333,   256,   334,    87,    -1,
      -1,    -1,    -1,    -1,   340,   341,   336,     3,   337,   355,
     338,   366,   339,   375,    -1,    32,    -1,    33,    -1,    -1,
     364,    -1,    34,    -1,    -1,    -1,    -1,    44,   343,     3,
     344,   346,   345,   366,    -1,    -1,   102,   347,   103,    -1,
      -1,   102,   348,   349,   103,    -1,   352,   350,    -1,    -1,
     350,    91,   351,   352,    -1,    -1,    -1,    -1,    35,   353,
     364,   354,   233,    -1,    -1,   102,   356,   103,    -1,    -1,
     102,   357,   358,   103,    -1,   361,   359,    -1,    -1,   359,
      91,   360,   361,    -1,    -1,    -1,    -1,   365,   362,   364,
     363,   233,    -1,   226,    -1,   304,    -1,   308,    -1,   197,
      -1,    35,    -1,    36,    -1,    37,    -1,    -1,    -1,    38,
     367,   102,   368,   194,   103,    -1,    -1,    -1,    -1,    55,
     370,   102,   371,   194,   103,    -1,    -1,    -1,    -1,    62,
     373,   102,   374,   194,   103,    -1,    -1,    -1,    -1,    39,
     376,   102,   377,   378,   103,    -1,    -1,    75,   379,    -1,
      -1,   379,    91,   380,    75,    -1,    -1,    63,   197,    75,
      -1,    64,   197,    75,    -1,   385,    -1,   384,    -1,    50,
     200,    -1,    -1,    -1,    -1,   389,   386,    86,   387,   394,
     388,    87,    -1,    -1,    -1,    50,   200,   390,   392,   391,
     176,    -1,    -1,    90,   393,   197,    -1,    -1,   394,   395,
      -1,    -1,    -1,   403,   396,    85,    -1,    -1,   405,   397,
      85,    -1,    -1,   408,   398,    85,    -1,    -1,   409,   399,
      85,    -1,    -1,   410,   400,    85,    -1,    -1,   319,   401,
      85,    -1,    -1,   473,   402,    85,    -1,    60,   404,   200,
      -1,   197,    -1,    19,    -1,   406,   404,   200,    -1,    65,
     407,    -1,    58,    -1,    -1,    52,   197,   200,    -1,    61,
     197,   200,    -1,    51,   197,   200,    -1,    -1,   413,   412,
     423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,   414,
     200,   415,   420,   416,   176,   417,    66,   418,   197,   419,
     422,    -1,    -1,    90,   421,   197,    -1,    -1,    59,   197,
      -1,    -1,    -1,    -1,    86,   424,   426,   425,    87,    -1,
     426,   427,    -1,    -1,   185,    -1,    -1,   430,   428,    85,
      -1,    -1,   433,   429,    85,    -1,    -1,    -1,    44,   200,
     431,   346,   432,   366,    -1,    -1,    -1,    54,   200,   434,
     346,   435,   366,    -1,   449,    -1,   440,    -1,   437,    -1,
     439,    -1,   438,    -1,    53,   200,    -1,    42,    53,   200,
      -1,    -1,    -1,    -1,   444,   447,   441,    86,   442,   184,
     443,    87,    -1,    42,    53,   200,    -1,    43,    53,   200,
      -1,    53,   200,    -1,    -1,   156,   448,   176,    -1,    -1,
      -1,    -1,   453,   447,   450,    86,   451,   179,   452,    87,
      -1,   445,    -1,   446,    -1,    67,    -1,    20,    -1,    21,
      -1,    53,    -1,    24,    -1,     6,    -1,    49,    -1,    23,
      -1,    27,    -1,     4,   207,    -1,   458,   456,    -1,    -1,
     456,    91,   457,   458,    -1,    -1,   454,     3,    -1,    24,
      88,     3,    89,     3,    -1,   461,   460,    -1,   460,    91,
     461,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    70,
     463,     3,   464,    86,   465,   467,   466,    87,    -1,   469,
     468,    -1,   468,   469,    -1,    -1,    -1,   403,   470,    85,
      -1,    -1,   405,   471,    85,    -1,    -1,   319,   472,    85,
      -1,    68,   197,     3,    -1,    69,   197,     3,    -1,   476,
     475,    -1,   475,    91,   476,    -1,    -1,   208,    -1,   478,
     481,    -1,    -1,    -1,    71,   479,     3,   480,   392,    -1,
      -1,    -1,    86,   482,   484,   483,    87,    -1,   484,   485,
      -1,    -1,    -1,   403,   486,    85,    -1,    -1,   405,   487,
      85,    -1,    -1,   319,   488,    85,    -1,    -1,   473,   489,
      85,    -1
};

/* TAO_YYRLINE[TAO_YYN] -- source line where rule number TAO_YYN was defined.  */
static const tao_yytype_uint16 tao_yyrline[] =
{
       0,   357,   357,   360,   361,   365,   368,   371,   377,   382,
     381,   392,   391,   402,   401,   412,   411,   422,   421,   432,
     431,   442,   441,   452,   451,   462,   461,   472,   471,   482,
     481,   492,   491,   502,   501,   512,   511,   526,   525,   538,
     577,   582,   537,   599,   607,   622,   632,   663,   667,   606,
     691,   695,   696,   700,   701,   706,   712,   705,   800,   806,
     799,   877,   878,   883,   922,   927,   882,   945,   944,   958,
     996,  1027,  1061,  1060,  1072,  1079,  1080,  1081,  1082,  1083,
    1089,  1133,  1138,  1087,  1167,  1211,  1216,  1166,  1245,  1289,
    1294,  1243,  1313,  1311,  1353,  1352,  1366,  1372,  1379,  1386,
    1393,  1419,  1446,  1511,  1512,  1516,  1517,  1518,  1524,  1523,
    1534,  1533,  1546,  1547,  1552,  1551,  1562,  1561,  1572,  1571,
    1582,  1581,  1592,  1591,  1602,  1601,  1612,  1611,  1622,  1621,
    1635,  1648,  1646,  1674,  1681,  1692,  1691,  1719,  1717,  1744,
    1756,  1802,  1830,  1861,  1866,  1871,  1876,  1860,  1947,  1948,
    1949,  1950,  1951,  1952,  1953,  1965,  1970,  2039,  2041,  2043,
    2044,  2058,  2059,  2073,  2074,  2087,  2088,  2098,  2111,  2112,
    2122,  2135,  2136,  2146,  2156,  2169,  2170,  2180,  2190,  2203,
    2254,  2255,  2264,  2269,  2275,  2283,  2288,  2293,  2299,  2304,
    2309,  2317,  2389,  2388,  2399,  2404,  2409,  2414,  2441,  2450,
    2449,  2521,  2522,  2526,  2534,  2535,  2563,  2564,  2565,  2566,
    2567,  2568,  2569,  2570,  2574,  2575,  2576,  2580,  2581,  2582,
    2586,  2587,  2591,  2604,  2602,  2630,  2637,  2638,  2642,  2655,
    2653,  2681,  2688,  2705,  2724,  2725,  2729,  2734,  2739,  2747,
    2752,  2757,  2765,  2770,  2775,  2783,  2797,  2802,  2810,  2818,
    2826,  2834,  2843,  2842,  2858,  2892,  2897,  2857,  2916,  2919,
    2920,  2924,  2924,  2934,  2939,  2933,  3002,  3001,  3016,  3015,
    3030,  3035,  3071,  3076,  3138,  3143,  3029,  3167,  3175,  3189,
    3199,  3207,  3208,  3316,  3319,  3320,  3325,  3330,  3324,  3366,
    3365,  3379,  3390,  3410,  3418,  3417,  3433,  3438,  3432,  3455,
    3454,  3507,  3531,  3556,  3561,  3594,  3599,  3555,  3625,  3630,
    3628,  3635,  3639,  3676,  3681,  3674,  3762,  3823,  3833,  3822,
    3848,  3853,  3846,  3900,  3926,  3936,  3941,  3934,  3977,  4002,
    4011,  4010,  4052,  4063,  4083,  4091,  4096,  4090,  4158,  4159,
    4164,  4169,  4174,  4179,  4163,  4248,  4253,  4258,  4263,  4247,
    4341,  4346,  4376,  4381,  4340,  4399,  4404,  4469,  4474,  4397,
    4511,  4517,  4524,  4531,  4532,  4544,  4550,  4592,  4543,  4614,
    4613,  4624,  4623,  4636,  4641,  4639,  4646,  4651,  4656,  4650,
    4697,  4696,  4707,  4706,  4719,  4724,  4722,  4729,  4734,  4739,
    4733,  4786,  4794,  4795,  4796,  4906,  4911,  4916,  4925,  4930,
    4924,  4942,  4950,  4955,  4949,  4967,  4975,  4980,  4974,  4992,
    5000,  5005,  4999,  5017,  5024,  5037,  5035,  5061,  5068,  5097,
    5135,  5136,  5140,  5170,  5210,  5215,  5169,  5234,  5239,  5232,
    5282,  5281,  5292,  5299,  5300,  5305,  5304,  5315,  5314,  5325,
    5324,  5335,  5334,  5345,  5344,  5355,  5354,  5365,  5364,  5376,
    5467,  5474,  5500,  5607,  5617,  5623,  5629,  5702,  5775,  5850,
    5849,  5899,  5904,  5909,  5914,  5919,  5924,  5898,  5979,  5978,
    5989,  5996,  6003,  6011,  6016,  6010,  6028,  6029,  6033,  6035,
    6034,  6045,  6044,  6059,  6083,  6057,  6111,  6139,  6109,  6165,
    6166,  6167,  6171,  6172,  6176,  6204,  6235,  6280,  6285,  6233,
    6302,  6312,  6331,  6343,  6342,  6382,  6432,  6437,  6380,  6454,
    6459,  6467,  6472,  6477,  6482,  6487,  6492,  6497,  6502,  6507,
    6512,  6521,  6556,  6555,  6577,  6584,  6610,  6628,  6639,  6659,
    6666,  6677,  6682,  6701,  6706,  6676,  6721,  6728,  6733,  6740,
    6739,  6748,  6747,  6756,  6755,  6767,  6837,  6888,  6904,  6918,
    6925,  6985,  6990,  6995,  6989,  7056,  7061,  7055,  7076,  7077,
    7082,  7081,  7092,  7091,  7102,  7101,  7112,  7111
};
#endif

#if TAO_YYDEBUG || TAO_YYERROR_VERBOSE || TAO_YYTOKEN_TABLE
/* TAO_YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at TAO_YYNTOKENS, nonterminals.  */
static const char *const tao_yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "IDL_CONST", "IDL_MODULE",
  "IDL_INTERFACE", "IDL_TYPEDEF", "IDL_LONG", "IDL_SHORT", "IDL_UNSIGNED",
  "IDL_DOUBLE", "IDL_FLOAT", "IDL_CHAR", "IDL_WCHAR", "IDL_OCTET",
  "IDL_BOOLEAN", "IDL_FIXED", "IDL_ANY", "IDL_OBJECT", "IDL_STRUCT",
  "IDL_UNION", "IDL_SWITCH", "IDL_ENUM", "IDL_SEQUENCE", "IDL_STRING",
  "IDL_WSTRING", "IDL_EXCEPTION", "IDL_CASE", "IDL_DEFAULT",
  "IDL_READONLY", "IDL_ATTRIBUTE", "IDL_ONEWAY", "IDL_IDEMPOTENT",
  "IDL_VOID", "IDL_IN", "IDL_OUT", "IDL_INOUT", "IDL_RAISES",
  "IDL_CONTEXT", "IDL_NATIVE", "IDL_LOCAL", "IDL_ABSTRACT", "IDL_CUSTOM",
  "IDL_FACTORY", "IDL_PRIVATE", "IDL_PUBLIC", "IDL_SUPPORTS",
  "IDL_TRUNCATABLE", "IDL_VALUETYPE", "IDL_COMPONENT", "IDL_CONSUMES",
  "IDL_EMITS", "IDL_EVENTTYPE", "IDL_FINDER", "IDL_GETRAISES", "IDL_HOME",
  "IDL_IMPORT", "IDL_MULTIPLE", "IDL_PRIMARYKEY", "IDL_PROVIDES",
  "IDL_PUBLISHES", "IDL_SETRAISES", "IDL_TYPEID", "IDL_TYPEPREFIX",
  "IDL_USES", "IDL_MANAGES", "IDL_TYPENAME", "IDL_PORT", "IDL_MIRRORPORT",
  "IDL_PORTTYPE", "IDL_CONNECTOR", "IDL_ALIAS", "IDL_INTEGER_LITERAL",
  "IDL_UINTEGER_LITERAL", "IDL_STRING_LITERAL", "IDL_CHARACTER_LITERAL",
  "IDL_FLOATING_PT_LITERAL", "IDL_TRUETOK", "IDL_FALSETOK",
  "IDL_SCOPE_DELIMITOR", "IDL_LEFT_SHIFT", "IDL_RIGHT_SHIFT",
  "IDL_WCHAR_LITERAL", "IDL_WSTRING_LITERAL", "';'", "'{'", "'}'", "'<'",
  "'>'", "':'", "','", "'='", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'~'", "'('", "')'", "'['", "']'", "$accept", "start",
  "definitions", "definition", "at_least_one_definition",
  "fixed_definition", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7",
  "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "module_header",
  "$@15", "module", "$@16", "$@17", "$@18", "template_module_header",
  "template_module", "$@19", "$@20", "$@21", "$@22", "$@23",
  "at_least_one_tpl_definition", "tpl_definitions", "tpl_definition",
  "template_module_ref", "$@24", "$@25", "template_module_inst", "$@26",
  "$@27", "interface_def", "interface", "$@28", "$@29", "$@30",
  "interface_decl", "$@31", "interface_header", "inheritance_spec", "$@32",
  "value_def", "value_cust_decl", "$@33", "$@34", "$@35",
  "valuetype_concrete_decl", "$@36", "$@37", "$@38", "value_abs_decl",
  "$@39", "$@40", "$@41", "value_header", "$@42", "value_decl", "$@43",
  "opt_truncatable", "supports_spec", "value_forward_decl",
  "value_box_decl", "value_elements", "value_element", "state_member",
  "@44", "@45", "exports", "export", "$@46", "$@47", "$@48", "$@49",
  "$@50", "$@51", "$@52", "$@53", "at_least_one_scoped_name",
  "scoped_names", "$@54", "scoped_name", "$@55", "$@56", "id",
  "interface_forward", "const_dcl", "$@57", "$@58", "$@59", "$@60",
  "const_type", "expression", "const_expr", "or_expr", "xor_expr",
  "and_expr", "shift_expr", "add_expr", "mult_expr", "unary_expr",
  "primary_expr", "literal", "positive_int_expr", "type_dcl", "$@61",
  "type_declarator", "$@62", "type_spec", "simple_type_spec",
  "base_type_spec", "template_type_spec", "constructed_type_spec",
  "constructed_forward_type_spec", "at_least_one_declarator",
  "declarators", "$@63", "declarator", "at_least_one_simple_declarator",
  "simple_declarators", "$@64", "simple_declarator", "complex_declarator",
  "integer_type", "signed_int", "unsigned_int", "floating_pt_type",
  "fixed_type", "char_type", "octet_type", "boolean_type", "any_type",
  "object_type", "struct_decl", "$@65", "struct_type", "$@66", "$@67",
  "$@68", "at_least_one_member", "members", "member", "@69", "member_i",
  "$@70", "$@71", "$@72", "union_decl", "$@73", "union_type", "$@74",
  "$@75", "$@76", "$@77", "$@78", "$@79", "switch_type_spec",
  "at_least_one_case_branch", "case_branches", "case_branch", "$@80",
  "$@81", "$@82", "at_least_one_case_label", "case_labels", "case_label",
  "$@83", "$@84", "$@85", "element_spec", "$@86", "struct_forward_type",
  "union_forward_type", "enum_type", "$@87", "$@88", "$@89", "$@90",
  "at_least_one_enumerator", "enumerators", "$@91", "enumerator",
  "sequence_type_spec", "$@92", "$@93", "seq_head", "$@94", "$@95",
  "string_type_spec", "$@96", "$@97", "string_head", "wstring_type_spec",
  "$@98", "$@99", "wstring_head", "array_declarator", "$@100",
  "at_least_one_array_dim", "array_dims", "array_dim", "$@101", "$@102",
  "attribute", "attribute_readonly", "$@103", "$@104", "$@105", "$@106",
  "attribute_readwrite", "$@107", "$@108", "$@109", "$@110", "exception",
  "$@111", "$@112", "$@113", "$@114", "operation", "$@115", "$@116",
  "$@117", "$@118", "opt_op_attribute", "op_type_spec", "init_decl",
  "$@119", "$@120", "$@121", "init_parameter_list", "$@122", "$@123",
  "at_least_one_in_parameter", "in_parameters", "$@124", "in_parameter",
  "$@125", "$@126", "parameter_list", "$@127", "$@128",
  "at_least_one_parameter", "parameters", "$@129", "parameter", "$@130",
  "$@131", "param_type_spec", "direction", "opt_raises", "$@132", "$@133",
  "opt_getraises", "$@134", "$@135", "opt_setraises", "$@136", "$@137",
  "opt_context", "$@138", "$@139", "at_least_one_string_literal",
  "string_literals", "$@140", "typeid_dcl", "typeprefix_dcl", "component",
  "component_forward_decl", "component_decl", "$@141", "$@142", "$@143",
  "component_header", "$@144", "$@145", "component_inheritance_spec",
  "$@146", "component_exports", "component_export", "$@147", "$@148",
  "$@149", "$@150", "$@151", "$@152", "$@153", "provides_decl",
  "interface_type", "uses_decl", "uses_opt_multiple", "opt_multiple",
  "emits_decl", "publishes_decl", "consumes_decl", "home_decl", "$@154",
  "home_header", "$@155", "$@156", "$@157", "$@158", "$@159", "$@160",
  "home_inheritance_spec", "$@161", "primary_key_spec", "home_body",
  "$@162", "$@163", "home_exports", "home_export", "$@164", "$@165",
  "factory_decl", "$@166", "$@167", "finder_decl", "$@168", "$@169",
  "event", "event_forward_decl", "event_concrete_forward_decl",
  "event_abs_forward_decl", "event_abs_decl", "$@170", "$@171", "$@172",
  "event_abs_header", "event_custom_header", "event_plain_header",
  "event_rest_of_header", "$@173", "event_decl", "$@174", "$@175", "$@176",
  "event_header", "formal_parameter_type", "at_least_one_formal_parameter",
  "formal_parameters", "$@177", "formal_parameter",
  "at_least_one_formal_parameter_name", "formal_parameter_names",
  "formal_parameter_name", "porttype_decl", "$@178", "$@179", "$@180",
  "$@181", "at_least_one_port_export", "port_exports", "port_export",
  "$@182", "$@183", "$@184", "extended_port_decl",
  "at_least_one_actual_parameter", "actual_parameters", "actual_parameter",
  "connector_decl", "connector_header", "$@185", "$@186", "connector_body",
  "$@187", "$@188", "connector_exports", "connector_export", "$@189",
  "$@190", "$@191", "$@192", 0
};
#endif

# ifdef TAO_YYPRINT
/* TAO_YYTOKNUM[TAO_YYLEX-NUM] -- Internal token number corresponding to
   token TAO_YYLEX-NUM.  */
static const tao_yytype_uint16 tao_yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,    59,   123,   125,    60,    62,
      58,    44,    61,   124,    94,    38,    43,    45,    42,    47,
      37,   126,    40,    41,    91,    93
};
# endif

/* TAO_YYR1[TAO_YYN] -- Symbol number of symbol that rule TAO_YYN derives.  */
static const tao_yytype_uint16 tao_yyr1[] =
{
       0,   106,   107,   108,   108,   109,   109,   109,   110,   112,
     111,   113,   111,   114,   111,   115,   111,   116,   111,   117,
     111,   118,   111,   119,   111,   120,   111,   121,   111,   122,
     111,   123,   111,   124,   111,   125,   111,   127,   126,   129,
     130,   131,   128,   132,   134,   135,   136,   137,   138,   133,
     139,   140,   140,   141,   141,   143,   144,   142,   146,   147,
     145,   148,   148,   150,   151,   152,   149,   154,   153,   155,
     155,   155,   157,   156,   156,   158,   158,   158,   158,   158,
     160,   161,   162,   159,   164,   165,   166,   163,   168,   169,
     170,   167,   172,   171,   174,   173,   175,   175,   176,   176,
     177,   177,   178,   179,   179,   180,   180,   180,   182,   181,
     183,   181,   184,   184,   186,   185,   187,   185,   188,   185,
     189,   185,   190,   185,   191,   185,   192,   185,   193,   185,
     194,   196,   195,   195,   197,   198,   197,   199,   197,   200,
     201,   201,   201,   203,   204,   205,   206,   202,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   208,   209,   210,
     210,   211,   211,   212,   212,   213,   213,   213,   214,   214,
     214,   215,   215,   215,   215,   216,   216,   216,   216,   217,
     217,   217,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   219,   221,   220,   220,   220,   220,   220,   220,   223,
     222,   224,   224,   225,   225,   225,   226,   226,   226,   226,
     226,   226,   226,   226,   227,   227,   227,   228,   228,   228,
     229,   229,   230,   232,   231,   231,   233,   233,   234,   236,
     235,   235,   237,   238,   239,   239,   240,   240,   240,   241,
     241,   241,   242,   242,   242,   243,   244,   244,   245,   246,
     247,   248,   250,   249,   252,   253,   254,   251,   255,   256,
     256,   258,   257,   260,   261,   259,   262,   259,   264,   263,
     266,   267,   268,   269,   270,   271,   265,   272,   272,   272,
     272,   272,   272,   273,   274,   274,   276,   277,   275,   278,
     275,   279,   280,   280,   282,   281,   283,   284,   281,   286,
     285,   287,   288,   290,   291,   292,   293,   289,   294,   296,
     295,   295,   297,   299,   300,   298,   298,   302,   303,   301,
     305,   306,   304,   304,   307,   309,   310,   308,   308,   311,
     313,   312,   314,   315,   315,   317,   318,   316,   319,   319,
     321,   322,   323,   324,   320,   326,   327,   328,   329,   325,
     331,   332,   333,   334,   330,   336,   337,   338,   339,   335,
     340,   340,   340,   341,   341,   343,   344,   345,   342,   347,
     346,   348,   346,   349,   351,   350,   350,   353,   354,   352,
     356,   355,   357,   355,   358,   360,   359,   359,   362,   363,
     361,   364,   364,   364,   364,   365,   365,   365,   367,   368,
     366,   366,   370,   371,   369,   369,   373,   374,   372,   372,
     376,   377,   375,   375,   378,   380,   379,   379,   381,   382,
     383,   383,   384,   386,   387,   388,   385,   390,   391,   389,
     393,   392,   392,   394,   394,   396,   395,   397,   395,   398,
     395,   399,   395,   400,   395,   401,   395,   402,   395,   403,
     404,   404,   405,   406,   407,   407,   408,   409,   410,   412,
     411,   414,   415,   416,   417,   418,   419,   413,   421,   420,
     420,   422,   422,   424,   425,   423,   426,   426,   427,   428,
     427,   429,   427,   431,   432,   430,   434,   435,   433,   436,
     436,   436,   437,   437,   438,   439,   441,   442,   443,   440,
     444,   445,   446,   448,   447,   450,   451,   452,   449,   453,
     453,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   455,   457,   456,   456,   458,   458,   459,   460,   460,
     461,   463,   464,   465,   466,   462,   467,   468,   468,   470,
     469,   471,   469,   472,   469,   473,   473,   474,   475,   475,
     476,   477,   479,   480,   478,   482,   483,   481,   484,   484,
     486,   485,   487,   485,   488,   485,   489,   485
};

/* TAO_YYR2[TAO_YYN] -- Number of symbols composing right hand side of rule TAO_YYN.  */
static const tao_yytype_uint8 tao_yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     2,     2,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       0,     0,     7,     2,     0,     0,     0,     0,     0,    11,
       2,     2,     0,     1,     2,     0,     0,     8,     0,     0,
       6,     1,     1,     0,     0,     0,     7,     0,     3,     2,
       3,     3,     0,     4,     0,     1,     1,     1,     1,     1,
       0,     0,     0,     8,     0,     0,     0,     7,     0,     0,
       0,     8,     0,     4,     0,     3,     1,     0,     2,     0,
       2,     1,     2,     2,     0,     1,     1,     2,     0,     3,
       0,     3,     2,     0,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       2,     0,     4,     0,     1,     0,     3,     0,     4,     1,
       1,     2,     2,     0,     0,     0,     0,     9,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     1,     1,     2,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     4,     0,     1,     1,     2,     0,
       4,     0,     1,     1,     1,     1,     1,     2,     1,     2,
       3,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     0,     0,     0,     7,     2,     2,
       0,     0,     2,     0,     0,     5,     0,     3,     0,     3,
       0,     0,     0,     0,     0,     0,    14,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     0,     0,     5,     0,
       3,     2,     2,     0,     0,     3,     0,     0,     5,     0,
       3,     1,     1,     0,     0,     0,     0,     9,     2,     0,
       4,     0,     1,     0,     0,     6,     2,     0,     0,     5,
       0,     0,     6,     1,     1,     0,     0,     6,     1,     1,
       0,     3,     2,     2,     0,     0,     0,     5,     1,     1,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     9,     0,     0,     0,     0,    10,
       1,     1,     0,     1,     1,     0,     0,     0,     7,     0,
       3,     0,     4,     2,     0,     4,     0,     0,     0,     5,
       0,     3,     0,     4,     2,     0,     4,     0,     0,     0,
       5,     1,     1,     1,     1,     1,     1,     1,     0,     0,
       6,     0,     0,     0,     6,     0,     0,     0,     6,     0,
       0,     0,     6,     0,     2,     0,     4,     0,     3,     3,
       1,     1,     2,     0,     0,     0,     7,     0,     0,     6,
       0,     3,     0,     2,     0,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     3,
       1,     1,     3,     2,     1,     0,     3,     3,     3,     0,
       3,     0,     0,     0,     0,     0,     0,    13,     0,     3,
       0,     2,     0,     0,     0,     5,     2,     0,     1,     0,
       3,     0,     3,     0,     0,     6,     0,     0,     6,     1,
       1,     1,     1,     1,     2,     3,     0,     0,     0,     8,
       3,     3,     2,     0,     3,     0,     0,     0,     8,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     0,     4,     0,     2,     5,     2,     3,     0,
       1,     0,     0,     0,     0,     9,     2,     2,     0,     0,
       3,     0,     3,     0,     3,     3,     3,     2,     3,     0,
       1,     2,     0,     0,     5,     0,     0,     5,     2,     0,
       0,     3,     0,     3,     0,     3,     0,     3
};

/* TAO_YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when TAO_YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const tao_yytype_uint16 tao_yydefact[] =
{
       4,     0,     0,     1,    35,   143,    37,    67,   192,   252,
     268,   303,   350,     0,     0,     0,     0,    94,     0,     0,
     461,     0,     0,   531,   552,     3,     5,    39,    21,    58,
       0,     0,    19,    61,    74,    63,    23,    76,    75,    77,
      84,    74,    78,    79,    62,    15,     9,   198,   254,   194,
     302,   195,   220,   221,   196,    17,    11,    13,    25,   421,
     420,   423,    27,   459,    29,   491,   493,   492,   490,    74,
     509,   510,   489,    74,    31,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,   232,   197,    74,
       0,    74,    88,    74,     0,    80,    74,     0,   427,   502,
       0,   135,     0,   134,     0,     0,     0,    43,     0,     0,
       0,     0,     6,     7,     0,    97,    69,     0,     0,     0,
     236,   238,     0,   242,   243,   246,   247,   248,   249,   245,
     250,   251,   317,   324,   329,    92,   205,   102,   201,   203,
     204,   202,   206,   234,   235,   207,   211,   208,   210,   209,
     212,   213,   254,   217,     0,   218,   219,   214,     0,   215,
     323,   216,   328,     0,     0,     0,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   503,   496,   505,     0,     0,
     555,   551,    36,   156,   144,   148,   152,   153,   149,   150,
     151,   154,   155,    38,    68,   193,   199,   253,   269,   304,
     351,    70,   500,    71,     0,   501,     0,    95,   432,   462,
       0,   418,   137,   419,   532,   553,    40,    22,     0,   516,
     512,   513,   518,   515,   519,   517,   514,   511,     0,    45,
     524,   182,   183,   184,   186,   188,   189,   190,   187,   185,
       0,     0,     0,     0,   179,   550,   157,   158,   159,   161,
     163,   165,   168,   171,   175,   180,     0,   549,    20,    96,
      72,    64,    24,    85,   237,   244,   239,   241,     0,    99,
     316,   313,   320,   325,    16,    10,   255,     0,    18,    12,
      14,    26,   424,    28,   473,   460,    30,    99,     0,     0,
      32,    34,   559,     0,     0,     0,     0,    89,    81,   430,
     428,   470,   136,     0,     0,   432,     4,   520,     0,   525,
       0,   521,   176,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,   547,     0,   113,
     104,   240,   318,     0,    93,     0,     0,     0,   261,   271,
     434,   477,   504,   497,   506,   556,   145,   232,   200,   225,
     226,   227,   233,   305,   352,   113,   104,     0,    99,   468,
     463,   138,   533,   554,     0,    41,     0,    46,   522,   181,
     160,   162,   164,   166,   167,   169,   170,   172,   173,   174,
       0,     0,    73,   133,     0,     0,     0,    98,   191,   314,
     321,   326,   256,   260,     0,     0,   425,     0,   113,   104,
     340,   345,     0,   455,     0,     0,   564,   338,   339,   560,
     562,     0,   566,     0,   558,     0,     0,   222,     0,   260,
       0,     0,   431,   429,     0,    99,     0,     3,     0,     0,
       0,     0,    60,   548,   130,   128,   360,   361,     0,   112,
     120,   114,   124,   122,   126,     0,   116,   118,   365,   110,
     108,     0,   103,   105,   106,     0,   319,     0,     0,     0,
       0,   261,   266,   263,   262,   236,   282,   277,   278,   279,
     280,   272,   281,     0,     0,     0,   445,     0,   433,   435,
     437,   439,   441,   443,   447,     0,     0,   478,     0,   476,
     479,   481,     0,     0,     0,     0,   451,   450,     0,   454,
     453,     0,     0,     0,     0,     0,     0,     0,   557,   146,
     335,   331,   334,   223,   312,   306,   311,   261,     0,     0,
     469,   464,   543,   539,   541,   534,   538,    42,   526,    47,
     523,   131,     0,    66,     0,     0,     0,     0,     0,   364,
     394,   391,   392,   393,   355,   363,     0,     0,     0,     0,
       0,    87,   107,   315,   322,   327,   257,   259,     0,     0,
       0,     0,     0,     0,     0,   426,     0,     0,     0,     0,
       0,     0,   483,   486,   475,     0,     0,     0,     0,   341,
     346,   449,   545,   546,   565,   561,   563,   452,   567,     0,
       0,   332,     0,     0,   308,     0,    91,    83,     0,     0,
       0,     0,     0,   536,     0,     0,   129,   121,   115,   125,
     123,   127,     0,   117,   119,   366,   111,   109,   267,   264,
     273,   458,   456,   457,   446,   436,   438,   440,   442,   444,
     448,     0,     0,   480,   482,   499,   508,     0,     0,   147,
     336,   333,   224,   307,   309,   354,   465,   544,   540,   542,
     535,   537,     0,    53,    39,    48,    52,     0,   132,   356,
       0,     0,     0,   369,   484,   487,   342,   347,   231,     0,
       0,     0,    55,     0,     0,    54,     0,   367,   265,   274,
       0,     0,   401,   401,     0,   405,   228,   337,   310,   466,
       0,    49,    51,   382,   357,   401,     0,   370,   377,     0,
     376,   398,   485,   488,   343,   402,   348,   229,   472,     0,
       0,     0,   401,   368,   289,   296,   294,   275,   285,   286,
     293,     0,   372,   373,     0,   401,     0,   409,     0,     0,
     467,   530,     0,   529,   381,   395,   396,   397,     0,   387,
     388,   358,     0,     0,     0,     0,     0,     0,   291,   378,
     374,   399,   344,   403,   406,   349,   230,   471,    56,   527,
     383,   384,     0,   413,   290,   297,   295,   276,   284,   299,
     287,   292,     0,     0,     0,     0,     0,     0,     0,   385,
     389,   410,   359,     0,     0,     0,   379,   375,     0,     0,
     407,    57,   528,     0,     0,     0,   298,   300,   288,   400,
     404,     0,   386,   390,   411,     0,     0,   408,   417,     0,
     414,   412,   415,     0,   416
};

/* TAO_YYDEFGOTO[NTERM-NUM].  */
static const tao_yytype_int16 tao_yydefgoto[] =
{
      -1,     1,     2,    25,   365,    26,   164,   168,   169,   163,
     167,   114,   109,   118,   170,   172,   174,   178,   179,    77,
      27,    79,    28,   108,   306,   428,    29,    30,   110,   310,
     430,   604,   673,   655,   674,   656,   657,   690,   777,    31,
     111,   380,    32,    33,   117,   329,   438,    34,    80,    35,
     135,   328,    36,    37,   206,   356,   519,    38,   119,   330,
     451,    39,   204,   355,   518,    40,   269,    41,    97,   260,
     334,    42,    43,   385,   452,   453,   550,   549,   384,   439,
     535,   546,   547,   534,   537,   536,   538,   532,   382,   434,
     605,   244,   210,   303,   103,    44,   440,    78,   293,   415,
     589,   184,   245,   388,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   389,   441,    81,   195,   294,   463,   138,
     139,   140,   141,    47,   348,   417,   592,   349,   667,   686,
     728,   350,   351,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    48,    82,    49,   165,   338,   460,   392,
     461,   557,   394,   464,   559,   661,   558,    50,    83,    51,
     277,   395,   560,   662,   696,   745,   471,   717,   746,   718,
     747,   785,   742,   719,   748,   720,   744,   743,   783,   770,
     784,    52,    53,    54,    84,   295,   418,   593,   515,   594,
     670,   516,   157,   335,   457,   158,   268,   386,   159,   336,
     458,   160,   161,   337,   459,   162,   352,   416,   511,   591,
     512,   590,   669,   442,   407,   494,   637,   684,   725,   408,
     495,   638,   685,   727,   443,    85,   296,   419,   595,   444,
     612,   676,   712,   763,   445,   544,   455,   548,   660,   695,
     664,   680,   681,   699,   723,   773,   700,   721,   772,   694,
     710,   711,   738,   761,   793,   739,   762,   794,   545,   740,
     702,   724,   774,   706,   726,   775,   755,   776,   801,   782,
     795,   806,   809,   810,   813,   446,   447,    58,    59,    60,
     171,   340,   477,    61,   208,   358,   300,   357,   396,   478,
     566,   567,   568,   569,   570,   564,   571,   523,   498,   524,
     411,   500,   481,   482,   483,    62,   173,    63,   100,   301,
     425,   598,   671,   708,   360,   424,   730,   285,   341,   488,
     397,   489,   575,   576,   490,   631,   682,   491,   632,   683,
      64,    65,    66,    67,    68,   288,   398,   577,    69,    70,
      71,   176,   287,    72,   289,   399,   578,    73,   228,   229,
     311,   431,   230,   732,   759,   733,    74,   105,   304,   426,
     602,   525,   603,   526,   600,   601,   599,   412,   256,   327,
     257,    75,    76,   106,   305,   181,   292,   413,   345,   414,
     504,   505,   503,   507
};

/* TAO_YYPACT[STATE-NUM] -- Index in TAO_YYTABLE of the portion describing
   STATE-NUM.  */
#define TAO_YYPACT_NINF -595
static const tao_yytype_int16 tao_yypact[] =
{
    -595,    55,  1154,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,   100,    52,    73,    86,  -595,   100,   100,
    -595,    30,    30,  -595,  -595,  -595,  -595,   -24,  -595,   325,
      -9,    51,  -595,  -595,   -31,  -595,  -595,  -595,  -595,  -595,
    -595,   217,  -595,  -595,  -595,  -595,  -595,  -595,    58,  -595,
     131,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,    69,
    -595,  -595,  -595,    69,  -595,  -595,   104,   109,   308,    30,
     100,   544,   100,   100,   100,   100,  -595,  -595,  -595,   -10,
     100,    57,  -595,   108,   100,  -595,    69,   100,   116,   184,
     100,  -595,   111,  -595,   133,   215,   236,  -595,   193,   197,
     477,    54,  -595,  -595,   216,   252,  -595,   218,   220,   222,
      35,  -595,    74,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,   223,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,   131,  -595,  -595,  -595,   158,  -595,
     221,  -595,   224,   229,   243,   244,  -595,   250,   251,   253,
     255,   261,   265,   267,   266,  -595,  -595,  -595,   269,   272,
    -595,  -595,  -595,   223,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,   223,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,   273,  -595,   275,  -595,   276,  -595,   280,  -595,
     100,  -595,  -595,  -595,  -595,  -595,  -595,  -595,   308,  -595,
    -595,  -595,  -595,   249,  -595,  -595,  -595,  -595,   303,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
     101,   101,   101,    54,   223,  -595,  -595,   282,   271,   264,
      42,    72,   117,  -595,  -595,  -595,   274,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,   365,  -595,   297,   342,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,   288,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,   342,   305,   309,
    -595,  -595,  -595,   100,   100,   311,   312,  -595,  -595,  -595,
    -595,   304,  -595,   100,   317,   280,  -595,  -595,   401,  -595,
     316,   318,  -595,  -595,  -595,   307,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,  -595,   322,    30,  -595,
    -595,  -595,  -595,    30,  -595,    54,    54,    54,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,   127,  -595,   310,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,    30,   342,  -595,
    -595,  -595,  -595,  -595,  1232,  -595,   319,  -595,  -595,  -595,
     271,   264,    42,    72,    72,   117,   117,  -595,  -595,  -595,
     100,    54,  -595,   223,  1013,   781,    83,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,   247,   196,   381,   955,  -595,  -595,
    -595,  -595,    33,   349,    30,    30,  -595,  -595,  -595,  -595,
    -595,    33,  -595,   330,  -595,   327,   320,   329,   418,  -595,
    1048,   839,   223,  -595,    30,   342,    81,   336,   338,   423,
     344,   477,  -595,  -595,   337,  -595,  -595,  -595,   347,  -595,
    -595,  -595,  -595,  -595,  -595,   580,  -595,  -595,  -595,  -595,
    -595,   352,  -595,  -595,  -595,   355,  -595,   354,   358,   363,
     366,   367,  -595,  -595,  -595,   454,   223,  -595,  -595,  -595,
    -595,  -595,  -595,    30,    30,    30,  -595,   376,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,   100,   100,  -595,   377,  -595,
    -595,  -595,  1106,   897,   437,   723,  -595,   223,   100,  -595,
    -595,    36,    37,   384,   385,   386,   100,   389,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,   388,   391,   392,
     223,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,   399,  -595,   403,   404,   405,   406,   407,  -595,
     223,  -595,  -595,  -595,  -595,  -595,   409,   411,   473,   247,
     247,  -595,  -595,  -595,  -595,  -595,  -595,  -595,   414,   100,
     383,    38,    38,    38,   417,  -595,   420,   421,   422,   424,
     427,   428,  -595,  -595,  -595,   429,   432,   393,   416,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,    54,
      54,   320,   100,   431,   436,   441,  -595,  -595,   442,   438,
     444,   448,   447,    81,  1207,    30,  -595,  -595,  -595,  -595,
    -595,  -595,   532,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,   434,   434,  -595,  -595,  -595,  -595,   723,   100,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,    30,  -595,  -595,  -595,  -595,   452,   223,  -595,
     434,   453,   455,   504,  -595,  -595,  -595,  -595,  -595,   435,
     418,    30,   223,   456,   395,  -595,   440,  -595,  -595,  -595,
     463,   510,   513,   513,   100,   517,   483,  -595,  -595,   223,
     487,  -595,  -595,   474,  -595,   513,   160,  -595,  -595,   475,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,   521,   573,
     478,   186,   513,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,   723,  -595,   491,   482,   513,   484,   523,   100,    30,
    -595,  -595,   511,  -595,  -595,  -595,  -595,  -595,   498,  -595,
    -595,  -595,   518,    54,   512,   520,    61,   544,   154,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,   223,  -595,   519,
    -595,   522,   723,   565,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,   100,   510,    30,    30,   506,   100,   573,  -595,
    -595,  -595,  -595,   525,   100,   524,  -595,  -595,   514,   515,
    -595,  -595,  -595,   186,   100,   526,  -595,  -595,  -595,  -595,
    -595,    30,  -595,  -595,  -595,   527,   541,  -595,  -595,   528,
     530,  -595,  -595,   552,  -595
};

/* TAO_YYPGOTO[NTERM-NUM].  */
static const tao_yytype_int16 tao_yypgoto[] =
{
    -595,  -595,   323,   268,  -595,  -560,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -554,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,   -41,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,   260,  -595,  -595,
      71,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,   262,  -595,   270,  -595,  -595,
    -252,  -595,  -595,  -278,  -595,  -595,  -595,  -595,  -310,  -348,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -314,  -595,
    -595,   -18,  -595,  -595,   -13,  -595,     7,  -595,  -595,  -595,
    -595,   419,    46,   -94,  -595,   324,   321,   326,   -26,   -23,
     -79,    11,  -595,  -307,     8,  -595,  -595,  -595,   -33,   256,
    -430,  -595,  -595,  -595,    77,  -595,  -595,  -570,   -45,  -595,
    -595,   -12,  -595,   -54,  -595,  -595,   -47,   -46,   -53,   -52,
     -51,  -595,  -595,   -34,  -595,   -30,  -595,  -595,  -595,  -595,
     226,   313,  -595,  -261,  -595,  -595,  -595,   -28,  -595,   -25,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -105,
    -595,  -595,  -595,  -595,  -595,  -102,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,   -39,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,   -27,  -595,  -595,  -595,  -595,  -595,  -595,   -66,  -595,
    -595,  -595,   -64,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
      56,  -595,  -595,  -311,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,    16,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -594,  -595,  -595,  -595,  -595,  -595,  -125,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -143,  -595,  -595,  -467,  -595,
    -399,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,    18,    19,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,   351,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -277,   241,  -271,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,   581,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,   227,  -595,  -595,  -119,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,    59,  -595,  -595,  -595,   277,  -595,  -595,
     283,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,
    -595,  -595,  -595,  -595
};

/* TAO_YYTABLE[TAO_YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what TAO_YYDEFACT says.
   If TAO_YYTABLE_NINF, syntax error.  */
#define TAO_YYTABLE_NINF -508
static const tao_yytype_int16 tao_yytable[] =
{
      87,    88,   156,   102,   104,    98,    99,   152,   137,    45,
      46,   153,   191,   154,   192,   541,   155,   246,    55,   387,
      56,    57,   642,   136,   185,   188,   189,   190,   580,   390,
     391,   186,   187,    86,   406,   342,    86,   454,   665,   582,
     583,    86,   156,   264,   653,   420,   265,   152,   196,   487,
     654,   153,   496,   154,  -140,     3,   155,    86,     7,   115,
     183,   193,   714,   136,   107,   541,   677,   194,   409,   197,
     198,   199,   200,   454,   410,  -141,   112,   202,   421,     7,
     115,   205,   266,   267,   207,   476,    86,   209,   492,   715,
     716,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    86,    86,   116,   423,   132,   133,   134,
     101,   400,   401,   101,   653,   522,   212,   212,   212,   479,
     654,   493,    17,   319,   320,   480,    90,   231,   232,   233,
     234,   235,   236,   237,   101,    17,   113,   238,   239,    94,
     175,   402,  -142,  -301,   175,   454,   403,   115,  -283,   315,
     240,   241,   191,   166,   192,   242,   243,   400,   401,   115,
     201,   714,   203,   101,   185,   188,   189,   190,   321,   322,
     666,   186,   187,   521,   231,   232,   233,   234,   235,   236,
     237,   101,   715,   716,   238,   239,   211,   402,   715,   716,
     180,   212,   403,  -100,   182,   404,   405,   302,   115,    86,
     183,  -422,   786,   243,   465,   121,   122,   541,   213,   125,
     126,   127,   128,   212,   797,   323,   324,   325,   214,    11,
      86,   735,   736,   737,   803,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     9,    10,   215,
      11,   132,   133,   134,   377,   378,   379,   270,   462,   271,
      86,   312,   313,   314,   749,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     9,    10,  -494,
      11,   132,   133,   134,    89,    91,   101,    92,    95,   216,
     346,   347,   217,   640,   703,    93,    96,   246,   616,   617,
     361,   541,   522,   373,   374,   780,   713,   101,   375,   376,
     259,   258,  -101,   212,   261,   262,   309,   115,   263,   272,
     383,    86,   273,   741,   274,   383,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   752,   101,   275,   -44,
     276,   -44,   541,   133,   134,   278,   279,   308,   280,   422,
     281,   467,   468,   469,   470,   -44,   -44,   282,   -44,   -44,
     283,   286,   -44,   284,   290,   156,   472,   291,  -495,   318,
     152,   297,   298,   326,   153,   317,   154,   432,   136,   155,
     299,    45,    46,   331,   -44,   316,   136,   466,   -44,   542,
      55,   543,    56,    57,   497,   332,   501,   502,   101,   333,
     339,   343,   -44,   497,   359,   344,     4,   353,   354,     5,
       6,     7,     8,   362,   366,   367,   520,   499,   429,   368,
     369,   400,   401,   381,  -330,     9,    10,   508,    11,   509,
     513,   514,    12,    -8,   510,   527,   528,   540,   531,   542,
     529,   543,   473,   474,   533,    13,    14,    15,    16,   551,
     552,   402,   475,   553,    17,    18,   403,   554,    19,   404,
     405,    20,   555,   556,  -258,   561,   562,   563,    21,    22,
     788,   789,   264,   565,   574,    23,    24,   652,   579,   584,
     585,   586,   572,   573,   588,  -353,   615,   540,   596,   597,
     635,   218,   -50,   219,   606,   581,   620,   805,   607,   608,
     609,   610,   611,   587,   613,   246,   614,   220,   221,   618,
     222,   223,   624,   636,   224,   625,   626,   627,   646,   628,
     156,   156,   629,   630,   633,   152,   152,   634,   643,   153,
     153,   154,   154,   647,   155,   155,   225,   644,   645,   648,
     226,   136,   136,   649,   650,   659,   663,   675,   678,  -371,
     687,   679,   693,   691,   227,   698,   347,    86,   621,   622,
     623,   701,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,     9,    10,   697,    11,   132,   133,
     134,   542,   705,   543,   707,   709,   731,  -380,   722,   347,
     729,   734,   750,    86,   751,   754,   753,   658,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     758,   760,   766,   764,   781,   133,   134,   767,   790,   798,
     778,    45,    46,   779,   539,   796,   808,   799,   800,   540,
      55,   812,    56,    57,   101,    87,   668,   814,   804,   364,
     807,   811,   427,   692,   672,   639,   619,   307,   371,   704,
     370,   768,   456,   688,   372,   517,   771,   641,   787,   765,
     802,   393,   506,   689,   177,   542,   363,   543,   530,   792,
     101,     0,   651,     0,   433,     0,     0,     0,     0,     0,
       0,    87,   668,   484,     0,     0,     0,     0,     0,     0,
       0,    45,    46,     0,     0,     0,     0,     0,     0,     0,
      55,     0,    56,    57,     0,     0,   542,     0,   543,     0,
       0,     0,     0,   540,     0,     0,     0,     0,   156,     0,
       0,   757,     0,   152,   769,    87,   756,   153,     0,   154,
       0,     0,   155,     0,     0,     0,    86,     0,     0,   136,
       0,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,   540,     0,     0,     0,   133,   134,
       0,     0,     0,     0,     0,     0,   383,   383,     0,   347,
       0,     0,     0,     0,   791,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,   435,   383,  -362,     5,     0,     0,     8,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,     9,    10,   101,    11,     0,  -362,  -362,    12,     0,
       0,   400,   401,   436,   437,  -362,     0,     0,     0,     0,
       0,    13,     0,     0,     0,   448,   449,   450,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     435,     0,  -362,     5,    21,    22,     8,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,     9,
      10,  -362,    11,     0,  -362,  -362,    12,     0,   -86,   400,
     401,   436,   437,  -362,     0,     0,     0,     0,     0,    13,
       0,     0,     0,   448,   449,   450,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   435,     0,
    -362,     5,    21,    22,     8,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,     9,    10,  -362,
      11,     0,  -362,  -362,    12,     0,   -82,   400,   401,   436,
     437,  -362,     0,     0,     0,     0,     0,    13,     0,     0,
       0,   448,   449,   450,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   435,     0,  -362,     5,
      21,    22,     8,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,     9,    10,  -362,    11,     0,
    -362,  -362,    12,     0,  -507,   400,   401,   436,   437,  -362,
       0,     0,     0,     0,     0,    13,     0,     0,     0,   485,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   486,
       0,     0,     0,     0,   435,     0,  -362,     5,    21,    22,
       8,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,     9,    10,  -362,    11,     0,  -362,  -362,
      12,     0,  -474,   400,   401,   436,   437,  -362,     0,   435,
       0,  -362,     5,    13,     0,     8,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,     9,    10,
       0,    11,     0,  -362,  -362,    12,    21,    22,   400,   401,
     436,   437,  -362,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,  -362,     0,     0,     0,     0,     0,     0,
     -65,     0,     0,     0,     0,     0,     0,   435,     0,  -362,
       5,    21,    22,     8,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,     9,    10,  -362,    11,
       0,  -362,  -362,    12,     0,   -90,   400,   401,   436,   437,
    -362,     0,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     0,     0,     0,    -2,     4,     0,     0,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,    21,
      22,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,    12,     0,     0,     0,     0,  -362,     0,     0,     0,
       0,     0,     0,  -498,    13,    14,    15,    16,     0,     0,
       0,     0,     0,    17,    18,     0,     0,    19,     4,     0,
      20,     5,     6,     7,     8,     0,     0,    21,    22,     0,
       0,     0,     0,     0,    23,    24,     0,     9,    10,     0,
      11,     0,     0,     4,    12,     0,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
      16,     0,     9,    10,     0,    11,    17,    18,     0,    12,
      19,     0,     0,    20,     0,     0,     0,     0,     0,     0,
      21,    22,    13,    14,    15,    16,     0,    23,    24,   652,
       0,    17,    18,     0,     0,    19,     0,     0,    20,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
       0,     0,    23,    24
};

static const tao_yytype_int16 tao_yycheck[] =
{
      13,    13,    41,    21,    22,    18,    19,    41,    41,     2,
       2,    41,    78,    41,    78,   445,    41,   111,     2,   333,
       2,     2,   592,    41,    78,    78,    78,    78,   495,   336,
     337,    78,    78,     3,   345,   287,     3,   385,   632,     3,
       3,     3,    81,     8,   604,   355,    11,    81,    81,   397,
     604,    81,    19,    81,    85,     0,    81,     3,     6,    90,
      78,    79,     1,    81,    88,   495,   660,    80,   345,    82,
      83,    84,    85,   421,   345,    85,    85,    90,   356,     6,
      90,    94,     8,     9,    97,   396,     3,   100,   398,    28,
      29,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     3,     3,    34,   358,    24,    25,    26,
      80,    30,    31,    80,   674,   426,    80,    80,    80,   396,
     674,   399,    49,    81,    82,   396,    53,    73,    74,    75,
      76,    77,    78,    79,    80,    49,    85,    83,    84,    53,
      69,    60,    85,    85,    73,   493,    65,    90,    87,   243,
      96,    97,   218,    22,   218,   101,   102,    30,    31,    90,
      89,     1,    91,    80,   218,   218,   218,   218,    96,    97,
     637,   218,   218,   425,    73,    74,    75,    76,    77,    78,
      79,    80,    28,    29,    83,    84,    75,    60,    28,    29,
      86,    80,    65,    85,    85,    68,    69,   210,    90,     3,
     218,    85,   772,   102,     8,     9,    10,   637,    75,    13,
      14,    15,    16,    80,   784,    98,    99,   100,     3,    23,
       3,    35,    36,    37,   794,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     3,
      23,    24,    25,    26,   323,   324,   325,    89,     1,    91,
       3,   240,   241,   242,   721,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    85,
      23,    24,    25,    26,    14,    15,    80,    15,    16,    86,
     293,   294,    85,   590,   683,    15,    16,   381,   549,   550,
     303,   721,   603,   319,   320,   762,   695,    80,   321,   322,
      48,    85,    85,    80,    86,    85,     3,    90,    86,    88,
     328,     3,    88,   712,    85,   333,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   725,    80,    85,     4,
      86,     6,   762,    25,    26,    85,    85,    88,    85,   357,
      85,   395,   395,   395,   395,    20,    21,    86,    23,    24,
      85,    85,    27,    86,    85,   394,   395,    85,    85,    95,
     394,    86,    86,    89,   394,    94,   394,   380,   386,   394,
      90,   364,   364,     8,    49,    93,   394,   395,    53,   445,
     364,   445,   364,   364,   402,    88,   404,   405,    80,    47,
     102,    86,    67,   411,    90,    86,     1,    86,    86,     4,
       5,     6,     7,    86,     3,    89,   424,    58,    89,    91,
     103,    30,    31,    91,   104,    20,    21,    87,    23,    92,
      91,     3,    27,    87,   104,    87,     3,   445,    91,   495,
      86,   495,    51,    52,    87,    40,    41,    42,    43,    87,
      85,    60,    61,    89,    49,    50,    65,    89,    53,    68,
      69,    56,    89,    87,    87,   473,   474,   475,    63,    64,
     774,   775,     8,    87,    87,    70,    71,    72,    31,    85,
      85,    85,   485,   486,    85,    87,     3,   495,    87,    87,
      87,     4,    87,     6,    85,   498,   103,   801,    85,    85,
      85,    85,    85,   506,    85,   589,    85,    20,    21,    85,
      23,    24,    85,    87,    27,    85,    85,    85,    66,    85,
     549,   550,    85,    85,    85,   549,   550,    85,    87,   549,
     550,   549,   550,    85,   549,   550,    49,    91,    87,    85,
      53,   549,   550,    85,    87,     3,   102,    85,    85,    35,
     105,    86,   102,    87,    67,    35,   559,     3,   561,   562,
     563,    38,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   103,    23,    24,    25,
      26,   637,    55,   637,    91,    88,     3,   103,   103,   592,
      59,   103,    91,     3,   102,    62,   102,   605,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      89,   103,    90,    85,    39,    25,    26,    87,   102,    85,
      91,   604,   604,    91,    34,    90,    75,   103,   103,   637,
     604,    91,   604,   604,    80,   638,   638,    75,   102,   306,
     103,   103,   364,   674,   652,   589,   559,   218,   317,   684,
     316,   746,   386,   670,   318,   419,   748,   591,   773,   743,
     793,   338,   411,   671,    73,   721,   305,   721,   431,   778,
      80,    -1,   603,    -1,   381,    -1,    -1,    -1,    -1,    -1,
      -1,   684,   684,   396,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   674,   674,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     674,    -1,   674,   674,    -1,    -1,   762,    -1,   762,    -1,
      -1,    -1,    -1,   721,    -1,    -1,    -1,    -1,   747,    -1,
      -1,   729,    -1,   747,   747,   728,   728,   747,    -1,   747,
      -1,    -1,   747,    -1,    -1,    -1,     3,    -1,    -1,   747,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,   762,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,   774,   775,    -1,   772,
      -1,    -1,    -1,    -1,   777,    -1,    -1,    -1,    -1,    -1,
      -1,   784,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   794,     1,   801,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    80,    23,    -1,    25,    26,    27,    -1,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    63,    64,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    80,    23,    -1,    25,    26,    27,    -1,    87,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,    63,    64,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    80,
      23,    -1,    25,    26,    27,    -1,    87,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
      63,    64,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    80,    23,    -1,
      25,    26,    27,    -1,    87,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,    63,    64,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    80,    23,    -1,    25,    26,
      27,    -1,    87,    30,    31,    32,    33,    34,    -1,     1,
      -1,     3,     4,    40,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    -1,    25,    26,    27,    63,    64,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,    63,    64,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    80,    23,
      -1,    25,    26,    27,    -1,    87,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    -1,    -1,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,     1,    -1,
      56,     4,     5,     6,     7,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    20,    21,    -1,
      23,    -1,    -1,     1,    27,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    -1,    20,    21,    -1,    23,    49,    50,    -1,    27,
      53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    40,    41,    42,    43,    -1,    70,    71,    72,
      -1,    49,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71
};

/* TAO_YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const tao_yytype_uint16 tao_yystos[] =
{
       0,   107,   108,     0,     1,     4,     5,     6,     7,    20,
      21,    23,    27,    40,    41,    42,    43,    49,    50,    53,
      56,    63,    64,    70,    71,   109,   111,   126,   128,   132,
     133,   145,   148,   149,   153,   155,   158,   159,   163,   167,
     171,   173,   177,   178,   201,   202,   220,   229,   249,   251,
     263,   265,   287,   288,   289,   330,   381,   382,   383,   384,
     385,   389,   411,   413,   436,   437,   438,   439,   440,   444,
     445,   446,   449,   453,   462,   477,   478,   125,   203,   127,
     154,   221,   250,   264,   290,   331,     3,   200,   237,   153,
      53,   153,   171,   173,    53,   171,   173,   174,   200,   200,
     414,    80,   197,   200,   197,   463,   479,    88,   129,   118,
     134,   146,    85,    85,   117,    90,   156,   150,   119,   164,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    24,    25,    26,   156,   197,   224,   225,   226,
     227,   228,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   251,   263,   265,   289,   298,   301,   304,
     307,   308,   311,   115,   112,   252,    22,   116,   113,   114,
     120,   386,   121,   412,   122,   156,   447,   447,   123,   124,
      86,   481,    85,   197,   207,   239,   242,   243,   244,   245,
     246,   304,   308,   197,   200,   222,   224,   200,   200,   200,
     200,   156,   200,   156,   168,   200,   160,   200,   390,   200,
     198,    75,    80,    75,     3,     3,    86,    85,     4,     6,
      20,    21,    23,    24,    27,    49,    53,    67,   454,   455,
     458,    73,    74,    75,    76,    77,    78,    79,    83,    84,
      96,    97,   101,   102,   197,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   474,   476,    85,    48,
     175,    86,    85,    86,     8,    11,     8,     9,   302,   172,
      89,    91,    88,    88,    85,    85,    86,   266,    85,    85,
      85,    85,    86,    85,    86,   423,    85,   448,   441,   450,
      85,    85,   482,   204,   223,   291,   332,    86,    86,    90,
     392,   415,   200,   199,   464,   480,   130,   207,    88,     3,
     135,   456,   217,   217,   217,   209,    93,    94,    95,    81,
      82,    96,    97,    98,    99,   100,    89,   475,   157,   151,
     165,     8,    88,    47,   176,   299,   305,   309,   253,   102,
     387,   424,   176,    86,    86,   484,   200,   200,   230,   233,
     237,   238,   312,    86,    86,   169,   161,   393,   391,    90,
     420,   200,    86,   392,   108,   110,     3,    89,    91,   103,
     211,   212,   213,   214,   214,   215,   215,   216,   216,   216,
     147,    91,   194,   197,   184,   179,   303,   194,   209,   219,
     219,   219,   255,   257,   258,   267,   394,   426,   442,   451,
      30,    31,    60,    65,    68,    69,   319,   320,   325,   403,
     405,   406,   473,   483,   485,   205,   313,   231,   292,   333,
     184,   179,   197,   176,   421,   416,   465,   109,   131,    89,
     136,   457,   200,   476,   195,     1,    32,    33,   152,   185,
     202,   220,   319,   330,   335,   340,   381,   382,    44,    45,
      46,   166,   180,   181,   185,   342,   225,   300,   306,   310,
     254,   256,     1,   224,   259,     8,   197,   239,   244,   245,
     246,   272,   289,    51,    52,    61,   319,   388,   395,   403,
     405,   408,   409,   410,   473,    44,    54,   185,   425,   427,
     430,   433,   184,   179,   321,   326,    19,   197,   404,    58,
     407,   197,   197,   488,   486,   487,   404,   489,    87,    92,
     104,   314,   316,    91,     3,   294,   297,   256,   170,   162,
     197,   176,   319,   403,   405,   467,   469,    87,     3,    86,
     458,    91,   193,    87,   189,   186,   191,   190,   192,    34,
     197,   226,   304,   308,   341,   364,   187,   188,   343,   183,
     182,    87,    85,    89,    89,    89,    87,   257,   262,   260,
     268,   197,   197,   197,   401,    87,   396,   397,   398,   399,
     400,   402,   200,   200,    87,   428,   429,   443,   452,    31,
     364,   200,     3,     3,    85,    85,    85,   200,    85,   206,
     317,   315,   232,   293,   295,   334,    87,    87,   417,   472,
     470,   471,   466,   468,   137,   196,    85,    85,    85,    85,
      85,    85,   336,    85,    85,     3,   259,   259,    85,   230,
     103,   200,   200,   200,    85,    85,    85,    85,    85,    85,
      85,   431,   434,    85,    85,    87,    87,   322,   327,   208,
     219,   316,   233,    87,    91,    87,    66,    85,    85,    85,
      87,   469,    72,   111,   126,   139,   141,   142,   197,     3,
     344,   261,   269,   102,   346,   346,   364,   234,   237,   318,
     296,   418,   197,   138,   140,    85,   337,   346,    85,    86,
     347,   348,   432,   435,   323,   328,   235,   105,   297,   197,
     143,    87,   141,   102,   355,   345,   270,   103,    35,   349,
     352,    38,   366,   366,   234,    55,   369,    91,   419,    88,
     356,   357,   338,   366,     1,    28,    29,   273,   275,   279,
     281,   353,   103,   350,   367,   324,   370,   329,   236,    59,
     422,     3,   459,   461,   103,    35,    36,    37,   358,   361,
     365,   366,   278,   283,   282,   271,   274,   276,   280,   364,
      91,   102,   366,   102,    62,   372,   237,   197,    89,   460,
     103,   359,   362,   339,    85,   209,    90,    87,   275,   224,
     285,   281,   354,   351,   368,   371,   373,   144,    91,    91,
     364,    39,   375,   284,   286,   277,   233,   352,   194,   194,
     102,   200,   461,   360,   363,   376,    90,   233,    85,   103,
     103,   374,   361,   233,   102,   194,   377,   103,    75,   378,
     379,   103,    91,   380,    75
};

#define tao_yyerrok		(tao_yyerrstatus = 0)
#define tao_yyclearin	(tao_yychar = TAO_YYEMPTY)
#define TAO_YYEMPTY		(-2)
#define TAO_YYEOF		0

#define TAO_YYACCEPT	goto tao_yyacceptlab
#define TAO_YYABORT		goto tao_yyabortlab
#define TAO_YYERROR		goto tao_yyerrorlab


/* Like TAO_YYERROR except do call tao_yyerror.  This remains here temporarily
   to ease the transition to the new meaning of TAO_YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define TAO_YYFAIL		goto tao_yyerrlab

#define TAO_YYRECOVERING()  (!!tao_yyerrstatus)

#define TAO_YYBACKUP(Token, Value)					\
do								\
  if (tao_yychar == TAO_YYEMPTY && tao_yylen == 1)				\
    {								\
      tao_yychar = (Token);						\
      tao_yylval = (Value);						\
      tao_yytoken = TAO_YYTRANSLATE (tao_yychar);				\
      TAO_YYPOPSTACK (1);						\
      goto tao_yybackup;						\
    }								\
  else								\
    {								\
      tao_yyerror (TAO_YY_("syntax error: cannot back up")); \
      TAO_YYERROR;							\
    }								\
while (TAO_YYID (0))


#define TAO_YYTERROR	1
#define TAO_YYERRCODE	256


/* TAO_YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define TAO_YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef TAO_YYLLOC_DEFAULT
# define TAO_YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (TAO_YYID (N))                                                    \
	{								\
	  (Current).first_line   = TAO_YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = TAO_YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = TAO_YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = TAO_YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    TAO_YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    TAO_YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (TAO_YYID (0))
#endif


/* TAO_YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef TAO_YY_LOCATION_PRINT
# if TAO_YYLTYPE_IS_TRIVIAL
#  define TAO_YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define TAO_YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* TAO_YYLEX -- calling `tao_yylex' with the right arguments.  */

#ifdef TAO_YYLEX_PARAM
# define TAO_YYLEX tao_yylex (TAO_YYLEX_PARAM)
#else
# define TAO_YYLEX tao_yylex ()
#endif

/* Enable debugging if requested.  */
#if TAO_YYDEBUG

# ifndef TAO_YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define TAO_YYFPRINTF fprintf
# endif

# define TAO_YYDPRINTF(Args)			\
do {						\
  if (tao_yydebug)					\
    TAO_YYFPRINTF Args;				\
} while (TAO_YYID (0))

# define TAO_YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (tao_yydebug)								  \
    {									  \
      TAO_YYFPRINTF (stderr, "%s ", Title);					  \
      tao_yy_symbol_print (stderr,						  \
		  Type, Value); \
      TAO_YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (TAO_YYID (0))


/*--------------------------------.
| Print this symbol on TAO_YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
tao_yy_symbol_value_print (FILE *tao_yyoutput, int tao_yytype, TAO_YYSTYPE const * const tao_yyvaluep)
#else
static void
tao_yy_symbol_value_print (tao_yyoutput, tao_yytype, tao_yyvaluep)
    FILE *tao_yyoutput;
    int tao_yytype;
    TAO_YYSTYPE const * const tao_yyvaluep;
#endif
{
  if (!tao_yyvaluep)
    return;
# ifdef TAO_YYPRINT
  if (tao_yytype < TAO_YYNTOKENS)
    TAO_YYPRINT (tao_yyoutput, tao_yytoknum[tao_yytype], *tao_yyvaluep);
# else
  TAO_YYUSE (tao_yyoutput);
# endif
  switch (tao_yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on TAO_YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
tao_yy_symbol_print (FILE *tao_yyoutput, int tao_yytype, TAO_YYSTYPE const * const tao_yyvaluep)
#else
static void
tao_yy_symbol_print (tao_yyoutput, tao_yytype, tao_yyvaluep)
    FILE *tao_yyoutput;
    int tao_yytype;
    TAO_YYSTYPE const * const tao_yyvaluep;
#endif
{
  if (tao_yytype < TAO_YYNTOKENS)
    TAO_YYFPRINTF (tao_yyoutput, "token %s (", tao_yytname[tao_yytype]);
  else
    TAO_YYFPRINTF (tao_yyoutput, "nterm %s (", tao_yytname[tao_yytype]);

  tao_yy_symbol_value_print (tao_yyoutput, tao_yytype, tao_yyvaluep);
  TAO_YYFPRINTF (tao_yyoutput, ")");
}

/*------------------------------------------------------------------.
| tao_yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
tao_yy_stack_print (tao_yytype_int16 *tao_yybottom, tao_yytype_int16 *tao_yytop)
#else
static void
tao_yy_stack_print (tao_yybottom, tao_yytop)
    tao_yytype_int16 *tao_yybottom;
    tao_yytype_int16 *tao_yytop;
#endif
{
  TAO_YYFPRINTF (stderr, "Stack now");
  for (; tao_yybottom <= tao_yytop; tao_yybottom++)
    {
      int tao_yybot = *tao_yybottom;
      TAO_YYFPRINTF (stderr, " %d", tao_yybot);
    }
  TAO_YYFPRINTF (stderr, "\n");
}

# define TAO_YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (tao_yydebug)							\
    tao_yy_stack_print ((Bottom), (Top));				\
} while (TAO_YYID (0))


/*------------------------------------------------.
| Report that the TAO_YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
tao_yy_reduce_print (TAO_YYSTYPE *tao_yyvsp, int tao_yyrule)
#else
static void
tao_yy_reduce_print (tao_yyvsp, tao_yyrule)
    TAO_YYSTYPE *tao_yyvsp;
    int tao_yyrule;
#endif
{
  int tao_yynrhs = tao_yyr2[tao_yyrule];
  int tao_yyi;
  unsigned long int tao_yylno = tao_yyrline[tao_yyrule];
  TAO_YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     tao_yyrule - 1, tao_yylno);
  /* The symbols being reduced.  */
  for (tao_yyi = 0; tao_yyi < tao_yynrhs; tao_yyi++)
    {
      TAO_YYFPRINTF (stderr, "   $%d = ", tao_yyi + 1);
      tao_yy_symbol_print (stderr, tao_yyrhs[tao_yyprhs[tao_yyrule] + tao_yyi],
		       &(tao_yyvsp[(tao_yyi + 1) - (tao_yynrhs)])
		       		       );
      TAO_YYFPRINTF (stderr, "\n");
    }
}

# define TAO_YY_REDUCE_PRINT(Rule)		\
do {					\
  if (tao_yydebug)				\
    tao_yy_reduce_print (tao_yyvsp, Rule); \
} while (TAO_YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int tao_yydebug;
#else /* !TAO_YYDEBUG */
# define TAO_YYDPRINTF(Args)
# define TAO_YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define TAO_YY_STACK_PRINT(Bottom, Top)
# define TAO_YY_REDUCE_PRINT(Rule)
#endif /* !TAO_YYDEBUG */


/* TAO_YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	TAO_YYINITDEPTH
# define TAO_YYINITDEPTH 200
#endif

/* TAO_YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   TAO_YYSTACK_ALLOC_MAXIMUM < TAO_YYSTACK_BYTES (TAO_YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef TAO_YYMAXDEPTH
# define TAO_YYMAXDEPTH 10000
#endif



#if TAO_YYERROR_VERBOSE

# ifndef tao_yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define tao_yystrlen strlen
#  else
/* Return the length of TAO_YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static TAO_YYSIZE_T
tao_yystrlen (const char *tao_yystr)
#else
static TAO_YYSIZE_T
tao_yystrlen (tao_yystr)
    const char *tao_yystr;
#endif
{
  TAO_YYSIZE_T tao_yylen;
  for (tao_yylen = 0; tao_yystr[tao_yylen]; tao_yylen++)
    continue;
  return tao_yylen;
}
#  endif
# endif

# ifndef tao_yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define tao_yystpcpy stpcpy
#  else
/* Copy TAO_YYSRC to TAO_YYDEST, returning the address of the terminating '\0' in
   TAO_YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
tao_yystpcpy (char *tao_yydest, const char *tao_yysrc)
#else
static char *
tao_yystpcpy (tao_yydest, tao_yysrc)
    char *tao_yydest;
    const char *tao_yysrc;
#endif
{
  char *tao_yyd = tao_yydest;
  const char *tao_yys = tao_yysrc;

  while ((*tao_yyd++ = *tao_yys++) != '\0')
    continue;

  return tao_yyd - 1;
}
#  endif
# endif

# ifndef tao_yytnamerr
/* Copy to TAO_YYRES the contents of TAO_YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for tao_yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  TAO_YYSTR is taken from tao_yytname.  If TAO_YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static TAO_YYSIZE_T
tao_yytnamerr (char *tao_yyres, const char *tao_yystr)
{
  if (*tao_yystr == '"')
    {
      TAO_YYSIZE_T tao_yyn = 0;
      char const *tao_yyp = tao_yystr;

      for (;;)
	switch (*++tao_yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++tao_yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (tao_yyres)
	      tao_yyres[tao_yyn] = *tao_yyp;
	    tao_yyn++;
	    break;

	  case '"':
	    if (tao_yyres)
	      tao_yyres[tao_yyn] = '\0';
	    return tao_yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! tao_yyres)
    return tao_yystrlen (tao_yystr);

  return tao_yystpcpy (tao_yyres, tao_yystr) - tao_yyres;
}
# endif

/* Copy into TAO_YYRESULT an error message about the unexpected token
   TAO_YYCHAR while in state TAO_YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If TAO_YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return TAO_YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static TAO_YYSIZE_T
tao_yysyntax_error (char *tao_yyresult, int tao_yystate, int tao_yychar)
{
  int tao_yyn = tao_yypact[tao_yystate];

  if (! (TAO_YYPACT_NINF < tao_yyn && tao_yyn <= TAO_YYLAST))
    return 0;
  else
    {
      int tao_yytype = TAO_YYTRANSLATE (tao_yychar);
      TAO_YYSIZE_T tao_yysize0 = tao_yytnamerr (0, tao_yytname[tao_yytype]);
      TAO_YYSIZE_T tao_yysize = tao_yysize0;
      TAO_YYSIZE_T tao_yysize1;
      int tao_yysize_overflow = 0;
      enum { TAO_YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *tao_yyarg[TAO_YYERROR_VERBOSE_ARGS_MAXIMUM];
      int tao_yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      TAO_YY_("syntax error, unexpected %s");
      TAO_YY_("syntax error, unexpected %s, expecting %s");
      TAO_YY_("syntax error, unexpected %s, expecting %s or %s");
      TAO_YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      TAO_YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *tao_yyfmt;
      char const *tao_yyf;
      static char const tao_yyunexpected[] = "syntax error, unexpected %s";
      static char const tao_yyexpecting[] = ", expecting %s";
      static char const tao_yyor[] = " or %s";
      char tao_yyformat[sizeof tao_yyunexpected
		    + sizeof tao_yyexpecting - 1
		    + ((TAO_YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof tao_yyor - 1))];
      char const *tao_yyprefix = tao_yyexpecting;

      /* Start TAO_YYX at -TAO_YYN if negative to avoid negative indexes in
	 TAO_YYCHECK.  */
      int tao_yyxbegin = tao_yyn < 0 ? -tao_yyn : 0;

      /* Stay within bounds of both tao_yycheck and tao_yytname.  */
      int tao_yychecklim = TAO_YYLAST - tao_yyn + 1;
      int tao_yyxend = tao_yychecklim < TAO_YYNTOKENS ? tao_yychecklim : TAO_YYNTOKENS;
      int tao_yycount = 1;

      tao_yyarg[0] = tao_yytname[tao_yytype];
      tao_yyfmt = tao_yystpcpy (tao_yyformat, tao_yyunexpected);

      for (tao_yyx = tao_yyxbegin; tao_yyx < tao_yyxend; ++tao_yyx)
	if (tao_yycheck[tao_yyx + tao_yyn] == tao_yyx && tao_yyx != TAO_YYTERROR)
	  {
	    if (tao_yycount == TAO_YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		tao_yycount = 1;
		tao_yysize = tao_yysize0;
		tao_yyformat[sizeof tao_yyunexpected - 1] = '\0';
		break;
	      }
	    tao_yyarg[tao_yycount++] = tao_yytname[tao_yyx];
	    tao_yysize1 = tao_yysize + tao_yytnamerr (0, tao_yytname[tao_yyx]);
	    tao_yysize_overflow |= (tao_yysize1 < tao_yysize);
	    tao_yysize = tao_yysize1;
	    tao_yyfmt = tao_yystpcpy (tao_yyfmt, tao_yyprefix);
	    tao_yyprefix = tao_yyor;
	  }

      tao_yyf = TAO_YY_(tao_yyformat);
      tao_yysize1 = tao_yysize + tao_yystrlen (tao_yyf);
      tao_yysize_overflow |= (tao_yysize1 < tao_yysize);
      tao_yysize = tao_yysize1;

      if (tao_yysize_overflow)
	return TAO_YYSIZE_MAXIMUM;

      if (tao_yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *tao_yyp = tao_yyresult;
	  int tao_yyi = 0;
	  while ((*tao_yyp = *tao_yyf) != '\0')
	    {
	      if (*tao_yyp == '%' && tao_yyf[1] == 's' && tao_yyi < tao_yycount)
		{
		  tao_yyp += tao_yytnamerr (tao_yyp, tao_yyarg[tao_yyi++]);
		  tao_yyf += 2;
		}
	      else
		{
		  tao_yyp++;
		  tao_yyf++;
		}
	    }
	}
      return tao_yysize;
    }
}
#endif /* TAO_YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
tao_yydestruct (const char *tao_yymsg, int tao_yytype, TAO_YYSTYPE *tao_yyvaluep)
#else
static void
tao_yydestruct (tao_yymsg, tao_yytype, tao_yyvaluep)
    const char *tao_yymsg;
    int tao_yytype;
    TAO_YYSTYPE *tao_yyvaluep;
#endif
{
  TAO_YYUSE (tao_yyvaluep);

  if (!tao_yymsg)
    tao_yymsg = "Deleting";
  TAO_YY_SYMBOL_PRINT (tao_yymsg, tao_yytype, tao_yyvaluep, tao_yylocationp);

  switch (tao_yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef TAO_YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int tao_yyparse (void *TAO_YYPARSE_PARAM);
#else
int tao_yyparse ();
#endif
#else /* ! TAO_YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int tao_yyparse (void);
#else
int tao_yyparse ();
#endif
#endif /* ! TAO_YYPARSE_PARAM */


/* The lookahead symbol.  */
int tao_yychar;

/* The semantic value of the lookahead symbol.  */
TAO_YYSTYPE tao_yylval;

/* Number of syntax errors so far.  */
int tao_yynerrs;



/*-------------------------.
| tao_yyparse or tao_yypush_parse.  |
`-------------------------*/

#ifdef TAO_YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
tao_yyparse (void *TAO_YYPARSE_PARAM)
#else
int
tao_yyparse (TAO_YYPARSE_PARAM)
    void *TAO_YYPARSE_PARAM;
#endif
#else /* ! TAO_YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
tao_yyparse (void)
#else
int
tao_yyparse ()

#endif
#endif
{


    int tao_yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int tao_yyerrstatus;

    /* The stacks and their tools:
       `tao_yyss': related to states.
       `tao_yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow tao_yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    tao_yytype_int16 tao_yyssa[TAO_YYINITDEPTH];
    tao_yytype_int16 *tao_yyss;
    tao_yytype_int16 *tao_yyssp;

    /* The semantic value stack.  */
    TAO_YYSTYPE tao_yyvsa[TAO_YYINITDEPTH];
    TAO_YYSTYPE *tao_yyvs;
    TAO_YYSTYPE *tao_yyvsp;

    TAO_YYSIZE_T tao_yystacksize;

  int tao_yyn;
  int tao_yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int tao_yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  TAO_YYSTYPE tao_yyval;

#if TAO_YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char tao_yymsgbuf[128];
  char *tao_yymsg = tao_yymsgbuf;
  TAO_YYSIZE_T tao_yymsg_alloc = sizeof tao_yymsgbuf;
#endif

#define TAO_YYPOPSTACK(N)   (tao_yyvsp -= (N), tao_yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int tao_yylen = 0;

  tao_yytoken = 0;
  tao_yyss = tao_yyssa;
  tao_yyvs = tao_yyvsa;
  tao_yystacksize = TAO_YYINITDEPTH;

  TAO_YYDPRINTF ((stderr, "Starting parse\n"));

  tao_yystate = 0;
  tao_yyerrstatus = 0;
  tao_yynerrs = 0;
  tao_yychar = TAO_YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  tao_yyssp = tao_yyss;
  tao_yyvsp = tao_yyvs;

  goto tao_yysetstate;

/*------------------------------------------------------------.
| tao_yynewstate -- Push a new state, which is found in tao_yystate.  |
`------------------------------------------------------------*/
 tao_yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  tao_yyssp++;

 tao_yysetstate:
  *tao_yyssp = tao_yystate;

  if (tao_yyss + tao_yystacksize - 1 <= tao_yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      TAO_YYSIZE_T tao_yysize = tao_yyssp - tao_yyss + 1;

#ifdef tao_yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	TAO_YYSTYPE *tao_yyvs1 = tao_yyvs;
	tao_yytype_int16 *tao_yyss1 = tao_yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if tao_yyoverflow is a macro.  */
	tao_yyoverflow (TAO_YY_("memory exhausted"),
		    &tao_yyss1, tao_yysize * sizeof (*tao_yyssp),
		    &tao_yyvs1, tao_yysize * sizeof (*tao_yyvsp),
		    &tao_yystacksize);

	tao_yyss = tao_yyss1;
	tao_yyvs = tao_yyvs1;
      }
#else /* no tao_yyoverflow */
# ifndef TAO_YYSTACK_RELOCATE
      goto tao_yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (TAO_YYMAXDEPTH <= tao_yystacksize)
	goto tao_yyexhaustedlab;
      tao_yystacksize *= 2;
      if (TAO_YYMAXDEPTH < tao_yystacksize)
	tao_yystacksize = TAO_YYMAXDEPTH;

      {
	tao_yytype_int16 *tao_yyss1 = tao_yyss;
	union tao_yyalloc *tao_yyptr =
	  (union tao_yyalloc *) TAO_YYSTACK_ALLOC (TAO_YYSTACK_BYTES (tao_yystacksize));
	if (! tao_yyptr)
	  goto tao_yyexhaustedlab;
	TAO_YYSTACK_RELOCATE (tao_yyss_alloc, tao_yyss);
	TAO_YYSTACK_RELOCATE (tao_yyvs_alloc, tao_yyvs);
#  undef TAO_YYSTACK_RELOCATE
	if (tao_yyss1 != tao_yyssa)
	  TAO_YYSTACK_FREE (tao_yyss1);
      }
# endif
#endif /* no tao_yyoverflow */

      tao_yyssp = tao_yyss + tao_yysize - 1;
      tao_yyvsp = tao_yyvs + tao_yysize - 1;

      TAO_YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) tao_yystacksize));

      if (tao_yyss + tao_yystacksize - 1 <= tao_yyssp)
	TAO_YYABORT;
    }

  TAO_YYDPRINTF ((stderr, "Entering state %d\n", tao_yystate));

  if (tao_yystate == TAO_YYFINAL)
    TAO_YYACCEPT;

  goto tao_yybackup;

/*-----------.
| tao_yybackup.  |
`-----------*/
tao_yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  tao_yyn = tao_yypact[tao_yystate];
  if (tao_yyn == TAO_YYPACT_NINF)
    goto tao_yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* TAO_YYCHAR is either TAO_YYEMPTY or TAO_YYEOF or a valid lookahead symbol.  */
  if (tao_yychar == TAO_YYEMPTY)
    {
      TAO_YYDPRINTF ((stderr, "Reading a token: "));
      tao_yychar = TAO_YYLEX;
    }

  if (tao_yychar <= TAO_YYEOF)
    {
      tao_yychar = tao_yytoken = TAO_YYEOF;
      TAO_YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      tao_yytoken = TAO_YYTRANSLATE (tao_yychar);
      TAO_YY_SYMBOL_PRINT ("Next token is", tao_yytoken, &tao_yylval, &tao_yylloc);
    }

  /* If the proper action on seeing token TAO_YYTOKEN is to reduce or to
     detect an error, take that action.  */
  tao_yyn += tao_yytoken;
  if (tao_yyn < 0 || TAO_YYLAST < tao_yyn || tao_yycheck[tao_yyn] != tao_yytoken)
    goto tao_yydefault;
  tao_yyn = tao_yytable[tao_yyn];
  if (tao_yyn <= 0)
    {
      if (tao_yyn == 0 || tao_yyn == TAO_YYTABLE_NINF)
	goto tao_yyerrlab;
      tao_yyn = -tao_yyn;
      goto tao_yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (tao_yyerrstatus)
    tao_yyerrstatus--;

  /* Shift the lookahead token.  */
  TAO_YY_SYMBOL_PRINT ("Shifting", tao_yytoken, &tao_yylval, &tao_yylloc);

  /* Discard the shifted token.  */
  tao_yychar = TAO_YYEMPTY;

  tao_yystate = tao_yyn;
  *++tao_yyvsp = tao_yylval;

  goto tao_yynewstate;


/*-----------------------------------------------------------.
| tao_yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
tao_yydefault:
  tao_yyn = tao_yydefact[tao_yystate];
  if (tao_yyn == 0)
    goto tao_yyerrlab;
  goto tao_yyreduce;


/*-----------------------------.
| tao_yyreduce -- Do a reduction.  |
`-----------------------------*/
tao_yyreduce:
  /* tao_yyn is the number of a rule to reduce with.  */
  tao_yylen = tao_yyr2[tao_yyn];

  /* If TAO_YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets TAO_YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to TAO_YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that TAO_YYVAL may be used uninitialized.  */
  tao_yyval = tao_yyvsp[1-tao_yylen];


  TAO_YY_REDUCE_PRINT (tao_yyn);
  switch (tao_yyn)
    {
        case 5:

/* Line 1455 of yacc.c  */
#line 366 "idl.tao_yy"
    {
        ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 369 "idl.tao_yy"
    {
        ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 372 "idl.tao_yy"
    {
        ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 382 "idl.tao_yy"
    {
// fixed_definition : type_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeDeclSeen);
        ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 387 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 392 "idl.tao_yy"
    {
//      | typeid_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeIdDeclSeen);
        ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 397 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 402 "idl.tao_yy"
    {
//      | typeprefix_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypePrefixDeclSeen);
        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 407 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 412 "idl.tao_yy"
    {
//      | const_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstDeclSeen);
        ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 417 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 422 "idl.tao_yy"
    {
//      | exception
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptDeclSeen);
        ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 427 "idl.tao_yy"
    {
//      ';'
        idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 432 "idl.tao_yy"
    {
//      | interface_def
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceDeclSeen);
        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 437 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 442 "idl.tao_yy"
    {
//      | module
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleDeclSeen);
        ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 447 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 452 "idl.tao_yy"
    {
//      | value_def
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeDeclSeen);
        ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 457 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 462 "idl.tao_yy"
    {
//      | component
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentDeclSeen);
        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 467 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 472 "idl.tao_yy"
    {
//      | home_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeDeclSeen);
        ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 477 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 482 "idl.tao_yy"
    {
//      | event
          idl_global->set_parse_state (IDL_GlobalData::PS_EventDeclSeen);
        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 487 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 492 "idl.tao_yy"
    {
//      | porttype_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeDeclSeen);
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 497 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 502 "idl.tao_yy"
    {
//      | connector_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorDeclSeen);
        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 507 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 512 "idl.tao_yy"
    {
//      | error
          idl_global->err()->syntax_error (idl_global->parse_state());
        ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 517 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          tao_yyerrok;
        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 526 "idl.tao_yy"
    {
// module_header  : IDL_MODULE
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleSeen);
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 531 "idl.tao_yy"
    {
          (tao_yyval.idlist) = (tao_yyvsp[(3) - (3)].idlist);
        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 538 "idl.tao_yy"
    {
// module : module_header
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleIDSeen);

          // The module_header rule is common to template module, fixed
          // module and instantiated template module. In the last
          // case, a fully scoped name is allowed, but here we
          // allow only an identifier (a scoped name of length
          // 1). If not satisfied, we output a parse error with
          // the appropriate message.
          if ((tao_yyvsp[(1) - (1)].idlist)->length () != 1)
            {
              idl_global->err ()->syntax_error (
                IDL_GlobalData::PS_ModuleIDSeen);
            }

          AST_Module *m = 0;
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          /*
           * Make a new module and add it to the enclosing scope
           */
          if (s != 0)
            {
              m = idl_global->gen ()->create_module (s,
                                                     (tao_yyvsp[(1) - (1)].idlist));
              (void) s->fe_add_module (m);
            }

          (tao_yyvsp[(1) - (1)].idlist)->destroy ();
          delete (tao_yyvsp[(1) - (1)].idlist);
          (tao_yyvsp[(1) - (1)].idlist) = 0;

          /*
           * Push it on the stack
           */
          idl_global->scopes ().push (m);
        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 577 "idl.tao_yy"
    {
//      '{'
        idl_global->set_parse_state (IDL_GlobalData::PS_ModuleSqSeen);
        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 582 "idl.tao_yy"
    {
//      at_least_one_definition
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleBodySeen);
        ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 587 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleQsSeen);
          /*
           * Finished with this module - pop it from the scope stack.
           */

          idl_global->scopes ().pop ();
        ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 600 "idl.tao_yy"
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleIDSeen);
        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 607 "idl.tao_yy"
    {
// template_module : template_module_header
          // The module_header rule is common to template module, fixed
          // module and instantiated template module. In the last
          // case, a fully scoped name is allowed, but here we
          // allow only an identifier (a scoped name of length
          // 1). If not satisfied, we output a syntax error with
          // the appropriate message.
          if ((tao_yyvsp[(1) - (1)].idlist)->length () != 1)
            {
              idl_global->err ()->syntax_error (
                IDL_GlobalData::PS_ModuleIDSeen);
            }
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 622 "idl.tao_yy"
    {
          if (FE_Utils::duplicate_param_id ((tao_yyvsp[(3) - (3)].plval)))
            {
              idl_global->err ()->duplicate_param_id (
                (tao_yyvsp[(1) - (3)].idlist));

              return 1;
            }
        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 632 "idl.tao_yy"
    {
//        '>'
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleParamsSeen);

          AST_Template_Module *tm =
            idl_global->gen ()->create_template_module ((tao_yyvsp[(1) - (5)].idlist),
                                                        (tao_yyvsp[(3) - (5)].plval));

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Module *m = s->fe_add_module (tm);

          // We've probably tried to reopen a template module,
          // going further will cause a crash.
          if (m == 0)
            {
              return 1;
            }

          /*
           * Push it on the stack
           */
          idl_global->scopes ().push (tm);

          // Contained items not part of an alias will get flag set.
          idl_global->in_tmpl_mod_no_alias (true);

          // Store these for reference as we parse the scope
          // of the template module.
          idl_global->current_params ((tao_yyvsp[(3) - (5)].plval));
        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 663 "idl.tao_yy"
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleSqSeen);
        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 667 "idl.tao_yy"
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleBodySeen);
        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 671 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleQsSeen);

          /*
           * Finished with this module - pop it from the scope stack.
           */
          idl_global->scopes ().pop ();

          // Unset the flag, the no_alias version because any scope
          // traversal triggered by an alias would have ended by now.
          idl_global->in_tmpl_mod_no_alias (false);

          // Clear the pointer so scoped name lookup will know
          // that we are no longer in a template module scope.
          idl_global->current_params (0);
        ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 706 "idl.tao_yy"
    {
// template_module_ref : IDL_ALIAS scoped_name
          idl_global->set_parse_state (
            IDL_GlobalData::PS_ModuleRefSeen);
        ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 712 "idl.tao_yy"
    {
//        '<' at_least_one_formal_parameter_name '>'
          idl_global->set_parse_state (
            IDL_GlobalData::PS_ModuleRefParamsSeen);
        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 718 "idl.tao_yy"
    {
//        id
          idl_global->set_parse_state (
            IDL_GlobalData::PS_ModuleRefIDSeen);

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((tao_yyvsp[(2) - (8)].idlist));

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(2) - (8)].idlist));
              return 1;
            }

          AST_Template_Module *ref =
            AST_Template_Module::narrow_from_decl (d);

          if (ref == 0)
            {
              idl_global->err ()->template_module_expected (d);
              return 1;
            }

          bool refs_match =
            ref->match_param_refs ((tao_yyvsp[(5) - (8)].slval),
                                   s);

          if (! refs_match)
            {
              // Error message is already output.
              return 1;
            }

          UTL_ScopedName sn ((tao_yyvsp[(8) - (8)].idval), 0);

          AST_Template_Module_Ref *tmr =
            idl_global->gen ()->create_template_module_ref (
              &sn,
              ref,
              (tao_yyvsp[(5) - (8)].slval));

          (void) s->fe_add_template_module_ref (tmr);

          sn.destroy ();
          (tao_yyvsp[(2) - (8)].idlist)->destroy ();
          delete (tao_yyvsp[(2) - (8)].idlist);
          (tao_yyvsp[(2) - (8)].idlist) = 0;

          // Save the current flag value to be restored below.
          bool itmna_flag = idl_global->in_tmpl_mod_no_alias ();
          idl_global->in_tmpl_mod_no_alias (false);
          idl_global->in_tmpl_mod_alias (true);

          ast_visitor_context ctx;
          ctx.template_params (ref->template_params ());
          ast_visitor_tmpl_module_ref v (&ctx);

          // The implied IDL resulting from this reference is
          // created here, in the template module scope. Upon
          // instantiation of the enclosing template module, the
          // visitor copies this implied IDL to the instantiated
          // module scope. The extra copy is less than ideal, but
          // otherwise we have ugly lookup issues when the
          // referenced template module's contents are referenced
          // using the aliased scoped name.
          if (v.visit_template_module_ref (tmr) != 0)
            {
              ACE_ERROR ((LM_ERROR,
                          ACE_TEXT ("visit_template_module_ref")
                          ACE_TEXT (" failed\n")));

              idl_global->set_err_count (idl_global->err_count () + 1);
            }

          idl_global->in_tmpl_mod_no_alias (itmna_flag);
          idl_global->in_tmpl_mod_alias (false);
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 800 "idl.tao_yy"
    {
// template_module_inst : template_module_header
          idl_global->set_parse_state (
            IDL_GlobalData::PS_InstModuleSeen);
        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 806 "idl.tao_yy"
    {
//        at_least_one_actual_parameter '>'
          idl_global->set_parse_state (
            IDL_GlobalData::PS_InstModuleArgsSeen);
        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 812 "idl.tao_yy"
    {
//        id
          idl_global->set_parse_state (
            IDL_GlobalData::PS_InstModuleIDSeen);

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName *sn = (tao_yyvsp[(1) - (6)].idlist);
          AST_Template_Module *ref = 0;
          AST_Decl *d = s->lookup_by_name (sn);

          if (d == 0)
            {
              idl_global->err ()->lookup_error (sn);
              return 1;
            }
          else
            {
              ref = AST_Template_Module::narrow_from_decl (d);

              if (ref == 0)
                {
                  idl_global->err ()->template_module_expected (d);
                  return 1;
                }
            }

          sn->destroy ();
          delete sn;
          sn = 0;
          (tao_yyvsp[(1) - (6)].idlist) = 0;

          if (! ref->match_arg_names ((tao_yyvsp[(3) - (6)].alval)))
            {
              return 1;
            }

          ACE_NEW_RETURN (sn,
                          UTL_ScopedName ((tao_yyvsp[(6) - (6)].idval),
                                           0),
                          1);

          AST_Template_Module_Inst *tmi =
            idl_global->gen ()->create_template_module_inst (
              sn,
              ref,
              (tao_yyvsp[(3) - (6)].alval));

          (void) s->fe_add_template_module_inst (tmi);

          ast_visitor_context ctx;
          ctx.template_args ((tao_yyvsp[(3) - (6)].alval));
          ast_visitor_tmpl_module_inst v (&ctx);

          if (v.visit_template_module_inst (tmi) != 0)
            {
              ACE_ERROR ((LM_ERROR,
                          ACE_TEXT ("visit_template_module_inst")
                          ACE_TEXT (" failed\n")));

              idl_global->set_err_count (idl_global->err_count () + 1);
            }
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 883 "idl.tao_yy"
    {
// interface : interface_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Interface *i = 0;

          /*
           * Make a new interface node and add it to its enclosing scope.
           */
          if (s != 0 && (tao_yyvsp[(1) - (1)].ihval) != 0)
            {
              i =
                idl_global->gen ()->create_interface (
                                        (tao_yyvsp[(1) - (1)].ihval)->name (),
                                        (tao_yyvsp[(1) - (1)].ihval)->inherits (),
                                        (tao_yyvsp[(1) - (1)].ihval)->n_inherits (),
                                        (tao_yyvsp[(1) - (1)].ihval)->inherits_flat (),
                                        (tao_yyvsp[(1) - (1)].ihval)->n_inherits_flat (),
                                        (tao_yyvsp[(1) - (1)].ihval)->is_local (),
                                        (tao_yyvsp[(1) - (1)].ihval)->is_abstract ()
                                      );
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the interface to its definition scope.
               */
              (void) s->fe_add_interface (i);

              // This FE_InterfaceHeader class isn't destroyed with the AST.
              (tao_yyvsp[(1) - (1)].ihval)->destroy ();
              delete (tao_yyvsp[(1) - (1)].ihval);
              (tao_yyvsp[(1) - (1)].ihval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (i);
        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 922 "idl.tao_yy"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceSqSeen);
        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 927 "idl.tao_yy"
    {
//      exports
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceBodySeen);
        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 932 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceQsSeen);

          /*
           * Done with this interface - pop it off the scopes stack
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 945 "idl.tao_yy"
    {
// interface_decl : IDL_INTERFACE
           idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceSeen);
         ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 950 "idl.tao_yy"
    {
//       id
           idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceIDSeen);
           (tao_yyval.idval) = (tao_yyvsp[(3) - (3)].idval);
         ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 959 "idl.tao_yy"
    {
// interface_header : interface_decl inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);

          if ((tao_yyvsp[(2) - (2)].nlval) != 0 && (tao_yyvsp[(2) - (2)].nlval)->truncatable ())
            {
              idl_global->err ()->syntax_error (
                                      IDL_GlobalData::PS_InheritColonSeen
                                    );
            }

          /*
           * Create an AST representation of the information in the header
           * part of an interface - this representation contains a computed
           * list of all interfaces which this interface inherits from,
           * recursively
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((tao_yyvsp[(1) - (2)].idval), 0),
                          1);
          ACE_NEW_RETURN ((tao_yyval.ihval),
                          FE_InterfaceHeader (n,
                                              (tao_yyvsp[(2) - (2)].nlval),
                                              false,
                                              false,
                                              true),
                          1);

          if (0 != (tao_yyvsp[(2) - (2)].nlval))
            {
              (tao_yyvsp[(2) - (2)].nlval)->destroy ();
              delete (tao_yyvsp[(2) - (2)].nlval);
              (tao_yyvsp[(2) - (2)].nlval) = 0;
            }
        ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 997 "idl.tao_yy"
    {
//      | IDL_LOCAL interface_decl inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of an interface - this representation contains a computed
           * list of all interfaces which this interface inherits from,
           * recursively
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((tao_yyvsp[(2) - (3)].idval), 0),
                          1);
          ACE_NEW_RETURN ((tao_yyval.ihval),
                          FE_InterfaceHeader (n,
                                              (tao_yyvsp[(3) - (3)].nlval),
                                              true,
                                              false,
                                              true),
                          1);

          if (0 != (tao_yyvsp[(3) - (3)].nlval))
            {
              (tao_yyvsp[(3) - (3)].nlval)->destroy ();
              delete (tao_yyvsp[(3) - (3)].nlval);
              (tao_yyvsp[(3) - (3)].nlval) = 0;
            }
        ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1028 "idl.tao_yy"
    {
//      | IDL_ABSTRACT interface_decl inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of an interface - this representation contains a computed
           * list of all interfaces which this interface inherits from,
           * recursively
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((tao_yyvsp[(2) - (3)].idval), 0),
                          1);
          ACE_NEW_RETURN ((tao_yyval.ihval),
                          FE_InterfaceHeader (n,
                                              (tao_yyvsp[(3) - (3)].nlval),
                                              false,
                                              true,
                                              true),
                          1);

          if (0 != (tao_yyvsp[(3) - (3)].nlval))
            {
              (tao_yyvsp[(3) - (3)].nlval)->destroy ();
              delete (tao_yyvsp[(3) - (3)].nlval);
              (tao_yyvsp[(3) - (3)].nlval) = 0;
            }
        ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1061 "idl.tao_yy"
    {
// inheritance_spec : ':' opt_truncatable
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritColonSeen);
        ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1066 "idl.tao_yy"
    {
//      at_least_one_scoped_name
          (tao_yyvsp[(4) - (4)].nlval)->truncatable ((tao_yyvsp[(2) - (4)].bval));
          (tao_yyval.nlval) = (tao_yyvsp[(4) - (4)].nlval);
        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1072 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.nlval) = 0;
        ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1089 "idl.tao_yy"
    {
// value_cust_decl : IDL_CUSTOM value_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_ValueType *v = 0;
          AST_Interface *i = 0;

          if (s != 0 && (tao_yyvsp[(2) - (2)].vhval) != 0)
            {
              v =
                idl_global->gen ()->create_valuetype (
                  (tao_yyvsp[(2) - (2)].vhval)->name (),
                  (tao_yyvsp[(2) - (2)].vhval)->inherits (),
                  (tao_yyvsp[(2) - (2)].vhval)->n_inherits (),
                  (tao_yyvsp[(2) - (2)].vhval)->inherits_concrete (),
                  (tao_yyvsp[(2) - (2)].vhval)->inherits_flat (),
                  (tao_yyvsp[(2) - (2)].vhval)->n_inherits_flat (),
                  (tao_yyvsp[(2) - (2)].vhval)->supports (),
                  (tao_yyvsp[(2) - (2)].vhval)->n_supports (),
                  (tao_yyvsp[(2) - (2)].vhval)->supports_concrete (),
                  false,
                  (tao_yyvsp[(2) - (2)].vhval)->truncatable (),
                  true);

              i = AST_Interface::narrow_from_decl (v);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the valuetype to its definition scope
               */
              v = AST_ValueType::narrow_from_decl (i);
              (void) s->fe_add_valuetype (v);

              // FE_OBVHeader is not automatically destroyed in the AST
              (tao_yyvsp[(2) - (2)].vhval)->destroy ();
              delete (tao_yyvsp[(2) - (2)].vhval);
              (tao_yyvsp[(2) - (2)].vhval) = 0;
            }

          /*
           * Push it on the scope stack
           */
          idl_global->scopes ().push (v);
        ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1133 "idl.tao_yy"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeSqSeen);
        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1138 "idl.tao_yy"
    {
//      value_elements
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeBodySeen);
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1143 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeQsSeen);

          AST_ValueType *vt =
            AST_ValueType::narrow_from_scope (
                idl_global->scopes ().top_non_null ()
              );

          if (vt != 0 && vt->will_have_factory ())
            {
              idl_global->valuefactory_seen_ = true;
            }

          /*
           * Done with this value type - pop it off the scopes stack
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1167 "idl.tao_yy"
    {
// value_concrete_decl : value_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_ValueType *v = 0;
          AST_Interface *i = 0;

          if (s != 0 && (tao_yyvsp[(1) - (1)].vhval) != 0)
            {
              v =
                idl_global->gen ()->create_valuetype (
                  (tao_yyvsp[(1) - (1)].vhval)->name (),
                  (tao_yyvsp[(1) - (1)].vhval)->inherits (),
                  (tao_yyvsp[(1) - (1)].vhval)->n_inherits (),
                  (tao_yyvsp[(1) - (1)].vhval)->inherits_concrete (),
                  (tao_yyvsp[(1) - (1)].vhval)->inherits_flat (),
                  (tao_yyvsp[(1) - (1)].vhval)->n_inherits_flat (),
                  (tao_yyvsp[(1) - (1)].vhval)->supports (),
                  (tao_yyvsp[(1) - (1)].vhval)->n_supports (),
                  (tao_yyvsp[(1) - (1)].vhval)->supports_concrete (),
                  false,
                  (tao_yyvsp[(1) - (1)].vhval)->truncatable (),
                  false);

              i = AST_Interface::narrow_from_decl (v);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the valuetype to its definition scope
               */
              v = AST_ValueType::narrow_from_decl (i);
              (void) s->fe_add_valuetype (v);

              // FE_OBVHeader is not automatically destroyed in the AST
              (tao_yyvsp[(1) - (1)].vhval)->destroy ();
              delete (tao_yyvsp[(1) - (1)].vhval);
              (tao_yyvsp[(1) - (1)].vhval) = 0;
            }

          /*
           * Push it on the scope stack
           */
          idl_global->scopes ().push (v);
        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1211 "idl.tao_yy"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeSqSeen);
        ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1216 "idl.tao_yy"
    {
//      value_elements
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeBodySeen);
        ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1221 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeQsSeen);

          AST_ValueType *vt =
            AST_ValueType::narrow_from_scope (
                idl_global->scopes ().top_non_null ()
              );

          if (vt != 0 && vt->will_have_factory ())
            {
              idl_global->valuefactory_seen_ = true;
            }

          /*
           * Done with this value type - pop it off the scopes stack
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1245 "idl.tao_yy"
    {
// value_abs_decl : IDL_ABSTRACT value_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_ValueType *v = 0;
          AST_Interface *i = 0;

          if (s != 0 && (tao_yyvsp[(2) - (2)].vhval) != 0)
            {
              v =
                idl_global->gen ()->create_valuetype (
                    (tao_yyvsp[(2) - (2)].vhval)->name (),
                    (tao_yyvsp[(2) - (2)].vhval)->inherits (),
                    (tao_yyvsp[(2) - (2)].vhval)->n_inherits (),
                    (tao_yyvsp[(2) - (2)].vhval)->inherits_concrete (),
                    (tao_yyvsp[(2) - (2)].vhval)->inherits_flat (),
                    (tao_yyvsp[(2) - (2)].vhval)->n_inherits_flat (),
                    (tao_yyvsp[(2) - (2)].vhval)->supports (),
                    (tao_yyvsp[(2) - (2)].vhval)->n_supports (),
                    (tao_yyvsp[(2) - (2)].vhval)->supports_concrete (),
                    true,
                    false,
                    false
                  );
              i = AST_Interface::narrow_from_decl (v);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the valuetype to its definition scope
               */
              v = AST_ValueType::narrow_from_decl (i);
              (void) s->fe_add_valuetype (v);

              // FE_OBVHeader is not automatically destroyed in the AST
              (tao_yyvsp[(2) - (2)].vhval)->destroy ();
              delete (tao_yyvsp[(2) - (2)].vhval);
              (tao_yyvsp[(2) - (2)].vhval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (v);
        ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1289 "idl.tao_yy"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeSqSeen);
        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1294 "idl.tao_yy"
    {
//      exports
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeBodySeen);
        ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1299 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeQsSeen);

          /*
           * Done with this valuetype - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1313 "idl.tao_yy"
    {
// value_header : value_decl inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1318 "idl.tao_yy"
    {
//      supports_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);

          UTL_ScopedName *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_ScopedName ((tao_yyvsp[(1) - (4)].idval), 0),
                          1);
          ACE_NEW_RETURN ((tao_yyval.vhval),
                          FE_OBVHeader (sn,
                                        (tao_yyvsp[(2) - (4)].nlval),
                                        (tao_yyvsp[(4) - (4)].nlval),
                                        ((tao_yyvsp[(2) - (4)].nlval) != 0
                                           ? (tao_yyvsp[(2) - (4)].nlval)->truncatable ()
                                           : false)),
                          1);

          if (0 != (tao_yyvsp[(4) - (4)].nlval))
            {
              (tao_yyvsp[(4) - (4)].nlval)->destroy ();
              delete (tao_yyvsp[(4) - (4)].nlval);
              (tao_yyvsp[(4) - (4)].nlval) = 0;
            }

          if (0 != (tao_yyvsp[(2) - (4)].nlval))
            {
              (tao_yyvsp[(2) - (4)].nlval)->destroy ();
              delete (tao_yyvsp[(2) - (4)].nlval);
              (tao_yyvsp[(2) - (4)].nlval) = 0;
            }
        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1353 "idl.tao_yy"
    {
// value_decl : IDL_VALUETYPE
           idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeSeen);
        ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1358 "idl.tao_yy"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeIDSeen);
          (tao_yyval.idval) = (tao_yyvsp[(3) - (3)].idval);
        ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1367 "idl.tao_yy"
    {
// opt_truncatable : IDL_TRUNCATABLE
          (tao_yyval.bval) = true;
        ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1372 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.bval) = false;
        ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1381 "idl.tao_yy"
    {
// supports_spec : IDL_SUPPORTS at_least_one_scoped_name
          (tao_yyval.nlval) = (tao_yyvsp[(2) - (2)].nlval);
        ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1386 "idl.tao_yy"
    {
/*      |    EMPTY */
          (tao_yyval.nlval) = 0;
        ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1395 "idl.tao_yy"
    {
// value_forward_decl : IDL_ABSTRACT value_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(2) - (2)].idval),
                            0);
          AST_ValueTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * valuetype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_valuetype_fwd (&n,
                                                            true);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (tao_yyvsp[(2) - (2)].idval)->destroy ();
          delete (tao_yyvsp[(2) - (2)].idval);
          (tao_yyvsp[(2) - (2)].idval) = 0;
        ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1420 "idl.tao_yy"
    {
//      | value_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(1) - (1)].idval),
                            0);
          AST_ValueTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * valuetype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_valuetype_fwd (&n,
                                                            false);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (tao_yyvsp[(1) - (1)].idval)->destroy ();
          delete (tao_yyvsp[(1) - (1)].idval);
          (tao_yyvsp[(1) - (1)].idval) = 0;
        ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1447 "idl.tao_yy"
    {
// value_box_decl : value_decl type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueBoxDeclSeen);

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(1) - (2)].idval),
                            0);

          if (s != 0 && (tao_yyvsp[(2) - (2)].dcval) != 0)
            {
              /*
              * Get the type_spec associated with the valuebox
              */
              AST_Type *tp = 0;
              AST_Typedef *td
                = AST_Typedef::narrow_from_decl ((tao_yyvsp[(2) - (2)].dcval));

              if (td == 0)
                {
                  tp = AST_Type::narrow_from_decl ((tao_yyvsp[(2) - (2)].dcval));
                }
              else
                {
                  tp = td->primitive_base_type ();
                }

              if (tp == 0)
                {
                  // The <type_spec> given is a valid type
                  idl_global->err ()->not_a_type ((tao_yyvsp[(2) - (2)].dcval));
                }
              else
                {
                  AST_Decl::NodeType nt = tp->node_type ();

                  if (nt == AST_Decl::NT_valuetype
                      || nt == AST_Decl::NT_eventtype)
                    {
                      // valuetype is not allowed as <type_spec>
                      // for boxed value
                      idl_global->err ()->error0 (
                          UTL_Error::EIDL_ILLEGAL_BOXED_TYPE
                        );
                    }
                  else
                    {
                      /*
                      * Add the valuebox to its definition scope
                      */
                      AST_ValueBox *vb =
                        idl_global->gen ()->create_valuebox (&n,
                                                             tp);
                      (void) s->fe_add_valuebox (vb);
                    }
                }
            }

          (tao_yyvsp[(1) - (2)].idval)->destroy ();
          delete (tao_yyvsp[(1) - (2)].idval);
          (tao_yyvsp[(1) - (2)].idval) = 0;
        ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1524 "idl.tao_yy"
    {
// state_member : IDL_PUBLIC
          /* is $0 to member_i */
          (tao_yyval.vival) = AST_Field::vis_PUBLIC;
        ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1530 "idl.tao_yy"
    {
//        member_i
        ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1534 "idl.tao_yy"
    {
//        IDL_PRIVATE
          /* is $0 to member_i */
          (tao_yyval.vival) = AST_Field::vis_PRIVATE;
        ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1540 "idl.tao_yy"
    {
//        member_i
        ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1552 "idl.tao_yy"
    {
// export : type_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeDeclSeen);
        ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1557 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1562 "idl.tao_yy"
    {
//      | typeid_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeIdDeclSeen);
        ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1567 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1572 "idl.tao_yy"
    {
//      | typeprefix_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypePrefixDeclSeen);
        ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1577 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1582 "idl.tao_yy"
    {
//      | const_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstDeclSeen);
        ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1587 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state(IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1592 "idl.tao_yy"
    {
//      | exception
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptDeclSeen);
        ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1597 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1602 "idl.tao_yy"
    {
//      | attribute
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1607 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1612 "idl.tao_yy"
    {
//      | operation
          idl_global->set_parse_state (IDL_GlobalData::PS_OpDeclSeen);
        ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1617 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1622 "idl.tao_yy"
    {
//      | error
          idl_global->err()->syntax_error (idl_global->parse_state());
        ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1627 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          tao_yyerrok;
        ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1636 "idl.tao_yy"
    {
// at_least_one_scoped_name : scoped_name scoped_names
          ACE_NEW_RETURN ((tao_yyval.nlval),
                          UTL_NameList ((tao_yyvsp[(1) - (2)].idlist),
                                        (tao_yyvsp[(2) - (2)].nlval)),
                          1);
        ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1648 "idl.tao_yy"
    {
// scoped_names : scoped_names ','
          idl_global->set_parse_state (IDL_GlobalData::PS_SNListCommaSeen);
        ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1653 "idl.tao_yy"
    {
//      scoped_name
          idl_global->set_parse_state (IDL_GlobalData::PS_ScopedNameSeen);

          UTL_NameList *nl = 0;
          ACE_NEW_RETURN (nl,
                          UTL_NameList ((tao_yyvsp[(4) - (4)].idlist),
                                        0),
                          1);

          if ((tao_yyvsp[(1) - (4)].nlval) == 0)
            {
              (tao_yyval.nlval) = nl;
            }
          else
            {
              (tao_yyvsp[(1) - (4)].nlval)->nconc (nl);
              (tao_yyval.nlval) = (tao_yyvsp[(1) - (4)].nlval);
            }
        ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1674 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.nlval) = 0;
        ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1682 "idl.tao_yy"
    {
// scoped_name : id
          idl_global->set_parse_state (IDL_GlobalData::PS_SN_IDSeen);

          ACE_NEW_RETURN ((tao_yyval.idlist),
                          UTL_IdList ((tao_yyvsp[(1) - (1)].idval),
                                      0),
                          1);
        ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1692 "idl.tao_yy"
    {
//      | IDL_SCOPE_DELIMITOR
          idl_global->set_parse_state (IDL_GlobalData::PS_ScopeDelimSeen);
        ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1697 "idl.tao_yy"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_SN_IDSeen);

          Identifier *id = 0;
          ACE_NEW_RETURN (id,
                          Identifier ((tao_yyvsp[(1) - (3)].strval)),
                          1);
          ACE::strdelete ((tao_yyvsp[(1) - (3)].strval));
          (tao_yyvsp[(1) - (3)].strval) = 0;
          UTL_IdList *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_IdList ((tao_yyvsp[(3) - (3)].idval),
                                      0),
                          1);
          ACE_NEW_RETURN ((tao_yyval.idlist),
                          UTL_IdList (id,
                                      sn),
                          1);
        ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1719 "idl.tao_yy"
    {
//      | scoped_name IDL_SCOPE_DELIMITOR
          idl_global->set_parse_state (IDL_GlobalData::PS_ScopeDelimSeen);

          // This cleans up all the non-global "::"s in scoped names.
          // If there is a global one, it gets put into the UTL_IdList,
          // so we clean it up in the case above.
          ACE::strdelete ((tao_yyvsp[(2) - (2)].strval));
          (tao_yyvsp[(2) - (2)].strval) = 0;
        ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1730 "idl.tao_yy"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_SN_IDSeen);

          UTL_IdList *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_IdList ((tao_yyvsp[(4) - (4)].idval),
                                      0),
                          1);
          (tao_yyvsp[(1) - (4)].idlist)->nconc (sn);
          (tao_yyval.idlist) = (tao_yyvsp[(1) - (4)].idlist);
        ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1745 "idl.tao_yy"
    {
// id: IDENTIFIER
          ACE_NEW_RETURN ((tao_yyval.idval),
                          Identifier ((tao_yyvsp[(1) - (1)].strval)),
                          1);
          ACE::strdelete ((tao_yyvsp[(1) - (1)].strval));
          (tao_yyvsp[(1) - (1)].strval) = 0;
        ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1757 "idl.tao_yy"
    {
// interface_forward : interface_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(1) - (1)].idval),
                            0);

          if (ACE_OS::strcmp ((tao_yyvsp[(1) - (1)].idval)->get_string (),
                              "TypeCode") == 0
              && !idl_global->in_main_file ())
            {
              AST_PredefinedType *pdt =
                idl_global->gen ()->create_predefined_type (
                                        AST_PredefinedType::PT_pseudo,
                                        &n
                                      );

              s->add_to_scope (pdt);

              (tao_yyvsp[(1) - (1)].idval)->destroy ();
              delete (tao_yyvsp[(1) - (1)].idval);
              (tao_yyvsp[(1) - (1)].idval) = 0;

              break;
            }

          AST_InterfaceFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * interface. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_interface_fwd (&n,
                                                            0,
                                                            0);
              (void) s->fe_add_interface_fwd (f);
            }

          (tao_yyvsp[(1) - (1)].idval)->destroy ();
          delete (tao_yyvsp[(1) - (1)].idval);
          (tao_yyvsp[(1) - (1)].idval) = 0;
        ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1803 "idl.tao_yy"
    {
//      | IDL_LOCAL interface_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(2) - (2)].idval),
                            0);
          AST_InterfaceFwd *f = 0;
          idl_global->set_parse_state (
                          IDL_GlobalData::PS_InterfaceForwardSeen
                        );

          /*
           * Create a node representing a forward declaration of an
           * interface. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_interface_fwd (&n,
                                                            1,
                                                            0);
              (void) s->fe_add_interface_fwd (f);
            }

          (tao_yyvsp[(2) - (2)].idval)->destroy ();
          delete (tao_yyvsp[(2) - (2)].idval);
          (tao_yyvsp[(2) - (2)].idval) = 0;
        ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1831 "idl.tao_yy"
    {
//      | IDL_ABSTRACT interface_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(2) - (2)].idval),
                            0);
          AST_InterfaceFwd *f = 0;
          idl_global->set_parse_state (
                          IDL_GlobalData::PS_InterfaceForwardSeen
                        );

          /*
           * Create a node representing a forward declaration of an
           * interface. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_interface_fwd (&n,
                                                            0,
                                                            1);
              (void) s->fe_add_interface_fwd (f);
            }

          (tao_yyvsp[(2) - (2)].idval)->destroy ();
          delete (tao_yyvsp[(2) - (2)].idval);
          (tao_yyvsp[(2) - (2)].idval) = 0;
        ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1861 "idl.tao_yy"
    {
// const_dcl : IDL_CONST
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstSeen);
        ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1866 "idl.tao_yy"
    {
//      const_type
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstTypeSeen);
        ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1871 "idl.tao_yy"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstIDSeen);
        ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1876 "idl.tao_yy"
    {
//      '='
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstAssignSeen);
        ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1881 "idl.tao_yy"
    {
//      expression
          UTL_ScopedName n ((tao_yyvsp[(5) - (9)].idval),
                            0);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Constant *c = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstExprSeen);

          /*
           * Create a node representing a constant declaration. Store
           * it in the enclosing scope.
           */
          if ((tao_yyvsp[(9) - (9)].exval) != 0 && s != 0)
            {
              AST_Param_Holder *param_holder =
                (tao_yyvsp[(9) - (9)].exval)->param_holder ();

              AST_Expression::AST_ExprValue *result =
                (tao_yyvsp[(9) - (9)].exval)->check_and_coerce ((tao_yyvsp[(3) - (9)].etval),
                                      tao_enum_constant_decl);
              tao_enum_constant_decl = 0;

              // If the expression is a template parameter place
              // holder, 'result' will be 0, but it's ok.
              if (result == 0 && param_holder == 0)
                {
                  idl_global->err ()->coercion_error ((tao_yyvsp[(9) - (9)].exval),
                                                      (tao_yyvsp[(3) - (9)].etval));
                  (tao_yyvsp[(9) - (9)].exval)->destroy ();
                  delete (tao_yyvsp[(9) - (9)].exval);
                  (tao_yyvsp[(9) - (9)].exval) = 0;
                }
              else
                {
                  AST_Expression::ExprType et =
                    (tao_yyvsp[(3) - (9)].etval);

                  if (param_holder != 0
                      && et != param_holder->info ()->const_type_)
                    {
                      idl_global->err ()->mismatched_template_param (
                        param_holder->info ()->name_.c_str ());
                    }
                  else
                    {
                      c =
                        idl_global->gen ()->create_constant (
                          (tao_yyvsp[(3) - (9)].etval),
                          (tao_yyvsp[(9) - (9)].exval),
                          &n);

                      (void) s->fe_add_constant (c);
                    }
                }

              (tao_yyvsp[(5) - (9)].idval)->destroy ();
              delete (tao_yyvsp[(5) - (9)].idval);
              (tao_yyvsp[(5) - (9)].idval) = 0;

              delete result;
              result = 0;
            }
        ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1954 "idl.tao_yy"
    {
// const_type
//      : integer_type
//      | char_type
//      | octet_type
//      | boolean_type
//      | floating_pt_type
//      | fixed_type
//      | string_type_spec
          (tao_yyval.etval) = AST_Expression::EV_string;
        ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1966 "idl.tao_yy"
    {
//      | wstring_type_spec
          (tao_yyval.etval) = AST_Expression::EV_wstring;
        ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1971 "idl.tao_yy"
    {
//      | scoped_name
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_PredefinedType *c = 0;
          AST_Typedef *t = 0;
          UTL_ScopedName *sn = (tao_yyvsp[(1) - (1)].idlist);

          /*
           * If the constant's type is a scoped name, it must resolve
           * to a scalar constant type
           */
          AST_Decl *d =
            s->lookup_by_name (sn);

          if (s != 0 && d != 0)
            {
              /*
               * Look through typedefs.
               */
              while (d->node_type () == AST_Decl::NT_typedef)
                {
                  t = AST_Typedef::narrow_from_decl (d);

                  if (t == 0)
                    {
                      break;
                    }

                  d = t->base_type ();
                }

              if (d->node_type () == AST_Decl::NT_pre_defined)
                {
                  c = AST_PredefinedType::narrow_from_decl (d);

                  (tao_yyval.etval) = FE_Utils::PredefinedTypeToExprType (c->pt ());
                }
              else if (d->node_type () == AST_Decl::NT_string)
                {
                  (tao_yyval.etval) = AST_Expression::EV_string;
                }
              else if (d->node_type () == AST_Decl::NT_wstring)
                {
                  (tao_yyval.etval) = AST_Expression::EV_wstring;
                }
              else if (d->node_type () == AST_Decl::NT_enum)
                {
                  (tao_yyval.etval) = AST_Expression::EV_enum;
                  tao_enum_constant_decl =
                    AST_Enum::narrow_from_decl (d);
                }
              else
                {
                  idl_global->err ()->constant_expected (sn, d);
                }
            }
          else
            {
              idl_global->err ()->lookup_error (sn);
            }

          sn->destroy ();
          delete sn;
          sn = 0;
          (tao_yyvsp[(1) - (1)].idlist) = 0;
        ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 2045 "idl.tao_yy"
    {
// or_expr : xor_expr
//      | or_expr '|' xor_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_or,
                                    (tao_yyvsp[(1) - (3)].exval),
                                    (tao_yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 2060 "idl.tao_yy"
    {
// xor_expr : and_expr
//      | xor_expr '^' and_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_xor,
                                    (tao_yyvsp[(1) - (3)].exval),
                                    (tao_yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 2075 "idl.tao_yy"
    {
// and_expr : shift_expr | and_expr '&' shift_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_and,
                                    (tao_yyvsp[(1) - (3)].exval),
                                    (tao_yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 2089 "idl.tao_yy"
    {
// shift_expr : add_expr | shift_expr IDL_LEFT_SHIFT add_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_left,
                                    (tao_yyvsp[(1) - (3)].exval),
                                    (tao_yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 2099 "idl.tao_yy"
    {
//      | shift_expr IDL_RIGHT_SHIFT add_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_right,
                                    (tao_yyvsp[(1) - (3)].exval),
                                    (tao_yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 2113 "idl.tao_yy"
    {
// add_expr : mult_expr | add_expr '+' mult_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_add,
                                    (tao_yyvsp[(1) - (3)].exval),
                                    (tao_yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 2123 "idl.tao_yy"
    {
//      | add_expr '-' mult_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_minus,
                                    (tao_yyvsp[(1) - (3)].exval),
                                    (tao_yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 2137 "idl.tao_yy"
    {
// mult_expr : unary_expr | mult_expr '*' unary_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_mul,
                                    (tao_yyvsp[(1) - (3)].exval),
                                    (tao_yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 2147 "idl.tao_yy"
    {
//      | mult_expr '/' unary_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_div,
                                    (tao_yyvsp[(1) - (3)].exval),
                                    (tao_yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 2157 "idl.tao_yy"
    {
//      | mult_expr '%' unary_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_mod,
                                    (tao_yyvsp[(1) - (3)].exval),
                                    (tao_yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 2171 "idl.tao_yy"
    {
// unary_expr : primary_expr | '+' primary_expr
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_u_plus,
                                    (tao_yyvsp[(2) - (2)].exval),
                                    0
                                  );
        ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 2181 "idl.tao_yy"
    {
//      | '-' primary_expr
          (tao_yyval.exval) =
            idl_global->gen()->create_expr (
                                   AST_Expression::EC_u_minus,
                                   (tao_yyvsp[(2) - (2)].exval),
                                   0
                                 );
        ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 2191 "idl.tao_yy"
    {
//      | '~' primary_expr
          (tao_yyval.exval) =
            idl_global->gen()->create_expr (
                                   AST_Expression::EC_bit_neg,
                                   (tao_yyvsp[(2) - (2)].exval),
                                   0
                                 );
        ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 2204 "idl.tao_yy"
    {
// primary_expr : scoped_name
          /*
           * An expression which is a scoped name is not resolved now,
           * but only when it is evaluated (such as when it is assigned
           * as a constant value).
           */
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((tao_yyvsp[(1) - (1)].idlist));

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(1) - (1)].idlist));
              return 1;
            }
          else if (d->node_type () == AST_Decl::NT_const)
            {
              /*
               * If the scoped name is an IDL constant, it
               * may be used in an array dim, a string
               * bound, or a sequence bound. If so, it
               * must be unsigned and > 0. We assign the
               * constant's value and type to the
               * expression created here so we can check
               * them later.
               */
              AST_Constant *c =
                AST_Constant::narrow_from_decl (d);

              (tao_yyval.exval) =
                idl_global->gen ()->create_expr (
                  c->constant_value (),
                  c->et ());
            }
          else
            {
              // An AST_Expression owns the scoped name
              // passed in this constructor, so we copy it
              // and destroy it below no matter which case
              // is followed.
              (tao_yyval.exval) =
                idl_global->gen ()->create_expr (
                  (tao_yyvsp[(1) - (1)].idlist)->copy ());
            }

          (tao_yyvsp[(1) - (1)].idlist)->destroy ();
          delete (tao_yyvsp[(1) - (1)].idlist);
          (tao_yyvsp[(1) - (1)].idlist) = 0;
        ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 2256 "idl.tao_yy"
    {
//      | literal
//      | '(' const_expr ')'
          (tao_yyval.exval) = (tao_yyvsp[(2) - (3)].exval);
        ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 2265 "idl.tao_yy"
    {
// literal : IDL_INTEGER_LITERAL
          (tao_yyval.exval) = idl_global->gen ()->create_expr ((tao_yyvsp[(1) - (1)].ival));
        ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 2270 "idl.tao_yy"
    {
//      | IDL_UINTEGER_LITERAL
          (tao_yyval.exval) =
            idl_global->gen ()->create_expr ((tao_yyvsp[(1) - (1)].uival));
        ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 2276 "idl.tao_yy"
    {
//      | IDL_STRING_LITERAL
          (tao_yyval.exval) = idl_global->gen ()->create_expr ((tao_yyvsp[(1) - (1)].sval));
          (tao_yyvsp[(1) - (1)].sval)->destroy ();
          delete (tao_yyvsp[(1) - (1)].sval);
          (tao_yyvsp[(1) - (1)].sval) = 0;
        ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 2284 "idl.tao_yy"
    {
//      | IDL_WSTRING_LITERAL
          (tao_yyval.exval) = idl_global->gen ()->create_expr ((tao_yyvsp[(1) - (1)].wsval));
        ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 2289 "idl.tao_yy"
    {
//      | IDL_CHARACTER_LITERAL
          (tao_yyval.exval) = idl_global->gen ()->create_expr ((tao_yyvsp[(1) - (1)].cval));
        ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 2294 "idl.tao_yy"
    {
//      | IDL_WCHAR_LITERAL
          ACE_OutputCDR::from_wchar wc ((tao_yyvsp[(1) - (1)].wcval));
          (tao_yyval.exval) = idl_global->gen ()->create_expr (wc);
        ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 2300 "idl.tao_yy"
    {
//      | IDL_FLOATING_PT_LITERAL
          (tao_yyval.exval) = idl_global->gen ()->create_expr ((tao_yyvsp[(1) - (1)].dval));
        ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 2305 "idl.tao_yy"
    {
//      | IDL_TRUETOK
          (tao_yyval.exval) = idl_global->gen ()->create_expr (true);
        ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 2310 "idl.tao_yy"
    {
//      | IDL_FALSETOK
          (tao_yyval.exval) = idl_global->gen ()->create_expr (false);
        ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 2318 "idl.tao_yy"
    {
// positive_int_expr : const_expr
          int good_expression = 1;
          (tao_yyvsp[(1) - (1)].exval)->evaluate (AST_Expression::EK_positive_int);
          AST_Expression::AST_ExprValue *ev = (tao_yyvsp[(1) - (1)].exval)->ev ();

          /*
           * If const_expr is an enum value (AST_EnumVal inherits from
           * AST_Constant), the AST_ExprValue will probably not be set,
           * but there's no need to check anyway
           */
          if (ev != 0)
            {
              switch (ev->et)
              {
                case AST_Expression::EV_ushort:
                  if (ev->u.usval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_ulong:
                  if (ev->u.ulval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_ulonglong:
                  if (ev->u.ullval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_octet:
                  if (ev->u.oval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_bool:
                  if (ev->u.bval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                default:
                  good_expression = 0;
                  break;
              }
            }

          if (good_expression)
            {
              (tao_yyval.exval) = (tao_yyvsp[(1) - (1)].exval);
            }
          else
            {
              idl_global->err ()->syntax_error (idl_global->parse_state ());
            }
        ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 2389 "idl.tao_yy"
    {
// type_dcl : IDL_TYPEDEF
          idl_global->set_parse_state (IDL_GlobalData::PS_TypedefSeen);
          idl_global->in_typedef (true);
        ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 2395 "idl.tao_yy"
    {
//      type_declarator
          (tao_yyval.dcval) = 0;
        ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 2400 "idl.tao_yy"
    {
//      | struct_type
          (tao_yyval.dcval) = 0;
        ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2405 "idl.tao_yy"
    {
//      | union_type
          (tao_yyval.dcval) = 0;
        ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2410 "idl.tao_yy"
    {
//      | enum_type
          (tao_yyval.dcval) = 0;
        ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2415 "idl.tao_yy"
    {
//      | IDL_NATIVE simple_declarator
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Native *node = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_NativeSeen);

          /*
           * Create a node representing a Native and add it to its
           * enclosing scope
           */
          if (s != 0)
            {
              node =
                idl_global->gen ()->create_native (
                                        (tao_yyvsp[(2) - (2)].deval)->name ()
                                      );
              /*
               * Add it to its defining scope
               */
              (void) s->fe_add_native (node);
            }

          (tao_yyvsp[(2) - (2)].deval)->destroy ();
          delete (tao_yyvsp[(2) - (2)].deval);
          (tao_yyvsp[(2) - (2)].deval) = 0;
        ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2442 "idl.tao_yy"
    {
//      | constructed_forward_type_spec
          (tao_yyval.dcval) = 0;
        ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2450 "idl.tao_yy"
    {
// type_declarator : type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeSpecSeen);
        ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2455 "idl.tao_yy"
    {
//      at_least_one_declarator
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          FE_Declarator *d = 0;
          AST_Typedef *t = 0;
          unsigned long index = 0UL;
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclaratorsSeen);

          /*
           * Create a list of type renamings. Add them to the
           * enclosing scope
           */
          if (s != 0 && (tao_yyvsp[(1) - (3)].dcval) != 0 && (tao_yyvsp[(3) - (3)].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((tao_yyvsp[(3) - (3)].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type * tp = d->compose ((tao_yyvsp[(1) - (3)].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  if (AST_Decl::NT_except == tp->node_type ())
                    {
                      idl_global->err ()->not_a_type (tp);
                      continue;
                    }

                  t = idl_global->gen ()->create_typedef (tp,
                                                          d->name (),
                                                          s->is_local (),
                                                          s->is_abstract ());

                  // If the base type is a sequence or array, the typedef
                  // constructor sets owns_base_type_ to true. But if
                  // there is a comma-separated list of such typedefs,
                  // the base type can be destroyed only once. In all
                  // other cases, the line below has no effect.
                  if (index++ > 0)
                    {
                      t->owns_base_type (false);
                    }

                  (void) s->fe_add_typedef (t);
                  idl_global->in_typedef (false);
                }

              // This FE_Declarator class isn't destroyed with the AST.
              (tao_yyvsp[(3) - (3)].dlval)->destroy ();
              delete (tao_yyvsp[(3) - (3)].dlval);
              (tao_yyvsp[(3) - (3)].dlval) = 0;
            }
        ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2527 "idl.tao_yy"
    {
// simple_type_spec : base_type_spec
          (tao_yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (tao_yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2536 "idl.tao_yy"
    {
//      | template_type_spec
//      | scoped_name
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = 0;

          if (s != 0)
            {
              d =
                s->lookup_by_name ((tao_yyvsp[(1) - (1)].idlist));
            }

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(1) - (1)].idlist));
            }
          else
            {
              d->last_referenced_as ((tao_yyvsp[(1) - (1)].idlist));
            }


          (tao_yyval.dcval) = d;
        ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2592 "idl.tao_yy"
    {
// at_least_one_declarator : declarator declarators
          ACE_NEW_RETURN ((tao_yyval.dlval),
                          UTL_DeclList ((tao_yyvsp[(1) - (2)].deval),
                                        (tao_yyvsp[(2) - (2)].dlval)),
                          1);
        ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2604 "idl.tao_yy"
    {
// declarators : declarators ','
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsCommaSeen);
        ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2609 "idl.tao_yy"
    {
//      declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsDeclSeen);

          UTL_DeclList *dl = 0;
          ACE_NEW_RETURN (dl,
                          UTL_DeclList ((tao_yyvsp[(4) - (4)].deval),
                                        0),
                          1);

          if ((tao_yyvsp[(1) - (4)].dlval) == 0)
            {
              (tao_yyval.dlval) = dl;
            }
          else
            {
              (tao_yyvsp[(1) - (4)].dlval)->nconc (dl);
              (tao_yyval.dlval) = (tao_yyvsp[(1) - (4)].dlval);
            }
        ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2630 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.dlval) = 0;
        ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2643 "idl.tao_yy"
    {
// at_least_one_simple_declarator : simple_declarator simple_declarators
          ACE_NEW_RETURN ((tao_yyval.dlval),
                          UTL_DeclList ((tao_yyvsp[(1) - (2)].deval),
                                        (tao_yyvsp[(2) - (2)].dlval)),
                          1);
        ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2655 "idl.tao_yy"
    {
// simple_declarators : simple_declarators ','
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsCommaSeen);
        ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2660 "idl.tao_yy"
    {
//      simple_declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsDeclSeen);

          UTL_DeclList *dl = 0;
          ACE_NEW_RETURN (dl,
                          UTL_DeclList ((tao_yyvsp[(4) - (4)].deval),
                                        0),
                          1);

          if ((tao_yyvsp[(1) - (4)].dlval) == 0)
            {
              (tao_yyval.dlval) = dl;
            }
          else
            {
              (tao_yyvsp[(1) - (4)].dlval)->nconc (dl);
              (tao_yyval.dlval) = (tao_yyvsp[(1) - (4)].dlval);
            }
        ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2681 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.dlval) = 0;
        ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2689 "idl.tao_yy"
    {
// simple_declarator : id
          UTL_ScopedName *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_ScopedName ((tao_yyvsp[(1) - (1)].idval),
                                          0),
                          1);
          ACE_NEW_RETURN ((tao_yyval.deval),
                          FE_Declarator (sn,
                                         FE_Declarator::FD_simple,
                                         0),
                          1);
        ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2706 "idl.tao_yy"
    {
// complex_declarator : array_declarator
          UTL_ScopedName *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_ScopedName (
                              (tao_yyvsp[(1) - (1)].dcval)->local_name ()->copy (),
                              0
                            ),
                          1);
          ACE_NEW_RETURN ((tao_yyval.deval),
                          FE_Declarator (sn,
                                         FE_Declarator::FD_complex,
                                         (tao_yyvsp[(1) - (1)].dcval)),
                          1);
        ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 2730 "idl.tao_yy"
    {
// signed_int : IDL_LONG
          (tao_yyval.etval) = AST_Expression::EV_long;
        ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 2735 "idl.tao_yy"
    {
//      | IDL_LONG IDL_LONG
          (tao_yyval.etval) = AST_Expression::EV_longlong;
        ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2740 "idl.tao_yy"
    {
//      | IDL_SHORT
          (tao_yyval.etval) = AST_Expression::EV_short;
        ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2748 "idl.tao_yy"
    {
// unsigned_int : IDL_UNSIGNED IDL_LONG
          (tao_yyval.etval) = AST_Expression::EV_ulong;
        ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2753 "idl.tao_yy"
    {
//      | IDL_UNSIGNED IDL_LONG IDL_LONG
          (tao_yyval.etval) = AST_Expression::EV_ulonglong;
        ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2758 "idl.tao_yy"
    {
//      | IDL_UNSIGNED IDL_SHORT
          (tao_yyval.etval) = AST_Expression::EV_ushort;
        ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2766 "idl.tao_yy"
    {
// floating_pt_type : IDL_DOUBLE
          (tao_yyval.etval) = AST_Expression::EV_double;
        ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2771 "idl.tao_yy"
    {
//      | IDL_FLOAT
          (tao_yyval.etval) = AST_Expression::EV_float;
        ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2776 "idl.tao_yy"
    {
//      | IDL_LONG IDL_DOUBLE
          (tao_yyval.etval) = AST_Expression::EV_longdouble;
        ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2784 "idl.tao_yy"
    {
// fixed_type : IDL_FIXED
          ACE_DEBUG ((LM_DEBUG,
                      ACE_TEXT ("error in %C line %d\n"),
                      idl_global->filename ()->get_string (),
                      idl_global->lineno ()));
          ACE_DEBUG ((LM_DEBUG,
                      ACE_TEXT ("Sorry, I (TAO_IDL) can't handle")
                      ACE_TEXT (" fixed types yet\n")));
        ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2798 "idl.tao_yy"
    {
// char_type : IDL_CHAR
          (tao_yyval.etval) = AST_Expression::EV_char;
        ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2803 "idl.tao_yy"
    {
//      | IDL_WCHAR
          (tao_yyval.etval) = AST_Expression::EV_wchar;
        ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2811 "idl.tao_yy"
    {
// octet_type : IDL_OCTET
          (tao_yyval.etval) = AST_Expression::EV_octet;
        ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 2819 "idl.tao_yy"
    {
// boolean_type : IDL_BOOLEAN
          (tao_yyval.etval) = AST_Expression::EV_bool;
        ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 2827 "idl.tao_yy"
    {
// any_type : IDL_ANY
          (tao_yyval.etval) = AST_Expression::EV_any;
        ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 2835 "idl.tao_yy"
    {
// object_type : IDL_OBJECT
          (tao_yyval.etval) = AST_Expression::EV_object;
        ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 2843 "idl.tao_yy"
    {
// struct_decl : IDL_STRUCT
          idl_global->set_parse_state (IDL_GlobalData::PS_StructSeen);
        ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 2848 "idl.tao_yy"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_StructIDSeen);
          (tao_yyval.idval) = (tao_yyvsp[(3) - (3)].idval);
        ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2858 "idl.tao_yy"
    {
// struct_type : struct_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(1) - (1)].idval),
                            0);
          AST_Structure *d = 0;

          /*
           * Create a node representing a struct declaration. Add it
           * to the enclosing scope
           */
          if (s != 0)
            {
              d =
                idl_global->gen ()->create_structure (
                                        &n,
                                        s->is_local (),
                                        s->is_abstract ()
                                      );
              AST_Structure::fwd_redefinition_helper (d,
                                                      s);
              (void) s->fe_add_structure (d);
            }

          /*
           * Push the scope of the struct on the scopes stack.
           */
          idl_global->scopes ().push (d);

          (tao_yyvsp[(1) - (1)].idval)->destroy ();
          delete (tao_yyvsp[(1) - (1)].idval);
          (tao_yyvsp[(1) - (1)].idval) = 0;
        ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 2892 "idl.tao_yy"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_StructSqSeen);
        ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2897 "idl.tao_yy"
    {
//      at_least_one_member
          idl_global->set_parse_state (IDL_GlobalData::PS_StructBodySeen);
        ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2902 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_StructQsSeen);

          /*
           * Done with this struct. Pop its scope off the scopes stack.
           */
          (tao_yyval.dcval) = AST_Structure::narrow_from_scope (
                   idl_global->scopes ().top_non_null ()
                 );
          idl_global->scopes ().pop ();
        ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 2924 "idl.tao_yy"
    {
// member  :
          /* is $0 to member_i */
          (tao_yyval.vival) = AST_Field::vis_NA;
        ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 2934 "idl.tao_yy"
    {
// member_i : type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_MemberTypeSeen);
        ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 2939 "idl.tao_yy"
    {
//      at_least_one_declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_MemberDeclsSeen);
        ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 2944 "idl.tao_yy"
    {
//      ';'
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          FE_Declarator *d = 0;
          AST_Field *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_MemberDeclsCompleted);

          /*
           * Check for illegal recursive use of type.
           */
          if ((tao_yyvsp[(1) - (5)].dcval) != 0
              && AST_illegal_recursive_type ((tao_yyvsp[(1) - (5)].dcval)))
            {
              idl_global->err ()->error1 (UTL_Error::EIDL_RECURSIVE_TYPE,
                                          (tao_yyvsp[(1) - (5)].dcval));
            }
          /*
           * Create a node representing a struct or exception member
           * Add it to the enclosing scope.
           */
          else if (s != 0
                   && (tao_yyvsp[(1) - (5)].dcval) != 0
                   && (tao_yyvsp[(3) - (5)].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((tao_yyvsp[(3) - (5)].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type *tp = d->compose ((tao_yyvsp[(1) - (5)].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  /* $0 denotes Visibility, must be on yacc reduction stack. */
                  f =
                    idl_global->gen ()->create_field (
                                            tp,
                                            d->name (),
                                            (tao_yyvsp[(0) - (5)].vival)
                                          );
                  (void) s->fe_add_field (f);
                }
            }

          (tao_yyvsp[(3) - (5)].dlval)->destroy ();
          delete (tao_yyvsp[(3) - (5)].dlval);
          (tao_yyvsp[(3) - (5)].dlval) = 0;
        ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 3002 "idl.tao_yy"
    {
//      | error
          idl_global->err()->syntax_error (idl_global->parse_state ());
        ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 3007 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          tao_yyerrok;
        ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 3016 "idl.tao_yy"
    {
// union_decl : IDL_UNION
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionSeen);
        ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 3021 "idl.tao_yy"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionIDSeen);
          (tao_yyval.idval) = (tao_yyvsp[(3) - (3)].idval);
        ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 3030 "idl.tao_yy"
    {
// union_type : union_decl IDL_SWITCH
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchSeen);
        ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 3035 "idl.tao_yy"
    {
//      '('
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(1) - (4)].idval),
                            0);
          AST_Union *u = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchOpenParSeen);

          /*
           * Create a node representing an empty union. Add it to its enclosing
           * scope.
           */
          if (s != 0)
            {
              u = idl_global->gen ()->create_union (0,
                                                    &n,
                                                    s->is_local (),
                                                    s->is_abstract ());

              AST_Structure *st = AST_Structure::narrow_from_decl (u);
              AST_Structure::fwd_redefinition_helper (st,
                                                      s);
              u = AST_Union::narrow_from_decl (st);
              (void) s->fe_add_union (u);
            }

          /*
           * Push the scope of the union on the scopes stack
           */
          idl_global->scopes ().push (u);

          /*
           * Don't delete $1 yet; we'll need it a bit later.
           */
        ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 3071 "idl.tao_yy"
    {
//      switch_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchTypeSeen);
        ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 3076 "idl.tao_yy"
    {
//      ')'
          /*
           * The top of the scopes must an empty union we added after we
           * encountered 'union <id> switch ('. Now we are ready to add a
           * correct one. Temporarily remove the top so that we setup the
           * correct union in a right scope. But first save pragma prefix
           * since UTL_ScopeStack::pop() removes it.
           */
          char *prefix = 0;
          idl_global->pragma_prefixes ().top (prefix);
          prefix = ACE::strnew (prefix);
          UTL_Scope *top = idl_global->scopes ().top_non_null ();
          idl_global->scopes ().pop ();

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(1) - (8)].idval),
                            0);
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchCloseParSeen);

          /*
           * Create a node representing a union.
           */
          if ((tao_yyvsp[(6) - (8)].dcval) != 0
              && s != 0)
            {
              AST_ConcreteType *tp =
                AST_ConcreteType::narrow_from_decl ((tao_yyvsp[(6) - (8)].dcval));

              if (tp == 0)
                {
                  idl_global->err ()->not_a_type ((tao_yyvsp[(6) - (8)].dcval));
                }
              else
                {
                  /* Create a union with a correct discriminator. */
                  AST_Union *u = 0;
                  u = idl_global->gen ()->create_union (tp,
                                                        &n,
                                                        s->is_local (),
                                                        s->is_abstract ());
                  /* Narrow the enclosing scope. */
                  AST_Union *e = AST_Union::narrow_from_scope (top);

                  e->redefine (u);

                  u->destroy ();
                  delete u;
                }
            }

          /*
           * Restore the top.
           */
          idl_global->scopes ().push (top);
          idl_global->pragma_prefixes ().push (prefix);

          (tao_yyvsp[(1) - (8)].idval)->destroy ();
          delete (tao_yyvsp[(1) - (8)].idval);
          (tao_yyvsp[(1) - (8)].idval) = 0;
        ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 3138 "idl.tao_yy"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionSqSeen);
        ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 3143 "idl.tao_yy"
    {
//      at_least_one_case_branch
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionBodySeen);
        ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 3148 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionQsSeen);

          /*
           * Done with this union. Pop its scope from the scopes stack.
           */
          (tao_yyval.dcval) = AST_Union::narrow_from_scope (
                   idl_global->scopes ().top_non_null ()
                 );

          if ((tao_yyval.dcval) != 0)
            {
              idl_global->scopes ().pop ();
            }
        ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 3168 "idl.tao_yy"
    {
// switch_type_spec : integer_type
          (tao_yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (tao_yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 3176 "idl.tao_yy"
    {
//      | char_type
          /* wchars are not allowed. */
          if ((tao_yyvsp[(1) - (1)].etval) == AST_Expression::EV_wchar)
            {
              idl_global->err ()->error0 (UTL_Error::EIDL_DISC_TYPE);
            }

          (tao_yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (tao_yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 3190 "idl.tao_yy"
    {
//      | octet_type
          /* octets are not allowed. */
          idl_global->err ()->error0 (UTL_Error::EIDL_DISC_TYPE);
          (tao_yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (tao_yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 3200 "idl.tao_yy"
    {
//      | boolean_type
          (tao_yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (tao_yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 3209 "idl.tao_yy"
    {
//      | enum_type
//      | scoped_name
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = 0;
          AST_PredefinedType *p = 0;
          AST_Typedef *t = 0;
          bool found = false;

          /*
           * The discriminator is a scoped name. Try to resolve to
           * one of the scalar types or to an enum. Thread through
           * typedef's to arrive at the base type at the end of the
           * chain.
           */
          d =
            s->lookup_by_name ((tao_yyvsp[(1) - (1)].idlist));

          if (s != 0 && d != 0)
            {
              while (!found)
                {
                  switch (d->node_type ())
                  {
                    case AST_Decl::NT_enum:
                      (tao_yyval.dcval) = d;
                      found = true;
                      break;
                    case AST_Decl::NT_pre_defined:
                      p = AST_PredefinedType::narrow_from_decl (d);

                      if (p != 0)
                        {
                          switch (p->pt ())
                          {
                            case AST_PredefinedType::PT_long:
                            case AST_PredefinedType::PT_ulong:
                            case AST_PredefinedType::PT_longlong:
                            case AST_PredefinedType::PT_ulonglong:
                            case AST_PredefinedType::PT_short:
                            case AST_PredefinedType::PT_ushort:
                            case AST_PredefinedType::PT_char:
                            case AST_PredefinedType::PT_boolean:
                              (tao_yyval.dcval) = p;
                              found = true;
                              break;
                            case AST_PredefinedType::PT_wchar:
                            case AST_PredefinedType::PT_octet:
                              /* octets and wchars are not allowed */
                              idl_global->err ()->error0 (
                                  UTL_Error::EIDL_DISC_TYPE
                                );
                              (tao_yyval.dcval) = 0;
                              found = true;
                              break;
                            default:
                              (tao_yyval.dcval) = 0;
                              found = true;
                              break;
                          }
                        }
                      else
                        {
                          (tao_yyval.dcval) = 0;
                          found = true;
                        }

                      break;
                    case AST_Decl::NT_typedef:
                      t = AST_Typedef::narrow_from_decl (d);

                      if (t != 0)
                        {
                          d = t->base_type ();
                        }

                      break;
                    default:
                      (tao_yyval.dcval) = 0;
                      found = true;
                      break;
                  }
                }
            }
          else
            {
              (tao_yyval.dcval) = 0;
            }

          if ((tao_yyval.dcval) == 0)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(1) - (1)].idlist));

              (tao_yyvsp[(1) - (1)].idlist)->destroy ();
              delete (tao_yyvsp[(1) - (1)].idlist);
              (tao_yyvsp[(1) - (1)].idlist) = 0;

              /* If we don't return here, we'll crash later.*/
              return 1;
            }

          (tao_yyvsp[(1) - (1)].idlist)->destroy ();
          delete (tao_yyvsp[(1) - (1)].idlist);
          (tao_yyvsp[(1) - (1)].idlist) = 0;
        ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 3325 "idl.tao_yy"
    {
// case_branch : at_least_one_case_label
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionLabelSeen);
        ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 3330 "idl.tao_yy"
    {
//      element_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemSeen);
        ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 3335 "idl.tao_yy"
    {
//      ';'
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_UnionBranch *b = 0;
          AST_Field *f = (tao_yyvsp[(3) - (5)].ffval);
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemCompleted);

          /*
           * Create several nodes representing branches of a union.
           * Add them to the enclosing scope (the union scope)
           */
          if (s != 0
              &&  (tao_yyvsp[(1) - (5)].llval) != 0
              && (tao_yyvsp[(3) - (5)].ffval) != 0)
            {
              b =
                idl_global->gen ()->create_union_branch (
                                        (tao_yyvsp[(1) - (5)].llval),
                                        f->field_type (),
                                        f->name ()
                                      );
              (void) s->fe_add_union_branch (b);

              // f has passed its field type to the union branch,
              // but the rest still needs to be cleaned up.
              f->AST_Decl::destroy ();
              delete f;
              f = 0;
            }
        ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 3366 "idl.tao_yy"
    {
//      | error
          idl_global->err()->syntax_error (idl_global->parse_state());
        ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 3371 "idl.tao_yy"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          tao_yyerrok;
        ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 3380 "idl.tao_yy"
    {
// at_least_one_case_label : case_label case_labels
          ACE_NEW_RETURN ((tao_yyval.llval),
                          UTL_LabelList ((tao_yyvsp[(1) - (2)].ulval),
                                         (tao_yyvsp[(2) - (2)].llval)),
                          1);
        ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 3391 "idl.tao_yy"
    {
// case_labels : case_labels case_label
          UTL_LabelList *ll = 0;
          ACE_NEW_RETURN (ll,
                          UTL_LabelList ((tao_yyvsp[(2) - (2)].ulval),
                                         0),
                          1);

          if ((tao_yyvsp[(1) - (2)].llval) == 0)
            {
              (tao_yyval.llval) = ll;
            }
          else
            {
              (tao_yyvsp[(1) - (2)].llval)->nconc (ll);
              (tao_yyval.llval) = (tao_yyvsp[(1) - (2)].llval);
            }
        ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 3410 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.llval) = 0;
        ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 3418 "idl.tao_yy"
    {
// case_label : IDL_DEFAULT
          idl_global->set_parse_state (IDL_GlobalData::PS_DefaultSeen);
        ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 3423 "idl.tao_yy"
    {
//      ':'
          idl_global->set_parse_state (IDL_GlobalData::PS_LabelColonSeen);

          (tao_yyval.ulval) = idl_global->gen ()->create_union_label (
                                       AST_UnionLabel::UL_default,
                                       0
                                     );
        ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 3433 "idl.tao_yy"
    {
//      | IDL_CASE
          idl_global->set_parse_state (IDL_GlobalData::PS_CaseSeen);
        ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 3438 "idl.tao_yy"
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_LabelExprSeen);
        ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 3442 "idl.tao_yy"
    {
//      const_expr
          idl_global->set_parse_state (IDL_GlobalData::PS_LabelColonSeen);

          (tao_yyval.ulval) = idl_global->gen()->create_union_label (
                                      AST_UnionLabel::UL_label,
                                      (tao_yyvsp[(3) - (5)].exval)
                                    );
        ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 3455 "idl.tao_yy"
    {
// element_spec : type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemTypeSeen);
        ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 3460 "idl.tao_yy"
    {
//      declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemDeclSeen);

          /*
           * Check for illegal recursive use of type
           */
          if ((tao_yyvsp[(1) - (3)].dcval) != 0
              && AST_illegal_recursive_type ((tao_yyvsp[(1) - (3)].dcval)))
            {
              idl_global->err()->error1 (UTL_Error::EIDL_RECURSIVE_TYPE,
                                         (tao_yyvsp[(1) - (3)].dcval));

              (tao_yyval.ffval) = 0;
            }
          /*
           * Create a field in a union branch
           */
          else if ((tao_yyvsp[(1) - (3)].dcval) == 0
                   || (tao_yyvsp[(3) - (3)].deval) == 0)
            {
              (tao_yyval.ffval) = 0;
            }
          else
            {
              AST_Type *tp = (tao_yyvsp[(3) - (3)].deval)->compose ((tao_yyvsp[(1) - (3)].dcval));

              if (tp == 0)
                {
                  (tao_yyval.ffval) = 0;
                }
              else
                {
                  (tao_yyval.ffval) = idl_global->gen ()->create_field (
                                               tp,
                                               (tao_yyvsp[(3) - (3)].deval)->name ()
                                             );
                }

              (tao_yyvsp[(3) - (3)].deval)->destroy ();
              delete (tao_yyvsp[(3) - (3)].deval);
              (tao_yyvsp[(3) - (3)].deval) = 0;
            }
        ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 3508 "idl.tao_yy"
    {
// struct_forward_type : struct_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(1) - (1)].idval),
                            0);
          AST_StructureFwd *d = 0;

          /*
           * Create a node representing a forward declaration of a struct.
           */
          if (s != 0)
            {
              d = idl_global->gen ()->create_structure_fwd (&n);
              (void) s->fe_add_structure_fwd (d);
            }

          (tao_yyvsp[(1) - (1)].idval)->destroy ();
          delete (tao_yyvsp[(1) - (1)].idval);
          (tao_yyvsp[(1) - (1)].idval) = 0;
        ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 3532 "idl.tao_yy"
    {
// union_forward_type : union_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(1) - (1)].idval),
                            0);
          AST_UnionFwd *u = 0;

          /*
           * Create a node representing a forward declaration of a union.
           */
          if (s != 0)
            {
              u = idl_global->gen ()->create_union_fwd (&n);
              (void) s->fe_add_union_fwd (u);
            }

          (tao_yyvsp[(1) - (1)].idval)->destroy ();
          delete (tao_yyvsp[(1) - (1)].idval);
          (tao_yyvsp[(1) - (1)].idval) = 0;
        ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 3556 "idl.tao_yy"
    {
// enum_type : IDL_ENUM
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumSeen);
        ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 3561 "idl.tao_yy"
    {
//      id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(3) - (3)].idval),
                            0);
          AST_Enum *e = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumIDSeen);

          /*
           * Create a node representing an enum and add it to its
           * enclosing scope.
           */
          if (s != 0)
            {
              e = idl_global->gen ()->create_enum (&n,
                                                   s->is_local (),
                                                   s->is_abstract ());
              /*
               * Add it to its defining scope
               */
              (void) s->fe_add_enum (e);
            }

          /*
           * Push the enum scope on the scopes stack.
           */
          idl_global->scopes ().push (e);

          (tao_yyvsp[(3) - (3)].idval)->destroy ();
          delete (tao_yyvsp[(3) - (3)].idval);
          (tao_yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 3594 "idl.tao_yy"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumSqSeen);
        ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 3599 "idl.tao_yy"
    {
//      at_least_one_enumerator
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumBodySeen);
        ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 3604 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumQsSeen);

          /*
           * Done with this enum. Pop its scope from the scopes stack.
           */
          if (idl_global->scopes ().top () == 0)
            {
              (tao_yyval.dcval) = 0;
            }
          else
            {
              (tao_yyval.dcval) = AST_Enum::narrow_from_scope (
                       idl_global->scopes ().top_non_null ()
                     );
              idl_global->scopes ().pop ();
            }
        ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 3630 "idl.tao_yy"
    {
// enumerators : enumerators ','
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumCommaSeen);
        ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 3640 "idl.tao_yy"
    {
// enumerator : IDENTIFIER
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          Identifier id ((tao_yyvsp[(1) - (1)].strval));
          ACE::strdelete ((tao_yyvsp[(1) - (1)].strval));
          (tao_yyvsp[(1) - (1)].strval) = 0;
          UTL_ScopedName n (&id,
                            0);
          AST_EnumVal *e = 0;
          AST_Enum *c = 0;

          /*
           * Create a node representing one enumerator in an enum
           * Add it to the enclosing scope (the enum scope)
           */
          if (s != 0
              && s->scope_node_type () == AST_Decl::NT_enum)
            {
              c = AST_Enum::narrow_from_scope (s);

              if (c != 0)
                {
                  e = idl_global->gen ()->create_enum_val (
                                              c->next_enum_val (),
                                              &n
                                            );
                }

              (void) s->fe_add_enum_val (e);
            }
        ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 3676 "idl.tao_yy"
    {
// sequence_type_spec : seq_head ','
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceCommaSeen);
        ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 3681 "idl.tao_yy"
    {
//      positive_int_expr
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceExprSeen);
        ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 3686 "idl.tao_yy"
    {
//      '>'
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceQsSeen);

          /*
           * Remove sequence marker from scopes stack.
           */
          if (idl_global->scopes ().top() == 0)
            {
              idl_global->scopes ().pop ();
            }

          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          /*
           * Create a node representing a sequence
           */
          AST_Expression::AST_ExprValue *ev = 0;
          AST_Param_Holder *param_holder = 0;

          if ((tao_yyvsp[(4) - (6)].exval) != 0)
            {
              param_holder =
                (tao_yyvsp[(4) - (6)].exval)->param_holder ();

              ev = (tao_yyvsp[(4) - (6)].exval)->coerce (AST_Expression::EV_ulong);
            }

          // If the expression corresponds to a template parameter,
          // it's ok for the coercion to fail at this point. We check
          // for a type mismatch below.
          if (0 == (tao_yyvsp[(4) - (6)].exval)
              || (0 == ev && 0 == param_holder))
            {
              idl_global->err ()->coercion_error ((tao_yyvsp[(4) - (6)].exval),
                                                  AST_Expression::EV_ulong);
              (tao_yyval.dcval) = 0;
            }
          else if (0 == (tao_yyvsp[(1) - (6)].dcval))
            {
              (tao_yyval.dcval) = 0;
            }
          else
            {
              AST_Type *tp = AST_Type::narrow_from_decl ((tao_yyvsp[(1) - (6)].dcval));

              if (0 == tp)
                {
                  ; // Error will be caught in FE_Declarator.
                }
              else
                {
                  Identifier id ("sequence");
                  UTL_ScopedName sn (&id,
                                     0);

                  (tao_yyval.dcval) =
                    idl_global->gen ()->create_sequence (
                                            (tao_yyvsp[(4) - (6)].exval),
                                            tp,
                                            &sn,
                                            s->is_local (),
                                            s->is_abstract ()
                                          );

                  if (!idl_global->in_typedef ()
                      && !idl_global->anon_silent ())
                    {
                      idl_global->err ()->anonymous_type_diagnostic ();
                    }
                }
            }

          delete ev;
          ev = 0;
        ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 3764 "idl.tao_yy"
    {
//      | seq_head '>'
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceQsSeen);

          /*
           * Remove sequence marker from scopes stack.
           */
          if (idl_global->scopes ().top () == 0)
            {
             idl_global->scopes ().pop ();
            }

          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          /*
           * Create a node representing a sequence.
           */
          if ((tao_yyvsp[(1) - (2)].dcval) == 0)
            {
              (tao_yyval.dcval) = 0;
            }
          else
            {
              AST_Type *tp = AST_Type::narrow_from_decl ((tao_yyvsp[(1) - (2)].dcval));

              if (tp == 0)
                {
                  ; // Error will be caught in FE_Declarator.
                }
              else
                {
                  Identifier id ("sequence");
                  UTL_ScopedName sn (&id, 0);
                  ACE_CDR::ULong bound = 0UL;

                  (tao_yyval.dcval) =
                    idl_global->gen ()->create_sequence (
                        idl_global->gen ()->create_expr (
                                                bound,
                                                AST_Expression::EV_ulong
                                              ),
                        tp,
                        &sn,
                        s->is_local (),
                        s->is_abstract ()
                      );

                  if (!idl_global->in_typedef ()
                      && !idl_global->anon_silent ())
                    {
                      idl_global->err ()->anonymous_type_diagnostic ();
                    }
                }
            }
        ;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 3823 "idl.tao_yy"
    {
// seq_head : IDL_SEQUENCE
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceSeen);

          /*
           * Push a sequence marker on scopes stack.
           */
          idl_global->scopes ().push (0);
        ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 3833 "idl.tao_yy"
    {
//      '<'
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceSqSeen);
        ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 3838 "idl.tao_yy"
    {
//      simple_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceTypeSeen);
          (tao_yyval.dcval) = (tao_yyvsp[(5) - (5)].dcval);
        ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 3848 "idl.tao_yy"
    {
// string_type_spec : string_head '<'
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSqSeen);
        ;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 3853 "idl.tao_yy"
    {
//      positive_int_expr
           idl_global->set_parse_state (IDL_GlobalData::PS_StringExprSeen);
        ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 3858 "idl.tao_yy"
    {
//      '>'
          idl_global->set_parse_state (IDL_GlobalData::PS_StringQsSeen);

          /*
           * Create a node representing a string.
           */
          AST_Expression::AST_ExprValue *ev = 0;

          if ((tao_yyvsp[(4) - (6)].exval) != 0)
            {
              ev = (tao_yyvsp[(4) - (6)].exval)->coerce (AST_Expression::EV_ulong);
            }

          if (0 == (tao_yyvsp[(4) - (6)].exval) || 0 == ev)
            {
              idl_global->err ()->coercion_error ((tao_yyvsp[(4) - (6)].exval),
                                                  AST_Expression::EV_ulong);
              (tao_yyval.dcval) = 0;
            }
          else
            {
              (tao_yyval.dcval) = idl_global->gen ()->create_string ((tao_yyvsp[(4) - (6)].exval));
              /*
               * Add this AST_String to the types defined in the global scope.
               */
              (void) idl_global->root ()->fe_add_string (
                                              AST_String::narrow_from_decl (
                                                  (tao_yyval.dcval)
                                                )
                                            );

              if (!idl_global->in_typedef ()
                  && !idl_global->anon_silent ())
                {
                  idl_global->err ()->anonymous_type_diagnostic ();
                }
            }

          delete ev;
          ev = 0;
        ;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 3901 "idl.tao_yy"
    {
//      | string_head
          idl_global->set_parse_state (IDL_GlobalData::PS_StringCompleted);
          /*
           * Create a node representing a string.
           */
          ACE_CDR::ULong bound = 0UL;

          (tao_yyval.dcval) =
            idl_global->gen ()->create_string (
                idl_global->gen ()->create_expr (bound,
                                                 AST_Expression::EV_ulong)
              );
          /*
           * Add this AST_String to the types defined in the global scope.
           */
          (void) idl_global->root ()->fe_add_string (
                                          AST_String::narrow_from_decl (
                                              (tao_yyval.dcval)
                                            )
                                        );
        ;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 3927 "idl.tao_yy"
    {
// string_head : IDL_STRING
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSeen);
        ;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 3936 "idl.tao_yy"
    {
// wstring_type_spec : wstring_head '<'
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSqSeen);
        ;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 3941 "idl.tao_yy"
    {
//      positive_int_expr
           idl_global->set_parse_state (IDL_GlobalData::PS_StringExprSeen);
        ;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 3946 "idl.tao_yy"
    {
//      '>'
          idl_global->set_parse_state (IDL_GlobalData::PS_StringQsSeen);

          /*
           * Create a node representing a string.
           */
          if ((tao_yyvsp[(4) - (6)].exval) == 0
              || (tao_yyvsp[(4) - (6)].exval)->coerce (AST_Expression::EV_ulong) == 0)
            {
              idl_global->err ()->coercion_error ((tao_yyvsp[(4) - (6)].exval),
                                                  AST_Expression::EV_ulong);
              (tao_yyval.dcval) = 0;
            }
          else
            {
              (tao_yyval.dcval) = idl_global->gen ()->create_wstring ((tao_yyvsp[(4) - (6)].exval));
              /*
               * Add this AST_String to the types defined in the global scope.
               */
              (void) idl_global->root ()->fe_add_string (
                                              AST_String::narrow_from_decl ((tao_yyval.dcval))
                                            );

              if (!idl_global->in_typedef ()
                  && !idl_global->anon_silent ())
                {
                  idl_global->err ()->anonymous_type_diagnostic ();
                }
            }
        ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 3978 "idl.tao_yy"
    {
//      | wstring_head
          idl_global->set_parse_state (IDL_GlobalData::PS_StringCompleted);

          /*
           * Create a node representing a wstring.
           */
          ACE_CDR::ULong bound = 0UL;

          (tao_yyval.dcval) =
            idl_global->gen ()->create_wstring (
                idl_global->gen ()->create_expr (bound,
                                                 AST_Expression::EV_ulong)
              );
          /*
           * Add this AST_String to the types defined in the global scope.
           */
          (void) idl_global->root ()->fe_add_string (
                                          AST_String::narrow_from_decl ((tao_yyval.dcval))
                                        );
        ;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 4003 "idl.tao_yy"
    {
// wstring_head : IDL_WSTRING
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSeen);
        ;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 4011 "idl.tao_yy"
    {
// array_declarator : id
          idl_global->set_parse_state (IDL_GlobalData::PS_ArrayIDSeen);
        ;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 4016 "idl.tao_yy"
    {
//      at_least_one_array_dim
          idl_global->set_parse_state (IDL_GlobalData::PS_ArrayCompleted);

          /*
           * Create a node representing an array.
           */
          if ((tao_yyvsp[(3) - (3)].elval) != 0)
            {
              UTL_ScopedName sn ((tao_yyvsp[(1) - (3)].idval),
                                 0);
              (tao_yyval.dcval) =
                idl_global->gen ()->create_array (
                                        &sn,
                                        (tao_yyvsp[(3) - (3)].elval)->length (),
                                        (tao_yyvsp[(3) - (3)].elval),
                                        0,
                                        0
                                      );

              (tao_yyvsp[(3) - (3)].elval)->destroy ();
              delete (tao_yyvsp[(3) - (3)].elval);
              (tao_yyvsp[(3) - (3)].elval) = 0;

              sn.destroy ();

              if (!idl_global->in_typedef ()
                  && !idl_global->anon_silent ())
                {
                  idl_global->err ()->anonymous_type_diagnostic ();
                }
            }
        ;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 4053 "idl.tao_yy"
    {
// at_least_one_array_dim : array_dim array_dims
          ACE_NEW_RETURN ((tao_yyval.elval),
                          UTL_ExprList ((tao_yyvsp[(1) - (2)].exval),
                                        (tao_yyvsp[(2) - (2)].elval)),
                          1);
        ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 4064 "idl.tao_yy"
    {
// array_dims : array_dims array_dim
          UTL_ExprList *el = 0;
          ACE_NEW_RETURN (el,
                          UTL_ExprList ((tao_yyvsp[(2) - (2)].exval),
                                        0),
                          1);

          if ((tao_yyvsp[(1) - (2)].elval) == 0)
            {
              (tao_yyval.elval) = el;
            }
          else
            {
              (tao_yyvsp[(1) - (2)].elval)->nconc (el);
              (tao_yyval.elval) = (tao_yyvsp[(1) - (2)].elval);
            }
        ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 4083 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.elval) = 0;
        ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 4091 "idl.tao_yy"
    {
// array_dim : '['
          idl_global->set_parse_state (IDL_GlobalData::PS_DimSqSeen);
        ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 4096 "idl.tao_yy"
    {
//      positive_int_expr
          idl_global->set_parse_state (IDL_GlobalData::PS_DimExprSeen);
        ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 4101 "idl.tao_yy"
    {
//      ']'
          idl_global->set_parse_state (IDL_GlobalData::PS_DimQsSeen);

          /*
           * Array dimensions are expressions which must be coerced to
           * positive integers.
           */
          AST_Expression::AST_ExprValue *ev = 0;
          AST_Param_Holder *param_holder = 0;

          if ((tao_yyvsp[(3) - (5)].exval) != 0)
            {
              param_holder =
                (tao_yyvsp[(3) - (5)].exval)->param_holder ();

              ev =
                (tao_yyvsp[(3) - (5)].exval)->coerce (AST_Expression::EV_ulong);
            }

          if (0 == (tao_yyvsp[(3) - (5)].exval)
              || (ev == 0 && param_holder == 0))
            {
              idl_global->err ()->coercion_error ((tao_yyvsp[(3) - (5)].exval),
                                                  AST_Expression::EV_ulong);
              (tao_yyval.exval) = 0;
            }
          else
            {
              if (param_holder != 0)
                {
                  AST_Expression::ExprType et =
                    param_holder->info ()->const_type_;

                  // If the bound expression represents a
                  // template parameter, it must be a const
                  // and of type unsigned long.
                  if (et != AST_Expression::EV_ulong)
                    {
                      idl_global->err ()->mismatched_template_param (
                        param_holder->info ()->name_.c_str ());

                      delete ev;
                      ev = 0;
                      return 1;
                    }
                }

              (tao_yyval.exval) = (tao_yyvsp[(3) - (5)].exval);
            }

          delete ev;
          ev = 0;
        ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 4164 "idl.tao_yy"
    {
// attribute_readonly : IDL_READONLY
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrROSeen);
        ;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 4169 "idl.tao_yy"
    {
//      IDL_ATTRIBUTE
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrSeen);
        ;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 4174 "idl.tao_yy"
    {
//      param_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrTypeSeen);
        ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 4179 "idl.tao_yy"
    {
//      at_least_one_simple_declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclsSeen);
        ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 4184 "idl.tao_yy"
    {
//      opt_raises
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Attribute *a = 0;
          FE_Declarator *d = 0;

          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          /*
           * Create nodes representing attributes and add them to the
           * enclosing scope.
           */
          if (s != 0
              && (tao_yyvsp[(5) - (9)].dcval) != 0
              && (tao_yyvsp[(7) - (9)].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((tao_yyvsp[(7) - (9)].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type *tp = d->compose ((tao_yyvsp[(5) - (9)].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  a =
                    idl_global->gen ()->create_attribute (
                                            true,
                                            tp,
                                            d->name (),
                                            s->is_local (),
                                            s->is_abstract ()
                                          );

                  if ((tao_yyvsp[(9) - (9)].nlval) != 0)
                    {
                      (void) a->fe_add_get_exceptions ((tao_yyvsp[(9) - (9)].nlval));

                      (tao_yyvsp[(9) - (9)].nlval)->destroy ();
                      delete (tao_yyvsp[(9) - (9)].nlval);
                      (tao_yyvsp[(9) - (9)].nlval) = 0;
                    }

                  (void) s->fe_add_attribute (a);
                }
            }

          (tao_yyvsp[(7) - (9)].dlval)->destroy ();
          delete (tao_yyvsp[(7) - (9)].dlval);
          (tao_yyvsp[(7) - (9)].dlval) = 0;
        ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 4248 "idl.tao_yy"
    {
// attribute_readwrite : IDL_ATTRIBUTE
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrSeen);
        ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 4253 "idl.tao_yy"
    {
//      param_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrTypeSeen);
        ;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 4258 "idl.tao_yy"
    {
//      at_least_one_simple_declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclsSeen);
        ;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 4263 "idl.tao_yy"
    {
//      opt_getraises
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseCompleted);
        ;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 4268 "idl.tao_yy"
    {
//      opt_setraises
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Attribute *a = 0;
          FE_Declarator *d = 0;

          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseCompleted);

          /*
           * Create nodes representing attributes and add them to the
           * enclosing scope.
           */
          if (s != 0
              && (tao_yyvsp[(3) - (9)].dcval) != 0
              && (tao_yyvsp[(5) - (9)].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((tao_yyvsp[(5) - (9)].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type *tp = d->compose ((tao_yyvsp[(3) - (9)].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  a =
                    idl_global->gen ()->create_attribute (
                                            false,
                                            tp,
                                            d->name (),
                                            s->is_local (),
                                            s->is_abstract ()
                                          );

                  if ((tao_yyvsp[(7) - (9)].nlval) != 0)
                    {
                      (void) a->fe_add_get_exceptions ((tao_yyvsp[(7) - (9)].nlval));

                      (tao_yyvsp[(7) - (9)].nlval)->destroy ();
                      delete (tao_yyvsp[(7) - (9)].nlval);
                      (tao_yyvsp[(7) - (9)].nlval) = 0;
                    }

                  if ((tao_yyvsp[(9) - (9)].nlval) != 0)
                    {
                      (void) a->fe_add_set_exceptions ((tao_yyvsp[(9) - (9)].nlval));

                      (tao_yyvsp[(9) - (9)].nlval)->destroy ();
                      delete (tao_yyvsp[(9) - (9)].nlval);
                      (tao_yyvsp[(9) - (9)].nlval) = 0;
                    }

                  (void) s->fe_add_attribute (a);
                }
            }

          (tao_yyvsp[(5) - (9)].dlval)->destroy ();
          delete (tao_yyvsp[(5) - (9)].dlval);
          (tao_yyvsp[(5) - (9)].dlval) = 0;
        ;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 4341 "idl.tao_yy"
    {
// exception : IDL_EXCEPTION
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptSeen);
        ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 4346 "idl.tao_yy"
    {
//      id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(3) - (3)].idval),
                            0);
          AST_Exception *e = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptIDSeen);

          /*
           * Create a node representing an exception and add it to
           * the enclosing scope.
           */
          if (s != 0)
            {
              e = idl_global->gen ()->create_exception (&n,
                                                        s->is_local (),
                                                        s->is_abstract ());
              (void) s->fe_add_exception (e);
            }

          /*
           * Push the exception scope on the scope stack.
           */
          idl_global->scopes ().push (e);

          (tao_yyvsp[(3) - (3)].idval)->destroy ();
          delete (tao_yyvsp[(3) - (3)].idval);
          (tao_yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 4376 "idl.tao_yy"
    {
//       '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptSqSeen);
        ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 4381 "idl.tao_yy"
    {
//      members
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptBodySeen);
        ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 4386 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptQsSeen);
          /*
           * Done with this exception. Pop its scope from the scope stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 4399 "idl.tao_yy"
    {
// operation : opt_op_attribute op_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_OpTypeSeen);
        ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 4404 "idl.tao_yy"
    {
//      IDENTIFIER
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          Identifier id ((tao_yyvsp[(4) - (4)].strval));
          ACE::strdelete ((tao_yyvsp[(4) - (4)].strval));
          (tao_yyvsp[(4) - (4)].strval) = 0;

          UTL_ScopedName n (&id, 0);
          AST_Operation *o = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing an operation on an interface
           * and add it to its enclosing scope.
           */
          if (s != 0 && (tao_yyvsp[(2) - (4)].dcval) != 0)
            {
              AST_Type *tp =
                AST_Type::narrow_from_decl ((tao_yyvsp[(2) - (4)].dcval));

              if (tp == 0)
                {
                  idl_global->err ()->not_a_type ((tao_yyvsp[(2) - (4)].dcval));
                }
              else if (tp->node_type () == AST_Decl::NT_except)
                {
                  idl_global->err ()->not_a_type ((tao_yyvsp[(2) - (4)].dcval));
                }
              else
                {
                  AST_Decl *d = ScopeAsDecl (s);
                  AST_Decl::NodeType nt = d->node_type ();
                  bool local =
                    s->is_local ()
                    || nt == AST_Decl::NT_valuetype
                    || nt == AST_Decl::NT_eventtype;

                  o =
                    idl_global->gen ()->create_operation (
                      tp,
                      (tao_yyvsp[(1) - (4)].ofval),
                      &n,
                      local,
                      s->is_abstract ());

                  if (!local && tp->is_local ())
                    {
                      idl_global->err ()->local_remote_mismatch (tp, o);
                      o->destroy ();
                      delete o;
                      o = 0;
                    }
                  else
                    {
                      (void) s->fe_add_operation (o);
                    }
                }
            }

          /*
           * Push the operation scope onto the scopes stack.
           */
          idl_global->scopes ().push (o);
        ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 4469 "idl.tao_yy"
    {
//      parameter_list
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 4474 "idl.tao_yy"
    {
//      opt_raises
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);
        ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 4479 "idl.tao_yy"
    {
//      opt_context
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Operation *o = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpCompleted);

          /*
           * Add exceptions and context to the operation.
           */
          if (s != 0 && s->scope_node_type () == AST_Decl::NT_op)
            {
              o = AST_Operation::narrow_from_scope (s);

              if ((tao_yyvsp[(8) - (10)].nlval) != 0 && o != 0)
                {
                  (void) o->fe_add_exceptions ((tao_yyvsp[(8) - (10)].nlval));
                }

              if ((tao_yyvsp[(10) - (10)].slval) != 0)
                {
                  (void) o->fe_add_context ((tao_yyvsp[(10) - (10)].slval));
                }
            }

          /*
           * Done with this operation. Pop its scope from the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 4512 "idl.tao_yy"
    {
// opt_op_attribute : IDL_ONEWAY
          idl_global->set_parse_state (IDL_GlobalData::PS_OpAttrSeen);
          (tao_yyval.ofval) = AST_Operation::OP_oneway;
        ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 4518 "idl.tao_yy"
    {
//      | IDL_IDEMPOTENT
          idl_global->set_parse_state (IDL_GlobalData::PS_OpAttrSeen);
          (tao_yyval.ofval) = AST_Operation::OP_idempotent;
        ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 4524 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.ofval) = AST_Operation::OP_noflags;
        ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 4533 "idl.tao_yy"
    {
// op_type_spec : param_type_spec | IDL_VOID
          (tao_yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                  AST_Expression::EV_void
                                                );
        ;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 4544 "idl.tao_yy"
    {
// init_decl : IDL_FACTORY
          //@@ PS_FactorySeen?
          idl_global->set_parse_state (IDL_GlobalData::PS_OpTypeSeen);
        ;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 4550 "idl.tao_yy"
    {
//      IDENTIFIER
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          if (s->is_abstract ())
            {
              //@@ Fire error
              ACE_ERROR ((LM_ERROR,
                          ACE_TEXT ("error in %C line %d:\n")
                          ACE_TEXT ("Abstract valuetype can't have a ")
                          ACE_TEXT ("factory construct.\n"),
                          idl_global->filename ()->get_string (),
                          idl_global->lineno ()));

              idl_global->set_err_count (idl_global->err_count () + 1);
            }

          Identifier id ((tao_yyvsp[(3) - (3)].strval));
          ACE::strdelete ((tao_yyvsp[(3) - (3)].strval));
          (tao_yyvsp[(3) - (3)].strval) = 0;

          UTL_ScopedName n (&id,
                            0);
          AST_Factory *factory = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing an factory construct
           * and add it to its enclosing scope
           */
          if (s != 0)
            {
              factory = idl_global->gen ()->create_factory (&n);
              (void) s->fe_add_factory (factory);
            }

          /*
           * Push the operation scope onto the scopes stack.
           */
          idl_global->scopes ().push (factory);
        ;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 4592 "idl.tao_yy"
    {
//      init_parameter_list
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 4597 "idl.tao_yy"
    {
//      opt_raises
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          if ((tao_yyvsp[(7) - (7)].nlval) != 0)
            {
              UTL_Scope *s = idl_global->scopes ().top_non_null ();
              AST_Factory *f = AST_Factory::narrow_from_scope (s);
              (void) f->fe_add_exceptions ((tao_yyvsp[(7) - (7)].nlval));
            }

          idl_global->scopes ().pop ();
        ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 4614 "idl.tao_yy"
    {
// init_parameter_list : '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        ;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 4619 "idl.tao_yy"
    {
//      ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 4624 "idl.tao_yy"
    {
//      | '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 4630 "idl.tao_yy"
    {
//      at_least_one_in_parameter ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 4641 "idl.tao_yy"
    {
// in_parameters : in_parameters ','
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParCommaSeen);
        ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 4651 "idl.tao_yy"
    {
// in_parameter : IDL_IN
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDirSeen);
        ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 4656 "idl.tao_yy"
    {
//      param_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParTypeSeen);
        ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 4661 "idl.tao_yy"
    {
//      declarator
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Argument *a = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDeclSeen);

          /*
           * Create a node representing an argument to an operation
           * Add it to the enclosing scope (the operation scope).
           */
          if ((tao_yyvsp[(3) - (5)].dcval) != 0
              && (tao_yyvsp[(5) - (5)].deval) != 0 &&
              s != 0)
            {
              AST_Type *tp = (tao_yyvsp[(5) - (5)].deval)->compose ((tao_yyvsp[(3) - (5)].dcval));

              if (tp != 0)
                {
                  a = idl_global->gen ()->create_argument (
                          AST_Argument::dir_IN,
                          tp,
                          (tao_yyvsp[(5) - (5)].deval)->name ()
                        );

                  (void) s->fe_add_argument (a);
                }
            }

          (tao_yyvsp[(5) - (5)].deval)->destroy ();
          delete (tao_yyvsp[(5) - (5)].deval);
          (tao_yyvsp[(5) - (5)].deval) = 0;
        ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 4697 "idl.tao_yy"
    {
// parameter_list : '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 4702 "idl.tao_yy"
    {
//      ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 4707 "idl.tao_yy"
    {
//      | '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 4713 "idl.tao_yy"
    {
//      at_least_one_parameter ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 4724 "idl.tao_yy"
    {
// parameters : parameters ','
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParCommaSeen);
        ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 4734 "idl.tao_yy"
    {
// parameter : direction
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDirSeen);
        ;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 4739 "idl.tao_yy"
    {
//      param_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParTypeSeen);
        ;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 4744 "idl.tao_yy"
    {
//      declarator
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Argument *a = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDeclSeen);

          /*
           * Create a node representing an argument to an operation
           * Add it to the enclosing scope (the operation scope).
           */
          if ((tao_yyvsp[(3) - (5)].dcval) != 0
              && (tao_yyvsp[(5) - (5)].deval) != 0
              && s != 0)
            {
              AST_Type *tp = (tao_yyvsp[(5) - (5)].deval)->compose ((tao_yyvsp[(3) - (5)].dcval));

              if (tp != 0)
                {
                  if (!s->is_local () && tp->is_local ())
                    {
                      idl_global->err ()->local_remote_mismatch (tp, s);
                    }
                  else
                    {
                      a =
                        idl_global->gen ()->create_argument (
                            (tao_yyvsp[(1) - (5)].dival),
                            tp,
                            (tao_yyvsp[(5) - (5)].deval)->name ()
                          );
                      (void) s->fe_add_argument (a);
                    }
                }
            }

          (tao_yyvsp[(5) - (5)].deval)->destroy ();
          delete (tao_yyvsp[(5) - (5)].deval);
          (tao_yyvsp[(5) - (5)].deval) = 0;
        ;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 4787 "idl.tao_yy"
    {
// param_type_spec : base_type_spec
          (tao_yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (tao_yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 4797 "idl.tao_yy"
    {
//      | string_type_spec
//      | wstring_type_spec
//      | scoped_name
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = 0;
          UTL_ScopedName *n = (tao_yyvsp[(1) - (1)].idlist);

          if (s != 0)
            {
              d = s->lookup_by_name (n, false, false);
            }

          if (d == 0)
            {
              idl_global->err ()->lookup_error (n);
              (tao_yyvsp[(1) - (1)].idlist)->destroy ();
              (tao_yyvsp[(1) - (1)].idlist) = 0;

              /* If we don't return here, we'll crash later.*/
              return 1;
            }
          else
            {
              d->last_referenced_as ((tao_yyvsp[(1) - (1)].idlist));
              AST_Decl::NodeType nt = d->node_type ();
              AST_Type *t = AST_Type::narrow_from_decl (d);
              AST_Typedef *td = 0;
              bool can_be_undefined = false;

              if (nt == AST_Decl::NT_typedef)
                {
                  // This code block ensures that a sequence of
                  // as-yet-undefined struct or union isn't used
                  // as a return type or argument.
                  td = AST_Typedef::narrow_from_decl (d);
                  AST_Type *pbt = td->primitive_base_type ();

                  if (pbt->node_type () == AST_Decl::NT_sequence)
                    {
                      t = pbt;
                      AST_Sequence *seq_type =
                        AST_Sequence::narrow_from_decl (pbt);
                      AST_Type *elem_type =
                        seq_type->base_type ();
                      AST_Decl::NodeType elem_nt =
                        elem_type->node_type ();

                      if (elem_nt == AST_Decl::NT_typedef)
                        {
                          AST_Typedef *elem_td =
                            AST_Typedef::narrow_from_decl (elem_type);
                          elem_type = elem_td->primitive_base_type ();
                          elem_nt = elem_type->node_type ();
                        }

                      if (elem_nt == AST_Decl::NT_interface
                          || elem_nt == AST_Decl::NT_interface_fwd
                          || elem_nt == AST_Decl::NT_valuetype
                          || elem_nt == AST_Decl::NT_valuetype_fwd
                          || elem_nt == AST_Decl::NT_component
                          || elem_nt == AST_Decl::NT_component_fwd)
                        {
                          can_be_undefined = true;
                        }
                    }

                  if (! t->is_defined () && ! can_be_undefined)
                    {
                      idl_global->err ()->error1 (
                        UTL_Error::EIDL_ILLEGAL_ADD,
                        (nt == AST_Decl::NT_typedef ? td : t));

                      /* If we don't return here, we'll crash later.*/
                      return 1;
                    }
                }
              else
                {
                  // For forward declared structs and unions, we
                  // want the full definition, but we need to
                  // check that it's been fully defined.
                  AST_StructureFwd *fwd =
                    AST_StructureFwd::narrow_from_decl (d);

                  if (fwd != 0)
                    {
                      t = fwd->full_definition ();

                      if (! t->is_defined ())
                        {
                          idl_global->err ()->error1 (
                            UTL_Error::EIDL_ILLEGAL_ADD,
                            t);

                          /* If we don't return here, we'll crash later.*/
                          return 1;
                        }

                      d = t;
                    }
                }
            }

          (tao_yyval.dcval) = d;
        ;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 4907 "idl.tao_yy"
    {
// direction : IDL_IN
          (tao_yyval.dival) = AST_Argument::dir_IN;
        ;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 4912 "idl.tao_yy"
    {
//      | IDL_OUT
          (tao_yyval.dival) = AST_Argument::dir_OUT;
        ;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 4917 "idl.tao_yy"
    {
//      | IDL_INOUT
          (tao_yyval.dival) = AST_Argument::dir_INOUT;
        ;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 4925 "idl.tao_yy"
    {
// opt_raises : IDL_RAISES
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseSeen);
        ;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 4930 "idl.tao_yy"
    {
//      '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseSqSeen);
        ;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 4936 "idl.tao_yy"
    {
//      at_least_one_scoped_name ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseQsSeen);
          (tao_yyval.nlval) = (tao_yyvsp[(5) - (6)].nlval);
        ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 4942 "idl.tao_yy"
    {
          (tao_yyval.nlval) = 0;
/*      |  EMPTY */
        ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 4950 "idl.tao_yy"
    {
// opt_getraises : IDL_GETRAISES
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseSeen);
        ;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 4955 "idl.tao_yy"
    {
//      '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseSqSeen);
        ;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 4961 "idl.tao_yy"
    {
//      at_least_one_scoped_name ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseQsSeen);
          (tao_yyval.nlval) = (tao_yyvsp[(5) - (6)].nlval);
        ;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 4967 "idl.tao_yy"
    {
          (tao_yyval.nlval) = 0;
/*      |  EMPTY */
        ;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 4975 "idl.tao_yy"
    {
// opt_setraises : IDL_SETRAISES
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseSeen);
        ;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 4980 "idl.tao_yy"
    {
//      '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseSqSeen);
        ;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 4986 "idl.tao_yy"
    {
//      at_least_one_scoped_name ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseQsSeen);
          (tao_yyval.nlval) = (tao_yyvsp[(5) - (6)].nlval);
        ;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 4992 "idl.tao_yy"
    {
          (tao_yyval.nlval) = 0;
/*      |  EMPTY */
        ;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 5000 "idl.tao_yy"
    {
// opt_context : IDL_CONTEXT
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextSeen);
        ;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 5005 "idl.tao_yy"
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextSqSeen);
//      '('
        ;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 5011 "idl.tao_yy"
    {
//      at_least_one_string_literal ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextQsSeen);
          (tao_yyval.slval) = (tao_yyvsp[(5) - (6)].slval);
        ;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 5017 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.slval) = 0;
        ;}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 5025 "idl.tao_yy"
    {
// at_least_one_string_literal : IDL_STRING_LITERAL string_literals
          ACE_NEW_RETURN ((tao_yyval.slval),
                          UTL_StrList ((tao_yyvsp[(1) - (2)].sval),
                                       (tao_yyvsp[(2) - (2)].slval)),
                          1);
        ;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 5037 "idl.tao_yy"
    {
// string_literals : string_literals ','
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextCommaSeen);
        ;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 5042 "idl.tao_yy"
    {
//      IDL_STRING_LITERAL
          UTL_StrList *sl = 0;
          ACE_NEW_RETURN (sl,
                          UTL_StrList ((tao_yyvsp[(4) - (4)].sval),
                                       0),
                          1);

          if ((tao_yyvsp[(1) - (4)].slval) == 0)
            {
              (tao_yyval.slval) = sl;
            }
          else
            {
              (tao_yyvsp[(1) - (4)].slval)->nconc (sl);
              (tao_yyval.slval) = (tao_yyvsp[(1) - (4)].slval);
            }
        ;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 5061 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.slval) = 0;
        ;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 5069 "idl.tao_yy"
    {
// typeid_dcl : IDL_TYPEID scoped_name IDL_STRING_LITERAL
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((tao_yyvsp[(2) - (3)].idlist));

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(2) - (3)].idlist));
            }
          else
            {
              d->set_id_with_typeid (
                     (tao_yyvsp[(3) - (3)].sval)->get_string ()
                   );
            }

          (tao_yyvsp[(2) - (3)].idlist)->destroy ();
          delete (tao_yyvsp[(2) - (3)].idlist);
          (tao_yyvsp[(2) - (3)].idlist) = 0;

          (tao_yyvsp[(3) - (3)].sval)->destroy ();
          delete (tao_yyvsp[(3) - (3)].sval);
          (tao_yyvsp[(3) - (3)].sval) = 0;
        ;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 5098 "idl.tao_yy"
    {
// typeprefix_dcl : IDL_TYPEPREFIX scoped_name IDL_STRING_LITERAL
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = ScopeAsDecl (s);

          // If we are in a module, we want to avoid a lookup unless the
          // typeprefix is to be applied to some other scope, since we
          // might get a previous opening of the module, and the prefix
          // of this opening would never get checked or set.
          if (d->name ()->compare ((tao_yyvsp[(2) - (3)].idlist)) != 0)
            {
              d =
                s->lookup_by_name ((tao_yyvsp[(2) - (3)].idlist));
            }

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(2) - (3)].idlist));
            }
          else
            {
              d->set_prefix_with_typeprefix (
                     (tao_yyvsp[(3) - (3)].sval)->get_string ()
                   );
            }

          (tao_yyvsp[(2) - (3)].idlist)->destroy ();
          delete (tao_yyvsp[(2) - (3)].idlist);
          (tao_yyvsp[(2) - (3)].idlist) = 0;

          (tao_yyvsp[(3) - (3)].sval)->destroy ();
          delete (tao_yyvsp[(3) - (3)].sval);
          (tao_yyvsp[(3) - (3)].sval) = 0;
        ;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 5142 "idl.tao_yy"
    {
// component_forward_decl : IDL_COMPONENT id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(2) - (2)].idval),
                            0);
          AST_ComponentFwd *f = 0;
          idl_global->set_parse_state (
                          IDL_GlobalData::PS_ComponentForwardSeen
                        );

          /*
           * Create a node representing a forward declaration of a
           * component. Store it in the enclosing scope.
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_component_fwd (&n);
              (void) s->fe_add_component_fwd (f);
            }

          (tao_yyvsp[(2) - (2)].idval)->destroy ();
          delete (tao_yyvsp[(2) - (2)].idval);
          (tao_yyvsp[(2) - (2)].idval) = 0;
        ;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 5170 "idl.tao_yy"
    {
// component_decl : component_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Component *c = 0;

          /*
           * Make a new component node and add it to the enclosing scope.
           */
          if (s != 0 && (tao_yyvsp[(1) - (1)].chval) != 0)
            {
              c =
                idl_global->gen ()->create_component (
                                        (tao_yyvsp[(1) - (1)].chval)->name (),
                                        (tao_yyvsp[(1) - (1)].chval)->base_component (),
                                        (tao_yyvsp[(1) - (1)].chval)->supports (),
                                        (tao_yyvsp[(1) - (1)].chval)->n_supports (),
                                        (tao_yyvsp[(1) - (1)].chval)->supports_flat (),
                                        (tao_yyvsp[(1) - (1)].chval)->n_supports_flat ()
                                      );
              AST_Interface *i = AST_Interface::narrow_from_decl (c);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the component to its definition scope.
               */
              c = AST_Component::narrow_from_decl (i);
              (void) s->fe_add_component (c);

              // This FE_ComponentHeader class isn't destroyed with the AST.
              (tao_yyvsp[(1) - (1)].chval)->destroy ();
              delete (tao_yyvsp[(1) - (1)].chval);
              (tao_yyvsp[(1) - (1)].chval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (c);
        ;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 5210 "idl.tao_yy"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentSqSeen);
        ;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 5215 "idl.tao_yy"
    {
//      component_exports
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentBodySeen);
        ;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 5220 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentQsSeen);

          /*
           * Done with this component - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 5234 "idl.tao_yy"
    {
//      component_header: IDL_COMPONENT id
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentIDSeen);
        ;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 5239 "idl.tao_yy"
    {
//      component_inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        ;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 5244 "idl.tao_yy"
    {
//      supports_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of a component.
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((tao_yyvsp[(2) - (6)].idval),
                                          0),
                          1);
          ACE_NEW_RETURN ((tao_yyval.chval),
                          FE_ComponentHeader (n,
                                              (tao_yyvsp[(4) - (6)].idlist),
                                              (tao_yyvsp[(6) - (6)].nlval),
                                              false),
                          1);

          if (0 != (tao_yyvsp[(6) - (6)].nlval))
            {
              (tao_yyvsp[(6) - (6)].nlval)->destroy ();
              delete (tao_yyvsp[(6) - (6)].nlval);
              (tao_yyvsp[(6) - (6)].nlval) = 0;
            }

          if (0 != (tao_yyvsp[(4) - (6)].idlist))
            {
              (tao_yyvsp[(4) - (6)].idlist)->destroy ();
              delete (tao_yyvsp[(4) - (6)].idlist);
              (tao_yyvsp[(4) - (6)].idlist) = 0;
            }
        ;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 5282 "idl.tao_yy"
    {
// component_inheritance_spec : ':'
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritColonSeen);
        ;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 5287 "idl.tao_yy"
    {
//      scoped_name
          (tao_yyval.idlist) = (tao_yyvsp[(3) - (3)].idlist);
        ;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 5292 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.idlist) = 0;
        ;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 5305 "idl.tao_yy"
    {
// component_export : provides_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ProvidesDeclSeen);
        ;}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 5310 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 5315 "idl.tao_yy"
    {
//      | uses_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_UsesDeclSeen);
        ;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 5320 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 5325 "idl.tao_yy"
    {
//      | emits_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_EmitsDeclSeen);
        ;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 5330 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 5335 "idl.tao_yy"
    {
//      | publishes_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_PublishesDeclSeen);
        ;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 5340 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 5345 "idl.tao_yy"
    {
//      | consumes_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ConsumesDeclSeen);
        ;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 5350 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 5355 "idl.tao_yy"
    {
//      | attribute
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        ;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 5360 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 5365 "idl.tao_yy"
    {
//      | extended_port_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ExtendedPortDeclSeen);
        ;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 5370 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 5377 "idl.tao_yy"
    {
// provides_decl : IDL_PROVIDES interface_type id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((tao_yyvsp[(2) - (3)].idlist), true, false);

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              int compare = 0;
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_interface:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_interface)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  case AST_Decl::NT_pre_defined:
                    // Nothing else but CORBA::Object can have
                    // this identifier.
                    compare =
                      ACE_OS::strcmp (d->local_name ()->get_string (),
                                      "Object");

                    // Simple provides port must use IDL interface
                    // or CORBA::Object.
                    if (compare != 0)
                      {
                        idl_global->err ()->interface_expected (d);
                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->interface_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *port_interface_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((tao_yyvsp[(3) - (3)].idval));

              UTL_ScopedName sn ((tao_yyvsp[(3) - (3)].idval),
                                 0);

              AST_Provides *p =
                idl_global->gen ()->create_provides (&sn,
                                                     port_interface_type);

              (void) s->fe_add_provides (p);
            }

          (tao_yyvsp[(2) - (3)].idlist)->destroy ();
          delete (tao_yyvsp[(2) - (3)].idlist);
          (tao_yyvsp[(2) - (3)].idlist) = 0;

          (tao_yyvsp[(3) - (3)].idval)->destroy ();
          delete (tao_yyvsp[(3) - (3)].idval);
          (tao_yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 5468 "idl.tao_yy"
    {
// interface_type : scoped_name
          // Lookups and checking are done where the 'interface_type'
          // token is used, in 'provides_decl' and 'uses_decl'.
          (tao_yyval.idlist) = (tao_yyvsp[(1) - (1)].idlist);
        ;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 5475 "idl.tao_yy"
    {
//      | IDL_OBJECT
          Identifier *corba_id = 0;

          ACE_NEW_RETURN (corba_id,
                          Identifier ("Object"),
                          1);

          UTL_IdList *conc_name = 0;
          ACE_NEW_RETURN (conc_name,
                          UTL_IdList (corba_id,
                                      0),
                          1);

          ACE_NEW_RETURN (corba_id,
                          Identifier ("CORBA"),
                          1);

          ACE_NEW_RETURN ((tao_yyval.idlist),
                          UTL_IdList (corba_id,
                                      conc_name),
                          1);
        ;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 5501 "idl.tao_yy"
    {
// uses_decl : uses_opt_multiple interface_type id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((tao_yyvsp[(2) - (3)].idlist), true, false);

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              int compare = 0;
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_interface:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_interface)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  case AST_Decl::NT_pre_defined:
                    // Nothing else but CORBA::Object can have
                    // this identifier.
                    compare =
                      ACE_OS::strcmp (d->local_name ()->get_string (),
                                      "Object");

                    // Simple provides port must use IDL interface
                    // or CORBA::Object.
                    if (compare != 0)
                      {
                        idl_global->err ()->interface_expected (d);
                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->interface_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *port_interface_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((tao_yyvsp[(3) - (3)].idval));

              UTL_ScopedName sn ((tao_yyvsp[(3) - (3)].idval),
                                 0);

              AST_Uses *u =
                idl_global->gen ()->create_uses (&sn,
                                                 port_interface_type,
                                                 (tao_yyvsp[(1) - (3)].bval));

              (void) s->fe_add_uses (u);

              AST_Component *c =
                AST_Component::narrow_from_scope (s);

              if (c != 0
                  && u->is_multiple ()
                  && !idl_global->using_ifr_backend ()
                  && !idl_global->ignore_idl3 ()
                  && nt != AST_Decl::NT_param_holder)
                {
                  // These datatypes must be created in the
                  // front end so they can be looked up
                  // when compiling the generated executor IDL.
                  FE_Utils::create_uses_multiple_stuff (c, u);
                }
            }

          (tao_yyvsp[(2) - (3)].idlist)->destroy ();
          delete (tao_yyvsp[(2) - (3)].idlist);
          (tao_yyvsp[(2) - (3)].idlist) = 0;

          (tao_yyvsp[(3) - (3)].idval)->destroy ();
          delete (tao_yyvsp[(3) - (3)].idval);
          (tao_yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 5608 "idl.tao_yy"
    {
// uses_opt_multiple : IDL_USES opt_multiple
          // We use this extra rule here to use in both uses_decl and
          // extended_uses_decl, so the LALR(1) parser can avoid conflicts.
          (tao_yyval.bval) = (tao_yyvsp[(2) - (2)].bval);
        ;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 5618 "idl.tao_yy"
    {
// opt_multiple : IDL_MULTIPLE
          (tao_yyval.bval) = true;
        ;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 5623 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.bval) = false;
        ;}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 5630 "idl.tao_yy"
    {
// emits_decl : IDL_EMITS scoped_name id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((tao_yyvsp[(2) - (3)].idlist), true, false);

          if (0 == d)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_eventtype:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_eventtype)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->eventtype_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *event_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((tao_yyvsp[(3) - (3)].idval));

              UTL_ScopedName sn ((tao_yyvsp[(3) - (3)].idval),
                                 0);

              AST_Emits *e =
                idl_global->gen ()->create_emits (&sn,
                                                  event_type);

              (void) s->fe_add_emits (e);
            }

          (tao_yyvsp[(2) - (3)].idlist)->destroy ();
          delete (tao_yyvsp[(2) - (3)].idlist);
          (tao_yyvsp[(2) - (3)].idlist) = 0;

          (tao_yyvsp[(3) - (3)].idval)->destroy ();
          delete (tao_yyvsp[(3) - (3)].idval);
          (tao_yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 5703 "idl.tao_yy"
    {
// publishes_decl : IDL_PUBLISHES scoped_name id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((tao_yyvsp[(2) - (3)].idlist), true, false);

          if (0 == d)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_eventtype:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_eventtype)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->eventtype_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *event_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((tao_yyvsp[(3) - (3)].idval));

              UTL_ScopedName sn ((tao_yyvsp[(3) - (3)].idval),
                                 0);

              AST_Publishes *p =
                idl_global->gen ()->create_publishes (&sn,
                                                      event_type);

              (void) s->fe_add_publishes (p);
            }

          (tao_yyvsp[(2) - (3)].idlist)->destroy ();
          delete (tao_yyvsp[(2) - (3)].idlist);
          (tao_yyvsp[(2) - (3)].idlist) = 0;

          (tao_yyvsp[(3) - (3)].idval)->destroy ();
          delete (tao_yyvsp[(3) - (3)].idval);
          (tao_yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 5776 "idl.tao_yy"
    {
// consumes_decl : IDL_CONSUMES scoped_name id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((tao_yyvsp[(2) - (3)].idlist), true, false);

          if (0 == d)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_eventtype:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_eventtype)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->eventtype_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *event_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((tao_yyvsp[(3) - (3)].idval));

              UTL_ScopedName sn ((tao_yyvsp[(3) - (3)].idval),
                                 0);

              AST_Consumes *c =
                idl_global->gen ()->create_consumes (&sn,
                                                     event_type);

              (void) s->fe_add_consumes (c);
            }

          (tao_yyvsp[(2) - (3)].idlist)->destroy ();
          delete (tao_yyvsp[(2) - (3)].idlist);
          (tao_yyvsp[(2) - (3)].idlist) = 0;

          (tao_yyvsp[(3) - (3)].idval)->destroy ();
          delete (tao_yyvsp[(3) - (3)].idval);
          (tao_yyvsp[(3) - (3)].idval) = 0;
       ;}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 5850 "idl.tao_yy"
    {
// home_decl : home_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Home *h = 0;

          /*
           * Make a new home node and add it to the enclosing scope.
           */
          if (s != 0 && (tao_yyvsp[(1) - (1)].hhval) != 0)
            {
              h =
                idl_global->gen ()->create_home (
                                        (tao_yyvsp[(1) - (1)].hhval)->name (),
                                        (tao_yyvsp[(1) - (1)].hhval)->base_home (),
                                        (tao_yyvsp[(1) - (1)].hhval)->managed_component (),
                                        (tao_yyvsp[(1) - (1)].hhval)->primary_key (),
                                        (tao_yyvsp[(1) - (1)].hhval)->supports (),
                                        (tao_yyvsp[(1) - (1)].hhval)->n_supports (),
                                        (tao_yyvsp[(1) - (1)].hhval)->supports_flat (),
                                        (tao_yyvsp[(1) - (1)].hhval)->n_supports_flat ()
                                      );
              /*
               * Add the home to its definition scope.
               */
              (void) s->fe_add_home (h);

              // This FE_HomeHeader class isn't destroyed with the AST.
              (tao_yyvsp[(1) - (1)].hhval)->destroy ();
              delete (tao_yyvsp[(1) - (1)].hhval);
              (tao_yyvsp[(1) - (1)].hhval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (h);
        ;}
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 5888 "idl.tao_yy"
    {
//      home_body
          /*
           * Done with this component - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 5899 "idl.tao_yy"
    {
// home_header : IDL_HOME
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeSeen);
        ;}
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 5904 "idl.tao_yy"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeIDSeen);
        ;}
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 5909 "idl.tao_yy"
    {
//      home_inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        ;}
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 5914 "idl.tao_yy"
    {
//      supports_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);
        ;}
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 5919 "idl.tao_yy"
    {
//      IDL_MANAGES
          idl_global->set_parse_state (IDL_GlobalData::PS_ManagesSeen);
        ;}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 5924 "idl.tao_yy"
    {
//      scoped_name
          idl_global->set_parse_state (IDL_GlobalData::PS_ManagesIDSeen);
        ;}
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 5929 "idl.tao_yy"
    {
//      primary_key_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_PrimaryKeySpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of a component home.
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((tao_yyvsp[(3) - (13)].idval), 0),
                          1);

          ACE_NEW_RETURN ((tao_yyval.hhval),
                          FE_HomeHeader (n,
                                         (tao_yyvsp[(5) - (13)].idlist),
                                         (tao_yyvsp[(7) - (13)].nlval),
                                         (tao_yyvsp[(11) - (13)].idlist),
                                         (tao_yyvsp[(13) - (13)].idlist)),
                          1);

          (tao_yyvsp[(11) - (13)].idlist)->destroy ();
          delete (tao_yyvsp[(11) - (13)].idlist);
          (tao_yyvsp[(11) - (13)].idlist) = 0;

          if (0 != (tao_yyvsp[(5) - (13)].idlist))
            {
              (tao_yyvsp[(5) - (13)].idlist)->destroy ();
              delete (tao_yyvsp[(5) - (13)].idlist);
              (tao_yyvsp[(5) - (13)].idlist) = 0;
            }

          if (0 != (tao_yyvsp[(13) - (13)].idlist))
            {
              (tao_yyvsp[(13) - (13)].idlist)->destroy ();
              delete (tao_yyvsp[(13) - (13)].idlist);
              (tao_yyvsp[(13) - (13)].idlist) = 0;
            }

          if (0 != (tao_yyvsp[(7) - (13)].nlval))
            {
              (tao_yyvsp[(7) - (13)].nlval)->destroy ();
              delete (tao_yyvsp[(7) - (13)].nlval);
              (tao_yyvsp[(7) - (13)].nlval) = 0;
            }
        ;}
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 5979 "idl.tao_yy"
    {
// home_inheritance_spec ':'
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritColonSeen);
        ;}
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 5984 "idl.tao_yy"
    {
//      scoped_name
          (tao_yyval.idlist) = (tao_yyvsp[(3) - (3)].idlist);
        ;}
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 5989 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.idlist) = 0;
        ;}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 5998 "idl.tao_yy"
    {
// primary_key_spec : IDL_PRIMARYKEY scoped_name
          (tao_yyval.idlist) = (tao_yyvsp[(2) - (2)].idlist);
        ;}
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 6003 "idl.tao_yy"
    {
/*      |  EMPTY */
          (tao_yyval.idlist) = 0;
        ;}
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 6011 "idl.tao_yy"
    {
// home_body : '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeSqSeen);
        ;}
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 6016 "idl.tao_yy"
    {
//      home_exports
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeBodySeen);
        ;}
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 6021 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeQsSeen);
        ;}
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 6035 "idl.tao_yy"
    {
// home_export : factory_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_FactoryDeclSeen);
        ;}
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 6040 "idl.tao_yy"
    {
//      | ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 6045 "idl.tao_yy"
    {
//      | finder_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_FinderDeclSeen);
        ;}
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 6050 "idl.tao_yy"
    {
//      | ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 6059 "idl.tao_yy"
    {
// factory_decl : IDL_FACTORY id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(2) - (2)].idval),
                            0);
          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing a factory operation
           * and add it to the enclosing scope.
           */
          AST_Factory *f = idl_global->gen ()->create_factory (&n);
          (void) s->fe_add_factory (f);

          (tao_yyvsp[(2) - (2)].idval)->destroy ();
          delete (tao_yyvsp[(2) - (2)].idval);
          (tao_yyvsp[(2) - (2)].idval) = 0;

          /*
           * Push the factory scope onto the scopes stack.
           */
          idl_global->scopes ().push (f);
        ;}
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 6083 "idl.tao_yy"
    {
//      init_parameter_list
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        ;}
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 6088 "idl.tao_yy"
    {
//      opt_raises
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          /*
           * Add exceptions and context to the factory.
           */
          if ((tao_yyvsp[(6) - (6)].nlval) != 0)
            {
              (void) s->fe_add_exceptions ((tao_yyvsp[(6) - (6)].nlval));
            }

          /*
           * Done with this factory. Pop its scope from the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 6111 "idl.tao_yy"
    {
// finder_decl : IDL_FINDER id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(2) - (2)].idval),
                            0);

          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing a home finder
           * and add it to the enclosing scope.
           */
          AST_Finder *f =
            idl_global->gen ()->create_finder (&n);

          (void) s->fe_add_finder (f);


          (tao_yyvsp[(2) - (2)].idval)->destroy ();
          delete (tao_yyvsp[(2) - (2)].idval);
          (tao_yyvsp[(2) - (2)].idval) = 0;

          /*
           * Push the operation scope onto the scopes stack.
           */
          idl_global->scopes ().push (f);
        ;}
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 6139 "idl.tao_yy"
    {
//      init_parameter_list
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        ;}
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 6144 "idl.tao_yy"
    {
//      opt_raises
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          /*
           * Add exceptions and context to the finder.
           */
          if ((tao_yyvsp[(6) - (6)].nlval) != 0)
            {
              (void) s->fe_add_exceptions ((tao_yyvsp[(6) - (6)].nlval));
            }

          /*
           * Done with this operation. Pop its scope from the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 6178 "idl.tao_yy"
    {
// event_concrete_forward_decl : IDL_EVENTTYPE id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(2) - (2)].idval),
                            0);
          AST_EventTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * eventtype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_eventtype_fwd (&n,
                                                            false);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (tao_yyvsp[(2) - (2)].idval)->destroy ();
          delete (tao_yyvsp[(2) - (2)].idval);
          (tao_yyvsp[(2) - (2)].idval) = 0;
        ;}
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 6207 "idl.tao_yy"
    {
// event_abs_forward_decl : IDL_ABSTRACT IDL_EVENTTYPE id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((tao_yyvsp[(3) - (3)].idval),
                            0);
          AST_EventTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * eventtype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_eventtype_fwd (&n,
                                                            true);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (tao_yyvsp[(3) - (3)].idval)->destroy ();
          delete (tao_yyvsp[(3) - (3)].idval);
          (tao_yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 6235 "idl.tao_yy"
    {
// event_abs_decl : event_abs_header event_rest_of_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_EventType *e = 0;
          AST_Interface *i = 0;

          if (s != 0 && (tao_yyvsp[(1) - (2)].idval) != 0)
            {
              UTL_ScopedName sn ((tao_yyvsp[(1) - (2)].idval),
                                 0);
              e =
                idl_global->gen ()->create_eventtype (
                    &sn,
                    (tao_yyvsp[(2) - (2)].vhval)->inherits (),
                    (tao_yyvsp[(2) - (2)].vhval)->n_inherits (),
                    (tao_yyvsp[(2) - (2)].vhval)->inherits_concrete (),
                    (tao_yyvsp[(2) - (2)].vhval)->inherits_flat (),
                    (tao_yyvsp[(2) - (2)].vhval)->n_inherits_flat (),
                    (tao_yyvsp[(2) - (2)].vhval)->supports (),
                    (tao_yyvsp[(2) - (2)].vhval)->n_supports (),
                    (tao_yyvsp[(2) - (2)].vhval)->supports_concrete (),
                    true,
                    false,
                    false
                  );
              i = AST_Interface::narrow_from_decl (e);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the eventetype to its definition scope
               */
              e = AST_EventType::narrow_from_decl (i);
              (void) s->fe_add_eventtype (e);
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (e);

          (tao_yyvsp[(1) - (2)].idval)->destroy ();
          delete (tao_yyvsp[(1) - (2)].idval);
          (tao_yyvsp[(1) - (2)].idval) = 0;
        ;}
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 6280 "idl.tao_yy"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeSqSeen);
        ;}
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 6285 "idl.tao_yy"
    {
//      exports
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeBodySeen);
        ;}
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 6290 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeQsSeen);

          /*
           * Done with this eventtype - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 6305 "idl.tao_yy"
    {
// event_abs_header : IDL_ABSTRACT IDL_EVENTTYPE id
          (tao_yyval.idval) = (tao_yyvsp[(3) - (3)].idval);
        ;}
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 6315 "idl.tao_yy"
    {
// event_custom_header : IDL_CUSTOM IDL_EVENTTYPE id
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeIDSeen);

          ACE_DEBUG ((LM_DEBUG,
                      ACE_TEXT ("error in %C line %d\n"),
                      idl_global->filename ()->get_string (),
                      idl_global->lineno ()));
          ACE_DEBUG ((LM_DEBUG,
                      ACE_TEXT ("Sorry, I (TAO_IDL) can't handle")
                      ACE_TEXT (" custom yet\n")));
          (tao_yyval.idval) = 0;
        ;}
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 6333 "idl.tao_yy"
    {
// event_plain_header : IDL_EVENTTYPE id
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeIDSeen);

          (tao_yyval.idval) = (tao_yyvsp[(2) - (2)].idval);
        ;}
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 6343 "idl.tao_yy"
    {
// event_rest_of_header : inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        ;}
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 6348 "idl.tao_yy"
    {
//      supports_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);

          ACE_NEW_RETURN ((tao_yyval.vhval),
                          FE_OBVHeader (
                            0,
                            (tao_yyvsp[(1) - (3)].nlval),
                            (tao_yyvsp[(3) - (3)].nlval),
                            (tao_yyvsp[(1) - (3)].nlval)
                              ? (tao_yyvsp[(1) - (3)].nlval)->truncatable ()
                              : false,
                            true),
                          1);

          if (0 != (tao_yyvsp[(3) - (3)].nlval))
            {
              (tao_yyvsp[(3) - (3)].nlval)->destroy ();
              delete (tao_yyvsp[(3) - (3)].nlval);
              (tao_yyvsp[(3) - (3)].nlval) = 0;
            }

          if (0 != (tao_yyvsp[(1) - (3)].nlval))
            {
              (tao_yyvsp[(1) - (3)].nlval)->destroy ();
              delete (tao_yyvsp[(1) - (3)].nlval);
              (tao_yyvsp[(1) - (3)].nlval) = 0;
            }
        ;}
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 6382 "idl.tao_yy"
    {
// event_decl : event_header event_rest_of_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_EventType *e = 0;
          AST_Interface *i = 0;

          if (s != 0 && (tao_yyvsp[(1) - (2)].idval) != 0)
            {
              // We create the scoped name here instead of with the
              // FE_EventHeader because there is a token for it only here.
              UTL_ScopedName sn ((tao_yyvsp[(1) - (2)].idval),
                                 0);
              e =
                idl_global->gen ()->create_eventtype (
                    &sn,
                    (tao_yyvsp[(2) - (2)].vhval)->inherits (),
                    (tao_yyvsp[(2) - (2)].vhval)->n_inherits (),
                    (tao_yyvsp[(2) - (2)].vhval)->inherits_concrete (),
                    (tao_yyvsp[(2) - (2)].vhval)->inherits_flat (),
                    (tao_yyvsp[(2) - (2)].vhval)->n_inherits_flat (),
                    (tao_yyvsp[(2) - (2)].vhval)->supports (),
                    (tao_yyvsp[(2) - (2)].vhval)->n_supports (),
                    (tao_yyvsp[(2) - (2)].vhval)->supports_concrete (),
                    false,
                    (tao_yyvsp[(2) - (2)].vhval)->truncatable (),
                    false
                  );
              i = AST_Interface::narrow_from_decl (e);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the eventetype to its definition scope
               */
              e = AST_EventType::narrow_from_decl (i);
              (void) s->fe_add_eventtype (e);

              // FE_EventHeader is not automatically destroyed in the AST
              (tao_yyvsp[(2) - (2)].vhval)->destroy ();
              delete (tao_yyvsp[(2) - (2)].vhval);
              (tao_yyvsp[(2) - (2)].vhval) = 0;

              sn.destroy ();
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (e);
        ;}
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 6432 "idl.tao_yy"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeSqSeen);
        ;}
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 6437 "idl.tao_yy"
    {
//      value_elements
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeBodySeen);
        ;}
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 6442 "idl.tao_yy"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeQsSeen);

          /*
           * Done with this eventtype - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 6455 "idl.tao_yy"
    {
// event_header : event_custom_header
          (tao_yyval.idval) = (tao_yyvsp[(1) - (1)].idval);
        ;}
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 6460 "idl.tao_yy"
    {
// event_header : event_plain_header
          (tao_yyval.idval) = (tao_yyvsp[(1) - (1)].idval);
        ;}
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 6468 "idl.tao_yy"
    {
// formal_parameter_type : IDL_TYPENAME
          (tao_yyval.ntval) = AST_Decl::NT_type;
        ;}
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 6473 "idl.tao_yy"
    {
//        IDL_STRUCT
          (tao_yyval.ntval) = AST_Decl::NT_struct;
        ;}
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 6478 "idl.tao_yy"
    {
//        IDL_UNION
          (tao_yyval.ntval) = AST_Decl::NT_union;
        ;}
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 6483 "idl.tao_yy"
    {
//        IDL_EVENTTYPE
          (tao_yyval.ntval) = AST_Decl::NT_eventtype;
        ;}
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 6488 "idl.tao_yy"
    {
//        IDL_SEQUENCE
          (tao_yyval.ntval) = AST_Decl::NT_sequence;
        ;}
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 6493 "idl.tao_yy"
    {
//        IDL_INTERFACE
          (tao_yyval.ntval) = AST_Decl::NT_interface;
        ;}
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 6498 "idl.tao_yy"
    {
//        IDL_VALUETYPE
          (tao_yyval.ntval) = AST_Decl::NT_valuetype;
        ;}
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 6503 "idl.tao_yy"
    {
//        IDL_ENUM
          (tao_yyval.ntval) = AST_Decl::NT_enum;
        ;}
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 6508 "idl.tao_yy"
    {
//        IDL_EXCEPTION
          (tao_yyval.ntval) = AST_Decl::NT_except;
        ;}
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 6513 "idl.tao_yy"
    {
//        IDL_CONST const_type
          (tao_yyval.ntval) = AST_Decl::NT_const;
          t_param_const_type = (tao_yyvsp[(2) - (2)].etval);
        ;}
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 6522 "idl.tao_yy"
    {
// at_least_one_formal_parameter : formal_parameter formal_parameters
          if ((tao_yyvsp[(2) - (2)].plval) == 0)
            {
              ACE_NEW_RETURN ((tao_yyvsp[(2) - (2)].plval),
                              FE_Utils::T_PARAMLIST_INFO,
                              1);
            }

          (tao_yyvsp[(2) - (2)].plval)->enqueue_head (*(tao_yyvsp[(1) - (2)].pival));
          delete (tao_yyvsp[(1) - (2)].pival);
          (tao_yyvsp[(1) - (2)].pival) = 0;

          // The param added above is always the last one parsed,
          // so we check for matches between sequence<T> & T here.
          ACE_CString bad_id =
            FE_Utils::check_for_seq_of_param (
              (tao_yyvsp[(2) - (2)].plval));

          if (!bad_id.empty ())
            {
              delete (tao_yyvsp[(2) - (2)].plval);
              (tao_yyvsp[(2) - (2)].plval) = 0;

              idl_global->err ()->mismatch_seq_of_param (bad_id.c_str ());
              return 1;
            }

          (tao_yyval.plval) = (tao_yyvsp[(2) - (2)].plval);
        ;}
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 6556 "idl.tao_yy"
    {
// formal_parameters : formal_parameters ','
          // Maybe add a new parse state to set here.
        ;}
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 6561 "idl.tao_yy"
    {
//        formal_parameter
          if ((tao_yyvsp[(1) - (4)].plval) == 0)
            {
              ACE_NEW_RETURN ((tao_yyvsp[(1) - (4)].plval),
                              FE_Utils::T_PARAMLIST_INFO,
                              1);
            }

          (tao_yyvsp[(1) - (4)].plval)->enqueue_tail (*(tao_yyvsp[(4) - (4)].pival));
          (tao_yyval.plval) = (tao_yyvsp[(1) - (4)].plval);

          delete (tao_yyvsp[(4) - (4)].pival);
          (tao_yyvsp[(4) - (4)].pival) = 0;
        ;}
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 6577 "idl.tao_yy"
    {
//        /* EMPTY */
          (tao_yyval.plval) = 0;
        ;}
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 6585 "idl.tao_yy"
    {
// formal_parameter : formal_parameter_type IDENTIFIER

          ACE_NEW_RETURN ((tao_yyval.pival),
                          FE_Utils::T_Param_Info,
                          1);

          AST_Decl::NodeType nt = (tao_yyvsp[(1) - (2)].ntval);

          (tao_yyval.pival)->type_ = nt;
          (tao_yyval.pival)->name_ = (tao_yyvsp[(2) - (2)].strval);
          ACE::strdelete ((tao_yyvsp[(2) - (2)].strval));
          (tao_yyvsp[(2) - (2)].strval) = 0;

          if (nt == AST_Decl::NT_const)
            {
              (tao_yyval.pival)->const_type_ = t_param_const_type;
              (tao_yyval.pival)->enum_const_type_decl_ =
                tao_enum_constant_decl;

              // Reset these values.
              t_param_const_type = AST_Expression::EV_none;
              tao_enum_constant_decl = 0;
            }
        ;}
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 6611 "idl.tao_yy"
    {
          ACE_NEW_RETURN ((tao_yyval.pival),
                          FE_Utils::T_Param_Info,
                          1);

          (tao_yyval.pival)->type_ = AST_Decl::NT_sequence;
          (tao_yyval.pival)->seq_param_ref_  = (tao_yyvsp[(3) - (5)].strval);
          (tao_yyval.pival)->name_ += (tao_yyvsp[(5) - (5)].strval);

          ACE::strdelete ((tao_yyvsp[(3) - (5)].strval));
          (tao_yyvsp[(3) - (5)].strval) = 0;
          ACE::strdelete ((tao_yyvsp[(5) - (5)].strval));
          (tao_yyvsp[(5) - (5)].strval) = 0;
        ;}
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 6629 "idl.tao_yy"
    {
// at_least_one_formal_parameter_name : formal_parameter_name formal_parameter_names
          ACE_NEW_RETURN ((tao_yyval.slval),
                          UTL_StrList ((tao_yyvsp[(1) - (2)].sval),
                                       (tao_yyvsp[(2) - (2)].slval)),
                          1);
        ;}
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 6640 "idl.tao_yy"
    {
// formal_parameter_names : formal_parameter_names ',' formal_parameter_name
          UTL_StrList *sl = 0;
          ACE_NEW_RETURN (sl,
                          UTL_StrList ((tao_yyvsp[(3) - (3)].sval),
                                       0),
                          1);

          if ((tao_yyvsp[(1) - (3)].slval) == 0)
            {
              (tao_yyval.slval) = sl;
            }
          else
            {
              (tao_yyvsp[(1) - (3)].slval)->nconc (sl);
              (tao_yyval.slval) = (tao_yyvsp[(1) - (3)].slval);
            }
        ;}
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 6659 "idl.tao_yy"
    {
//        /* EMPTY */
          (tao_yyval.slval) = 0;
        ;}
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 6667 "idl.tao_yy"
    {
// formal_parameter_name : IDENTIFIER
          ACE_NEW_RETURN ((tao_yyval.sval),
                          UTL_String ((tao_yyvsp[(1) - (1)].strval), true),
                          1);
        ;}
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 6677 "idl.tao_yy"
    {
// porttype_decl : IDL_PORTTYPE
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeSeen);
        ;}
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 6682 "idl.tao_yy"
    {
//        IDENTIFIER
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeIDSeen);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          Identifier id ((tao_yyvsp[(3) - (3)].strval));
          ACE::strdelete ((tao_yyvsp[(3) - (3)].strval));
          (tao_yyvsp[(3) - (3)].strval) = 0;

          UTL_ScopedName sn (&id, 0);
          AST_PortType *p =
            idl_global->gen ()->create_porttype (&sn);

          (void) s->fe_add_porttype (p);

          // Push it on the scopes stack.
          idl_global->scopes ().push (p);
        ;}
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 6701 "idl.tao_yy"
    {
//        '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeSqSeen);
        ;}
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 6706 "idl.tao_yy"
    {
//        at_least_one_port_export
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeBodySeen);
        ;}
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 6711 "idl.tao_yy"
    {
//        '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeQsSeen);

          // Done with this port type - pop it off the scopes stack.
          idl_global->scopes ().pop ();
        ;}
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 6722 "idl.tao_yy"
    {
// at_least_one_port_export : port_export port_exports
        ;}
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 6729 "idl.tao_yy"
    {
// port_exports : port_exports port_export
        ;}
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 6733 "idl.tao_yy"
    {
//        | /* EMPTY */
        ;}
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 6740 "idl.tao_yy"
    {
// port_export : provides_decl
        ;}
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 6744 "idl.tao_yy"
    {
//        ';'
        ;}
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 6748 "idl.tao_yy"
    {
//        | uses_decl
        ;}
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 6752 "idl.tao_yy"
    {
//        ';'
        ;}
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 6756 "idl.tao_yy"
    {
//        | attribute
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        ;}
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 6761 "idl.tao_yy"
    {
//        ';'
        ;}
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 6768 "idl.tao_yy"
    {
// extended_port_decl : IDL_PORT scoped_name IDENTIFIER
          idl_global->set_parse_state (IDL_GlobalData::PS_ExtendedPortDeclSeen);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((tao_yyvsp[(2) - (3)].idlist));
          AST_PortType *pt = 0;
          bool so_far_so_good = true;

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              pt = AST_PortType::narrow_from_decl (d);

              if (pt == 0)
                {
                  idl_global->err ()->error1 (UTL_Error::EIDL_PORTTYPE_EXPECTED,
                                              d);
                  so_far_so_good = false;
                }
            }

          if (so_far_so_good)
            {
              Identifier id ((tao_yyvsp[(3) - (3)].strval));
              ACE::strdelete ((tao_yyvsp[(3) - (3)].strval));
              (tao_yyvsp[(3) - (3)].strval) = 0;

              UTL_ScopedName sn (&id,
                                 0);

              AST_Extended_Port *ep =
                idl_global->gen ()->create_extended_port (
                  &sn,
                  pt);

              (void) s->fe_add_extended_port (ep);

              // Create (in the AST) the struct(s) and sequence(s)
              // needed for multiplex uses ports, if any.
              for (UTL_ScopeActiveIterator i (pt, UTL_Scope::IK_decls);
                   !i.is_done ();
                   i.next ())
                {
                  d = i.item ();

                  AST_Uses *u = AST_Uses::narrow_from_decl (d);

                  if (u != 0 && u->is_multiple ())
                    {
                      AST_Component *c =
                        AST_Component::narrow_from_scope (s);

                      FE_Utils::create_uses_multiple_stuff (
                        c,
                        u,
                        id.get_string ());
                    }
                }
            }

          (tao_yyvsp[(2) - (3)].idlist)->destroy ();
          delete (tao_yyvsp[(2) - (3)].idlist);
          (tao_yyvsp[(2) - (3)].idlist) = 0;
        ;}
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 6838 "idl.tao_yy"
    {
//        | IDL_MIRRORPORT scoped_name IDENTIFIER
          idl_global->set_parse_state (IDL_GlobalData::PS_MirrorPortDeclSeen);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((tao_yyvsp[(2) - (3)].idlist));
          AST_PortType *pt = 0;
          bool so_far_so_good = true;

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((tao_yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
           else
             {
               pt = AST_PortType::narrow_from_decl (d);

               if (pt == 0)
                 {
                   idl_global->err ()->error1 (UTL_Error::EIDL_PORTTYPE_EXPECTED,
                                               d);
                   so_far_so_good = false;
                 }
             }

          if (so_far_so_good)
            {
              Identifier id ((tao_yyvsp[(3) - (3)].strval));
              ACE::strdelete ((tao_yyvsp[(3) - (3)].strval));
              (tao_yyvsp[(3) - (3)].strval) = 0;

              UTL_ScopedName sn (&id,
                                 0);

              AST_Mirror_Port *mp =
                idl_global->gen ()->create_mirror_port (
                  &sn,
                  pt);

              (void) s->fe_add_mirror_port (mp);
            }

          (tao_yyvsp[(2) - (3)].idlist)->destroy ();
          delete (tao_yyvsp[(2) - (3)].idlist);
          (tao_yyvsp[(2) - (3)].idlist) = 0;
        ;}
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 6889 "idl.tao_yy"
    {
// at_least_one_actual_parameter : actual_parameter actual_parameters
          if ((tao_yyvsp[(2) - (2)].alval) == 0)
            {
              ACE_NEW_RETURN ((tao_yyvsp[(2) - (2)].alval),
                              FE_Utils::T_ARGLIST,
                              1);
            }

          (tao_yyvsp[(2) - (2)].alval)->enqueue_head ((tao_yyvsp[(1) - (2)].dcval));
          (tao_yyval.alval) = (tao_yyvsp[(2) - (2)].alval);
        ;}
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 6905 "idl.tao_yy"
    {
// actual_parameters : actual_parameters ',' actual_parameter
          if ((tao_yyvsp[(1) - (3)].alval) == 0)
            {
              ACE_NEW_RETURN ((tao_yyvsp[(1) - (3)].alval),
                              FE_Utils::T_ARGLIST,
                              1);
            }

          (tao_yyvsp[(1) - (3)].alval)->enqueue_tail ((tao_yyvsp[(3) - (3)].dcval));
          (tao_yyval.alval) = (tao_yyvsp[(1) - (3)].alval);
        ;}
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 6918 "idl.tao_yy"
    {
//         | /* EMPTY */
          (tao_yyval.alval) = 0;
        ;}
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 6926 "idl.tao_yy"
    {
// actual_parameter : expression
          // To avoid grammar conflicts with this LALR(1) parser,
          // we take advantage of the fact that an expression can
          // be a scoped name. At that lower level, we create an
          // expression containing the scoped name, and at a
          // higher lever, deduce that it's not supposed to be
          // a constant and look up the type to add to the template
          // arg list.
          AST_Expression *ex = (tao_yyvsp[(1) - (1)].exval);
          UTL_ScopedName *sn = ex->n ();
          AST_Decl *d = 0;
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          if (sn != 0)
            {
              d = s->lookup_by_name (sn);

              if (d == 0)
                {
                  idl_global->err ()->lookup_error (sn);
                  return 1;
                }
              else
                {
                  AST_Decl::NodeType nt = d->node_type ();

                  if (nt == AST_Decl::NT_enum_val)
                    {
                      (tao_yyvsp[(1) - (1)].exval)->evaluate (
                        AST_Expression::EK_const);

                      (tao_yyval.dcval) =
                        idl_global->gen ()->create_constant (
                          (tao_yyvsp[(1) - (1)].exval)->ev ()->et,
                          (tao_yyvsp[(1) - (1)].exval),
                          sn);
                    }
                  else
                    {
                      (tao_yyval.dcval) = d;
                    }
                }
            }
          else
            {
              (tao_yyvsp[(1) - (1)].exval)->evaluate (
                AST_Expression::EK_const);

              (tao_yyval.dcval) =
                idl_global->gen ()->create_constant (
                  (tao_yyvsp[(1) - (1)].exval)->ev ()->et,
                  (tao_yyvsp[(1) - (1)].exval),
                  0);
            }
        ;}
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 6990 "idl.tao_yy"
    {
// connector_header : IDL_CONNECTOR
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorSeen);
        ;}
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 6995 "idl.tao_yy"
    {
//        IDENTIFIER
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorIDSeen);
        ;}
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 7000 "idl.tao_yy"
    {
//        component_inheritance_spec
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Connector *parent = 0;
          bool so_far_so_good = true;

          Identifier id ((tao_yyvsp[(3) - (5)].strval));
          ACE::strdelete ((tao_yyvsp[(3) - (5)].strval));
          (tao_yyvsp[(3) - (5)].strval) = 0;

          UTL_ScopedName sn (&id, 0);

          if ((tao_yyvsp[(5) - (5)].idlist) != 0)
            {
              AST_Decl *d =
                s->lookup_by_name ((tao_yyvsp[(5) - (5)].idlist));

              if (d == 0)
                {
                  idl_global->err ()->lookup_error ((tao_yyvsp[(5) - (5)].idlist));
                  so_far_so_good = false;
                }

              parent =
                AST_Connector::narrow_from_decl (d);

              if (parent == 0)
                {
                  idl_global->err ()->error1 (
                    UTL_Error::EIDL_CONNECTOR_EXPECTED,
                    d);

                  so_far_so_good = false;
                }

              (tao_yyvsp[(5) - (5)].idlist)->destroy ();
              delete (tao_yyvsp[(5) - (5)].idlist);
              (tao_yyvsp[(5) - (5)].idlist) = 0;
            }

          if (so_far_so_good)
            {
              AST_Connector *c =
                idl_global->gen ()->create_connector (&sn,
                                                      parent);

              (void) s->fe_add_connector (c);

              // Push it on the scopes stack.
              idl_global->scopes ().push (c);
           }
        ;}
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 7056 "idl.tao_yy"
    {
// connector_body " '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorSqSeen);
        ;}
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 7061 "idl.tao_yy"
    {
//        connector_exports
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorBodySeen);
        ;}
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 7066 "idl.tao_yy"
    {
//        '}
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorQsSeen);

          // Done with this connector - pop it off the scope stack.
          idl_global->scopes ().pop ();
        ;}
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 7082 "idl.tao_yy"
    {
// connector_export : provides_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ProvidesDeclSeen);
        ;}
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 7087 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 7092 "idl.tao_yy"
    {
//        | uses_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_UsesDeclSeen);
        ;}
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 7097 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 7102 "idl.tao_yy"
    {
//      | attribute
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        ;}
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 7107 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 7112 "idl.tao_yy"
    {
//      | extended_port_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ExtendedPortDeclSeen);
        ;}
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 7117 "idl.tao_yy"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 10966 "idl.tab.cc"
      default: break;
    }
  TAO_YY_SYMBOL_PRINT ("-> $$ =", tao_yyr1[tao_yyn], &tao_yyval, &tao_yyloc);

  TAO_YYPOPSTACK (tao_yylen);
  tao_yylen = 0;
  TAO_YY_STACK_PRINT (tao_yyss, tao_yyssp);

  *++tao_yyvsp = tao_yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  tao_yyn = tao_yyr1[tao_yyn];

  tao_yystate = tao_yypgoto[tao_yyn - TAO_YYNTOKENS] + *tao_yyssp;
  if (0 <= tao_yystate && tao_yystate <= TAO_YYLAST && tao_yycheck[tao_yystate] == *tao_yyssp)
    tao_yystate = tao_yytable[tao_yystate];
  else
    tao_yystate = tao_yydefgoto[tao_yyn - TAO_YYNTOKENS];

  goto tao_yynewstate;


/*------------------------------------.
| tao_yyerrlab -- here on detecting error |
`------------------------------------*/
tao_yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!tao_yyerrstatus)
    {
      ++tao_yynerrs;
#if ! TAO_YYERROR_VERBOSE
      tao_yyerror (TAO_YY_("syntax error"));
#else
      {
	TAO_YYSIZE_T tao_yysize = tao_yysyntax_error (0, tao_yystate, tao_yychar);
	if (tao_yymsg_alloc < tao_yysize && tao_yymsg_alloc < TAO_YYSTACK_ALLOC_MAXIMUM)
	  {
	    TAO_YYSIZE_T tao_yyalloc = 2 * tao_yysize;
	    if (! (tao_yysize <= tao_yyalloc && tao_yyalloc <= TAO_YYSTACK_ALLOC_MAXIMUM))
	      tao_yyalloc = TAO_YYSTACK_ALLOC_MAXIMUM;
	    if (tao_yymsg != tao_yymsgbuf)
	      TAO_YYSTACK_FREE (tao_yymsg);
	    tao_yymsg = (char *) TAO_YYSTACK_ALLOC (tao_yyalloc);
	    if (tao_yymsg)
	      tao_yymsg_alloc = tao_yyalloc;
	    else
	      {
		tao_yymsg = tao_yymsgbuf;
		tao_yymsg_alloc = sizeof tao_yymsgbuf;
	      }
	  }

	if (0 < tao_yysize && tao_yysize <= tao_yymsg_alloc)
	  {
	    (void) tao_yysyntax_error (tao_yymsg, tao_yystate, tao_yychar);
	    tao_yyerror (tao_yymsg);
	  }
	else
	  {
	    tao_yyerror (TAO_YY_("syntax error"));
	    if (tao_yysize != 0)
	      goto tao_yyexhaustedlab;
	  }
      }
#endif
    }



  if (tao_yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (tao_yychar <= TAO_YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (tao_yychar == TAO_YYEOF)
	    TAO_YYABORT;
	}
      else
	{
	  tao_yydestruct ("Error: discarding",
		      tao_yytoken, &tao_yylval);
	  tao_yychar = TAO_YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto tao_yyerrlab1;


/*---------------------------------------------------.
| tao_yyerrorlab -- error raised explicitly by TAO_YYERROR.  |
`---------------------------------------------------*/
tao_yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     TAO_YYERROR and the label tao_yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto tao_yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this TAO_YYERROR.  */
  TAO_YYPOPSTACK (tao_yylen);
  tao_yylen = 0;
  TAO_YY_STACK_PRINT (tao_yyss, tao_yyssp);
  tao_yystate = *tao_yyssp;
  goto tao_yyerrlab1;


/*-------------------------------------------------------------.
| tao_yyerrlab1 -- common code for both syntax error and TAO_YYERROR.  |
`-------------------------------------------------------------*/
tao_yyerrlab1:
  tao_yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      tao_yyn = tao_yypact[tao_yystate];
      if (tao_yyn != TAO_YYPACT_NINF)
	{
	  tao_yyn += TAO_YYTERROR;
	  if (0 <= tao_yyn && tao_yyn <= TAO_YYLAST && tao_yycheck[tao_yyn] == TAO_YYTERROR)
	    {
	      tao_yyn = tao_yytable[tao_yyn];
	      if (0 < tao_yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (tao_yyssp == tao_yyss)
	TAO_YYABORT;


      tao_yydestruct ("Error: popping",
		  tao_yystos[tao_yystate], tao_yyvsp);
      TAO_YYPOPSTACK (1);
      tao_yystate = *tao_yyssp;
      TAO_YY_STACK_PRINT (tao_yyss, tao_yyssp);
    }

  *++tao_yyvsp = tao_yylval;


  /* Shift the error token.  */
  TAO_YY_SYMBOL_PRINT ("Shifting", tao_yystos[tao_yyn], tao_yyvsp, tao_yylsp);

  tao_yystate = tao_yyn;
  goto tao_yynewstate;


/*-------------------------------------.
| tao_yyacceptlab -- TAO_YYACCEPT comes here.  |
`-------------------------------------*/
tao_yyacceptlab:
  tao_yyresult = 0;
  goto tao_yyreturn;

/*-----------------------------------.
| tao_yyabortlab -- TAO_YYABORT comes here.  |
`-----------------------------------*/
tao_yyabortlab:
  tao_yyresult = 1;
  goto tao_yyreturn;

#if !defined(tao_yyoverflow) || TAO_YYERROR_VERBOSE
/*-------------------------------------------------.
| tao_yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
tao_yyexhaustedlab:
  tao_yyerror (TAO_YY_("memory exhausted"));
  tao_yyresult = 2;
  /* Fall through.  */
#endif

tao_yyreturn:
  if (tao_yychar != TAO_YYEMPTY)
     tao_yydestruct ("Cleanup: discarding lookahead",
		 tao_yytoken, &tao_yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this TAO_YYABORT or TAO_YYACCEPT.  */
  TAO_YYPOPSTACK (tao_yylen);
  TAO_YY_STACK_PRINT (tao_yyss, tao_yyssp);
  while (tao_yyssp != tao_yyss)
    {
      tao_yydestruct ("Cleanup: popping",
		  tao_yystos[*tao_yyssp], tao_yyvsp);
      TAO_YYPOPSTACK (1);
    }
#ifndef tao_yyoverflow
  if (tao_yyss != tao_yyssa)
    TAO_YYSTACK_FREE (tao_yyss);
#endif
#if TAO_YYERROR_VERBOSE
  if (tao_yymsg != tao_yymsgbuf)
    TAO_YYSTACK_FREE (tao_yymsg);
#endif
  /* Make sure TAO_YYID is used.  */
  return TAO_YYID (tao_yyresult);
}



/* Line 1675 of yacc.c  */
#line 7123 "idl.tao_yy"

/* programs */

/*
 * ???
 */
int
tao_yywrap (void)
{
  return 1;
}

/*
 * Report an error situation discovered in a production
 */
void
tao_yyerror (const char *msg)
{
  ACE_ERROR ((LM_ERROR,
              "%C\n",
              msg));
}

