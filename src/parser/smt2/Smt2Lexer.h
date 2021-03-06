/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : ../../../../../../src/parser/smt2/Smt2.g
 *     -                            On : 2017-03-16 01:03:02
 *     -                 for the lexer : Smt2LexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer 
Smt2Lexer

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
 * a parser context typedef pSmt2Lexer, which is returned from a call to Smt2LexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 *
 * The methods in pSmt2Lexer are  as follows:
 *
 *  - 
 void
      pSmt2Lexer->T__145(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->T__146(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->T__147(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->T__148(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->T__149(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->T__150(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->T__151(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->ASSERT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->CHECKSAT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECLARE_FUN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECLARE_SORT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DEFINE_FUN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DEFINE_FUN_REC_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DEFINE_FUNS_REC_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DEFINE_SORT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GET_VALUE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GET_ASSIGNMENT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GET_ASSERTIONS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GET_PROOF_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GET_UNSAT_CORE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->EXIT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->RESET_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->RESET_ASSERTIONS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->ITE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->LET_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->ATTRIBUTE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->LPAREN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->RPAREN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->INDEX_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SET_LOGIC_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SET_INFO_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->META_INFO_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GET_INFO_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SET_OPTION_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GET_OPTION_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->PUSH_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->POP_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->AS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->CONST_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECLARE_DATATYPES_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECLARE_CODATATYPES_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GET_MODEL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->ECHO_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->REWRITE_RULE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->REDUCTION_RULE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->PROPAGATION_RULE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECLARE_SORTS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECLARE_FUNS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECLARE_PREDS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DEFINE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECLARE_CONST_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DEFINE_CONST_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SIMPLIFY_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->INCLUDE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GET_QE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GET_QE_DISJUNCT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYNTH_FUN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYNTH_INV_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->CHECK_SYNTH_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECLARE_VAR_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECLARE_PRIMED_VAR_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->CONSTRAINT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->INV_CONSTRAINT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SET_OPTIONS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYGUS_ENUM_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYGUS_ENUM_CONS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYGUS_CONSTANT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYGUS_VARIABLE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYGUS_INPUT_VARIABLE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYGUS_LOCAL_VARIABLE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->ATTRIBUTE_PATTERN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->ATTRIBUTE_NO_PATTERN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->ATTRIBUTE_NAMED_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->ATTRIBUTE_INST_LEVEL(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->ATTRIBUTE_RR_PRIORITY(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->AMPERSAND_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->AND_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->AT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DISTINCT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DIV_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->EQUAL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->EXISTS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FORALL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GREATER_THAN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->GREATER_THAN_EQUAL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->IMPLIES_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->LESS_THAN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->LESS_THAN_EQUAL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->MINUS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->NOT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->OR_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->PLUS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->STAR_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->XOR_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DIVISIBLE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->BV2NAT_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->INT2BV_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->RENOSTR_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->REALLCHAR_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DTSIZE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FMFCARD_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FMFCARDVAL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->INST_CLOSURE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->EMPTYSET_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->UNIVSET_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->NILREF_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_PINF_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_NINF_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_PZERO_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_NZERO_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_NAN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_TO_FP_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_TO_FPBV_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_TO_FPFP_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_TO_FPR_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_TO_FPS_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_TO_FPU_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_TO_UBV_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_TO_SBV_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_RNE_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_RNA_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_RTP_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_RTN_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_RTZ_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_RNE_FULL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_RNA_FULL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_RTP_FULL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_RTN_FULL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->FP_RTZ_FULL_TOK(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->QUOTED_SYMBOL(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->UNTERMINATED_QUOTED_SYMBOL(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->KEYWORD(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SIMPLE_SYMBOL(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->WHITESPACE(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->INTEGER_LITERAL(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->NUMERAL(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DECIMAL_LITERAL(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->HEX_LITERAL(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->BINARY_LITERAL(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->STRING_LITERAL_2_0(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->STRING_LITERAL_2_5(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYGUS_QUOTED_LITERAL(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->COMMENT(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->ALPHA(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->DIGIT(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->HEX_DIGIT(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYMBOL_CHAR_NOUNDERSCORE_NOATTRIBUTE(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->SYMBOL_CHAR(pSmt2Lexer)
 *  - 
 void
      pSmt2Lexer->Tokens(pSmt2Lexer)
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

#ifndef	_Smt2Lexer_H
#define _Smt2Lexer_H
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

/** This suppresses warnings about the redefinition of token symbols between
  * different parsers. The redefinitions should be harmless as long as no
  * client: (a) #include's the lexer headers for two grammars AND (b) uses the
  * token symbol definitions.
  */
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

#include "parser/antlr_tracing.h"



#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct Smt2Lexer_Ctx_struct Smt2Lexer, * pSmt2Lexer;



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
Smt2Lexer

 */
struct Smt2Lexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;

     void
     (*mT__145)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mT__146)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mT__147)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mT__148)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mT__149)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mT__150)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mT__151)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mASSERT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mCHECKSAT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECLARE_FUN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECLARE_SORT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDEFINE_FUN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDEFINE_FUN_REC_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDEFINE_FUNS_REC_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDEFINE_SORT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGET_VALUE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGET_ASSIGNMENT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGET_ASSERTIONS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGET_PROOF_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGET_UNSAT_CORE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mEXIT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mRESET_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mRESET_ASSERTIONS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mITE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mLET_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mATTRIBUTE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mLPAREN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mRPAREN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mINDEX_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSET_LOGIC_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSET_INFO_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mMETA_INFO_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGET_INFO_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSET_OPTION_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGET_OPTION_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mPUSH_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mPOP_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mAS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mCONST_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECLARE_DATATYPES_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECLARE_CODATATYPES_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGET_MODEL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mECHO_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mREWRITE_RULE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mREDUCTION_RULE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mPROPAGATION_RULE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECLARE_SORTS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECLARE_FUNS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECLARE_PREDS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDEFINE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECLARE_CONST_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDEFINE_CONST_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSIMPLIFY_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mINCLUDE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGET_QE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGET_QE_DISJUNCT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYNTH_FUN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYNTH_INV_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mCHECK_SYNTH_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECLARE_VAR_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECLARE_PRIMED_VAR_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mCONSTRAINT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mINV_CONSTRAINT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSET_OPTIONS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYGUS_ENUM_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYGUS_ENUM_CONS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYGUS_CONSTANT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYGUS_VARIABLE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYGUS_INPUT_VARIABLE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYGUS_LOCAL_VARIABLE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mATTRIBUTE_PATTERN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mATTRIBUTE_NO_PATTERN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mATTRIBUTE_NAMED_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mATTRIBUTE_INST_LEVEL)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mATTRIBUTE_RR_PRIORITY)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mAMPERSAND_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mAND_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mAT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDISTINCT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDIV_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mEQUAL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mEXISTS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFORALL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGREATER_THAN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mGREATER_THAN_EQUAL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mIMPLIES_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mLESS_THAN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mLESS_THAN_EQUAL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mMINUS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mNOT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mOR_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mPLUS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSTAR_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mXOR_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDIVISIBLE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mBV2NAT_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mINT2BV_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mRENOSTR_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mREALLCHAR_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDTSIZE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFMFCARD_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFMFCARDVAL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mINST_CLOSURE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mEMPTYSET_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mUNIVSET_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mNILREF_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_PINF_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_NINF_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_PZERO_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_NZERO_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_NAN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_TO_FP_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_TO_FPBV_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_TO_FPFP_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_TO_FPR_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_TO_FPS_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_TO_FPU_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_TO_UBV_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_TO_SBV_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_RNE_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_RNA_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_RTP_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_RTN_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_RTZ_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_RNE_FULL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_RNA_FULL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_RTP_FULL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_RTN_FULL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mFP_RTZ_FULL_TOK)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mQUOTED_SYMBOL)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mUNTERMINATED_QUOTED_SYMBOL)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mKEYWORD)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSIMPLE_SYMBOL)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mWHITESPACE)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mINTEGER_LITERAL)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mNUMERAL)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDECIMAL_LITERAL)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mHEX_LITERAL)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mBINARY_LITERAL)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSTRING_LITERAL_2_0)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSTRING_LITERAL_2_5)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYGUS_QUOTED_LITERAL)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mCOMMENT)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mALPHA)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mDIGIT)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mHEX_DIGIT)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYMBOL_CHAR_NOUNDERSCORE_NOATTRIBUTE)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mSYMBOL_CHAR)	(struct Smt2Lexer_Ctx_struct * ctx);

     void
     (*mTokens)	(struct Smt2Lexer_Ctx_struct * ctx);
    const char * (*getGrammarFileName)();
    void            (*reset)  (struct Smt2Lexer_Ctx_struct * ctx);
    void	    (*free)   (struct Smt2Lexer_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pSmt2Lexer Smt2LexerNew         (
pANTLR3_INPUT_STREAM
 instream);
ANTLR3_API pSmt2Lexer Smt2LexerNewSSD      (
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
#define T__145      145
#define T__146      146
#define T__147      147
#define T__148      148
#define T__149      149
#define T__150      150
#define T__151      151
#define ALPHA      4
#define AMPERSAND_TOK      5
#define AND_TOK      6
#define ASSERT_TOK      7
#define AS_TOK      8
#define ATTRIBUTE_INST_LEVEL      9
#define ATTRIBUTE_NAMED_TOK      10
#define ATTRIBUTE_NO_PATTERN_TOK      11
#define ATTRIBUTE_PATTERN_TOK      12
#define ATTRIBUTE_RR_PRIORITY      13
#define ATTRIBUTE_TOK      14
#define AT_TOK      15
#define BINARY_LITERAL      16
#define BV2NAT_TOK      17
#define CHECKSAT_TOK      18
#define CHECK_SYNTH_TOK      19
#define COMMENT      20
#define CONSTRAINT_TOK      21
#define CONST_TOK      22
#define DECIMAL_LITERAL      23
#define DECLARE_CODATATYPES_TOK      24
#define DECLARE_CONST_TOK      25
#define DECLARE_DATATYPES_TOK      26
#define DECLARE_FUNS_TOK      27
#define DECLARE_FUN_TOK      28
#define DECLARE_PREDS_TOK      29
#define DECLARE_PRIMED_VAR_TOK      30
#define DECLARE_SORTS_TOK      31
#define DECLARE_SORT_TOK      32
#define DECLARE_VAR_TOK      33
#define DEFINE_CONST_TOK      34
#define DEFINE_FUNS_REC_TOK      35
#define DEFINE_FUN_REC_TOK      36
#define DEFINE_FUN_TOK      37
#define DEFINE_SORT_TOK      38
#define DEFINE_TOK      39
#define DIGIT      40
#define DISTINCT_TOK      41
#define DIVISIBLE_TOK      42
#define DIV_TOK      43
#define DTSIZE_TOK      44
#define ECHO_TOK      45
#define EMPTYSET_TOK      46
#define EQUAL_TOK      47
#define EXISTS_TOK      48
#define EXIT_TOK      49
#define FMFCARDVAL_TOK      50
#define FMFCARD_TOK      51
#define FORALL_TOK      52
#define FP_NAN_TOK      53
#define FP_NINF_TOK      54
#define FP_NZERO_TOK      55
#define FP_PINF_TOK      56
#define FP_PZERO_TOK      57
#define FP_RNA_FULL_TOK      58
#define FP_RNA_TOK      59
#define FP_RNE_FULL_TOK      60
#define FP_RNE_TOK      61
#define FP_RTN_FULL_TOK      62
#define FP_RTN_TOK      63
#define FP_RTP_FULL_TOK      64
#define FP_RTP_TOK      65
#define FP_RTZ_FULL_TOK      66
#define FP_RTZ_TOK      67
#define FP_TO_FPBV_TOK      68
#define FP_TO_FPFP_TOK      69
#define FP_TO_FPR_TOK      70
#define FP_TO_FPS_TOK      71
#define FP_TO_FPU_TOK      72
#define FP_TO_FP_TOK      73
#define FP_TO_SBV_TOK      74
#define FP_TO_UBV_TOK      75
#define GET_ASSERTIONS_TOK      76
#define GET_ASSIGNMENT_TOK      77
#define GET_INFO_TOK      78
#define GET_MODEL_TOK      79
#define GET_OPTION_TOK      80
#define GET_PROOF_TOK      81
#define GET_QE_DISJUNCT_TOK      82
#define GET_QE_TOK      83
#define GET_UNSAT_CORE_TOK      84
#define GET_VALUE_TOK      85
#define GREATER_THAN_EQUAL_TOK      86
#define GREATER_THAN_TOK      87
#define HEX_DIGIT      88
#define HEX_LITERAL      89
#define IMPLIES_TOK      90
#define INCLUDE_TOK      91
#define INDEX_TOK      92
#define INST_CLOSURE_TOK      93
#define INT2BV_TOK      94
#define INTEGER_LITERAL      95
#define INV_CONSTRAINT_TOK      96
#define ITE_TOK      97
#define KEYWORD      98
#define LESS_THAN_EQUAL_TOK      99
#define LESS_THAN_TOK      100
#define LET_TOK      101
#define LPAREN_TOK      102
#define META_INFO_TOK      103
#define MINUS_TOK      104
#define NILREF_TOK      105
#define NOT_TOK      106
#define NUMERAL      107
#define OR_TOK      108
#define PLUS_TOK      109
#define POP_TOK      110
#define PROPAGATION_RULE_TOK      111
#define PUSH_TOK      112
#define QUOTED_SYMBOL      113
#define REALLCHAR_TOK      114
#define REDUCTION_RULE_TOK      115
#define RENOSTR_TOK      116
#define RESET_ASSERTIONS_TOK      117
#define RESET_TOK      118
#define REWRITE_RULE_TOK      119
#define RPAREN_TOK      120
#define SET_INFO_TOK      121
#define SET_LOGIC_TOK      122
#define SET_OPTIONS_TOK      123
#define SET_OPTION_TOK      124
#define SIMPLE_SYMBOL      125
#define SIMPLIFY_TOK      126
#define STAR_TOK      127
#define STRING_LITERAL_2_0      128
#define STRING_LITERAL_2_5      129
#define SYGUS_CONSTANT_TOK      130
#define SYGUS_ENUM_CONS_TOK      131
#define SYGUS_ENUM_TOK      132
#define SYGUS_INPUT_VARIABLE_TOK      133
#define SYGUS_LOCAL_VARIABLE_TOK      134
#define SYGUS_QUOTED_LITERAL      135
#define SYGUS_VARIABLE_TOK      136
#define SYMBOL_CHAR      137
#define SYMBOL_CHAR_NOUNDERSCORE_NOATTRIBUTE      138
#define SYNTH_FUN_TOK      139
#define SYNTH_INV_TOK      140
#define UNIVSET_TOK      141
#define UNTERMINATED_QUOTED_SYMBOL      142
#define WHITESPACE      143
#define XOR_TOK      144
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for Smt2Lexer
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
