/*********************                                                        */
/*! \file base_options_template.h
 ** \verbatim
 ** Top contributors (to current version):
 **   Morgan Deters, Tim King
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2016 by the authors listed in the file AUTHORS
 ** in the top-level source directory) and their institutional affiliations.
 ** All rights reserved.  See the file COPYING in the top-level source
 ** directory for licensing information.\endverbatim
 **
 ** \brief Contains code for handling command-line options.
 **
 ** Contains code for handling command-line options
 **/

#include "cvc4_private.h"

#ifndef __CVC4__OPTIONS__BASE_H
#define __CVC4__OPTIONS__BASE_H

#include "options/options.h"

#line 160 "../../../../../src/options/base_options"
#include <iosfwd>
#line 161 "../../../../../src/options/base_options"
#include <iosfwd>
#line 162 "../../../../../src/options/base_options"
#include <iosfwd>
#line 164 "../../../../../src/options/base_options"
#include "options/language.h"
#line 166 "../../../../../src/options/base_options"
#include "options/language.h"

#line 26 "../../../../../src/options/base_options_template.h"

#define CVC4_OPTIONS__BASE__FOR_OPTION_HOLDER \
  binary_name__option_t::type binary_name; \
  bool binary_name__setByUser__; \
  in__option_t::type in; \
  bool in__setByUser__; \
  out__option_t::type out; \
  bool out__setByUser__; \
  err__option_t::type err; \
  bool err__setByUser__; \
  inputLanguage__option_t::type inputLanguage; \
  bool inputLanguage__setByUser__; \
  outputLanguage__option_t::type outputLanguage; \
  bool outputLanguage__setByUser__; \
  languageHelp__option_t::type languageHelp; \
  bool languageHelp__setByUser__; \
  verbosity__option_t::type verbosity; \
  bool verbosity__setByUser__; \
  statistics__option_t::type statistics; \
  bool statistics__setByUser__; \
  statsEveryQuery__option_t::type statsEveryQuery; \
  bool statsEveryQuery__setByUser__; \
  statsHideZeros__option_t::type statsHideZeros; \
  bool statsHideZeros__setByUser__; \
  parseOnly__option_t::type parseOnly; \
  bool parseOnly__setByUser__; \
  preprocessOnly__option_t::type preprocessOnly; \
  bool preprocessOnly__setByUser__; \
  printSuccess__option_t::type printSuccess; \
  bool printSuccess__setByUser__;

#line 30 "../../../../../src/options/base_options_template.h"

namespace CVC4 {

namespace options {


#line 158 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC binary_name__option_t { typedef std::string type; type operator()() const; bool wasSetByUser() const; void set(const type& v); } binary_name CVC4_PUBLIC;
#line 160 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC in__option_t { typedef std::istream* type; type operator()() const; bool wasSetByUser() const; void set(const type& v); } in CVC4_PUBLIC;
#line 161 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC out__option_t { typedef std::ostream* type; type operator()() const; bool wasSetByUser() const; void set(const type& v); } out CVC4_PUBLIC;
#line 162 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC err__option_t { typedef std::ostream* type; type operator()() const; bool wasSetByUser() const; void set(const type& v); } err CVC4_PUBLIC;
#line 164 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC inputLanguage__option_t { typedef InputLanguage type; type operator()() const; bool wasSetByUser() const; void set(const type& v); } inputLanguage CVC4_PUBLIC;
#line 166 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC outputLanguage__option_t { typedef OutputLanguage type; type operator()() const; bool wasSetByUser() const; void set(const type& v); } outputLanguage CVC4_PUBLIC;
#line 168 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC languageHelp__option_t { typedef bool type; type operator()() const; bool wasSetByUser() const; void set(const type& v); } languageHelp CVC4_PUBLIC;
#line 175 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC verbosity__option_t { typedef int type; type operator()() const; bool wasSetByUser() const; void set(const type& v); } verbosity CVC4_PUBLIC;
#line 182 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC statistics__option_t { typedef bool type; type operator()() const; bool wasSetByUser() const; } statistics CVC4_PUBLIC;
#line 186 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC statsEveryQuery__option_t { typedef bool type; type operator()() const; bool wasSetByUser() const; } statsEveryQuery CVC4_PUBLIC;
#line 190 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC statsHideZeros__option_t { typedef bool type; type operator()() const; bool wasSetByUser() const; } statsHideZeros CVC4_PUBLIC;
#line 196 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC parseOnly__option_t { typedef bool type; type operator()() const; bool wasSetByUser() const; void set(const type& v); } parseOnly CVC4_PUBLIC;
#line 199 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC preprocessOnly__option_t { typedef bool type; type operator()() const; bool wasSetByUser() const; } preprocessOnly CVC4_PUBLIC;
#line 207 "../../../../../src/options/base_options"
extern struct CVC4_PUBLIC printSuccess__option_t { typedef bool type; type operator()() const; bool wasSetByUser() const; } printSuccess CVC4_PUBLIC;

#line 38 "../../../../../src/options/base_options_template.h"

}/* CVC4::options namespace */


#line 158 "../../../../../src/options/base_options"
template <> void Options::set(options::binary_name__option_t, const options::binary_name__option_t::type& x);
#line 158 "../../../../../src/options/base_options"
template <> const options::binary_name__option_t::type& Options::operator[](options::binary_name__option_t) const;
#line 158 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::binary_name__option_t) const;
#line 158 "../../../../../src/options/base_options"
template <> void Options::assign(options::binary_name__option_t, std::string option, std::string value);
#line 160 "../../../../../src/options/base_options"
template <> void Options::set(options::in__option_t, const options::in__option_t::type& x);
#line 160 "../../../../../src/options/base_options"
template <> const options::in__option_t::type& Options::operator[](options::in__option_t) const;
#line 160 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::in__option_t) const;
#line 160 "../../../../../src/options/base_options"
template <> void Options::assign(options::in__option_t, std::string option, std::string value);
#line 161 "../../../../../src/options/base_options"
template <> void Options::set(options::out__option_t, const options::out__option_t::type& x);
#line 161 "../../../../../src/options/base_options"
template <> const options::out__option_t::type& Options::operator[](options::out__option_t) const;
#line 161 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::out__option_t) const;
#line 161 "../../../../../src/options/base_options"
template <> void Options::assign(options::out__option_t, std::string option, std::string value);
#line 162 "../../../../../src/options/base_options"
template <> void Options::set(options::err__option_t, const options::err__option_t::type& x);
#line 162 "../../../../../src/options/base_options"
template <> const options::err__option_t::type& Options::operator[](options::err__option_t) const;
#line 162 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::err__option_t) const;
#line 162 "../../../../../src/options/base_options"
template <> void Options::assign(options::err__option_t, std::string option, std::string value);
#line 164 "../../../../../src/options/base_options"
template <> void Options::set(options::inputLanguage__option_t, const options::inputLanguage__option_t::type& x);
#line 164 "../../../../../src/options/base_options"
template <> const options::inputLanguage__option_t::type& Options::operator[](options::inputLanguage__option_t) const;
#line 164 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::inputLanguage__option_t) const;
#line 164 "../../../../../src/options/base_options"
template <> void Options::assign(options::inputLanguage__option_t, std::string option, std::string value);
#line 166 "../../../../../src/options/base_options"
template <> void Options::set(options::outputLanguage__option_t, const options::outputLanguage__option_t::type& x);
#line 166 "../../../../../src/options/base_options"
template <> const options::outputLanguage__option_t::type& Options::operator[](options::outputLanguage__option_t) const;
#line 166 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::outputLanguage__option_t) const;
#line 166 "../../../../../src/options/base_options"
template <> void Options::assign(options::outputLanguage__option_t, std::string option, std::string value);
#line 168 "../../../../../src/options/base_options"
template <> void Options::set(options::languageHelp__option_t, const options::languageHelp__option_t::type& x);
#line 168 "../../../../../src/options/base_options"
template <> const options::languageHelp__option_t::type& Options::operator[](options::languageHelp__option_t) const;
#line 168 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::languageHelp__option_t) const;
#line 168 "../../../../../src/options/base_options"
template <> void Options::assignBool(options::languageHelp__option_t, std::string option, bool value);
#line 175 "../../../../../src/options/base_options"
template <> void Options::set(options::verbosity__option_t, const options::verbosity__option_t::type& x);
#line 175 "../../../../../src/options/base_options"
template <> const options::verbosity__option_t::type& Options::operator[](options::verbosity__option_t) const;
#line 175 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::verbosity__option_t) const;
#line 175 "../../../../../src/options/base_options"
template <> void Options::assign(options::verbosity__option_t, std::string option, std::string value);
#line 182 "../../../../../src/options/base_options"
template <> const options::statistics__option_t::type& Options::operator[](options::statistics__option_t) const;
#line 182 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::statistics__option_t) const;
#line 182 "../../../../../src/options/base_options"
template <> void Options::assignBool(options::statistics__option_t, std::string option, bool value);
#line 186 "../../../../../src/options/base_options"
template <> const options::statsEveryQuery__option_t::type& Options::operator[](options::statsEveryQuery__option_t) const;
#line 186 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::statsEveryQuery__option_t) const;
#line 186 "../../../../../src/options/base_options"
template <> void Options::assignBool(options::statsEveryQuery__option_t, std::string option, bool value);
#line 190 "../../../../../src/options/base_options"
template <> const options::statsHideZeros__option_t::type& Options::operator[](options::statsHideZeros__option_t) const;
#line 190 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::statsHideZeros__option_t) const;
#line 190 "../../../../../src/options/base_options"
template <> void Options::assignBool(options::statsHideZeros__option_t, std::string option, bool value);
#line 196 "../../../../../src/options/base_options"
template <> void Options::set(options::parseOnly__option_t, const options::parseOnly__option_t::type& x);
#line 196 "../../../../../src/options/base_options"
template <> const options::parseOnly__option_t::type& Options::operator[](options::parseOnly__option_t) const;
#line 196 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::parseOnly__option_t) const;
#line 196 "../../../../../src/options/base_options"
template <> void Options::assignBool(options::parseOnly__option_t, std::string option, bool value);
#line 199 "../../../../../src/options/base_options"
template <> const options::preprocessOnly__option_t::type& Options::operator[](options::preprocessOnly__option_t) const;
#line 199 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::preprocessOnly__option_t) const;
#line 199 "../../../../../src/options/base_options"
template <> void Options::assignBool(options::preprocessOnly__option_t, std::string option, bool value);
#line 207 "../../../../../src/options/base_options"
template <> const options::printSuccess__option_t::type& Options::operator[](options::printSuccess__option_t) const;
#line 207 "../../../../../src/options/base_options"
template <> bool Options::wasSetByUser(options::printSuccess__option_t) const;
#line 207 "../../../../../src/options/base_options"
template <> void Options::assignBool(options::printSuccess__option_t, std::string option, bool value);

#line 44 "../../../../../src/options/base_options_template.h"

namespace options {


#line 158 "../../../../../src/options/base_options"
inline binary_name__option_t::type binary_name__option_t::operator()() const { return (*Options::current())[*this]; }
#line 158 "../../../../../src/options/base_options"
inline bool binary_name__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }
#line 158 "../../../../../src/options/base_options"
inline void binary_name__option_t::set(const binary_name__option_t::type& v) { Options::current()->set(*this, v); }

#line 160 "../../../../../src/options/base_options"
inline in__option_t::type in__option_t::operator()() const { return (*Options::current())[*this]; }
#line 160 "../../../../../src/options/base_options"
inline bool in__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }
#line 160 "../../../../../src/options/base_options"
inline void in__option_t::set(const in__option_t::type& v) { Options::current()->set(*this, v); }

#line 161 "../../../../../src/options/base_options"
inline out__option_t::type out__option_t::operator()() const { return (*Options::current())[*this]; }
#line 161 "../../../../../src/options/base_options"
inline bool out__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }
#line 161 "../../../../../src/options/base_options"
inline void out__option_t::set(const out__option_t::type& v) { Options::current()->set(*this, v); }

#line 162 "../../../../../src/options/base_options"
inline err__option_t::type err__option_t::operator()() const { return (*Options::current())[*this]; }
#line 162 "../../../../../src/options/base_options"
inline bool err__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }
#line 162 "../../../../../src/options/base_options"
inline void err__option_t::set(const err__option_t::type& v) { Options::current()->set(*this, v); }

#line 164 "../../../../../src/options/base_options"
inline inputLanguage__option_t::type inputLanguage__option_t::operator()() const { return (*Options::current())[*this]; }
#line 164 "../../../../../src/options/base_options"
inline bool inputLanguage__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }
#line 164 "../../../../../src/options/base_options"
inline void inputLanguage__option_t::set(const inputLanguage__option_t::type& v) { Options::current()->set(*this, v); }

#line 166 "../../../../../src/options/base_options"
inline outputLanguage__option_t::type outputLanguage__option_t::operator()() const { return (*Options::current())[*this]; }
#line 166 "../../../../../src/options/base_options"
inline bool outputLanguage__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }
#line 166 "../../../../../src/options/base_options"
inline void outputLanguage__option_t::set(const outputLanguage__option_t::type& v) { Options::current()->set(*this, v); }

#line 168 "../../../../../src/options/base_options"
inline languageHelp__option_t::type languageHelp__option_t::operator()() const { return (*Options::current())[*this]; }
#line 168 "../../../../../src/options/base_options"
inline bool languageHelp__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }
#line 168 "../../../../../src/options/base_options"
inline void languageHelp__option_t::set(const languageHelp__option_t::type& v) { Options::current()->set(*this, v); }

#line 175 "../../../../../src/options/base_options"
inline verbosity__option_t::type verbosity__option_t::operator()() const { return (*Options::current())[*this]; }
#line 175 "../../../../../src/options/base_options"
inline bool verbosity__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }
#line 175 "../../../../../src/options/base_options"
inline void verbosity__option_t::set(const verbosity__option_t::type& v) { Options::current()->set(*this, v); }

#line 182 "../../../../../src/options/base_options"
inline statistics__option_t::type statistics__option_t::operator()() const { return (*Options::current())[*this]; }
#line 182 "../../../../../src/options/base_options"
inline bool statistics__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }

#line 186 "../../../../../src/options/base_options"
inline statsEveryQuery__option_t::type statsEveryQuery__option_t::operator()() const { return (*Options::current())[*this]; }
#line 186 "../../../../../src/options/base_options"
inline bool statsEveryQuery__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }

#line 190 "../../../../../src/options/base_options"
inline statsHideZeros__option_t::type statsHideZeros__option_t::operator()() const { return (*Options::current())[*this]; }
#line 190 "../../../../../src/options/base_options"
inline bool statsHideZeros__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }

#line 196 "../../../../../src/options/base_options"
inline parseOnly__option_t::type parseOnly__option_t::operator()() const { return (*Options::current())[*this]; }
#line 196 "../../../../../src/options/base_options"
inline bool parseOnly__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }
#line 196 "../../../../../src/options/base_options"
inline void parseOnly__option_t::set(const parseOnly__option_t::type& v) { Options::current()->set(*this, v); }

#line 199 "../../../../../src/options/base_options"
inline preprocessOnly__option_t::type preprocessOnly__option_t::operator()() const { return (*Options::current())[*this]; }
#line 199 "../../../../../src/options/base_options"
inline bool preprocessOnly__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }

#line 207 "../../../../../src/options/base_options"
inline printSuccess__option_t::type printSuccess__option_t::operator()() const { return (*Options::current())[*this]; }
#line 207 "../../../../../src/options/base_options"
inline bool printSuccess__option_t::wasSetByUser() const { return Options::current()->wasSetByUser(*this); }

#line 50 "../../../../../src/options/base_options_template.h"

}/* CVC4::options namespace */

}/* CVC4 namespace */

#endif /* __CVC4__OPTIONS__BASE_H */
