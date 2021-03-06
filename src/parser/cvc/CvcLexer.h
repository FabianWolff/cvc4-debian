/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : ../../../../../../src/parser/cvc/Cvc.g
 *     -                            On : 2017-03-16 01:03:03
 *     -                 for the lexer : CvcLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer 
CvcLexer

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pCvcLexer, which is returned from a call to CvcLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 *
 * The methods in pCvcLexer are  as follows:
 *
 *  - 
 void
      pCvcLexer->ABS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->AND_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ARITH_VAR_ORDER_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ARRAY_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ARROW_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ASSERTIONS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ASSERT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ASSIGN_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ASSUMPTIONS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BAR(pCvcLexer)
 *  - 
 void
      pCvcLexer->BITVECTOR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BOOLEAN_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVAND_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVASHR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVCOMP_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVGE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVGT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVLE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVLSHR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVLT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVMULT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVNAND_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVNEG_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVNOR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVPLUS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVREPEAT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVROTL_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVROTR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVSDIV_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVSGE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVSGT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVSHL_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVSLE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVSLT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVSMOD_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVSREM_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVSUB_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVUDIV_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVUMINUS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVUREM_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVXNOR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVXOR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->BVZEROEXTEND_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->CALL_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->CHECKSAT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->CHECK_TYPE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->COLON(pCvcLexer)
 *  - 
 void
      pCvcLexer->COMMA(pCvcLexer)
 *  - 
 void
      pCvcLexer->CONCAT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->CONTEXT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->CONTINUE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->COUNTEREXAMPLE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->COUNTERMODEL_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DATATYPE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DBG_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DISEQUAL_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DISTINCT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DIVISIBLE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DIV_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DUMP_ASSUMPTIONS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DUMP_CLOSURE_PROOF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DUMP_CLOSURE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DUMP_PROOF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DUMP_SIG_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DUMP_TCC_ASSUMPTIONS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DUMP_TCC_PROOF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DUMP_TCC_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->DUMP_UNSAT_CORE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ECHO_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ELSEIF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ELSE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->ENDIF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->END_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->EQUAL_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->EXISTS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->EXIT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->EXP_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->FALSE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->FLOOR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->FMF_CARD_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->FORALL_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->FORGET_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->GEQ_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->GET_CHILD_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->GET_OP_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->GET_TYPE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->GET_VALUE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->GT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->HASHPAREN(pCvcLexer)
 *  - 
 void
      pCvcLexer->HASHSQ(pCvcLexer)
 *  - 
 void
      pCvcLexer->HELP_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->IFF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->IF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->IMPLIES_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->INCLUDE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->INTDIV_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->INT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->IN_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->IS_INTEGER_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->JOIN_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->LAMBDA(pCvcLexer)
 *  - 
 void
      pCvcLexer->LBRACE(pCvcLexer)
 *  - 
 void
      pCvcLexer->LBRACKET(pCvcLexer)
 *  - 
 void
      pCvcLexer->LEFTSHIFT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->LEQ_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->LET_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->LPAREN(pCvcLexer)
 *  - 
 void
      pCvcLexer->LT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->MEMBER_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->MINUS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->MOD_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->NOT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->OF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->OPTION_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->OR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->PARENHASH(pCvcLexer)
 *  - 
 void
      pCvcLexer->PATTERN_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->PLUS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->POPTO_SCOPE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->POPTO_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->POP_SCOPE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->POP_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->PRINT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->PRINT_TYPE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->PRODUCT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->PUSH_SCOPE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->PUSH_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->QUERY_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->RBRACE(pCvcLexer)
 *  - 
 void
      pCvcLexer->RBRACKET(pCvcLexer)
 *  - 
 void
      pCvcLexer->REAL_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->RESET_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->RESTART_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->RIGHTSHIFT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->RPAREN(pCvcLexer)
 *  - 
 void
      pCvcLexer->SEMICOLON(pCvcLexer)
 *  - 
 void
      pCvcLexer->SETS_CARD_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->SET_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->SQHASH(pCvcLexer)
 *  - 
 void
      pCvcLexer->STAR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_CHARAT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_CONCAT_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_CONTAINS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_INDEXOF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_ITOS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_LENGTH_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_PREFIXOF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_REPLACE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_STOI_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_STOU16_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_STOU32_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_SUBSTR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_SUFFIXOF_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_U16TOS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_U32TOS_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->SUBSTITUTE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->SUBTYPE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->SX_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->THEN_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->TRACE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->TRANSCLOSURE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->TRANSFORM_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->TRANSPOSE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->TRUE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->TUPLE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->TYPE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->UNDERSCORE(pCvcLexer)
 *  - 
 void
      pCvcLexer->UNIVSET_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->UNTRACE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->WHERE_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->WITH_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->XOR_TOK(pCvcLexer)
 *  - 
 void
      pCvcLexer->IDENTIFIER(pCvcLexer)
 *  - 
 void
      pCvcLexer->HEX_LITERAL(pCvcLexer)
 *  - 
 void
      pCvcLexer->BINARY_LITERAL(pCvcLexer)
 *  - 
 void
      pCvcLexer->STRING_LITERAL(pCvcLexer)
 *  - 
 void
      pCvcLexer->ALPHA(pCvcLexer)
 *  - 
 void
      pCvcLexer->DIGIT(pCvcLexer)
 *  - 
 void
      pCvcLexer->NUMBER_OR_RANGEOP(pCvcLexer)
 *  - 
 void
      pCvcLexer->INTEGER_LITERAL(pCvcLexer)
 *  - 
 void
      pCvcLexer->DECIMAL_LITERAL(pCvcLexer)
 *  - 
 void
      pCvcLexer->DOT(pCvcLexer)
 *  - 
 void
      pCvcLexer->DOTDOT(pCvcLexer)
 *  - 
 void
      pCvcLexer->HEX_DIGIT(pCvcLexer)
 *  - 
 void
      pCvcLexer->WHITESPACE(pCvcLexer)
 *  - 
 void
      pCvcLexer->COMMENT(pCvcLexer)
 *  - 
 void
      pCvcLexer->ESCAPE(pCvcLexer)
 *  - 
 void
      pCvcLexer->Tokens(pCvcLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_CvcLexer_H
#define _CvcLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */


// This should come immediately after #include <antlr3.h> in the generated
// files. See the documentation in "parser/antlr_undefines.h" for more details.
#include "parser/antlr_undefines.h"

/** This suppresses warnings about the redefinition of token symbols between different
  * parsers. The redefinitions should be harmless as long as no client: (a) #include's
  * the lexer headers for two grammars AND (b) uses the token symbol definitions. */
#pragma GCC system_header

#if defined(CVC4_COMPETITION_MODE) && !defined(CVC4_SMTCOMP_APPLICATION_TRACK)
/* This improves performance by ~10 percent on big inputs.
 * This option is only valid if we know the input is ASCII (or some 8-bit encoding).
 * If we know the input is UTF-16, we can use ANTLR3_INLINE_INPUT_UTF16.
 * Otherwise, we have to let the lexer detect the encoding at runtime.
 */
#  define ANTLR3_INLINE_INPUT_ASCII
#  define ANTLR3_INLINE_INPUT_8BIT
#endif /* CVC4_COMPETITION_MODE && !CVC4_SMTCOMP_APPLICATION_TRACK */

#include "parser/antlr_input.h"
#include "parser/antlr_tracing.h"
#include "parser/parser.h"
#include "util/integer.h"



#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct CvcLexer_Ctx_struct CvcLexer, * pCvcLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for 
CvcLexer

 */
struct CvcLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;

     void
     (*mABS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mAND_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mARITH_VAR_ORDER_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mARRAY_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mARROW_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mASSERTIONS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mASSERT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mASSIGN_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mASSUMPTIONS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBAR)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBITVECTOR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBOOLEAN_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVAND_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVASHR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVCOMP_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVGE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVGT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVLE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVLSHR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVLT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVMULT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVNAND_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVNEG_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVNOR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVPLUS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVREPEAT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVROTL_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVROTR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVSDIV_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVSGE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVSGT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVSHL_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVSLE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVSLT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVSMOD_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVSREM_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVSUB_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVUDIV_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVUMINUS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVUREM_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVXNOR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVXOR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBVZEROEXTEND_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCALL_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCHECKSAT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCHECK_TYPE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCOLON)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCOMMA)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCONCAT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCONTEXT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCONTINUE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCOUNTEREXAMPLE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCOUNTERMODEL_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDATATYPE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDBG_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDISEQUAL_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDISTINCT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDIVISIBLE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDIV_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDUMP_ASSUMPTIONS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDUMP_CLOSURE_PROOF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDUMP_CLOSURE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDUMP_PROOF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDUMP_SIG_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDUMP_TCC_ASSUMPTIONS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDUMP_TCC_PROOF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDUMP_TCC_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDUMP_UNSAT_CORE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mECHO_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mELSEIF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mELSE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mENDIF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mEND_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mEQUAL_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mEXISTS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mEXIT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mEXP_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mFALSE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mFLOOR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mFMF_CARD_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mFORALL_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mFORGET_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mGEQ_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mGET_CHILD_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mGET_OP_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mGET_TYPE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mGET_VALUE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mGT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mHASHPAREN)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mHASHSQ)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mHELP_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mIFF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mIF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mIMPLIES_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mINCLUDE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mINTDIV_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mINT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mIN_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mIS_INTEGER_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mJOIN_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mLAMBDA)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mLBRACE)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mLBRACKET)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mLEFTSHIFT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mLEQ_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mLET_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mLPAREN)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mLT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mMEMBER_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mMINUS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mMOD_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mNOT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mOF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mOPTION_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mOR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPARENHASH)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPATTERN_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPLUS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPOPTO_SCOPE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPOPTO_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPOP_SCOPE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPOP_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPRINT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPRINT_TYPE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPRODUCT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPUSH_SCOPE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mPUSH_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mQUERY_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mRBRACE)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mRBRACKET)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mREAL_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mRESET_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mRESTART_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mRIGHTSHIFT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mRPAREN)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSEMICOLON)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSETS_CARD_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSET_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSQHASH)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTAR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_CHARAT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_CONCAT_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_CONTAINS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_INDEXOF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_ITOS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_LENGTH_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_PREFIXOF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_REPLACE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_STOI_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_STOU16_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_STOU32_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_SUBSTR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_SUFFIXOF_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_U16TOS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_U32TOS_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSUBSTITUTE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSUBTYPE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSX_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mTHEN_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mTRACE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mTRANSCLOSURE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mTRANSFORM_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mTRANSPOSE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mTRUE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mTUPLE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mTYPE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mUNDERSCORE)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mUNIVSET_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mUNTRACE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mWHERE_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mWITH_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mXOR_TOK)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mIDENTIFIER)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mHEX_LITERAL)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mBINARY_LITERAL)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mSTRING_LITERAL)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mALPHA)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDIGIT)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mNUMBER_OR_RANGEOP)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mINTEGER_LITERAL)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDECIMAL_LITERAL)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDOT)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mDOTDOT)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mHEX_DIGIT)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mWHITESPACE)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mCOMMENT)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mESCAPE)	(struct CvcLexer_Ctx_struct * ctx);

     void
     (*mTokens)	(struct CvcLexer_Ctx_struct * ctx);
    const char * (*getGrammarFileName)();
    void            (*reset)  (struct CvcLexer_Ctx_struct * ctx);
    void	    (*free)   (struct CvcLexer_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pCvcLexer CvcLexerNew         (
pANTLR3_INPUT_STREAM
 instream);
ANTLR3_API pCvcLexer CvcLexerNewSSD      (
pANTLR3_INPUT_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
lexer
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define ABS_TOK      4
#define ALPHA      5
#define AND_TOK      6
#define ARITH_VAR_ORDER_TOK      7
#define ARRAY_TOK      8
#define ARROW_TOK      9
#define ASSERTIONS_TOK      10
#define ASSERT_TOK      11
#define ASSIGN_TOK      12
#define ASSUMPTIONS_TOK      13
#define BAR      14
#define BINARY_LITERAL      15
#define BITVECTOR_TOK      16
#define BOOLEAN_TOK      17
#define BVAND_TOK      18
#define BVASHR_TOK      19
#define BVCOMP_TOK      20
#define BVGE_TOK      21
#define BVGT_TOK      22
#define BVLE_TOK      23
#define BVLSHR_TOK      24
#define BVLT_TOK      25
#define BVMULT_TOK      26
#define BVNAND_TOK      27
#define BVNEG_TOK      28
#define BVNOR_TOK      29
#define BVPLUS_TOK      30
#define BVREPEAT_TOK      31
#define BVROTL_TOK      32
#define BVROTR_TOK      33
#define BVSDIV_TOK      34
#define BVSGE_TOK      35
#define BVSGT_TOK      36
#define BVSHL_TOK      37
#define BVSLE_TOK      38
#define BVSLT_TOK      39
#define BVSMOD_TOK      40
#define BVSREM_TOK      41
#define BVSUB_TOK      42
#define BVUDIV_TOK      43
#define BVUMINUS_TOK      44
#define BVUREM_TOK      45
#define BVXNOR_TOK      46
#define BVXOR_TOK      47
#define BVZEROEXTEND_TOK      48
#define CALL_TOK      49
#define CHECKSAT_TOK      50
#define CHECK_TYPE_TOK      51
#define COLON      52
#define COMMA      53
#define COMMENT      54
#define CONCAT_TOK      55
#define CONTEXT_TOK      56
#define CONTINUE_TOK      57
#define COUNTEREXAMPLE_TOK      58
#define COUNTERMODEL_TOK      59
#define DATATYPE_TOK      60
#define DBG_TOK      61
#define DECIMAL_LITERAL      62
#define DIGIT      63
#define DISEQUAL_TOK      64
#define DISTINCT_TOK      65
#define DIVISIBLE_TOK      66
#define DIV_TOK      67
#define DOT      68
#define DOTDOT      69
#define DUMP_ASSUMPTIONS_TOK      70
#define DUMP_CLOSURE_PROOF_TOK      71
#define DUMP_CLOSURE_TOK      72
#define DUMP_PROOF_TOK      73
#define DUMP_SIG_TOK      74
#define DUMP_TCC_ASSUMPTIONS_TOK      75
#define DUMP_TCC_PROOF_TOK      76
#define DUMP_TCC_TOK      77
#define DUMP_UNSAT_CORE_TOK      78
#define ECHO_TOK      79
#define ELSEIF_TOK      80
#define ELSE_TOK      81
#define ENDIF_TOK      82
#define END_TOK      83
#define EQUAL_TOK      84
#define ESCAPE      85
#define EXISTS_TOK      86
#define EXIT_TOK      87
#define EXP_TOK      88
#define FALSE_TOK      89
#define FLOOR_TOK      90
#define FMF_CARD_TOK      91
#define FORALL_TOK      92
#define FORGET_TOK      93
#define GEQ_TOK      94
#define GET_CHILD_TOK      95
#define GET_OP_TOK      96
#define GET_TYPE_TOK      97
#define GET_VALUE_TOK      98
#define GT_TOK      99
#define HASHPAREN      100
#define HASHSQ      101
#define HELP_TOK      102
#define HEX_DIGIT      103
#define HEX_LITERAL      104
#define IDENTIFIER      105
#define IFF_TOK      106
#define IF_TOK      107
#define IMPLIES_TOK      108
#define INCLUDE_TOK      109
#define INTDIV_TOK      110
#define INTEGER_LITERAL      111
#define INT_TOK      112
#define IN_TOK      113
#define IS_INTEGER_TOK      114
#define JOIN_TOK      115
#define LAMBDA      116
#define LBRACE      117
#define LBRACKET      118
#define LEFTSHIFT_TOK      119
#define LEQ_TOK      120
#define LET_TOK      121
#define LPAREN      122
#define LT_TOK      123
#define MEMBER_TOK      124
#define MINUS_TOK      125
#define MOD_TOK      126
#define NOT_TOK      127
#define NUMBER_OR_RANGEOP      128
#define OF_TOK      129
#define OPTION_TOK      130
#define OR_TOK      131
#define PARENHASH      132
#define PATTERN_TOK      133
#define PLUS_TOK      134
#define POPTO_SCOPE_TOK      135
#define POPTO_TOK      136
#define POP_SCOPE_TOK      137
#define POP_TOK      138
#define PRINT_TOK      139
#define PRINT_TYPE_TOK      140
#define PRODUCT_TOK      141
#define PUSH_SCOPE_TOK      142
#define PUSH_TOK      143
#define QUERY_TOK      144
#define RBRACE      145
#define RBRACKET      146
#define REAL_TOK      147
#define RESET_TOK      148
#define RESTART_TOK      149
#define RIGHTSHIFT_TOK      150
#define RPAREN      151
#define SEMICOLON      152
#define SETS_CARD_TOK      153
#define SET_TOK      154
#define SQHASH      155
#define STAR_TOK      156
#define STRING_CHARAT_TOK      157
#define STRING_CONCAT_TOK      158
#define STRING_CONTAINS_TOK      159
#define STRING_INDEXOF_TOK      160
#define STRING_ITOS_TOK      161
#define STRING_LENGTH_TOK      162
#define STRING_LITERAL      163
#define STRING_PREFIXOF_TOK      164
#define STRING_REPLACE_TOK      165
#define STRING_STOI_TOK      166
#define STRING_STOU16_TOK      167
#define STRING_STOU32_TOK      168
#define STRING_SUBSTR_TOK      169
#define STRING_SUFFIXOF_TOK      170
#define STRING_TOK      171
#define STRING_U16TOS_TOK      172
#define STRING_U32TOS_TOK      173
#define SUBSTITUTE_TOK      174
#define SUBTYPE_TOK      175
#define SX_TOK      176
#define THEN_TOK      177
#define TRACE_TOK      178
#define TRANSCLOSURE_TOK      179
#define TRANSFORM_TOK      180
#define TRANSPOSE_TOK      181
#define TRUE_TOK      182
#define TUPLE_TOK      183
#define TYPE_TOK      184
#define UNDERSCORE      185
#define UNIVSET_TOK      186
#define UNTRACE_TOK      187
#define WHERE_TOK      188
#define WHITESPACE      189
#define WITH_TOK      190
#define XOR_TOK      191
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for CvcLexer
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
