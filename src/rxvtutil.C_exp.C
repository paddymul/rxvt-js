# 1 "rxvtutil.C"
# 1 "/Users/patrickmullen/temp/downloads/rxvt/urxvt-my-conf/src//"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "rxvtutil.C"
/*----------------------------------------------------------------------*
 * File:	rxvtutil.C
 *----------------------------------------------------------------------*
 *
 * All portions of code are copyright by their respective author/s.
 * Copyright (c) 2004-2006 Marc Lehmann <pcg@goof.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *----------------------------------------------------------------------*/

# 1 "/usr/include/c++/4.0.0/cstdlib" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

//
// ISO C++ 14882: 20.4.6  C library
//

/** @file cstdlib
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stdlib.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */




       
# 48 "/usr/include/c++/4.0.0/cstdlib" 3

# 1 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.




// Pick up any OS-specific definitions.
# 1 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/os_defines.h" 1 3
// Specific definitions for Darwin -*- C++ -*-

// Copyright (C) 2004 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.





// System-specific #define, typedefs, corrections, etc, go here.  This
// file will come before all others.

/* Darwin has the pthread routines in libSystem, which every program
   links to, so there's no need for weak-ness for that.  */


// On Darwin, in order to enable overriding of operator new and delete,
// GCC makes the definition of these functions weak, relies on the
// loader to implement weak semantics properly, and uses
// -flat_namespace to work around the way that it doesn't.


/* APPLE LOCAL begin keymgr */
# 186 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/os_defines.h" 3
/* APPLE LOCAL end keymgr */
# 36 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 2 3

// The current version of the C++ library in compressed ISO date format.


// Allow use of "export template." This is currently not a feature
// that g++ supports.
// #define _GLIBCXX_EXPORT_TEMPLATE 1

// Allow use of the GNU syntax extension, "extern template." This
// extension is fully documented in the g++ manual, but in a nutshell,
// it inhibits all implicit instantiations and is used throughout the
// library to avoid multiple weak definitions for required types that
// are already explicitly instantiated in the library binary. This
// substantially reduces the binary size of resulting executables.




// Certain function definitions that are meant to be overridable from
// user code are decorated with this macro.  For some targets, this
// macro causes these definitions to be weak.




// Debug mode support. Debug mode basic_string is not allowed to be
// associated with std, because of locale and exception link
// dependence.
namespace __gnu_debug_def { }

namespace __gnu_debug
{
  using namespace __gnu_debug_def;
}
# 86 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 3
// The remainder of the prewritten config is automatic; all the
// user hooks are listed above.

// Create a boolean flag to be used to determine if --fast-math is set.






// This marks string literals in header files to be extracted for eventual
// translation.  It is primarily used for messages in thrown exceptions; see
// src/functexcept.cc.  We use __N because the more traditional _N is used
// for something else under certain OSes (see BADNAMES).


// End of prewritten config; the discovered settings follow.
/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */
// acconfig.h symbols and macros for libstdc++ v3 -*- C++ -*-

// Defines libstdc++ version.
/* #undef _GLIBCXX_PACKAGE */
/* #undef _GLIBCXX_VERSION */

// Needed for gettext.
/* #undef ENABLE_NLS */
/* #undef _GLIBCXX_HAVE_CATGETS */
/* #undef _GLIBCXX_HAVE_GETTEXT */
/* #undef _GLIBCXX_HAVE_STPCPY */

// Include I/O support for 'long long' and 'unsigned long long'.


// Define if C99 features such as lldiv_t, llabs, lldiv should be exposed.


// Define if C99 math functions (like fpclassify) should be exposed.


// Define if C99 complex math functions should be used in std::complex.


// Define if code specialized for wchar_t should be used.


// Define if using setrlimit to set resource limits during 'make check'.


// Define to use concept checking code from the boost libraries.
/* #undef _GLIBCXX_CONCEPT_CHECKS */

// Define to use symbol versioning in the shared library.
/* #undef _GLIBCXX_SYMVER */

// Define symbol versioning in assember directives. If symbol
// versioning is beigng used, and the assembler supports this kind of
// thing, then use it.
// NB: _GLIBCXX_AT_AT is a hack to work around quoting issues in m4.







// Define if LFS support is available.
/* #undef _GLIBCXX_USE_LFS */

// Define if a fully dynamic basic_string is wanted.
/* #undef _GLIBCXX_FULLY_DYNAMIC_STRING */

// Define if NLS translations are to be used.
/* #undef _GLIBCXX_USE_NLS */

// Define if gthr-default.h exists (meaning that threading support is enabled).


// Define if the atan2f function exists.


// Define if the atan2l function exists.


// Define if the tanl function exists.


// Define if the copysignf function exists.


// Define if getpagesize exists.


// Define if setenv exists.


// Define if sigsetjmp exists.


// Define if mbstate_t exists in wchar.h.


// Define if you have the modff function.


// Define if you have the modfl function.


// Define if you have the expf function.


// Define if you have the expl function.


// Define if you have the hypot function.


// Define if you have the hypotf function.


// Define if you have the hypotl function.


// Define if the compiler/host combination has __builtin_abs


// Define if the compiler/host combination has __builtin_labs


// Define if the compiler/host combination has __builtin_cos


// Define if the compiler/host combination has __builtin_cosf


// Define if the compiler/host combination has __builtin_cosl


// Define if the compiler/host combination has __builtin_fabs


// Define if the compiler/host combination has __builtin_fabsf


// Define if the compiler/host combination has __builtin_fabsl


// Define if the compiler/host combination has __builtin_sin


// Define if the compiler/host combination has __builtin_sinf


// Define if the compiler/host combination has __builtin_sinl


// Define if the compiler/host combination has __builtin_sqrt


// Define if the compiler/host combination has __builtin_sqrtf


// Define if the compiler/host combination has __builtin_sqrtl


// Define if poll is available in <poll.h>.


// Define if S_ISREG (Posix) is available in <sys/stat.h>.


// Define if S_IFREG is available in <sys/stat.h>.
/* #undef _GLIBCXX_HAVE_S_IFREG */

// Define if writev is available in <sys/uio.h>.


// Define if int64_t is available in <stdint.h>.


// Define if LC_MESSAGES is available in <locale.h>.


// Define if <float.h> exists.


// Define if modf is present in <math.h>
/* #undef _GLIBCXX_HAVE_MODF */


/* Define to 1 if you have the `acosf' function. */


/* Define to 1 if you have the `acosl' function. */


/* Define to 1 if you have the `asinf' function. */


/* Define to 1 if you have the `asinl' function. */


/* Define to 1 if you have the `atan2f' function. */


/* Define to 1 if you have the `atan2l' function. */


/* Define to 1 if you have the `atanf' function. */


/* Define to 1 if you have the `atanl' function. */


/* Define to 1 if you have the `btowc' function. */


/* Define to 1 if you have the `ceilf' function. */


/* Define to 1 if you have the `ceill' function. */


/* Define to 1 if you have the <complex.h> header file. */


/* Define to 1 if you have the `copysign' function. */


/* Define to 1 if you have the `copysignf' function. */


/* Define to 1 if you have the `copysignl' function. */


/* Define to 1 if you have the `cosf' function. */


/* Define to 1 if you have the `coshf' function. */


/* Define to 1 if you have the `coshl' function. */


/* Define to 1 if you have the `cosl' function. */


/* Define to 1 if you have the <endian.h> header file. */
/* #undef _GLIBCXX_HAVE_ENDIAN_H */

/* Define to 1 if you have the `expf' function. */


/* Define to 1 if you have the `expl' function. */


/* Define to 1 if you have the `fabsf' function. */


/* Define to 1 if you have the `fabsl' function. */


/* Define to 1 if you have the `fgetwc' function. */


/* Define to 1 if you have the `fgetws' function. */


/* Define to 1 if you have the `finite' function. */


/* Define to 1 if you have the `finitef' function. */
/* #undef _GLIBCXX_HAVE_FINITEF */

/* Define to 1 if you have the `finitel' function. */
/* #undef _GLIBCXX_HAVE_FINITEL */

/* Define to 1 if you have the <float.h> header file. */


/* Define to 1 if you have the `floorf' function. */


/* Define to 1 if you have the `floorl' function. */


/* Define to 1 if you have the `fmodf' function. */


/* Define to 1 if you have the `fmodl' function. */


/* Define to 1 if you have the `fpclass' function. */
/* #undef _GLIBCXX_HAVE_FPCLASS */

/* Define to 1 if you have the `fputwc' function. */


/* Define to 1 if you have the `fputws' function. */


/* Define to 1 if you have the <fp.h> header file. */
/* #undef _GLIBCXX_HAVE_FP_H */

/* Define to 1 if you have the `frexpf' function. */


/* Define to 1 if you have the `frexpl' function. */


/* Define to 1 if you have the `fwide' function. */


/* Define to 1 if you have the `fwprintf' function. */


/* Define to 1 if you have the `fwscanf' function. */


/* Define to 1 if you have the <gconv.h> header file. */
/* #undef _GLIBCXX_HAVE_GCONV_H */

/* Define to 1 if you have the `getpagesize' function. */


/* Define to 1 if you have the `getwc' function. */


/* Define to 1 if you have the `getwchar' function. */


/* Define to 1 if you have the `hypot' function. */


/* Define to 1 if you have the `hypotf' function. */


/* Define to 1 if you have the `hypotl' function. */


/* Define to 1 if you have the `iconv' function. */


/* Define to 1 if you have the `iconv_close' function. */


/* Define to 1 if you have the `iconv_open' function. */


/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef _GLIBCXX_HAVE_IEEEFP_H */

/* Define to 1 if you have the <inttypes.h> header file. */


/* Define to 1 if you have the `isinf' function. */


/* Define to 1 if you have the `isinff' function. */
/* #undef _GLIBCXX_HAVE_ISINFF */

/* Define to 1 if you have the `isinfl' function. */
/* #undef _GLIBCXX_HAVE_ISINFL */

/* Define to 1 if you have the `isnan' function. */


/* Define to 1 if you have the `isnanf' function. */
/* #undef _GLIBCXX_HAVE_ISNANF */

/* Define to 1 if you have the `isnanl' function. */
/* #undef _GLIBCXX_HAVE_ISNANL */

/* Define to 1 if you have the `iswblank' function. */


/* Define to 1 if you have the `ldexpf' function. */


/* Define to 1 if you have the `ldexpl' function. */


/* Define to 1 if you have the <libintl.h> header file. */
/* #undef _GLIBCXX_HAVE_LIBINTL_H */

/* Define to 1 if you have the `m' library (-lm). */


/* Only used in build directory testsuite_hooks.h. */


/* Only used in build directory testsuite_hooks.h. */


/* Only used in build directory testsuite_hooks.h. */


/* Only used in build directory testsuite_hooks.h. */


/* Only used in build directory testsuite_hooks.h. */


/* Define to 1 if you have the <locale.h> header file. */


/* Define to 1 if you have the `log10f' function. */


/* Define to 1 if you have the `log10l' function. */


/* Define to 1 if you have the `logf' function. */


/* Define to 1 if you have the `logl' function. */


/* Define to 1 if you have the <machine/endian.h> header file. */


/* Define to 1 if you have the <machine/param.h> header file. */


/* Define to 1 if you have the `mbrlen' function. */


/* Define to 1 if you have the `mbrtowc' function. */


/* Define to 1 if you have the `mbsinit' function. */


/* Define to 1 if you have the `mbsrtowcs' function. */


/* Define to 1 if you have the <memory.h> header file. */


/* Define to 1 if you have a working `mmap' system call. */


/* Define to 1 if you have the `modff' function. */


/* Define to 1 if you have the `modfl' function. */


/* Define to 1 if you have the <nan.h> header file. */
/* #undef _GLIBCXX_HAVE_NAN_H */

/* Define to 1 if you have the `nl_langinfo' function. */


/* Define to 1 if you have the `powf' function. */


/* Define to 1 if you have the `powl' function. */


/* Define to 1 if you have the `putwc' function. */


/* Define to 1 if you have the `putwchar' function. */


/* Define to 1 if you have the `qfpclass' function. */
/* #undef _GLIBCXX_HAVE_QFPCLASS */

/* Define to 1 if you have the `setenv' function. */


/* Define if sigsetjmp is available. */


/* Define to 1 if you have the `sincos' function. */
/* #undef _GLIBCXX_HAVE_SINCOS */

/* Define to 1 if you have the `sincosf' function. */
/* #undef _GLIBCXX_HAVE_SINCOSF */

/* Define to 1 if you have the `sincosl' function. */
/* #undef _GLIBCXX_HAVE_SINCOSL */

/* Define to 1 if you have the `sinf' function. */


/* Define to 1 if you have the `sinhf' function. */


/* Define to 1 if you have the `sinhl' function. */


/* Define to 1 if you have the `sinl' function. */


/* Define to 1 if you have the `sqrtf' function. */


/* Define to 1 if you have the `sqrtl' function. */


/* Define to 1 if you have the <stdint.h> header file. */


/* Define to 1 if you have the <stdlib.h> header file. */


/* Define to 1 if you have the <strings.h> header file. */


/* Define to 1 if you have the <string.h> header file. */


/* Define to 1 if you have the `strtof' function. */


/* Define to 1 if you have the `strtold' function. */


/* Define to 1 if you have the `swprintf' function. */


/* Define to 1 if you have the `swscanf' function. */


/* Define to 1 if you have the <sys/filio.h> header file. */


/* Define to 1 if you have the <sys/ioctl.h> header file. */


/* Define to 1 if you have the <sys/ipc.h> header file. */


/* Define to 1 if you have the <sys/isa_defs.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_ISA_DEFS_H */

/* Define to 1 if you have the <sys/machine.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_MACHINE_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/resource.h> header file. */


/* Define to 1 if you have the <sys/sem.h> header file. */


/* Define to 1 if you have the <sys/stat.h> header file. */


/* Define to 1 if you have the <sys/time.h> header file. */


/* Define to 1 if you have the <sys/types.h> header file. */


/* Define to 1 if you have the <sys/uio.h> header file. */


/* Define to 1 if you have the `tanf' function. */


/* Define to 1 if you have the `tanhf' function. */


/* Define to 1 if you have the `tanhl' function. */


/* Define to 1 if you have the `tanl' function. */


/* Define to 1 if you have the `ungetwc' function. */


/* Define to 1 if you have the <unistd.h> header file. */


/* Define to 1 if you have the `vfwprintf' function. */


/* Define to 1 if you have the `vfwscanf' function. */


/* Define to 1 if you have the `vswprintf' function. */


/* Define to 1 if you have the `vswscanf' function. */


/* Define to 1 if you have the `vwprintf' function. */


/* Define to 1 if you have the `vwscanf' function. */


/* Define to 1 if you have the <wchar.h> header file. */


/* Define to 1 if you have the `wcrtomb' function. */


/* Define to 1 if you have the `wcscat' function. */


/* Define to 1 if you have the `wcschr' function. */


/* Define to 1 if you have the `wcscmp' function. */


/* Define to 1 if you have the `wcscoll' function. */


/* Define to 1 if you have the `wcscpy' function. */


/* Define to 1 if you have the `wcscspn' function. */


/* Define to 1 if you have the `wcsftime' function. */


/* Define to 1 if you have the `wcslen' function. */


/* Define to 1 if you have the `wcsncat' function. */


/* Define to 1 if you have the `wcsncmp' function. */


/* Define to 1 if you have the `wcsncpy' function. */


/* Define to 1 if you have the `wcspbrk' function. */


/* Define to 1 if you have the `wcsrchr' function. */


/* Define to 1 if you have the `wcsrtombs' function. */


/* Define to 1 if you have the `wcsspn' function. */


/* Define to 1 if you have the `wcsstr' function. */


/* Define to 1 if you have the `wcstod' function. */


/* Define to 1 if you have the `wcstof' function. */


/* Define to 1 if you have the `wcstok' function. */


/* Define to 1 if you have the `wcstol' function. */


/* Define to 1 if you have the `wcstoul' function. */


/* Define to 1 if you have the `wcsxfrm' function. */


/* Define to 1 if you have the `wctob' function. */


/* Define to 1 if you have the <wctype.h> header file. */


/* Define to 1 if you have the `wmemchr' function. */


/* Define to 1 if you have the `wmemcmp' function. */


/* Define to 1 if you have the `wmemcpy' function. */


/* Define to 1 if you have the `wmemmove' function. */


/* Define to 1 if you have the `wmemset' function. */


/* Define to 1 if you have the `wprintf' function. */


/* Define to 1 if you have the `wscanf' function. */


/* Define to 1 if you have the `_acosf' function. */
/* #undef _GLIBCXX_HAVE__ACOSF */

/* Define to 1 if you have the `_acosl' function. */
/* #undef _GLIBCXX_HAVE__ACOSL */

/* Define to 1 if you have the `_asinf' function. */
/* #undef _GLIBCXX_HAVE__ASINF */

/* Define to 1 if you have the `_asinl' function. */
/* #undef _GLIBCXX_HAVE__ASINL */

/* Define to 1 if you have the `_atan2f' function. */
/* #undef _GLIBCXX_HAVE__ATAN2F */

/* Define to 1 if you have the `_atan2l' function. */
/* #undef _GLIBCXX_HAVE__ATAN2L */

/* Define to 1 if you have the `_atanf' function. */
/* #undef _GLIBCXX_HAVE__ATANF */

/* Define to 1 if you have the `_atanl' function. */
/* #undef _GLIBCXX_HAVE__ATANL */

/* Define to 1 if you have the `_ceilf' function. */
/* #undef _GLIBCXX_HAVE__CEILF */

/* Define to 1 if you have the `_ceill' function. */
/* #undef _GLIBCXX_HAVE__CEILL */

/* Define to 1 if you have the `_copysign' function. */
/* #undef _GLIBCXX_HAVE__COPYSIGN */

/* Define to 1 if you have the `_copysignl' function. */
/* #undef _GLIBCXX_HAVE__COPYSIGNL */

/* Define to 1 if you have the `_cosf' function. */
/* #undef _GLIBCXX_HAVE__COSF */

/* Define to 1 if you have the `_coshf' function. */
/* #undef _GLIBCXX_HAVE__COSHF */

/* Define to 1 if you have the `_coshl' function. */
/* #undef _GLIBCXX_HAVE__COSHL */

/* Define to 1 if you have the `_cosl' function. */
/* #undef _GLIBCXX_HAVE__COSL */

/* Define to 1 if you have the `_expf' function. */
/* #undef _GLIBCXX_HAVE__EXPF */

/* Define to 1 if you have the `_expl' function. */
/* #undef _GLIBCXX_HAVE__EXPL */

/* Define to 1 if you have the `_fabsf' function. */
/* #undef _GLIBCXX_HAVE__FABSF */

/* Define to 1 if you have the `_fabsl' function. */
/* #undef _GLIBCXX_HAVE__FABSL */

/* Define to 1 if you have the `_finite' function. */
/* #undef _GLIBCXX_HAVE__FINITE */

/* Define to 1 if you have the `_finitef' function. */
/* #undef _GLIBCXX_HAVE__FINITEF */

/* Define to 1 if you have the `_finitel' function. */
/* #undef _GLIBCXX_HAVE__FINITEL */

/* Define to 1 if you have the `_floorf' function. */
/* #undef _GLIBCXX_HAVE__FLOORF */

/* Define to 1 if you have the `_floorl' function. */
/* #undef _GLIBCXX_HAVE__FLOORL */

/* Define to 1 if you have the `_fmodf' function. */
/* #undef _GLIBCXX_HAVE__FMODF */

/* Define to 1 if you have the `_fmodl' function. */
/* #undef _GLIBCXX_HAVE__FMODL */

/* Define to 1 if you have the `_fpclass' function. */
/* #undef _GLIBCXX_HAVE__FPCLASS */

/* Define to 1 if you have the `_frexpf' function. */
/* #undef _GLIBCXX_HAVE__FREXPF */

/* Define to 1 if you have the `_frexpl' function. */
/* #undef _GLIBCXX_HAVE__FREXPL */

/* Define to 1 if you have the `_hypot' function. */
/* #undef _GLIBCXX_HAVE__HYPOT */

/* Define to 1 if you have the `_hypotf' function. */
/* #undef _GLIBCXX_HAVE__HYPOTF */

/* Define to 1 if you have the `_hypotl' function. */
/* #undef _GLIBCXX_HAVE__HYPOTL */

/* Define to 1 if you have the `_isinf' function. */
/* #undef _GLIBCXX_HAVE__ISINF */

/* Define to 1 if you have the `_isinff' function. */
/* #undef _GLIBCXX_HAVE__ISINFF */

/* Define to 1 if you have the `_isinfl' function. */
/* #undef _GLIBCXX_HAVE__ISINFL */

/* Define to 1 if you have the `_isnan' function. */
/* #undef _GLIBCXX_HAVE__ISNAN */

/* Define to 1 if you have the `_isnanf' function. */
/* #undef _GLIBCXX_HAVE__ISNANF */

/* Define to 1 if you have the `_isnanl' function. */
/* #undef _GLIBCXX_HAVE__ISNANL */

/* Define to 1 if you have the `_ldexpf' function. */
/* #undef _GLIBCXX_HAVE__LDEXPF */

/* Define to 1 if you have the `_ldexpl' function. */
/* #undef _GLIBCXX_HAVE__LDEXPL */

/* Define to 1 if you have the `_log10f' function. */
/* #undef _GLIBCXX_HAVE__LOG10F */

/* Define to 1 if you have the `_log10l' function. */
/* #undef _GLIBCXX_HAVE__LOG10L */

/* Define to 1 if you have the `_logf' function. */
/* #undef _GLIBCXX_HAVE__LOGF */

/* Define to 1 if you have the `_logl' function. */
/* #undef _GLIBCXX_HAVE__LOGL */

/* Define to 1 if you have the `_modff' function. */
/* #undef _GLIBCXX_HAVE__MODFF */

/* Define to 1 if you have the `_modfl' function. */
/* #undef _GLIBCXX_HAVE__MODFL */

/* Define to 1 if you have the `_powf' function. */
/* #undef _GLIBCXX_HAVE__POWF */

/* Define to 1 if you have the `_powl' function. */
/* #undef _GLIBCXX_HAVE__POWL */

/* Define to 1 if you have the `_qfpclass' function. */
/* #undef _GLIBCXX_HAVE__QFPCLASS */

/* Define to 1 if you have the `_sincos' function. */
/* #undef _GLIBCXX_HAVE__SINCOS */

/* Define to 1 if you have the `_sincosf' function. */
/* #undef _GLIBCXX_HAVE__SINCOSF */

/* Define to 1 if you have the `_sincosl' function. */
/* #undef _GLIBCXX_HAVE__SINCOSL */

/* Define to 1 if you have the `_sinf' function. */
/* #undef _GLIBCXX_HAVE__SINF */

/* Define to 1 if you have the `_sinhf' function. */
/* #undef _GLIBCXX_HAVE__SINHF */

/* Define to 1 if you have the `_sinhl' function. */
/* #undef _GLIBCXX_HAVE__SINHL */

/* Define to 1 if you have the `_sinl' function. */
/* #undef _GLIBCXX_HAVE__SINL */

/* Define to 1 if you have the `_sqrtf' function. */
/* #undef _GLIBCXX_HAVE__SQRTF */

/* Define to 1 if you have the `_sqrtl' function. */
/* #undef _GLIBCXX_HAVE__SQRTL */

/* Define to 1 if you have the `_tanf' function. */
/* #undef _GLIBCXX_HAVE__TANF */

/* Define to 1 if you have the `_tanhf' function. */
/* #undef _GLIBCXX_HAVE__TANHF */

/* Define to 1 if you have the `_tanhl' function. */
/* #undef _GLIBCXX_HAVE__TANHL */

/* Define to 1 if you have the `_tanl' function. */
/* #undef _GLIBCXX_HAVE__TANL */

/* Define to 1 if you have the `__signbit' function. */
/* #undef _GLIBCXX_HAVE___SIGNBIT */

/* Define to 1 if you have the `__signbitf' function. */


/* Define to 1 if you have the `__signbitl' function. */


/* Define to the address where bug reports for this package should be sent. */


/* Define to the full name of this package. */


/* Define to the full name and version of this package. */


/* Define to the one symbol short name of this package. */


/* Define to the version of this package. */


/* Define to 1 if you have the ANSI C header files. */


/* Define to 1 if a full hosted library is built, or 0 if freestanding. */


/* Define if the compiler is configured for setjmp/longjmp exceptions. */
/* #undef _GLIBCXX_SJLJ_EXCEPTIONS */
//
// Systems that have certain non-standard functions prefixed with an
// underscore, we'll handle those here. Must come after config.h.in.
//
# 50 "/usr/include/c++/4.0.0/cstdlib" 2 3
# 1 "/usr/include/c++/4.0.0/cstddef" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997, 1998, 1999, 2000, 2002 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

//
// ISO C++ 14882: 18.1  Types
//

/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */




       
# 47 "/usr/include/c++/4.0.0/cstddef" 3

# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 1 3 4
/* Copyright (C) 1989, 1997, 1998, 1999, 2000, 2002, 2004
   Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* As a special exception, if you include this header file into source
   files compiled by GCC, this header file does not by itself cause
   the resulting executable to be covered by the GNU General Public
   License.  This exception does not however invalidate any other
   reasons why the executable file might be covered by the GNU General
   Public License.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */





/* snaroff@next.com says the NeXT needs this.  */

/* Irix 5.1 needs this.  */




/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
# 97 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 122 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 152 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 162 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 214 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 240 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 281 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 308 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 360 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
# 395 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
/* A null pointer constant.  */
# 413 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 49 "/usr/include/c++/4.0.0/cstddef" 2 3

namespace std
{
  using ::ptrdiff_t;
  using ::size_t;
}
# 51 "/usr/include/c++/4.0.0/cstdlib" 2 3


/* The C standard does not require a freestanding implementation to
   provide <stdlib.h>.  However, the C++ standard does still require
   <cstdlib> -- but only the functionality mentioned in
   [lib.support.start.term].  */
# 1 "/usr/include/stdlib.h" 1 3 4
/*
 * Copyright (c) 2000, 2005 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)stdlib.h	8.5 (Berkeley) 5/19/95
 */




# 1 "/usr/include/available.h" 1 3 4
/*
     File:       available.h
 
     Copyright:  (c) 2001-2005 by Apple Computer, Inc., all rights reserved.

     More Info:  See TechNote 2064

     Contains:   Double-underbar-prefixed availability macros, derived from
                 AvailabilityMacros.h

                 This header enables a developer to specify build time
                 constraints on what Mac OS X versions the resulting
                 application will be run.  There are two bounds a developer
                 can specify:
                 
                      __MAC_OS_X_VERSION_MIN_REQUIRED
                      __MAC_OS_X_VERSION_MAX_ALLOWED
                      
                The lower bound controls which calls to OS functions will 
                be weak-importing (allowed to be unresolved at launch time).
                The upper bound controls which OS functionality, if used,
                will result in a compiler error because that functionality is
                not available on on any OS is the specifed range.
                
                For example, suppose an application is compiled with:
                
                      __MAC_OS_X_VERSION_MIN_REQUIRED = __MAC_OS_X_VERSION_10_2
                      __MAC_OS_X_VERSION_MAX_ALLOWED  = __MAC_OS_X_VERSION_10_3
                     
                and an OS header contains:
                
                     extern void funcA(void) __AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER;
                     extern void funcB(void) __AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_2;
                     extern void funcC(void) __AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_3;
                     extern void funcD(void) __AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER;
                     extern void funcE(void) __AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER;
                     extern void funcF(void) __AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER;
                     extern void funcG(void) __AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER;
                     
                     typedef long TypeA __DEPRECATED_IN_MAC_OS_X_VERSION_10_0_AND_LATER;
                     typedef long TypeB __DEPRECATED_IN_MAC_OS_X_VERSION_10_1_AND_LATER;
                     typedef long TypeC __DEPRECATED_IN_MAC_OS_X_VERSION_10_2_AND_LATER;
                     typedef long TypeD __DEPRECATED_IN_MAC_OS_X_VERSION_10_3_AND_LATER;
                     typedef long TypeE __DEPRECATED_IN_MAC_OS_X_VERSION_10_4_AND_LATER;

                Any application code which uses these declarations will get the following:
                
                                compile         link          run 
                                -------         ------        -------
                     funcA:     normal          normal        normal
                     funcB:     warning         normal        normal
                     funcC:     normal          normal        normal
                     funcD:     normal          normal        normal
                     funcE:     normal          normal        normal
                     funcF:     normal          weak          on 10.3 normal, on 10.2 (&funcF == NULL)
                     funcG:     error           error         n/a
                     typeA:     warning
                     typeB:     warning
                     typeC:     warning
                     typeD:     normal
                     typeE:     normal
                  
  
*/




/*
 * Set up standard Mac OS X versions
 */
# 80 "/usr/include/available.h" 3 4
/* 
 * If min OS not specified, assume 10.1
 * Note: gcc driver may set _ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED_ based on MACOSX_DEPLOYMENT_TARGET environment variable
 */
# 96 "/usr/include/available.h" 3 4
/*
 * if max OS not specified, assume largerof(10.5, min)
 */
# 107 "/usr/include/available.h" 3 4
/*
 * Error on bad values
 */







/*
 * only certain compilers support __attribute__((weak_import))
 */
# 128 "/usr/include/available.h" 3 4
/*
 * only certain compilers support __attribute__((deprecated))
 */






/*
 * only certain compilers support __attribute__((unavailable))
 */
# 148 "/usr/include/available.h" 3 4
/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER
 * 
 * Used on functions introduced in Mac OS X 10.0 
 */


/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED
 * 
 * Used on functions introduced in Mac OS X 10.0, 
 * and deprecated in Mac OS X 10.0
 */


/*
 * __DEPRECATED_IN_MAC_OS_X_VERSION_10_0_AND_LATER
 * 
 * Used on types deprecated in Mac OS X 10.0 
 */







/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER
 * 
 * Used on declarations introduced in Mac OS X 10.1 
 */
# 188 "/usr/include/available.h" 3 4
/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in Mac OS X 10.1, 
 * and deprecated in Mac OS X 10.1
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_1
 * 
 * Used on declarations introduced in Mac OS X 10.0, 
 * but later deprecated in Mac OS X 10.1
 */






/*
 * __DEPRECATED_IN_MAC_OS_X_VERSION_10_1_AND_LATER
 * 
 * Used on types deprecated in Mac OS X 10.1 
 */
# 229 "/usr/include/available.h" 3 4
/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER
 * 
 * Used on declarations introduced in Mac OS X 10.2 
 */
# 242 "/usr/include/available.h" 3 4
/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in Mac OS X 10.2, 
 * and deprecated in Mac OS X 10.2
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_2
 * 
 * Used on declarations introduced in Mac OS X 10.0, 
 * but later deprecated in Mac OS X 10.2
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_2
 * 
 * Used on declarations introduced in Mac OS X 10.1, 
 * but later deprecated in Mac OS X 10.2
 */






/*
 * __DEPRECATED_IN_MAC_OS_X_VERSION_10_2_AND_LATER
 * 
 * Used on types deprecated in Mac OS X 10.2 
 */
# 293 "/usr/include/available.h" 3 4
/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER
 * 
 * Used on declarations introduced in Mac OS X 10.3 
 */
# 306 "/usr/include/available.h" 3 4
/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in Mac OS X 10.3, 
 * and deprecated in Mac OS X 10.3
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_3
 * 
 * Used on declarations introduced in Mac OS X 10.0, 
 * but later deprecated in Mac OS X 10.3
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_3
 * 
 * Used on declarations introduced in Mac OS X 10.1, 
 * but later deprecated in Mac OS X 10.3
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_3
 * 
 * Used on declarations introduced in Mac OS X 10.2, 
 * but later deprecated in Mac OS X 10.3
 */






/*
 * __DEPRECATED_IN_MAC_OS_X_VERSION_10_3_AND_LATER
 * 
 * Used on types deprecated in Mac OS X 10.3 
 */
# 370 "/usr/include/available.h" 3 4
/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER
 * 
 * Used on declarations introduced in Mac OS X 10.4 
 */
# 383 "/usr/include/available.h" 3 4
/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in Mac OS X 10.4, 
 * and deprecated in Mac OS X 10.4
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_4
 * 
 * Used on declarations introduced in Mac OS X 10.0, 
 * but later deprecated in Mac OS X 10.4
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_4
 * 
 * Used on declarations introduced in Mac OS X 10.1, 
 * but later deprecated in Mac OS X 10.4
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_4
 * 
 * Used on declarations introduced in Mac OS X 10.2, 
 * but later deprecated in Mac OS X 10.4
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_4
 * 
 * Used on declarations introduced in Mac OS X 10.3, 
 * but later deprecated in Mac OS X 10.4
 */






/*
 * __DEPRECATED_IN_MAC_OS_X_VERSION_10_4_AND_LATER
 * 
 * Used on types deprecated in Mac OS X 10.4 
 */
# 458 "/usr/include/available.h" 3 4
/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER
 * 
 * Used on declarations introduced in Mac OS X 10.5 
 */
# 471 "/usr/include/available.h" 3 4
/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in Mac OS X 10.5, 
 * and deprecated in Mac OS X 10.5
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_0_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_5
 * 
 * Used on declarations introduced in Mac OS X 10.0, 
 * but later deprecated in Mac OS X 10.5
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_1_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_5
 * 
 * Used on declarations introduced in Mac OS X 10.1, 
 * but later deprecated in Mac OS X 10.5
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_2_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_5
 * 
 * Used on declarations introduced in Mac OS X 10.2, 
 * but later deprecated in Mac OS X 10.5
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_5
 * 
 * Used on declarations introduced in Mac OS X 10.3, 
 * but later deprecated in Mac OS X 10.5
 */






/*
 * __AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_5
 * 
 * Used on declarations introduced in Mac OS X 10.4, 
 * but later deprecated in Mac OS X 10.5
 */






/*
 * __DEPRECATED_IN_MAC_OS_X_VERSION_10_5_AND_LATER
 * 
 * Used on types deprecated in Mac OS X 10.5 
 */
# 62 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
/*
 * Copyright (c) 2004 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */




# 1 "/usr/include/sys/_types.h" 1 3 4
/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */




# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 78 "/usr/include/sys/cdefs.h" 3 4
/*
 * The __CONCAT macro is used to concatenate parts of symbol names, e.g.
 * with "#define OLD(foo) __CONCAT(old,foo)", OLD(foo) produces oldfoo.
 * The __CONCAT macro is a bit tricky -- make sure you don't put spaces
 * in between its arguments.  __CONCAT can also concatenate double-quoted
 * strings produced by the __STRING macro, but this only works with ANSI C.
 */
# 129 "/usr/include/sys/cdefs.h" 3 4
/*
 * GCC1 and some versions of GCC2 declare dead (non-returning) and
 * pure (no side effects) functions using "volatile" and "const";
 * unfortunately, these then cause warnings under "-ansi -pedantic".
 * GCC2 uses a new, peculiar __attribute__((attrs)) style.  All of
 * these work for GNU C++ (modulo a slight glitch in the C++ grammar
 * in the distribution version of 2.5.5).
 */
# 156 "/usr/include/sys/cdefs.h" 3 4
/* Delete pseudo-keywords wherever they are not available or needed. */
# 167 "/usr/include/sys/cdefs.h" 3 4
/*
 * GCC 2.95 provides `__restrict' as an extension to C90 to support the
 * C99-specific `restrict' type qualifier.  We happen to use `__restrict' as
 * a way to define the `restrict' type qualifier without disturbing older
 * software that is unaware of C99 keywords.
 */
# 181 "/usr/include/sys/cdefs.h" 3 4
/*
 * Compiler-dependent macros to declare that functions take printf-like
 * or scanf-like arguments.  They are null except for versions of gcc
 * that are known to support the features properly.  Functions declared
 * with these attributes will cause compilation warnings if there is a
 * mismatch between the format string and subsequent function parameter
 * types.
 */
# 217 "/usr/include/sys/cdefs.h" 3 4
/*
 * COMPILATION ENVIRONMENTS
 *
 * DEFAULT	By default newly complied code will get POSIX APIs plus
 *		Apple API extensions in scope.
 *
 *		Most users will use this compilation environment to avoid
 *		behavioural differences between 32 and 64 bit code.
 *
 * LEGACY	Defining _NONSTD_SOURCE will get pre-POSIX APIs plus Apple
 *		API extensions in scope.
 *
 *		This is generally equivalent to the Tiger release compilation
 *		environment, except that it cannot be applied to 64 bit code;
 *		its use is discouraged.
 *
 *		We expect this environment to be deprecated in the future.
 *
 * STRICT	Defining _POSIX_C_SOURCE or _XOPEN_SOURCE restricts the
 *		available APIs to exactly the set of APIs defined by the
 *		corresponding standard, based on the value defined.
 *
 *		A correct, portable definition for _POSIX_C_SOURCE is 200112L.
 *		A correct, portable definition for _XOPEN_SOURCE is 600L.
 *
 *		Apple API extensions are not visible in this environment,
 *		which can cause Apple specific code to fail to compile,
 *		or behave incorrectly if prototypes are not in scope or
 *		warnings about missing prototypes are not enabled or ignored.
 *
 * In any compilation environment, for correct symbol resolution to occur,
 * function prototypes must be in scope.  It is recommended that all Apple
 * tools users add etiher the "-Wall" or "-Wimplicit-function-declaration"
 * compiler flags to their projects to be warned when a function is being
 * used without a prototype in scope.
 */

/*
 * The __DARWIN_ALIAS macros are used to do symbol renaming; they allow
 * legacy code to use the old symbol, thus maintiang binary compatability
 * while new code can use a standards compliant version of the same function.
 *
 * __DARWIN_ALIAS is used by itself if the function signature has not
 * changed, it is used along with a #ifdef check for __DARWIN_UNIX03
 * if the signature has changed.  Because the __LP64__ enviroment
 * only supports UNIX03 sementics it causes __DARWIN_UNIX03 to be
 * defined, but causes __DARWIN_ALIAS to do no symbol mangling.
 *
 * As a special case, when XCode is used to target a specific version of the
 * OS, the manifest constant __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
 * will be defined by the compiler, with the digits representing major version
 * time 100 + minor version times 10 (e.g. 10.5 := 1050).  If we are targetting
 * pre-10.5, and it is the default compilation environment, revert the
 * compilation environment to pre-__DARWIN_UNIX03.
 */
# 311 "/usr/include/sys/cdefs.h" 3 4
/*
 * symbol suffixes used for symbol versioning
 */
# 351 "/usr/include/sys/cdefs.h" 3 4
/*
 * symbol versioning macros
 */
# 369 "/usr/include/sys/cdefs.h" 3 4
/*
 * POSIX.1 requires that the macros we test be defined before any standard
 * header file is included.  This permits us to convert values for feature
 * testing, as necessary, using only _POSIX_C_SOURCE.
 *
 * Here's a quick run-down of the versions:
 *  defined(_POSIX_SOURCE)		1003.1-1988
 *  _POSIX_C_SOURCE == 1L		1003.1-1990
 *  _POSIX_C_SOURCE == 2L		1003.2-1992 C Language Binding Option
 *  _POSIX_C_SOURCE == 199309L		1003.1b-1993
 *  _POSIX_C_SOURCE == 199506L		1003.1c-1995, 1003.1i-1995,
 *					and the omnibus ISO/IEC 9945-1: 1996
 *  _POSIX_C_SOURCE == 200112L		1003.1-2001
 *
 * In addition, the X/Open Portability Guide, which is now the Single UNIX
 * Specification, defines a feature-test macro which indicates the version of
 * that specification, and which subsumes _POSIX_C_SOURCE.
 */

/* Deal with IEEE Std. 1003.1-1990, in which _POSIX_C_SOURCE == 1L. */





/* Deal with IEEE Std. 1003.2-1992, in which _POSIX_C_SOURCE == 2L. */





/* Deal with various X/Open Portability Guides and Single UNIX Spec. */
# 411 "/usr/include/sys/cdefs.h" 3 4
/*
 * Deal with all versions of POSIX.  The ordering relative to the tests above is
 * important.
 */




/*
 * long long is not supported in c89 (__STRICT_ANSI__), but g++ -ansi and
 * c99 still want long longs.  While not perfect, we allow long longs for
 * g++.
 */




/*
 * Long double compatibility macro allow selecting variant symbols based
 * on the old (compatible) 64-bit long doubles, or the new 128-bit
 * long doubles.  This applies only to ppc; i386 already has long double
 * support, while ppc64 doesn't have any backwards history.
 */
# 457 "/usr/include/sys/cdefs.h" 3 4
/*
 * Deprecation macro
 */






/*****************************************
 *  Public darwin-specific feature macros
 *****************************************/

/*
 * _DARWIN_FEATURE_LONG_DOUBLE_IS_DOUBLE indicates when the long double type
 * is the same as the double type (ppc only)
 */




/*
 * _DARWIN_FEATURE_UNIX_CONFORMANCE indicates whether UNIX conformance is on,
 * and specifies the conformance level (3 is SUSv3)
 */




/*
 * _DARWIN_FEATURE_64_BIT_INODE indicates that the ino_t type is 64-bit, and
 * structures modified for 64-bit inodes (like struct stat) will be used.
 */
# 33 "/usr/include/sys/_types.h" 2 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */






# 1 "/usr/include/i386/_types.h" 1 3 4
/*
 * Copyright (c) 2000-2003 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



/*
 * This header file contains integer types.  It's intended to also contain
 * flotaing point and other arithmetic types, as needed, later.
 */


typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;

/*
 * The rune type below is declared to be an ``int'' instead of the more natural
 * ``unsigned long'' or ``long''.  Two things are happening here.  It is not
 * unsigned so that EOF (-1) can be naturally assigned to it and used.  Also,
 * it looks like 10646 will be a 31 bit standard.  This means that if your
 * ints cannot hold 32 bits, you will be in trouble.  The reason an int was
 * chosen over a long is that the is*() and to*() routines take ints (says
 * ANSI C), but they use __darwin_ct_rune_t instead of int.  By changing it
 * here, you lose a bit of ANSI conformance, but your programs will still
 * work.
 *
 * NOTE: rune_t is not covered by ANSI nor other standards, and should not
 * be instantiated outside of lib/libc/locale.  Use wchar_t.  wchar_t and
 * rune_t must be the same type.  Also wint_t must be no narrower than
 * wchar_t, and should also be able to hold all members of the largest
 * character set plus one extra value (WEOF). wint_t must be at least 16 bits.
 */

typedef int __darwin_ct_rune_t; /* ct_rune_t */

/*
 * mbstate_t is an opaque object to keep conversion state, during multibyte
 * stream conversions.  The content must not be referenced by user programs.
 */
typedef union {
 char __mbstate8[128];
 long long _mbstateL; /* for alignment */
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t; /* mbstate_t */


typedef int __darwin_ptrdiff_t; /* ptr1 - ptr2 */





typedef long unsigned int __darwin_size_t; /* sizeof() */





typedef __builtin_va_list __darwin_va_list; /* va_list */





typedef int __darwin_wchar_t; /* wchar_t */




typedef __darwin_wchar_t __darwin_rune_t; /* rune_t */


typedef int __darwin_wint_t; /* wint_t */




typedef unsigned long __darwin_clock_t; /* clock() */
typedef __uint32_t __darwin_socklen_t; /* socklen_t (duh) */
typedef long __darwin_ssize_t; /* byte count or error */
typedef long __darwin_time_t; /* time() */
# 35 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4

/* pthread opaque structures */
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *); /* Routine to call */
 void *__arg; /* Argument to pass */
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[36]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[24]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[4]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[4]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[124]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[12]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[596]; };

/*
 * Type definitions; takes common type definitions that must be used
 * in multiple header files due to [XSI], removes them from the system
 * space, and puts them in the implementation space.
 */
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t; /* total blocks */
typedef __int32_t __darwin_blksize_t; /* preferred block size */
typedef __int32_t __darwin_dev_t; /* dev_t */
typedef unsigned int __darwin_fsblkcnt_t; /* Used by statvfs and fstatvfs */
typedef unsigned int __darwin_fsfilcnt_t; /* Used by statvfs and fstatvfs */
typedef __uint32_t __darwin_gid_t; /* [???] process and group IDs */
typedef __uint32_t __darwin_id_t; /* [XSI] pid_t, uid_t, or gid_t*/
typedef __uint64_t __darwin_ino64_t; /* [???] Used for 64 bit inodes */



typedef __uint32_t __darwin_ino_t; /* [???] Used for inodes */

typedef __darwin_natural_t __darwin_mach_port_name_t; /* Used by mach */
typedef __darwin_mach_port_name_t __darwin_mach_port_t; /* Used by mach */
typedef __uint16_t __darwin_mode_t; /* [???] Some file attributes */
typedef __int64_t __darwin_off_t; /* [???] Used for file sizes */
typedef __int32_t __darwin_pid_t; /* [???] process and group IDs */
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t; /* [???] Used for pthreads */
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t; /* [???] Used for pthreads */
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t; /* [???] Used for pthreads */
typedef unsigned long __darwin_pthread_key_t; /* [???] Used for pthreads */
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t; /* [???] Used for pthreads */
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t; /* [???] Used for pthreads */
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t; /* [???] Used for pthreads */
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t; /* [???] Used for pthreads */
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t; /* [???] Used for pthreads */
typedef struct _opaque_pthread_t
   *__darwin_pthread_t; /* [???] Used for pthreads */
typedef __uint32_t __darwin_sigset_t; /* [???] signal set */
typedef __int32_t __darwin_suseconds_t; /* [???] microseconds */
typedef __uint32_t __darwin_uid_t; /* [???] user IDs */
typedef __uint32_t __darwin_useconds_t; /* [???] microseconds */
typedef unsigned char __darwin_uuid_t[16];
# 28 "/usr/include/_types.h" 2 3 4

typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;



typedef unsigned long __darwin_wctype_t;
# 64 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/wait.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1986, 1989, 1993, 1994
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)wait.h	8.2 (Berkeley) 7/10/94
 */




# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 68 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 69 "/usr/include/sys/wait.h" 2 3 4

/*
 * This file holds definitions relevent to the wait4 system call
 * and the alternate interfaces that use it (wait, wait3, waitpid).
 */

/*
 * [XSI] The type idtype_t shall be defined as an enumeration type whose
 * possible values shall include at least P_ALL, P_PID, and P_PGID.
 */
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;

/*
 * [XSI] The id_t and pid_t types shall be defined as described
 * in <sys/types.h>
 */

typedef __darwin_pid_t pid_t;




typedef __darwin_id_t id_t;



/*
 * [XSI] The siginfo_t type shall be defined as described in <signal.h>
 * [XSI] The rusage structure shall be defined as described in <sys/resource.h>
 * [XSI] Inclusion of the <sys/wait.h> header may also make visible all
 * symbols from <signal.h> and <sys/resource.h>
 *
 * NOTE:	This requirement is currently being satisfied by the direct
 *		inclusion of <sys/signal.h> and <sys/resource.h>, below.
 *
 *		Software should not depend on the exposure of anything other
 *		than the types siginfo_t and struct rusage as a result of
 *		this inclusion.  If you depend on any types or manifest
 *		values othe than siginfo_t and struct rusage from either of
 *		those files, you should explicitly include them yourself, as
 *		well, or in future releases your stware may not compile
 *		without modification.
 */
# 1 "/usr/include/sys/signal.h" 1 3 4
/*
 * Copyright (c) 2000-2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1986, 1989, 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 * (c) UNIX System Laboratories, Inc.
 * All or some portions of this file are derived from material licensed
 * to the University of California by American Telephone and Telegraph
 * Co. or Unix System Laboratories, Inc. and are reproduced herein with
 * the permission of UNIX System Laboratories, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)signal.h	8.2 (Berkeley) 1/21/94
 */




# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 73 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
/*
 * Copyright (c) 2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */






# 1 "/usr/include/i386/signal.h" 1 3 4
/*
 * Copyright (c) 2000-2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright (c) 1992 NeXT Computer, Inc.
 *
 */




# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 37 "/usr/include/i386/signal.h" 2 3 4


typedef int sig_atomic_t;



# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
/*
 * Copyright (c) 2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 44 "/usr/include/i386/signal.h" 2 3 4



/*
 * Information pushed on stack when a signal is delivered.
 * This is used by the kernel to restore state following
 * execution of the signal handler.  It is also made available
 * to the handler to allow it to properly restore state if
 * a non-standard exit is performed.
 */

# 1 "/usr/include/i386/_structs.h" 1 3 4
/*
 * Copyright (c) 2004 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
/*
 * Copyright (c) 2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 30 "/usr/include/i386/_structs.h" 2 3 4
# 56 "/usr/include/i386/signal.h" 2 3 4
# 35 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 125 "/usr/include/sys/signal.h" 3 4
/*
 * Language spec sez we must list exactly one parameter, even though we
 * actually supply three.  Ugh!
 * SIG_HOLD is chosen to avoid KERN_SIG_* values in <sys/signalvar.h>
 */
# 143 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 144 "/usr/include/sys/signal.h" 2 3 4
# 154 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
/*
 * Copyright (c) 2004-2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 30 "/usr/include/sys/_structs.h" 2 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 31 "/usr/include/sys/_structs.h" 2 3 4
# 57 "/usr/include/sys/_structs.h" 3 4
# 1 "/usr/include/machine/_structs.h" 1 3 4
/*
 * Copyright (c) 2004-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



# 1 "/usr/include/i386/_structs.h" 1 3 4
/*
 * Copyright (c) 2004 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
/*
 * Copyright (c) 2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 30 "/usr/include/i386/_structs.h" 2 3 4
# 38 "/usr/include/i386/_structs.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
/*
 * Copyright (c) 2004-2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * @OSF_COPYRIGHT@
 */




/*
 * i386 is the structure that is exported to user threads for 
 * use in status/mutate calls.  This structure should never change.
 *
 */



struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 85 "/usr/include/mach/i386/_structs.h" 3 4
/* This structure should be double-word aligned for performance */



struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






     /*inf*/ :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 141 "/usr/include/mach/i386/_structs.h" 3 4
/*
 * Status word.
 */



struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 187 "/usr/include/mach/i386/_structs.h" 3 4
/* defn of 80bit x87 FPU or MMX register  */



struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 206 "/usr/include/mach/i386/_structs.h" 3 4
/* defn of 128 bit XMM regs */



struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 222 "/usr/include/mach/i386/_structs.h" 3 4
/* 
 * Floating point state.
 */







struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw; /* x87 FPU control word */
 struct __darwin_fp_status __fpu_fsw; /* x87 FPU status word */
 __uint8_t __fpu_ftw; /* x87 FPU tag word */
 __uint8_t __fpu_rsrv1; /* reserved */
 __uint16_t __fpu_fop; /* x87 FPU Opcode */
 __uint32_t __fpu_ip; /* x87 FPU Instruction Pointer offset */
 __uint16_t __fpu_cs; /* x87 FPU Instruction Pointer Selector */
 __uint16_t __fpu_rsrv2; /* reserved */
 __uint32_t __fpu_dp; /* x87 FPU Instruction Operand(Data) Pointer offset */
 __uint16_t __fpu_ds; /* x87 FPU Instruction Operand(Data) Pointer Selector */
 __uint16_t __fpu_rsrv3; /* reserved */
 __uint32_t __fpu_mxcsr; /* MXCSR Register state */
 __uint32_t __fpu_mxcsrmask; /* MXCSR mask */
 struct __darwin_mmst_reg __fpu_stmm0; /* ST0/MM0   */
 struct __darwin_mmst_reg __fpu_stmm1; /* ST1/MM1  */
 struct __darwin_mmst_reg __fpu_stmm2; /* ST2/MM2  */
 struct __darwin_mmst_reg __fpu_stmm3; /* ST3/MM3  */
 struct __darwin_mmst_reg __fpu_stmm4; /* ST4/MM4  */
 struct __darwin_mmst_reg __fpu_stmm5; /* ST5/MM5  */
 struct __darwin_mmst_reg __fpu_stmm6; /* ST6/MM6  */
 struct __darwin_mmst_reg __fpu_stmm7; /* ST7/MM7  */
 struct __darwin_xmm_reg __fpu_xmm0; /* XMM 0  */
 struct __darwin_xmm_reg __fpu_xmm1; /* XMM 1  */
 struct __darwin_xmm_reg __fpu_xmm2; /* XMM 2  */
 struct __darwin_xmm_reg __fpu_xmm3; /* XMM 3  */
 struct __darwin_xmm_reg __fpu_xmm4; /* XMM 4  */
 struct __darwin_xmm_reg __fpu_xmm5; /* XMM 5  */
 struct __darwin_xmm_reg __fpu_xmm6; /* XMM 6  */
 struct __darwin_xmm_reg __fpu_xmm7; /* XMM 7  */
 char __fpu_rsrv4[14*16]; /* reserved */
 int __fpu_reserved1;
};
# 308 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
    unsigned int __trapno;
    unsigned int __err;
    unsigned int __faultvaddr;
};
# 326 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 352 "/usr/include/mach/i386/_structs.h" 3 4
/*
 * 64 bit versions of the above
 */



struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 413 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw; /* x87 FPU control word */
 struct __darwin_fp_status __fpu_fsw; /* x87 FPU status word */
 __uint8_t __fpu_ftw; /* x87 FPU tag word */
 __uint8_t __fpu_rsrv1; /* reserved */
 __uint16_t __fpu_fop; /* x87 FPU Opcode */

 /* x87 FPU Instruction Pointer */
 __uint32_t __fpu_ip; /* offset */
 __uint16_t __fpu_cs; /* Selector */

 __uint16_t __fpu_rsrv2; /* reserved */

 /* x87 FPU Instruction Operand(Data) Pointer */
 __uint32_t __fpu_dp; /* offset */
 __uint16_t __fpu_ds; /* Selector */

 __uint16_t __fpu_rsrv3; /* reserved */
 __uint32_t __fpu_mxcsr; /* MXCSR Register state */
 __uint32_t __fpu_mxcsrmask; /* MXCSR mask */
 struct __darwin_mmst_reg __fpu_stmm0; /* ST0/MM0   */
 struct __darwin_mmst_reg __fpu_stmm1; /* ST1/MM1  */
 struct __darwin_mmst_reg __fpu_stmm2; /* ST2/MM2  */
 struct __darwin_mmst_reg __fpu_stmm3; /* ST3/MM3  */
 struct __darwin_mmst_reg __fpu_stmm4; /* ST4/MM4  */
 struct __darwin_mmst_reg __fpu_stmm5; /* ST5/MM5  */
 struct __darwin_mmst_reg __fpu_stmm6; /* ST6/MM6  */
 struct __darwin_mmst_reg __fpu_stmm7; /* ST7/MM7  */
 struct __darwin_xmm_reg __fpu_xmm0; /* XMM 0  */
 struct __darwin_xmm_reg __fpu_xmm1; /* XMM 1  */
 struct __darwin_xmm_reg __fpu_xmm2; /* XMM 2  */
 struct __darwin_xmm_reg __fpu_xmm3; /* XMM 3  */
 struct __darwin_xmm_reg __fpu_xmm4; /* XMM 4  */
 struct __darwin_xmm_reg __fpu_xmm5; /* XMM 5  */
 struct __darwin_xmm_reg __fpu_xmm6; /* XMM 6  */
 struct __darwin_xmm_reg __fpu_xmm7; /* XMM 7  */
 struct __darwin_xmm_reg __fpu_xmm8; /* XMM 8  */
 struct __darwin_xmm_reg __fpu_xmm9; /* XMM 9  */
 struct __darwin_xmm_reg __fpu_xmm10; /* XMM 10  */
 struct __darwin_xmm_reg __fpu_xmm11; /* XMM 11 */
 struct __darwin_xmm_reg __fpu_xmm12; /* XMM 12  */
 struct __darwin_xmm_reg __fpu_xmm13; /* XMM 13  */
 struct __darwin_xmm_reg __fpu_xmm14; /* XMM 14  */
 struct __darwin_xmm_reg __fpu_xmm15; /* XMM 15  */
 char __fpu_rsrv4[6*16]; /* reserved */
 int __fpu_reserved1;
};
# 517 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    unsigned int __trapno;
    unsigned int __err;
    __uint64_t __faultvaddr;
};
# 535 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 39 "/usr/include/i386/_structs.h" 2 3 4
# 48 "/usr/include/i386/_structs.h" 3 4
struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};
# 68 "/usr/include/i386/_structs.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};
# 94 "/usr/include/i386/_structs.h" 3 4
typedef struct __darwin_mcontext32 *mcontext_t;
# 32 "/usr/include/machine/_structs.h" 2 3 4
# 58 "/usr/include/sys/_structs.h" 2 3 4
# 68 "/usr/include/sys/_structs.h" 3 4
/* Structure used in sigaltstack call. */






struct __darwin_sigaltstack
{
 void *ss_sp; /* signal stack base */
 __darwin_size_t ss_size; /* signal stack length */
 int ss_flags; /* SA_DISABLE and/or SA_ONSTACK */
};
# 128 "/usr/include/sys/_structs.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask; /* signal mask used by this context */
 struct __darwin_sigaltstack uc_stack; /* stack used by this context */
 struct __darwin_ucontext *uc_link; /* pointer to resuming context */
 __darwin_size_t uc_mcsize; /* size of the machine context passed in */
 struct __darwin_mcontext32 *uc_mcontext; /* pointer to machine specific context */



};
# 218 "/usr/include/sys/_structs.h" 3 4
typedef struct __darwin_sigaltstack stack_t; /* [???] signal stack */





/* user context */


typedef struct __darwin_ucontext ucontext_t; /* [???] user context */
# 155 "/usr/include/sys/signal.h" 2 3 4
# 163 "/usr/include/sys/signal.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;




typedef __darwin_sigset_t sigset_t;
# 178 "/usr/include/sys/signal.h" 3 4
typedef __darwin_uid_t uid_t;


union sigval {
 /* Members as suggested by Annex C of POSIX 1003.1b. */
 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify; /* Notification type */
 int sigev_signo; /* Signal number */
 union sigval sigev_value; /* Signal value */
 void (*sigev_notify_function)(union sigval); /* Notification function */
 pthread_attr_t *sigev_notify_attributes; /* Notification attributes */
};


typedef struct __siginfo {
 int si_signo; /* signal number */
 int si_errno; /* errno association */
 int si_code; /* signal code */
 pid_t si_pid; /* sending process */
 uid_t si_uid; /* sender's ruid */
 int si_status; /* exit value */
 void *si_addr; /* faulting instruction */
 union sigval si_value; /* signal value */
 long si_band; /* band event for SIGPOLL */
 unsigned long __pad[7]; /* Reserved for Future Use */
} siginfo_t;


/* 
 * When the signal is SIGILL or SIGFPE, si_addr contains the address of 
 * the faulting instruction.
 * When the signal is SIGSEGV or SIGBUS, si_addr contains the address of 
 * the faulting memory reference. Although for x86 there are cases of SIGSEGV
 * for which si_addr cannot be determined and is NULL. 
 * If the signal is SIGCHLD, the si_pid field will contain the child process ID,
 *  si_status contains the exit value or signal and
 *  si_uid contains the real user ID of the process that sent the signal.
 */

/* Values for si_code */

/* Codes for SIGILL */
# 240 "/usr/include/sys/signal.h" 3 4
/* Codes for SIGFPE */
# 253 "/usr/include/sys/signal.h" 3 4
/* Codes for SIGSEGV */






/* Codes for SIGBUS */







/* Codes for SIGTRAP */



/* Codes for SIGCHLD */
# 283 "/usr/include/sys/signal.h" 3 4
/* Codes for SIGPOLL */







/* union for signal handlers */
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};

/* Signal vector template for Kernel user boundary */
struct __sigaction {
 union __sigaction_u __sigaction_u; /* signal handler */
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask; /* signal mask to apply */
 int sa_flags; /* see signal options below */
};

/*
 * Signal vector "template" used in sigaction call.
 */
struct sigaction {
 union __sigaction_u __sigaction_u; /* signal handler */
 sigset_t sa_mask; /* signal mask to apply */
 int sa_flags; /* see signal options below */
};



/* if SA_SIGINFO is set, sa_sigaction is to be used instead of sa_handler. */
# 330 "/usr/include/sys/signal.h" 3 4
/* This will provide 64bit register set in a 32bit user address space */



/* the following are the only bits we support from user space, the 
 * rest are for kernel use only.
 */


/*
 * Flags for sigprocmask:
 */




/* POSIX 1003.1b required values. */







typedef void (*sig_t)(int); /* type of signal function */


/*
 * Structure used in sigaltstack call.
 */







/*
 * 4.3 compatibility:
 * Signal vector "template" used in sigvec call.
 */
struct sigvec {
 void (*sv_handler)(int); /* signal handler */
 int sv_mask; /* signal mask to apply */
 int sv_flags; /* see signal options below */
};
# 387 "/usr/include/sys/signal.h" 3 4
/*
 * Structure used in sigstack call.
 */
struct sigstack {
 char *ss_sp; /* signal stack pointer */
 int ss_onstack; /* current status */
};


/*
 * Macro for converting signal number to a mask suitable for
 * sigblock().
 */
# 408 "/usr/include/sys/signal.h" 3 4
/*
 * For historical reasons; programs expect signal's return value to be
 * defined by <sys/signal.h>.
 */
extern "C" {
void (*signal(int, void (*)(int)))(int);
}
# 117 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
/*
 * Copyright (c) 2000-2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)resource.h	8.2 (Berkeley) 1/4/94
 */




# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
/*
 * Copyright (c) 2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 68 "/usr/include/sys/resource.h" 2 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 69 "/usr/include/sys/resource.h" 2 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 70 "/usr/include/sys/resource.h" 2 3 4


/* [XSI] The timeval structure shall be defined as described in
 * <sys/time.h>
 */

# 1 "/usr/include/sys/_structs.h" 1 3 4
/*
 * Copyright (c) 2004-2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 30 "/usr/include/sys/_structs.h" 2 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 31 "/usr/include/sys/_structs.h" 2 3 4
# 100 "/usr/include/sys/_structs.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec; /* seconds */
 __darwin_suseconds_t tv_usec; /* and microseconds */
};
# 77 "/usr/include/sys/resource.h" 2 3 4

/* The id_t type shall be defined as described in <sys/types.h> */






/*
 * Resource limit type (low 63 bits, excluding the sign bit)
 */
typedef __uint64_t rlim_t;


/*****
 * PRIORITY
 */

/*
 * Possible values of the first parameter to getpriority()/setpriority(),
 * used to indicate the type of the second parameter.
 */







/*
 * Range limitations for the value of the third parameter to setpriority().
 */



/* use PRIO_DARWIN_BG to set the current thread into "background" state
 * which lowers CPU, disk IO, and networking priorites until thread terminates
 * or "background" state is revoked
 */






/*****
 * RESOURCE USAGE
 */

/*
 * Possible values of the first parameter to getrusage(), used to indicate
 * the scope of the information to be returned.
 */



/*
 * A structure representing an accounting of resource utilization.  The
 * address of an instance of this structure is the second parameter to
 * getrusage().
 *
 * Note: All values other than ru_utime and ru_stime are implementaiton
 *       defined and subject to change in a future release.  Their use
 *       is discouraged for standards compliant programs.
 */
struct rusage {
 struct timeval ru_utime; /* user time used (PL) */
 struct timeval ru_stime; /* system time used (PL) */



 /*
	 * Informational aliases for source compatibility with programs
	 * that need more information than that provided by standards,
	 * and which do not mind being OS-dependent.
	 */
 long ru_maxrss; /* max resident set size (PL) */

 long ru_ixrss; /* integral shared memory size (NU) */
 long ru_idrss; /* integral unshared data (NU)  */
 long ru_isrss; /* integral unshared stack (NU) */
 long ru_minflt; /* page reclaims (NU) */
 long ru_majflt; /* page faults (NU) */
 long ru_nswap; /* swaps (NU) */
 long ru_inblock; /* block input operations (atomic) */
 long ru_oublock; /* block output operations (atomic) */
 long ru_msgsnd; /* messages sent (atomic) */
 long ru_msgrcv; /* messages received (atomic) */
 long ru_nsignals; /* signals received (atomic) */
 long ru_nvcsw; /* voluntary context switches (atomic) */
 long ru_nivcsw; /* involuntary " */


};




/*****
 * RESOURCE LIMITS
 */

/*
 * Symbolic constants for resource limits; since all limits are representable
 * as a type rlim_t, we are permitted to define RLIM_SAVED_* in terms of
 * RLIM_INFINITY.
 */




/*
 * Possible values of the first parameter to getrlimit()/setrlimit(), to
 * indicate for which resource the operation is being performed.
 */
# 209 "/usr/include/sys/resource.h" 3 4
/*
 * A structure representing a resource limit.  The address of an instance
 * of this structure is the second parameter to getrlimit()/setrlimit().
 */
struct rlimit {
 rlim_t rlim_cur; /* current (soft) limit */
 rlim_t rlim_max; /* maximum value for rlim_cur */
};


/* I/O type */


/* scope */



/* I/O Priority */
# 235 "/usr/include/sys/resource.h" 3 4
extern "C" {
int getpriority(int, id_t);

int getiopolicy_np(int, int);

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" "$UNIX2003");
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int);

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" "$UNIX2003");
}
# 118 "/usr/include/sys/wait.h" 2 3 4

/*
 * Option bits for the third argument of wait4.  WNOHANG causes the
 * wait to not hang if there are no stopped or terminated processes, rather
 * returning an error indication in this case (pid==0).  WUNTRACED
 * indicates that the caller should receive status about untraced children
 * which stop due to signals.  If children are stopped and a wait without
 * this option is done, it is as though they were still running... nothing
 * about them is returned.
 */



/*
 * Macros to test the exit status returned by wait
 * and extract the relevant values.
 */







/* These macros are permited, as they are in the implementation namespace */



/*
 * [XSI] The <sys/wait.h> header shall define the following macros for
 * analysis of process status values
 */





/* 0x13 == SIGCONT */
# 169 "/usr/include/sys/wait.h" 3 4
/*
 * [XSI] The following symbolic constants shall be defined as possible
 * values for the fourth argument to waitid().
 */
/* WNOHANG already defined for wait4() */
/* WUNTRACED defined for wait4() but not for waitid() */


/* waitid() parameter */







/* POSIX extensions and 4.2/4.3 compatability: */

/*
 * Tokens for special values of the "pid" parameter to wait4.
 */



# 1 "/usr/include/machine/endian.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright 1995 NeXT Computer, Inc. All rights reserved.
 */






# 1 "/usr/include/i386/endian.h" 1 3 4
/*
 * Copyright (c) 2000-2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright 1995 NeXT Computer, Inc. All rights reserved.
 */
/*
 * Copyright (c) 1987, 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)endian.h	8.1 (Berkeley) 6/11/93
 */




# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 70 "/usr/include/i386/endian.h" 2 3 4
/*
 * Define _NOQUAD if the compiler does NOT support 64-bit integers.
 */
/* #define _NOQUAD */

/*
 * Define the order of 32-bit words in 64-bit words.
 */



/*
 * Definitions for byte order, according to byte significance from low
 * address to high.
 */
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
/*
 * Copyright (c) 2004, 2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

/*
 * Copyright (c) 1995 NeXT Computer, Inc. All rights reserved.
 * Copyright (c) 2000-2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright (c) 1987, 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */




# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 94 "/usr/include/sys/_endian.h" 2 3 4

/*
 * Macros for network/external number representation conversion.
 */
# 124 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
/*
 * Copyright (c) 2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */




/*
 * This header is normally included from <libkern/OSByteOrder.h>.  However,
 * <sys/_endian.h> also includes this in the case of little-endian
 * architectures, so that we can map OSByteOrder routines to the hton* and ntoh*
 * macros.  This results in the asymmetry below; we only include
 * <libkern/arch/_OSByteOrder.h> for little-endian architectures.
 */

# 1 "/usr/include/sys/_types.h" 1 3 4
/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 41 "/usr/include/libkern/_OSByteOrder.h" 2 3 4

/* Macros for swapping constant values in the preprocessing stage. */
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
/*
 * Copyright (c) 2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 42 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
/* Generic byte swapping functions. */

static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((_data << 8) | (_data >> 8));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{
    __asm__ ("bswap   %0" : "+r" (_data));
    return _data;
}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    __asm__ ("bswap   %%eax\n\t"
             "bswap   %%edx\n\t"
             "xchgl   %%eax, %%edx"
             : "+A" (_data));
    return _data;
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 125 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 38 "/usr/include/machine/endian.h" 2 3 4
# 194 "/usr/include/sys/wait.h" 2 3 4

/*
 * Deprecated:
 * Structure of the information in the status word returned by wait4.
 * If w_stopval==_WSTOPPED, then the second structure describes
 * the information returned, else the first.
 */
union wait {
 int w_status; /* used in syscall */
 /*
	 * Terminated process status.
	 */
 struct {

  unsigned int w_Termsig:7, /* termination signal */
    w_Coredump:1, /* core dump indicator */
    w_Retcode:8, /* exit code if w_termsig==0 */
    w_Filler:16; /* upper bits filler */







 } w_T;
 /*
	 * Stopped process status.  Returned
	 * only for traced children unless requested
	 * with the WUNTRACED option bit.
	 */
 struct {

  unsigned int w_Stopval:8, /* == W_STOPPED if stopped */
    w_Stopsig:8, /* signal that stopped us */
    w_Filler:16; /* upper bits filler */






 } w_S;
};
# 254 "/usr/include/sys/wait.h" 3 4
extern "C" {
pid_t wait(int *) __asm("_" "wait" /* nothing */ "$UNIX2003");
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" /* nothing */ "$UNIX2003");

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" /* nothing */ "$UNIX2003");


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);

}
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
/*
 * Copyright (c) 2003 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */




# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 28 "/usr/include/alloca.h" 2 3 4
# 1 "/usr/include/_types.h" 1 3 4
/*
 * Copyright (c) 2004 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 29 "/usr/include/alloca.h" 2 3 4






extern "C" {
void *alloca(size_t); /* built-in for gcc */
}


/* built-in for gcc 3 */
# 68 "/usr/include/stdlib.h" 2 3 4
# 81 "/usr/include/stdlib.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;




typedef __darwin_rune_t rune_t;
# 97 "/usr/include/stdlib.h" 3 4
typedef struct {
 int quot; /* quotient */
 int rem; /* remainder */
} div_t;

typedef struct {
 long quot; /* quotient */
 long rem; /* remainder */
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 134 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 144 "/usr/include/stdlib.h" 3 4
extern "C" {
void abort(void) __attribute__((__noreturn__));
int abs(int) __attribute__((__const__));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((__const__));
void exit(int) __attribute__((__noreturn__));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((__const__));
ldiv_t ldiv(long, long) __attribute__((__const__));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * , const char * , size_t);
int mbtowc(wchar_t * , const char * , size_t);
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" "$UNIX2003");
float strtof(const char *, char **) __asm("_" "strtof" "$UNIX2003");
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **) /* nothing */;

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" /* nothing */ "$UNIX2003");
size_t wcstombs(char * , const wchar_t * , size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *, int *); /* LEGACY */
double erand48(unsigned short[3]);
char *fcvt(double, int, int *, int *); /* LEGACY */
char *gcvt(double, int, char *); /* LEGACY */
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t); /* no  __DARWIN_ALIAS needed */



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" "$UNIX2003");
long random(void);
int rand_r(unsigned *);

char *realpath(const char * , char * ) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" "$UNIX2003");

void setkey(const char *) __asm("_" "setkey" "$UNIX2003");



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" "$UNIX2003");






# 1 "/usr/include/machine/types.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright 1995 NeXT Computer, Inc. All rights reserved.
 */






# 1 "/usr/include/i386/types.h" 1 3 4
/*
 * Copyright (c) 2000-2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright 1995 NeXT Computer, Inc. All rights reserved.
 */
/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)types.h	8.3 (Berkeley) 1/5/94
 */





# 1 "/usr/include/i386/_types.h" 1 3 4
/*
 * Copyright (c) 2000-2003 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 71 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 72 "/usr/include/i386/types.h" 2 3 4
/*
 * Basic integral types.  Omit the typedef if
 * not possible for a machine/compiler combination.
 */


typedef signed char int8_t;

typedef unsigned char u_int8_t;


typedef short int16_t;

typedef unsigned short u_int16_t;


typedef int int32_t;

typedef unsigned int u_int32_t;


typedef long long int64_t;

typedef unsigned long long u_int64_t;




typedef int32_t register_t;




typedef __darwin_intptr_t intptr_t;



typedef unsigned long int uintptr_t;



/* These types are used for reserving the largest possible size. */
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;




/* This defines the size of syscall arguments after copying into the kernel: */
typedef u_int64_t syscall_arg_t;
# 38 "/usr/include/machine/types.h" 2 3 4
# 255 "/usr/include/stdlib.h" 2 3 4


typedef __darwin_dev_t dev_t;




typedef __darwin_mode_t mode_t;



u_int32_t
  arc4random(void);
void arc4random_addrandom(unsigned char *dat, int datlen);
void arc4random_stir(void);

  /* getcap(3) functions */
char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((deprecated));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));
void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg; /* getsubopt(3) external variable */
void *valloc(size_t);


/* Poison the following routines if -fshort-wchar is set */



}
# 58 "/usr/include/c++/4.0.0/cstdlib" 2 3


// Get rid of those macros defined in <stdlib.h> in lieu of real functions.
# 90 "/usr/include/c++/4.0.0/cstdlib" 3
namespace std
{

  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;

  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;

  using ::qsort;
  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;

  using ::wcstombs;
  using ::wctomb;


  inline long
  abs(long __i) { return labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }
# 143 "/usr/include/c++/4.0.0/cstdlib" 3
}
# 156 "/usr/include/c++/4.0.0/cstdlib" 3
namespace __gnu_cxx
{

  using ::lldiv_t;





  using ::_Exit;


  inline long long
  abs(long long __x) { return __x >= 0 ? __x : -__x; }

  inline long long
  llabs(long long __x) { return __x >= 0 ? __x : -__x; }


  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  inline lldiv_t
  lldiv(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }
# 192 "/usr/include/c++/4.0.0/cstdlib" 3
  using ::atoll;
  using ::strtoll;
  using ::strtoull;

  using ::strtof;
  using ::strtold;
}

namespace std
{

  using __gnu_cxx::lldiv_t;

  using __gnu_cxx::_Exit;
  using __gnu_cxx::abs;
  using __gnu_cxx::llabs;

  using __gnu_cxx::div;
  using __gnu_cxx::lldiv;

  using __gnu_cxx::atoll;
  using __gnu_cxx::strtof;
  using __gnu_cxx::strtoll;
  using __gnu_cxx::strtoull;
  using __gnu_cxx::strtold;
}
# 24 "rxvtutil.C" 2
# 1 "/usr/include/c++/4.0.0/cstring" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

//
// ISO C++ 14882: 20.4.6  C library
//

/** @file cstring
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c string.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */




       
# 48 "/usr/include/c++/4.0.0/cstring" 3

# 1 "/usr/include/c++/4.0.0/cstddef" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997, 1998, 1999, 2000, 2002 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

//
// ISO C++ 14882: 18.1  Types
//

/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */
# 50 "/usr/include/c++/4.0.0/cstring" 2 3

# 1 "/usr/include/string.h" 1 3 4
/*
 * Copyright (c) 2000, 2007 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)string.h	8.1 (Berkeley) 6/2/93
 */



# 1 "/usr/include/_types.h" 1 3 4
/*
 * Copyright (c) 2004 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 61 "/usr/include/string.h" 2 3 4
# 70 "/usr/include/string.h" 3 4
typedef __darwin_ssize_t ssize_t;







# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 79 "/usr/include/string.h" 2 3 4

extern "C" {
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);

char *stpcpy(char *, const char *);
char *strcasestr(const char *, const char *);

char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror" "$UNIX2003");
int strerror_r(int, char *, size_t);
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);

char *strnstr(const char *, const char *, size_t);

char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);

/* Nonstandard routines */

void *memccpy(void *, const void *, int, size_t);
char *strtok_r(char *, const char *, char **);
char *strdup(const char *);

int bcmp(const void *, const void *, size_t);
void bcopy(const void *, void *, size_t);
void bzero(void *, size_t);
int ffs(int);
int ffsl(long);
int fls(int);
int flsl(long);
char *index(const char *, int);
void memset_pattern4(void *, const void *, size_t);
void memset_pattern8(void *, const void *, size_t);
void memset_pattern16(void *, const void *, size_t);
char *rindex(const char *, int);
int strcasecmp(const char *, const char *);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
int strncasecmp(const char *, const char *, size_t);
char *strsep(char **, const char *);
char *strsignal(int sig);
void swab(const void * , void * , ssize_t);


}
# 52 "/usr/include/c++/4.0.0/cstring" 2 3

// Get rid of those macros defined in <string.h> in lieu of real functions.
# 77 "/usr/include/c++/4.0.0/cstring" 3
namespace std
{
  using ::memcpy;
  using ::memmove;
  using ::strcpy;
  using ::strncpy;
  using ::strcat;
  using ::strncat;
  using ::memcmp;
  using ::strcmp;
  using ::strcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::strspn;
  using ::strtok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr;

  inline void*
  memchr(void* __p, int __c, size_t __n)
  { return memchr(const_cast<const void*>(__p), __c, __n); }

  using ::strchr;

  inline char*
  strchr(char* __s1, int __n)
  { return __builtin_strchr(const_cast<const char*>(__s1), __n); }

  using ::strpbrk;

  inline char*
  strpbrk(char* __s1, const char* __s2)
  { return __builtin_strpbrk(const_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  strrchr(char* __s1, int __n)
  { return __builtin_strrchr(const_cast<const char*>(__s1), __n); }

  using ::strstr;

  inline char*
  strstr(char* __s1, const char* __s2)
  { return __builtin_strstr(const_cast<const char*>(__s1), __s2); }
}
# 25 "rxvtutil.C" 2
# 1 "/usr/include/inttypes.h" 1 3 4
/*
 * Copyright (c) 2000, 2001, 2002, 2003, 2004 Apple Computer, Inc.
 * All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 *
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */

/*
 * <inttypes.h> -- Standard C header, defined in ISO/IEC 9899:1999
 * (aka "C99"), section 7.8.   This defines format string conversion
 * specifiers suitable for use within arguments to fprintf and fscanf
 * and their ilk.
 */

/* "C++ implementations should define these macros only when
 *  __STDC_FORMAT_MACROS is defined before <inttypes.h> is included."
 */
# 253 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 254 "/usr/include/inttypes.h" 2 3 4
# 1 "/usr/include/_types.h" 1 3 4
/*
 * Copyright (c) 2004 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 255 "/usr/include/inttypes.h" 2 3 4
# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdint.h" 1 3 4
/*
 * Copyright (c) 2000, 2001, 2003, 2004 Apple Computer, Inc.
 * All rights reserved.
 */
# 15 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdint.h" 3 4
/* from ISO/IEC 988:1999 spec */

/* 7.18.1.1 Exact-width integer types */
# 40 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdint.h" 3 4
typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long long uint64_t;


/* 7.18.1.2 Minimum-width integer types */
typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;


/* 7.18.1.3 Fastest-width integer types */
typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;


/* 7.18.1.4 Integer types capable of holding object pointers */
# 93 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdint.h" 3 4
/* 7.18.1.5 Greatest-width integer types */



typedef long long int intmax_t;
# 106 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdint.h" 3 4
typedef long long unsigned int uintmax_t;





/* "C++ implementations should define these macros only when
 *  __STDC_LIMIT_MACROS is defined before <stdint.h> is included."
 * In other words, if C++, then __STDC_LIMIT_MACROS enables the
 * macros below.  (Note that there also exists a different enabling
 * macro (__STDC_CONSTANT_MACROS) for the last few, below.)
 */
# 250 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdint.h" 3 4
/* "C++ implementations should define these macros only when
 *  __STDC_CONSTANT_MACROS is defined before <stdint.h> is included."
 */
# 256 "/usr/include/inttypes.h" 2 3 4


  /* Translator is not ISO/IEC 9899:1999-compliant. */






extern "C" {

  /* 7.8.2.1 */
  extern intmax_t imaxabs(intmax_t j);

  /* 7.8.2.2 */
  typedef struct {
        intmax_t quot;
        intmax_t rem;
  } imaxdiv_t;

  extern imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom);

  /* 7.8.2.3 */
  extern intmax_t strtoimax(const char * nptr, char ** endptr, int base);
  extern uintmax_t strtoumax(const char * nptr, char ** endptr, int base);
# 289 "/usr/include/inttypes.h" 3 4
  /* 7.8.2.4 */
  extern intmax_t wcstoimax(const wchar_t * nptr, wchar_t ** endptr, int base);
  extern uintmax_t wcstoumax(const wchar_t * nptr, wchar_t ** endptr, int base);

/* Poison the following routines if -fshort-wchar is set */




}





/*
   No need to #undef the __*_{8,64}_LENGTH_MODIFIER__ macros;
   in fact, you can't #undef them, because later uses of any of
   their dependents will *not* then do the intended substitution.
   Expansion of a #define like this one:

        #define x IDENT y

   uses the cpp value of IDENT at the location where x is *expanded*,
   not where it is #defined.
*/
# 26 "rxvtutil.C" 2

# 1 "rxvtutil.h" 1



# 1 "/usr/include/c++/4.0.0/cstdlib" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

//
// ISO C++ 14882: 20.4.6  C library
//

/** @file cstdlib
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stdlib.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */
# 5 "rxvtutil.h" 2
# 1 "/usr/include/c++/4.0.0/cstring" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

//
// ISO C++ 14882: 20.4.6  C library
//

/** @file cstring
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c string.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */
# 6 "rxvtutil.h" 2

using namespace std;
# 24 "rxvtutil.h"
// put into ifs if you are very sure that the expression
// is mostly true or mosty false. note that these return
// booleans, not the expression.







// increases code size unless -fno-enforce-eh-specs
# 43 "rxvtutil.h"
extern class byteorder {
  static unsigned int e; // at least 32 bits
public:
  byteorder ();

  static bool big_endian () { return e == 0x11223344; };
  static bool network () { return e == 0x11223344; };
  static bool little_endian () { return e == 0x44332211; };
  static bool vax () { return e == 0x44332211; };
} byteorder;

// various utility functions
template<typename T, typename U> static inline T min (T a, U b) { return a < (T)b ? a : (T)b; }
template<typename T, typename U> static inline void min_it (T &a, U b) { a = a < (T)b ? a : (T)b; }
template<typename T, typename U> static inline T max (T a, U b) { return a > (T)b ? a : (T)b; }
template<typename T, typename U> static inline void max_it (T &a, U b) { a = a > (T)b ? a : (T)b; }

template<typename T, typename U, typename V> static inline T clamp (T v, U a, V b) { return v < (T)a ? a : v >(T)b ? b : v; }
template<typename T, typename U, typename V> static inline void clamp_it (T &v, U a, V b) { v = v < (T)a ? a : v >(T)b ? b : v; }

template<typename T, typename U> static inline void swap (T& a, U& b) { T t=a; a=(T)b; b=(U)t; }

template<typename T> static inline T squared_diff (T a, T b) { return (a-b)*(a-b); }

// linear interpolation
template<typename T, typename U, typename P>
static inline
T lerp (T a, U b, P p)
{
  return (long(a) * long(100 - p) + long(b) * long(p) + 50) / 100;
}

template <typename I, typename T>
I find (I first, I last, const T& value)
{
  while (first != last && *first != value)
    ++first;

  return first;
}

// return a very temporary (and never deallocated) buffer. keep small.
void *rxvt_temp_buf (int len);

template<typename T>
static inline T *
rxvt_temp_buf (int len)
{
  return (T *)rxvt_temp_buf (len * sizeof (T));
}

// some bit functions, xft fuck me plenty

static inline int ctz (unsigned int x) { return __builtin_ctz (x); }
static inline int popcount (unsigned int x) { return __builtin_popcount (x); }






// in range including end



// in range excluding end



// for m >= -n, ensure remainder lies between 0..n-1


// makes dynamically allocated objects zero-initialised
struct zero_initialized
{
  void *operator new (size_t s);
  void operator delete (void *p, size_t s);
};

/* simplevec taken (and heavily modified), from:
 *
 *  MICO --- a free CORBA implementation
 *  Copyright (C) 1997-98 Kay Roemer & Arno Puder
 */
template<class T>
struct simplevec
{
    typedef T* iterator;
    typedef const T* const_iterator;
    typedef unsigned long size_type;

private:
    size_type _last, _size;
    T *_buf;

public:
    const_iterator begin () const
    {
        return &_buf[0];
    }
    iterator begin ()
    {
        return &_buf[0];
    }
    const_iterator end () const
    {
        return &_buf[_last];
    }
    iterator end ()
    {
        return &_buf[_last];
    }
    size_type capacity () const
    {
        return _size;
    }
    size_type size () const
    {
        return _last;
    }

private:
    static T *alloc (size_type n)
    {
        return (T *)::operator new ((size_t) (n * sizeof (T)));
    }
    static void dealloc (T *buf)
    {
        if (buf)
            ::operator delete (buf);
    }

    void reserve (iterator where, size_type n)
    {
        if (_last + n <= _size) {
            memmove (where+n, where, (end ()-where)*sizeof (T));
        } else {
            size_type sz = _last+n;
            sz = (_size == 0) ? max (sz, 5) : max (sz, 2*_size);
            T *nbuf = alloc (sz);
            if (_buf) {
                memcpy (nbuf, begin (), (where-begin ())*sizeof (T));
                memcpy (nbuf + (where-begin ()) + n, where,
                        (end ()-where)*sizeof (T));
                dealloc (_buf);
            }
            _buf = nbuf;
            _size = sz;
        }
    }

public:
    void reserve (size_type sz)
    {
        if (_size < sz) {
            sz = (_size == 0) ? max (sz, 5) : max (sz, 2*_size);
            T *nbuf = alloc (sz);
            if (_buf) {
                memcpy (nbuf, begin (), size ()*sizeof (T));
                dealloc (_buf);
            }
            _buf = nbuf;
            _size = sz;
        }
    }
    simplevec ()
    : _last(0), _size(0), _buf(0)
    {
    }
    simplevec (size_type n, const T& t = T ())
    : _last(0), _size(0), _buf(0)
    {
        insert (begin (), n, t);
    }
    simplevec (const_iterator first, const_iterator last)
    : _last(0), _size(0), _buf(0)
    {
        insert (begin (), first, last);
    }
    simplevec (const simplevec<T> &v)
    : _last(0), _size(0), _buf(0)
    {
        reserve (v._last);
        memcpy (_buf, v.begin (), v.size ()*sizeof (T));
        _last = v._last;
    }
    simplevec<T> &operator= (const simplevec<T> &v)
    {
        if (this != &v) {
            _last = 0;
            reserve (v._last);
            memcpy (_buf, v.begin (), v.size ()*sizeof (T));
            _last = v._last;
        }
        return *this;
    }
    ~simplevec ()
    {
        dealloc (_buf);
    }
    const T &front () const
    {
        //ministl_assert (size () > 0);
        return _buf[0];
    }
    T &front ()
    {
        //ministl_assert (size () > 0);
        return _buf[0];
    }
    const T &back () const
    {
        //ministl_assert (size () > 0);
        return _buf[_last-1];
    }
    T &back ()
    {
        //ministl_assert (size () > 0);
        return _buf[_last-1];
    }
    bool empty () const
    {
        return _last == 0;
    }
    void clear ()
    {
        _last = 0;
    }
    void push_back (const T &t)
    {
        reserve (_last+1);
        *end () = t;
        ++_last;
    }
    void push_back (T &t)
    {
        reserve (_last+1);
        *end () = t;
        ++_last;
    }
    void pop_back ()
    {
        //ministl_assert (size () > 0);
        --_last;
    }
    const T &operator[] (size_type idx) const
    {
        //ministl_assert (idx < size ());
        return _buf[idx];
    }
    T &operator[] (size_type idx)
    {
        //ministl_assert (idx < size ());
        return _buf[idx];
    }
    iterator insert (iterator pos, const T &t)
    {
        //ministl_assert (pos <= end ());
        long at = pos - begin ();
        reserve (pos, 1);
        pos = begin ()+at;
        *pos = t;
        ++_last;
        return pos;
    }
    iterator insert (iterator pos, const_iterator first, const_iterator last)
    {
        //ministl_assert (pos <= end ());
        long n = last - first;
        long at = pos - begin ();
        if (n > 0) {
            reserve (pos, n);
            pos = begin ()+at;
            memcpy (pos, first, (last-first)*sizeof (T));
            _last += n;
        }
        return pos;
    }
    iterator insert (iterator pos, size_type n, const T &t)
    {
        //ministl_assert (pos <= end ());
        long at = pos - begin ();
        if (n > 0) {
            reserve (pos, n);
            pos = begin ()+at;
            for (int i = 0; i < n; ++i)
                pos[i] = t;
            _last += n;
        }
        return pos;
    }
    void erase (iterator first, iterator last)
    {
        if (last != first) {
            memmove (first, last, (end () - last) * sizeof (T));
            _last -= last - first;
        }
    }
    void erase (iterator pos)
    {
        if (pos != end ()) {
            memmove (pos, pos+1, (end () - (pos+1)) * sizeof (T));
            --_last;
        }
    }
    void swap (simplevec<T> &t)
    {
        ::swap(_last, t._last);
        ::swap(_size, t._size);
        ::swap(_buf, t._buf);
    }
};

template<class T>
bool operator== (const simplevec<T> &v1, const simplevec<T> &v2)
{
    if (v1.size () != v2.size ())
        return false;
    return !v1.size () || !memcmp (&v1[0], &v2[0], v1.size ()*sizeof (T));
}

template<class T>
bool operator< (const simplevec<T> &v1, const simplevec<T> &v2)
{
    unsigned long minlast = min (v1.size (), v2.size ());
    for (unsigned long i = 0; i < minlast; ++i) {
        if (v1[i] < v2[i])
            return true;
        if (v2[i] < v1[i])
            return false;
    }
    return v1.size () < v2.size ();
}


template<typename T>
struct vector : simplevec<T>
{
};

struct stringvec : simplevec<char *>
{
  ~stringvec ()
  {
    for (char **c = begin (); c != end (); c++)
      free (*c);
  }
};
# 409 "rxvtutil.h"
template<typename T>
struct auto_ptr
{
  T *p;

  auto_ptr () : p (0) { }
  auto_ptr (T *a) : p (a) { }

  auto_ptr (auto_ptr<T> &a)
  {
    p = a.p;
    a.p = 0;
  }

  template<typename A>
  auto_ptr (auto_ptr<A> &a)
  {
    p = a.p;
    a.p = 0;
  }

  ~auto_ptr ()
  {
    delete p;
  }

  // void because it makes sense in our context
  void operator = (T *a)
  {
    delete p;
    p = a;
  }

  void operator = (auto_ptr &a)
  {
    *this = a.p;
    a.p = 0;
  }

  template<typename A>
  void operator = (auto_ptr<A> &a)
  {
    *this = a.p;
    a.p = 0;
  }

  operator T * () const { return p; }

  T *operator -> () const { return p; }
  T &operator * () const { return *p; }

  T *get ()
  {
    T *r = p;
    p = 0;
    return r;
  }
};

typedef auto_ptr<char> auto_str;
# 28 "rxvtutil.C" 2

class byteorder byteorder;

unsigned int byteorder::e;

byteorder::byteorder ()
{
  union {
    uint32_t u;
    uint8_t b[4];
  } w;

  w.b[0] = 0x11;
  w.b[1] = 0x22;
  w.b[2] = 0x33;
  w.b[3] = 0x44;

  e = w.u;
}
# 75 "rxvtutil.C"
void *
zero_initialized::operator new (size_t s)
{
  void *p = malloc (s);

  memset (p, 0, s);
  return p;
}

void
zero_initialized::operator delete (void *p, size_t s)
{
  free (p);
}

static void *temp_buf;
static uint32_t temp_len;

void *
rxvt_temp_buf (int len)
{
  if (len > temp_len)
    {
      temp_buf = realloc (temp_buf, len);
      temp_len = len;
    }

  return temp_buf;
}
