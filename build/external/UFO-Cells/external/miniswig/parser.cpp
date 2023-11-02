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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"

// miniswig - Language binding generator for Squirrel
// Copyright (C) 2005-2006 Matthias Braun <matze@braunis.de>
// Copyright (C) 2008 Ryan Flegel <rflegel@gmail.com>
// Copyright (C) 2009 Mathnerd314 <man.is.allan@gmail.com>
// Copyright (C) 2009-2023 Ingo Ruhnke <grumbel@gmail.com>
// Copyright (C) 2023 Vankata453 <78196474+Vankata453@users.noreply.github.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#line 23 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"

#include <iostream>
#include <sstream>
#include <stdexcept>
#include "tree.hpp"
#include "globals.hpp"


#line 101 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"

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

#include "parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_FLOAT = 4,                    /* T_FLOAT  */
  YYSYMBOL_T_STRING = 5,                   /* T_STRING  */
  YYSYMBOL_T_ID = 6,                       /* T_ID  */
  YYSYMBOL_T_ATOMIC_TYPE = 7,              /* T_ATOMIC_TYPE  */
  YYSYMBOL_T_NAMESPACEREF = 8,             /* T_NAMESPACEREF  */
  YYSYMBOL_T_CLASS = 9,                    /* T_CLASS  */
  YYSYMBOL_T_STRUCT = 10,                  /* T_STRUCT  */
  YYSYMBOL_T_STATIC = 11,                  /* T_STATIC  */
  YYSYMBOL_T_SUSPEND = 12,                 /* T_SUSPEND  */
  YYSYMBOL_T_CUSTOM = 13,                  /* T_CUSTOM  */
  YYSYMBOL_T_CONST = 14,                   /* T_CONST  */
  YYSYMBOL_T_UNSIGNED = 15,                /* T_UNSIGNED  */
  YYSYMBOL_T_SIGNED = 16,                  /* T_SIGNED  */
  YYSYMBOL_T_VOID = 17,                    /* T_VOID  */
  YYSYMBOL_T_BOOL = 18,                    /* T_BOOL  */
  YYSYMBOL_T_CHAR = 19,                    /* T_CHAR  */
  YYSYMBOL_T_SHORT = 20,                   /* T_SHORT  */
  YYSYMBOL_T_LONG = 21,                    /* T_LONG  */
  YYSYMBOL_T_DOUBLE = 22,                  /* T_DOUBLE  */
  YYSYMBOL_T_PUBLIC = 23,                  /* T_PUBLIC  */
  YYSYMBOL_T_PROTECTED = 24,               /* T_PROTECTED  */
  YYSYMBOL_T_PRIVATE = 25,                 /* T_PRIVATE  */
  YYSYMBOL_T_NAMESPACE = 26,               /* T_NAMESPACE  */
  YYSYMBOL_T_DDCOL = 27,                   /* "::"  */
  YYSYMBOL_28_ = 28,                       /* '{'  */
  YYSYMBOL_29_ = 29,                       /* '}'  */
  YYSYMBOL_30_ = 30,                       /* ';'  */
  YYSYMBOL_31_ = 31,                       /* ':'  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* '~'  */
  YYSYMBOL_36_ = 36,                       /* '='  */
  YYSYMBOL_37_ = 37,                       /* '-'  */
  YYSYMBOL_38_ = 38,                       /* '*'  */
  YYSYMBOL_39_ = 39,                       /* '&'  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_input = 41,                     /* input  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_namespace_members = 43,         /* namespace_members  */
  YYSYMBOL_namespace_declaration = 44,     /* namespace_declaration  */
  YYSYMBOL_45_2 = 45,                      /* $@2  */
  YYSYMBOL_46_3 = 46,                      /* $@3  */
  YYSYMBOL_namespace_member = 47,          /* namespace_member  */
  YYSYMBOL_class_declaration = 48,         /* class_declaration  */
  YYSYMBOL_49_4 = 49,                      /* $@4  */
  YYSYMBOL_superclass_list = 50,           /* superclass_list  */
  YYSYMBOL_superclasses = 51,              /* superclasses  */
  YYSYMBOL_superclass = 52,                /* superclass  */
  YYSYMBOL_superclass_visibility = 53,     /* superclass_visibility  */
  YYSYMBOL_class_body = 54,                /* class_body  */
  YYSYMBOL_class_body_element = 55,        /* class_body_element  */
  YYSYMBOL_visibility_change = 56,         /* visibility_change  */
  YYSYMBOL_constructor_declaration = 57,   /* constructor_declaration  */
  YYSYMBOL_58_5 = 58,                      /* $@5  */
  YYSYMBOL_destructor_declaration = 59,    /* destructor_declaration  */
  YYSYMBOL_field_declaration = 60,         /* field_declaration  */
  YYSYMBOL_61_6 = 61,                      /* $@6  */
  YYSYMBOL_maybe_const_initialisation = 62, /* maybe_const_initialisation  */
  YYSYMBOL_function_declaration = 63,      /* function_declaration  */
  YYSYMBOL_64_7 = 64,                      /* $@7  */
  YYSYMBOL_function_attributes = 65,       /* function_attributes  */
  YYSYMBOL_abstract_declaration = 66,      /* abstract_declaration  */
  YYSYMBOL_parameter_list = 67,            /* parameter_list  */
  YYSYMBOL_parameters = 68,                /* parameters  */
  YYSYMBOL_parameter = 69,                 /* parameter  */
  YYSYMBOL_type = 70,                      /* type  */
  YYSYMBOL_71_8 = 71,                      /* $@8  */
  YYSYMBOL_prefix_type_modifiers = 72,     /* prefix_type_modifiers  */
  YYSYMBOL_prefix_type_modifier = 73,      /* prefix_type_modifier  */
  YYSYMBOL_postfix_type_modifiers = 74,    /* postfix_type_modifiers  */
  YYSYMBOL_postfix_type_modifier = 75,     /* postfix_type_modifier  */
  YYSYMBOL_atomic_type = 76,               /* atomic_type  */
  YYSYMBOL_type_identifier = 77,           /* type_identifier  */
  YYSYMBOL_namespace_refs = 78             /* namespace_refs  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 45 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"


extern int yylex(YYSTYPE* yylval);
void yyerror(const char* s);
extern int yylineno;

bool search_down = true;
Namespace* search_namespace = 0;
Namespace* current_namespace = 0;
static Class* current_class = 0;
static Function* current_function = 0;
static Type* current_type = 0;
static Field* current_field = 0;
static ClassMember::Visibility current_visibility;

class ParseError : public std::exception
{
public:
    ParseError(const std::string& message) throw() :
         message()
    {
        std::ostringstream msg;
        msg << "Parse error in '" << current_file
            << "' line " << getCurrentLine() << ": "
            << message;
        this->message = msg.str();
    }
    virtual ~ParseError() throw()
    {}
    const char* what() const throw()
    {
        return message.c_str();
    }

private:
    std::string message;
};


#line 253 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"


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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   102

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


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
       2,     2,     2,     2,     2,     2,     2,     2,    39,     2,
      33,    34,    38,     2,    32,    37,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    31,    30,
       2,    36,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,    35,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   122,   122,   122,   128,   129,   134,   133,   146,   145,
     156,   158,   160,   161,   167,   166,   181,   183,   187,   188,
     192,   203,   204,   205,   208,   209,   213,   214,   219,   224,
     229,   237,   239,   241,   247,   246,   261,   274,   273,   288,
     290,   299,   308,   313,   318,   327,   326,   343,   345,   346,
     351,   357,   359,   362,   364,   368,   369,   373,   380,   392,
     392,   401,   403,   407,   409,   411,   413,   417,   419,   423,
     425,   427,   432,   434,   436,   438,   440,   442,   444,   446,
     448,   453,   457,   466,   471
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
  "\"end of file\"", "error", "\"invalid token\"", "T_INT", "T_FLOAT",
  "T_STRING", "T_ID", "T_ATOMIC_TYPE", "T_NAMESPACEREF", "T_CLASS",
  "T_STRUCT", "T_STATIC", "T_SUSPEND", "T_CUSTOM", "T_CONST", "T_UNSIGNED",
  "T_SIGNED", "T_VOID", "T_BOOL", "T_CHAR", "T_SHORT", "T_LONG",
  "T_DOUBLE", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_NAMESPACE",
  "\"::\"", "'{'", "'}'", "';'", "':'", "','", "'('", "')'", "'~'", "'='",
  "'-'", "'*'", "'&'", "$accept", "input", "$@1", "namespace_members",
  "namespace_declaration", "$@2", "$@3", "namespace_member",
  "class_declaration", "$@4", "superclass_list", "superclasses",
  "superclass", "superclass_visibility", "class_body",
  "class_body_element", "visibility_change", "constructor_declaration",
  "$@5", "destructor_declaration", "field_declaration", "$@6",
  "maybe_const_initialisation", "function_declaration", "$@7",
  "function_attributes", "abstract_declaration", "parameter_list",
  "parameters", "parameter", "type", "$@8", "prefix_type_modifiers",
  "prefix_type_modifier", "postfix_type_modifiers",
  "postfix_type_modifier", "atomic_type", "type_identifier",
  "namespace_refs", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -88,    10,   -88,   -88,     5,     6,     1,   -88,   -88,   -88,
     -88,   -88,    16,   -88,   -88,     9,    14,    30,    36,    33,
     -88,   -88,   -88,   -11,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,    39,    -8,    37,   -88,   -88,    35,    -1,    40,    -6,
      38,   -88,   -88,   -88,    42,   -88,    41,   -88,    -3,    12,
      43,    44,   -88,    61,   -88,   -88,   -88,    56,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,    -8,   -88,    -5,   -88,   -88,
      15,   -88,   -88,   -88,   -88,   -88,    45,    48,    49,    50,
      52,    65,   -88,   -88,   -88,   -88,   -88,   -88,    15,    51,
      15,    47,   -88,   -88,   -88,   -88,   -88,   -88,    53,   -88,
      67,   -88,    70,    55,    35,    54,    57,   -88,   -88,    58,
      47,    15,    59,    60,   -88,   -88,   -88
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     4,     1,    59,     0,     0,    12,     5,    10,
      13,    11,     0,    61,    14,     0,     0,    37,     0,    16,
       6,     8,    45,    39,    76,    78,    81,    83,    65,    66,
      63,    64,    72,    73,    74,    75,    77,    79,    62,    67,
      80,     0,     0,     0,     4,     4,    59,     0,     0,    60,
       0,    21,    22,    23,    17,    18,     0,    24,    59,    59,
       0,    54,    55,    57,    40,    42,    44,     0,    38,    69,
      70,    71,    68,    82,    84,     0,    20,    59,     7,     9,
      47,    59,    58,    41,    43,    19,     0,     0,     0,     0,
       0,     0,    25,    26,    27,    28,    30,    29,    47,     0,
      47,    51,    56,    34,    31,    32,    33,    15,     0,    50,
       0,    48,     0,     0,    59,     0,     0,    52,    46,     0,
      51,    47,     0,     0,    49,    35,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -88,   -88,   -88,    17,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
      18,   -88,   -88,    19,   -88,   -87,   -33,   -21,   -88,    13,
     -46,   -88,   -88,   -88,   -88,   -88,   -88,    46,   -88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     4,     7,    44,    45,     8,     9,    19,
      43,    54,    55,    56,    77,    92,    93,    94,   114,    95,
      10,    23,    48,    11,    46,   101,   113,    60,    61,    62,
      12,    13,    18,    38,    49,    72,    39,    40,    41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      63,    86,    64,    65,    66,    -3,     5,    15,    69,    16,
       3,   109,    14,   111,     5,    51,    52,    53,    87,    88,
      89,     5,    17,     6,    90,    47,    78,    98,    99,   100,
      91,     6,    70,    71,   124,    63,    67,    20,     6,    24,
      25,    79,    21,    26,    27,    73,    74,    28,    26,    27,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    83,
      84,    58,    59,    22,    42,    57,    50,    82,    63,   -53,
      68,   108,   116,   117,    75,    85,    81,    80,   103,   104,
     105,   106,   107,   112,   110,   118,   115,   123,   120,   125,
     126,   121,   122,   119,   102,    96,    97,     0,     0,     0,
       0,     0,    76
};

static const yytype_int8 yycheck[] =
{
      46,     6,     3,     4,     5,     0,     9,     6,    14,     8,
       0,    98,     6,   100,     9,    23,    24,    25,    23,    24,
      25,     9,     6,    26,    29,    36,    29,    12,    13,    14,
      35,    26,    38,    39,   121,    81,    37,    28,    26,     3,
       4,    29,    28,     7,     8,     7,     8,    11,     7,     8,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     3,
       4,    44,    45,    33,    31,    28,    27,     6,   114,    34,
      30,     6,     5,     3,    32,    75,    32,    34,    33,    31,
      31,    31,    30,    36,    33,    30,    33,   120,    34,    30,
      30,    34,    34,   114,    81,    77,    77,    -1,    -1,    -1,
      -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    42,     0,    43,     9,    26,    44,    47,    48,
      60,    63,    70,    71,     6,     6,     8,     6,    72,    49,
      28,    28,    33,    61,     3,     4,     7,     8,    11,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    73,    76,
      77,    78,    31,    50,    45,    46,    64,    36,    62,    74,
      27,    23,    24,    25,    51,    52,    53,    28,    43,    43,
      67,    68,    69,    70,     3,     4,     5,    37,    30,    14,
      38,    39,    75,     7,     8,    32,    77,    54,    29,    29,
      34,    32,     6,     3,     4,    52,     6,    23,    24,    25,
      29,    35,    55,    56,    57,    59,    60,    63,    12,    13,
      14,    65,    69,    33,    31,    31,    31,    30,     6,    65,
      33,    65,    36,    66,    58,    33,     5,     3,    30,    67,
      34,    34,    34,    66,    65,    30,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    42,    41,    43,    43,    45,    44,    46,    44,
      47,    47,    47,    47,    49,    48,    50,    50,    51,    51,
      52,    53,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    56,    56,    56,    58,    57,    59,    61,    60,    62,
      62,    62,    62,    62,    62,    64,    63,    65,    65,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    71,
      70,    72,    72,    73,    73,    73,    73,    74,    74,    75,
      75,    75,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    78,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     6,     0,     6,
       1,     1,     1,     1,     0,     8,     0,     2,     1,     3,
       2,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     2,     2,     2,     0,     6,     6,     0,     5,     0,
       2,     3,     2,     3,     2,     0,     9,     0,     2,     5,
       2,     0,     2,     0,     1,     1,     3,     1,     2,     0,
       4,     0,     2,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3
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






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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
      yychar = yylex (&yylval);
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
  case 2: /* $@1: %empty  */
#line 122 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_namespace = unit;
        }
#line 1307 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 6: /* $@2: %empty  */
#line 134 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            Namespace* newNamespace = new Namespace();
            newNamespace->name = (yyvsp[-1].str);
            free((yyvsp[-1].str));
            current_namespace->add_namespace(newNamespace);
            current_namespace = newNamespace;
        }
#line 1319 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 7: /* namespace_declaration: T_NAMESPACE T_ID '{' $@2 namespace_members '}'  */
#line 142 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_namespace = current_namespace->parent;
        }
#line 1327 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 8: /* $@3: %empty  */
#line 146 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_namespace = (yyvsp[-1]._namespace);
        }
#line 1335 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 9: /* namespace_declaration: T_NAMESPACE T_NAMESPACEREF '{' $@3 namespace_members '}'  */
#line 150 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_namespace = current_namespace->parent;
        }
#line 1343 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 10: /* namespace_member: class_declaration  */
#line 157 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_namespace->add_type((yyvsp[0]._class)); }
#line 1349 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 11: /* namespace_member: function_declaration  */
#line 159 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_namespace->functions.push_back((yyvsp[0].function)); }
#line 1355 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 13: /* namespace_member: field_declaration  */
#line 162 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_namespace->fields.push_back((yyvsp[0].field)); }
#line 1361 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 14: /* $@4: %empty  */
#line 167 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_class = new Class();
            current_class->name = (yyvsp[0].str);
            free((yyvsp[0].str));
            current_class->docu_comment = last_docucomment;
            last_docucomment = "";
            current_visibility = ClassMember::PROTECTED;
        }
#line 1374 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 15: /* class_declaration: T_CLASS T_ID $@4 superclass_list '{' class_body '}' ';'  */
#line 176 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            (yyval._class) = current_class;
        }
#line 1382 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 20: /* superclass: superclass_visibility type_identifier  */
#line 193 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            Class* superclass = dynamic_cast<Class*> ((yyvsp[0].atomic_type));
            if(superclass == 0)
                throw ParseError("SuperClass is not a Class type");
            current_class->super_classes.push_back(superclass);
            superclass->sub_classes.push_back(current_class);
        }
#line 1394 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 27: /* class_body_element: constructor_declaration  */
#line 215 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
            {
                (yyvsp[0].function)->visibility = current_visibility;
                current_class->members.push_back((yyvsp[0].function));
            }
#line 1403 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 28: /* class_body_element: destructor_declaration  */
#line 220 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
            {
                (yyvsp[0].function)->visibility = current_visibility;
                current_class->members.push_back((yyvsp[0].function));
            }
#line 1412 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 29: /* class_body_element: function_declaration  */
#line 225 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
            {
                (yyvsp[0].function)->visibility = current_visibility;
                current_class->members.push_back((yyvsp[0].function));
            }
#line 1421 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 30: /* class_body_element: field_declaration  */
#line 230 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
            {
                (yyvsp[0].field)->visibility = current_visibility;
                current_class->members.push_back((yyvsp[0].field));
            }
#line 1430 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 31: /* visibility_change: T_PUBLIC ':'  */
#line 238 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_visibility = ClassMember::PUBLIC; }
#line 1436 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 32: /* visibility_change: T_PROTECTED ':'  */
#line 240 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_visibility = ClassMember::PROTECTED; }
#line 1442 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 33: /* visibility_change: T_PRIVATE ':'  */
#line 242 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_visibility = ClassMember::PRIVATE; }
#line 1448 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 34: /* $@5: %empty  */
#line 247 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_function = new Function();
            current_function->type = Function::CONSTRUCTOR;
            current_function->docu_comment = last_docucomment;
            last_docucomment = "";
            free((yyvsp[-1].str));
        }
#line 1460 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 35: /* constructor_declaration: T_ID '(' $@5 parameter_list ')' ';'  */
#line 255 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            (yyval.function) = current_function;
        }
#line 1468 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 36: /* destructor_declaration: '~' T_ID '(' ')' abstract_declaration ';'  */
#line 262 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_function = new Function();
            current_function->type = Function::DESTRUCTOR;
            current_function->docu_comment = last_docucomment;
            last_docucomment = "";
            free((yyvsp[-4].str));
            (yyval.function) = current_function;
        }
#line 1481 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 37: /* $@6: %empty  */
#line 274 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_field = new Field();
            current_field->type = (yyvsp[-1].type);
            current_field->docu_comment = last_docucomment;
            last_docucomment = "";
            current_field->name = (yyvsp[0].str);
            free((yyvsp[0].str));
        }
#line 1494 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 38: /* field_declaration: type T_ID $@6 maybe_const_initialisation ';'  */
#line 283 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            (yyval.field) = current_field;
        }
#line 1502 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 40: /* maybe_const_initialisation: '=' T_INT  */
#line 291 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            if(current_field->type->atomic_type == &BasicType::FLOAT) {
                current_field->const_float_value = (float) (yyvsp[0].ival);
            } else {
                current_field->const_int_value = (yyvsp[0].ival);
            }
            current_field->has_const_value = true;
        }
#line 1515 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 41: /* maybe_const_initialisation: '=' '-' T_INT  */
#line 300 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            if(current_field->type->atomic_type == &BasicType::FLOAT) {
                current_field->const_float_value = (float) -(yyvsp[0].ival);
            } else {
                current_field->const_int_value = -(yyvsp[0].ival);
            }
            current_field->has_const_value = true;
        }
#line 1528 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 42: /* maybe_const_initialisation: '=' T_FLOAT  */
#line 309 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_field->const_float_value = (yyvsp[0].fval);
            current_field->has_const_value = true;
        }
#line 1537 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 43: /* maybe_const_initialisation: '=' '-' T_FLOAT  */
#line 314 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_field->const_float_value = -(yyvsp[0].fval);
            current_field->has_const_value = true;
        }
#line 1546 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 44: /* maybe_const_initialisation: '=' T_STRING  */
#line 319 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_field->const_string_value = (yyvsp[0].str);
            current_field->has_const_value = true;
        }
#line 1555 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 45: /* $@7: %empty  */
#line 327 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_function = new Function();
            current_function->type = Function::FUNCTION;
            current_function->return_type = *((yyvsp[-2].type));
            delete (yyvsp[-2].type);
            current_function->name = (yyvsp[-1].str);
            free((yyvsp[-1].str));
            current_function->docu_comment = last_docucomment;
            last_docucomment = "";
        }
#line 1570 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 46: /* function_declaration: type T_ID '(' $@7 parameter_list ')' function_attributes abstract_declaration ';'  */
#line 338 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            (yyval.function) = current_function;
        }
#line 1578 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 49: /* function_attributes: T_CUSTOM '(' T_STRING ')' function_attributes  */
#line 347 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
      {
        current_function->parameter_spec = (yyvsp[-2].str);
        current_function->custom = true;
      }
#line 1587 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 50: /* function_attributes: T_SUSPEND function_attributes  */
#line 352 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
      {
        current_function->suspend = true;
      }
#line 1595 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 57: /* parameter: type  */
#line 374 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            Parameter parameter;
            parameter.type = *((yyvsp[0].type));
            delete (yyvsp[0].type);
            current_function->parameters.push_back(parameter);
        }
#line 1606 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 58: /* parameter: type T_ID  */
#line 381 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            Parameter parameter;
            parameter.type = *((yyvsp[-1].type));
            delete (yyvsp[-1].type);
            parameter.name = (yyvsp[0].str);
            free((yyvsp[0].str));
            current_function->parameters.push_back(parameter);
        }
#line 1619 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 59: /* $@8: %empty  */
#line 392 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            current_type = new Type();
        }
#line 1627 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 60: /* type: $@8 prefix_type_modifiers atomic_type postfix_type_modifiers  */
#line 396 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            (yyval.type) = current_type;
        }
#line 1635 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 63: /* prefix_type_modifier: T_UNSIGNED  */
#line 408 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->_unsigned = true; }
#line 1641 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 64: /* prefix_type_modifier: T_SIGNED  */
#line 410 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->_unsigned = false; }
#line 1647 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 65: /* prefix_type_modifier: T_STATIC  */
#line 412 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->_static = true; }
#line 1653 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 66: /* prefix_type_modifier: T_CONST  */
#line 414 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->_const = true; }
#line 1659 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 69: /* postfix_type_modifier: T_CONST  */
#line 424 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->_const = true; }
#line 1665 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 70: /* postfix_type_modifier: '*'  */
#line 426 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->pointer++; }
#line 1671 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 71: /* postfix_type_modifier: '&'  */
#line 428 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->ref++; }
#line 1677 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 72: /* atomic_type: T_VOID  */
#line 433 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->atomic_type = &BasicType::VOID; }
#line 1683 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 73: /* atomic_type: T_BOOL  */
#line 435 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->atomic_type = &BasicType::BOOL; }
#line 1689 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 74: /* atomic_type: T_CHAR  */
#line 437 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->atomic_type = &BasicType::CHAR; }
#line 1695 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 75: /* atomic_type: T_SHORT  */
#line 439 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->atomic_type = &BasicType::SHORT; }
#line 1701 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 76: /* atomic_type: T_INT  */
#line 441 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->atomic_type = &BasicType::INT; }
#line 1707 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 77: /* atomic_type: T_LONG  */
#line 443 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->atomic_type = &BasicType::LONG; }
#line 1713 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 78: /* atomic_type: T_FLOAT  */
#line 445 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->atomic_type = &BasicType::FLOAT; }
#line 1719 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 79: /* atomic_type: T_DOUBLE  */
#line 447 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->atomic_type = &BasicType::DOUBLE; }
#line 1725 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 80: /* atomic_type: type_identifier  */
#line 449 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        { current_type->atomic_type = (yyvsp[0].atomic_type); }
#line 1731 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 81: /* type_identifier: T_ATOMIC_TYPE  */
#line 454 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            (yyval.atomic_type) = (yyvsp[0].atomic_type);
        }
#line 1739 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 82: /* type_identifier: namespace_refs "::" T_ATOMIC_TYPE  */
#line 458 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            (yyval.atomic_type) = (yyvsp[0].atomic_type);
            search_namespace = 0;
            search_down = true;
        }
#line 1749 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 83: /* namespace_refs: T_NAMESPACEREF  */
#line 467 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            search_namespace = (yyvsp[0]._namespace);
            search_down = false;
        }
#line 1758 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;

  case 84: /* namespace_refs: namespace_refs "::" T_NAMESPACEREF  */
#line 472 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"
        {
            search_namespace = (yyvsp[0]._namespace);
        }
#line 1766 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"
    break;


#line 1770 "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/external/miniswig/parser.cpp"

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

#line 477 "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/miniswig/src/parser.yy"


__attribute__((noreturn))
void yyerror(const char* error)
{
    throw ParseError(error);
}
