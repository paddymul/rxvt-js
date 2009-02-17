# 1 "ev_cpp.C"
# 1 "/Users/patrickmullen/temp/downloads/rxvt/urxvt-my-conf/src//"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "ev_cpp.C"
# 1 "ev_cpp.h" 1
# 16 "ev_cpp.h"
# 1 "./../libev/ev++.h" 1
/*
 * libev simple C++ wrapper classes
 *
 * Copyright (c) 2007,2008 Marc Alexander Lehmann <libev@schmorp.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modifica-
 * tion, are permitted provided that the following conditions are met:
 * 
 *   1.  Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 * 
 *   2.  Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MER-
 * CHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPE-
 * CIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTH-
 * ERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * the GNU General Public License ("GPL") version 2 or any later version,
 * in which case the provisions of the GPL are applicable instead of
 * the above. If you wish to allow the use of your version of this file
 * only under the terms of the GPL and not to allow others to use your
 * version of this file under the BSD license, indicate your decision
 * by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL. If you do not delete the
 * provisions above, a recipient may use your version of this file under
 * either the BSD or the GPL.
 */







# 1 "./../libev/ev.h" 1
/*
 * libev native API header
 *
 * Copyright (c) 2007,2008 Marc Alexander Lehmann <libev@schmorp.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modifica-
 * tion, are permitted provided that the following conditions are met:
 * 
 *   1.  Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 * 
 *   2.  Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MER-
 * CHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPE-
 * CIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTH-
 * ERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * the GNU General Public License ("GPL") version 2 or any later version,
 * in which case the provisions of the GPL are applicable instead of
 * the above. If you wish to allow the use of your version of this file
 * only under the terms of the GPL and not to allow others to use your
 * version of this file under the BSD license, indicate your decision
 * by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL. If you do not delete the
 * provisions above, a recipient may use your version of this file under
 * either the BSD or the GPL.
 */





extern "C" {


typedef double ev_tstamp;

/* these priorities are inclusive, higher priorities will be called earlier */
# 86 "./../libev/ev.h"
# 1 "/usr/include/signal.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
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
 * Copyright (c) 1991, 1993
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
 *	@(#)signal.h	8.3 (Berkeley) 3/30/94
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
# 62 "/usr/include/signal.h" 2 3 4
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
# 63 "/usr/include/signal.h" 2 3 4
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



typedef __darwin_pid_t pid_t;




typedef __darwin_pthread_attr_t pthread_attr_t;




typedef __darwin_sigset_t sigset_t;




typedef __darwin_size_t size_t;




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
# 64 "/usr/include/signal.h" 2 3 4


typedef __darwin_pthread_t pthread_t;




extern const /* define reserved names to standard */ char *const /* define reserved names to standard */ sys_signame[32 /* counting 0; could be 33 (mask is 1-32) */];
extern const /* define reserved names to standard */ char *const /* define reserved names to standard */ sys_siglist[32 /* counting 0; could be 33 (mask is 1-32) */];


extern "C" {
int raise(int);
}


extern "C" {
void (*bsd_signal(int, void (*)(int)))(int);
int kill(pid_t, int) __asm("_" "kill" "$UNIX2003");
int killpg(pid_t, int) __asm("_" "killpg" "$UNIX2003");
int pthread_kill(pthread_t, int);
int pthread_sigmask(int, const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" "$UNIX2003");
int sigaction(int, const struct sigaction * ,
     struct sigaction * );
int sigaddset(sigset_t *, int);
int sigaltstack(const stack_t * , stack_t * ) __asm("_" "sigaltstack" "$UNIX2003");
int sigdelset(sigset_t *, int);
int sigemptyset(sigset_t *);
int sigfillset(sigset_t *);
int sighold(int);
int sigignore(int);
int siginterrupt(int, int);
int sigismember(const sigset_t *, int);
int sigpause(int) __asm("_" "sigpause" /* nothing */ "$UNIX2003");
int sigpending(sigset_t *);
int sigprocmask(int, const sigset_t * , sigset_t * );
int sigrelse(int);
void (*sigset(int, void (*)(int)))(int);
int sigsuspend(const sigset_t *) __asm("_" "sigsuspend" /* nothing */ "$UNIX2003");
int sigwait(const sigset_t * , int * ) __asm("_" "sigwait" /* nothing */ "$UNIX2003");

void psignal(unsigned int, const char *);
int sigblock(int);
int sigsetmask(int);
int sigvec(int, struct sigvec *, struct sigvec *);

}

/* List definitions after function declarations, or Reiser cpp gets upset. */

/* The left shift operator on intel is modulo 32 */
static inline /* convert to C++ keyword */ int
__sigbits(int __signo)
{
    return __signo > 32 /* counting 0; could be 33 (mask is 1-32) */ ? 0 : (1 << (__signo - 1));
}
# 87 "./../libev/ev.h" 2



/*****************************************************************************/
# 100 "./../libev/ev.h"
/* support multiple event loops? */
# 129 "./../libev/ev.h"
/*****************************************************************************/

/* eventmask, revents, events... */
# 150 "./../libev/ev.h"
/* can be used to add custom fields to all watchers, while losing binary compatibility */
# 168 "./../libev/ev.h"
/*
 * struct member types:
 * private: you can look at them, but not change them, and they might not mean anything to you.
 * ro: can be read anytime, but only changed when the watcher isn't active
 * rw: can be read and modified anytime, even when the watcher is active
 *
 * some internal details that might be helpful for debugging:
 *
 * active is either 0, which means the watcher is not active,
 *           or the array index of the watcher (periodics, timers)
 *           or the array index + 1 (most other watchers)
 *           or simply 1 for watchers that aren't in some array.
 * pending is either 0, in which case the watcher isn't,
 *            or the array index + 1 in the pendings array.
 */

/* shared by all watchers */
# 200 "./../libev/ev.h"
/* base class, nothing to see here unless you subclass */
typedef struct ev_watcher
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_watcher *w, int revents); /* private */
} ev_watcher;

/* base class, nothing to see here unless you subclass */
typedef struct ev_watcher_list
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_watcher_list *w, int revents); /* private */ struct ev_watcher_list *next; /* private */
} ev_watcher_list;

/* base class, nothing to see here unless you subclass */
typedef struct ev_watcher_time
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_watcher_time *w, int revents); /* private */ ev_tstamp at; /* private */
} ev_watcher_time;

/* invoked when fd is either EV_READable or EV_WRITEable */
/* revent EV_READ, EV_WRITE */
typedef struct ev_io
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_io *w, int revents); /* private */ struct ev_watcher_list *next; /* private */

  int fd; /* ro */
  int events; /* ro */
} ev_io;

/* invoked after a specific time, repeatable (based on monotonic clock) */
/* revent EV_TIMEOUT */
typedef struct ev_timer
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_timer *w, int revents); /* private */ ev_tstamp at; /* private */

  ev_tstamp repeat; /* rw */
} ev_timer;

/* invoked at some specific time, possibly repeating at regular intervals (based on UTC) */
/* revent EV_PERIODIC */
typedef struct ev_periodic
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_periodic *w, int revents); /* private */ ev_tstamp at; /* private */

  ev_tstamp offset; /* rw */
  ev_tstamp interval; /* rw */
  ev_tstamp (*reschedule_cb)(struct ev_periodic *w, ev_tstamp now); /* rw */
} ev_periodic;

/* invoked when the given signal has been received */
/* revent EV_SIGNAL */
typedef struct ev_signal
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_signal *w, int revents); /* private */ struct ev_watcher_list *next; /* private */

  int signum; /* ro */
} ev_signal;

/* invoked when sigchld is received and waitpid indicates the given pid */
/* revent EV_CHILD */
/* does not support priorities */
typedef struct ev_child
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_child *w, int revents); /* private */ struct ev_watcher_list *next; /* private */

  int flags; /* private */
  int pid; /* ro */
  int rpid; /* rw, holds the received pid */
  int rstatus; /* rw, holds the exit status, use the macros from sys/wait.h */
} ev_child;
# 295 "./../libev/ev.h"
/* invoked when the nothing else needs to be done, keeps the process from blocking */
/* revent EV_IDLE */
typedef struct ev_idle
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_idle *w, int revents); /* private */
} ev_idle;


/* invoked for each run of the mainloop, just before the blocking call */
/* you can still change events in any way you like */
/* revent EV_PREPARE */
typedef struct ev_prepare
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_prepare *w, int revents); /* private */
} ev_prepare;

/* invoked for each run of the mainloop, just after the blocking call */
/* revent EV_CHECK */
typedef struct ev_check
{
  int active; /* private */ int pending; /* private */ int priority; /* private */ void *data; /* rw */ void (*cb)( struct ev_check *w, int revents); /* private */
} ev_check;
# 357 "./../libev/ev.h"
/* the presence of this union forces similar struct layout */
union ev_any_watcher
{
  struct ev_watcher w;
  struct ev_watcher_list wl;

  struct ev_io io;
  struct ev_timer timer;
  struct ev_periodic periodic;
  struct ev_signal signal;
  struct ev_child child;




  struct ev_idle idle;

  struct ev_prepare prepare;
  struct ev_check check;
# 385 "./../libev/ev.h"
};

/* bits for ev_default_loop and ev_loop_new */
/* the default */

/* flag bits */


/* method bits to be ored together */
# 402 "./../libev/ev.h"
int ev_version_major (void);
int ev_version_minor (void);

unsigned int ev_supported_backends (void);
unsigned int ev_recommended_backends (void);
unsigned int ev_embeddable_backends (void);

ev_tstamp ev_time (void);
void ev_sleep (ev_tstamp delay); /* sleep for a while */

/* Sets the allocation function to use, works like realloc.
 * It is used to allocate and free memory.
 * If it returns zero when memory needs to be allocated, the library might abort
 * or take some potentially destructive action.
 * The default is your system realloc function.
 */
void ev_set_allocator (void *(*cb)(void *ptr, long size));

/* set the callback function to call on a
 * retryable syscall error
 * (such as failed select, poll, epoll_wait)
 */
void ev_set_syserr_cb (void (*cb)(const char *msg));
# 463 "./../libev/ev.h"
int ev_default_loop (unsigned int flags); /* returns true when successful */

static inline ev_tstamp
ev_now (void)
{
  extern ev_tstamp ev_rt_now;

  return ev_rt_now;
}


static inline int
ev_is_default_loop (void)
{





  return 1;

}

void ev_default_destroy (void); /* destroy the default loop */
/* this needs to be called after fork, to duplicate the default loop */
/* if you create alternative loops you have to call ev_loop_fork on them */
/* you can call it in either the parent or the child */
/* you can actually call it at any time, anywhere :) */
void ev_default_fork (void);

unsigned int ev_backend (void); /* backend in use by loop */
unsigned int ev_loop_count (void); /* number of loop iterations */
# 504 "./../libev/ev.h"
void ev_loop ( int flags);
void ev_unloop ( int how); /* set to 1 to break out of event loop, set to 2 to break out of all event loops */

void ev_set_io_collect_interval ( ev_tstamp interval); /* sleep at least this time, default 0 */
void ev_set_timeout_collect_interval ( ev_tstamp interval); /* sleep at least this time, default 0 */

/*
 * ref/unref can be used to add or remove a refcount on the mainloop. every watcher
 * keeps one reference. if you have a long-runing watcher you never unregister that
 * should not keep ev_loop from running, unref() after starting, and ref() before stopping.
 */
void ev_ref (void);
void ev_unref (void);

/* convenience function, wait for a single event, without registering an event watcher */
/* if timeout is < 0, do wait indefinitely */
void ev_once ( int fd, int events, ev_tstamp timeout, void (*cb)(int revents, void *arg), void *arg);


/* these may evaluate ev multiple times, and the other arguments at most once */
/* either use ev_init + ev_TYPE_set, or the ev_TYPE_init macro, below, to first initialise a watcher */
# 571 "./../libev/ev.h"
/* stopping (enabling, adding) a watcher does nothing if it is already running */
/* stopping (disabling, deleting) a watcher does nothing unless its already running */


/* feeds an event into a watcher as if the event actually occured */
/* accepts any ev_watcher type */
void ev_feed_event ( void *w, int revents);
void ev_feed_fd_event ( int fd, int revents);
void ev_feed_signal_event ( int signum);
void ev_invoke ( void *w, int revents);
int ev_clear_pending ( void *w);

void ev_io_start ( ev_io *w);
void ev_io_stop ( ev_io *w);

void ev_timer_start ( ev_timer *w);
void ev_timer_stop ( ev_timer *w);
/* stops if active and no repeat, restarts if active and repeating, starts if inactive and repeating */
void ev_timer_again ( ev_timer *w);







/* only supported in the default loop */
void ev_signal_start ( ev_signal *w);
void ev_signal_stop ( ev_signal *w);

/* only supported in the default loop */
void ev_child_start ( ev_child *w);
void ev_child_stop ( ev_child *w);
# 612 "./../libev/ev.h"
void ev_idle_start ( ev_idle *w);
void ev_idle_stop ( ev_idle *w);


void ev_prepare_start ( ev_prepare *w);
void ev_prepare_stop ( ev_prepare *w);

void ev_check_start ( ev_check *w);
void ev_check_stop ( ev_check *w);
# 643 "./../libev/ev.h"
}
# 47 "./../libev/ev++.h" 2
# 57 "./../libev/ev++.h"
namespace ev {

  typedef ev_tstamp tstamp;

  enum
  {
    UNDEF = -1 /* guaranteed to be invalid */,
    NONE = 0x00 /* no events */,
    READ = 0x01 /* ev_io detected read will not block */,
    WRITE = 0x02 /* ev_io detected write will not block */,
    TIMEOUT = 0x00000100 /* timer timed out */,
    PERIODIC = 0x00000200 /* periodic timer timed out */,
    SIGNAL = 0x00000400 /* signal was received */,
    CHILD = 0x00000800 /* child/pid had status change */,
    STAT = 0x00001000 /* stat data changed */,
    IDLE = 0x00002000 /* event loop is idling */,
    CHECK = 0x00008000 /* event loop finished poll */,
    PREPARE = 0x00004000 /* event loop about to poll */,
    FORK = 0x00020000 /* event loop resumed in child */,
    ASYNC = 0x00040000 /* async intra-loop signal */,
    EMBED = 0x00010000 /* embedded event loop needs sweep */,

    ERROR = 0x80000000 /* sent when an error occurs */,
  };

  enum
  {
    AUTO = 0x00000000U /* not quite a mask */,
    NOENV = 0x01000000U /* do NOT consult environment */,
    FORKCHECK = 0x02000000U /* check for a fork in each iteration */,

    SELECT = 0x00000001U /* about anywhere */,
    POLL = 0x00000002U /* !win */,
    EPOLL = 0x00000004U /* linux */,
    KQUEUE = 0x00000008U /* bsd */,
    DEVPOLL = 0x00000010U /* solaris 8 */ /* NYI */,
    PORT = 0x00000020U /* solaris 10 */
  };

  enum
  {
    NONBLOCK = 1 /* do not block/wait */,
    ONESHOT = 2 /* block *once* only */
  };

  enum how_t
  {
    ONE = 1 /* unloop once */,
    ALL = 2 /* unloop all loops */
  };

  struct bad_loop



  {






  };
# 137 "./../libev/ev++.h"
  struct loop_ref
  {
    loop_ref (void) throw ()



    {
    }

    bool operator == (const loop_ref &other) const throw ()
    {



      return true;

    }

    bool operator != (const loop_ref &other) const throw ()
    {



      return false;

    }
# 191 "./../libev/ev++.h"
    void loop (int flags = 0)
    {
      ev_loop ( flags);
    }

    void unloop (how_t how = ONE) throw ()
    {
      ev_unloop ( how);
    }

    void post_fork () throw ()
    {



      ev_default_fork ();

    }

    unsigned int count () const throw ()
    {
      return ev_loop_count ();
    }

    unsigned int backend () const throw ()
    {
      return ev_backend ();
    }

    tstamp now () const throw ()
    {
      return ev_now ();
    }

    void ref () throw ()
    {
      ev_ref ();
    }

    void unref () throw ()
    {
      ev_unref ();
    }

    void set_io_collect_interval (tstamp interval) throw ()
    {
      ev_set_io_collect_interval ( interval);
    }

    void set_timeout_collect_interval (tstamp interval) throw ()
    {
      ev_set_timeout_collect_interval ( interval);
    }

    // function callback
    void once (int fd, int events, tstamp timeout, void (*cb)(int, void *), void *arg = 0) throw ()
    {
      ev_once ( fd, events, timeout, cb, arg);
    }

    // method callback
    template<class K, void (K::*method)(int)>
    void once (int fd, int events, tstamp timeout, K *object) throw ()
    {
      once (fd, events, timeout, method_thunk<K, method>, object);
    }

    // default method == operator ()
    template<class K>
    void once (int fd, int events, tstamp timeout, K *object) throw ()
    {
      once (fd, events, timeout, method_thunk<K, &K::operator ()>, object);
    }

    template<class K, void (K::*method)(int)>
    static void method_thunk (int revents, void *arg)
    {
      static_cast<K *>(arg)->*method
        (revents);
    }

    // no-argument method callback
    template<class K, void (K::*method)()>
    void once (int fd, int events, tstamp timeout, K *object) throw ()
    {
      once (fd, events, timeout, method_noargs_thunk<K, method>, object);
    }

    template<class K, void (K::*method)()>
    static void method_noargs_thunk (int revents, void *arg)
    {
      static_cast<K *>(arg)->*method
        ();
    }

    // simpler function callback
    template<void (*cb)(int)>
    void once (int fd, int events, tstamp timeout) throw ()
    {
      once (fd, events, timeout, simpler_func_thunk<cb>);
    }

    template<void (*cb)(int)>
    static void simpler_func_thunk (int revents, void *arg)
    {
      (*cb)
        (revents);
    }

    // simplest function callback
    template<void (*cb)()>
    void once (int fd, int events, tstamp timeout) throw ()
    {
      once (fd, events, timeout, simplest_func_thunk<cb>);
    }

    template<void (*cb)()>
    static void simplest_func_thunk (int revents, void *arg)
    {
      (*cb)
        ();
    }

    void feed_fd_event (int fd, int revents) throw ()
    {
      ev_feed_fd_event ( fd, revents);
    }

    void feed_signal_event (int signum) throw ()
    {
      ev_feed_signal_event ( signum);
    }





  };
# 356 "./../libev/ev++.h"
  struct default_loop : loop_ref
  {
    default_loop (unsigned int flags = AUTO) throw (bad_loop)



    {
      if (



          !ev_default_loop (flags)

      )
        throw bad_loop ();
    }

    ~default_loop () throw ()
    {
      ev_default_destroy ();
    }

  private:
    default_loop (const default_loop &);
    default_loop &operator = (const default_loop &);
  };

  inline loop_ref get_default_loop () throw ()
  {



    return loop_ref ();

  }
# 405 "./../libev/ev++.h"
  template<class ev_watcher, class watcher>
  struct base : ev_watcher
  {
# 417 "./../libev/ev++.h"
    base () throw ()



    {
      do { ((ev_watcher *)(void *)(this))->active = ((ev_watcher *)(void *)(this))->pending = ((ev_watcher *)(void *)(this))->priority = 0; ((this))->cb /* rw */ = (0); } while (0);
    }

    void set_ (const void *data, void (*cb)( ev_watcher *w, int revents)) throw ()
    {
      this->data = (void *)data;
      (static_cast<ev_watcher *>(this))->cb /* rw */ = (cb);
    }

    // function callback
    template<void (*function)(watcher &w, int)>
    void set (void *data = 0) throw ()
    {
      set_ (data, function_thunk<function>);
    }

    template<void (*function)(watcher &w, int)>
    static void function_thunk ( ev_watcher *w, int revents)
    {
      function
        (*static_cast<watcher *>(w), revents);
    }

    // method callback
    template<class K, void (K::*method)(watcher &w, int)>
    void set (K *object) throw ()
    {
      set_ (object, method_thunk<K, method>);
    }

    // default method == operator ()
    template<class K>
    void set (K *object) throw ()
    {
      set_ (object, method_thunk<K, &K::operator ()>);
    }

    template<class K, void (K::*method)(watcher &w, int)>
    static void method_thunk ( ev_watcher *w, int revents)
    {
      (static_cast<K *>(w->data)->*method)
        (*static_cast<watcher *>(w), revents);
    }

    // no-argument callback
    template<class K, void (K::*method)()>
    void set (K *object) throw ()
    {
      set_ (object, method_noargs_thunk<K, method>);
    }

    template<class K, void (K::*method)()>
    static void method_noargs_thunk ( ev_watcher *w, int revents)
    {
      static_cast<K *>(w->data)->*method
        ();
    }

    void operator ()(int events = -1 /* guaranteed to be invalid */)
    {
      return
        (static_cast<ev_watcher *>(this))->cb /* rw */
          (static_cast<ev_watcher *>(this), events);
    }

    bool is_active () const throw ()
    {
      return (0 + ((ev_watcher *)(void *)(static_cast<const ev_watcher *>(this)))->active) /* ro, true when the watcher has been started */;
    }

    bool is_pending () const throw ()
    {
      return (0 + ((ev_watcher *)(void *)(static_cast<const ev_watcher *>(this)))->pending) /* ro, true when watcher is waiting for callback invocation */;
    }

    void feed_event (int revents) throw ()
    {
      ev_feed_event ( static_cast<const ev_watcher *>(this), revents);
    }
  };

  inline tstamp now () throw ()
  {
    return ev_time ();
  }

  inline void delay (tstamp interval) throw ()
  {
    ev_sleep (interval);
  }

  inline int version_major () throw ()
  {
    return ev_version_major ();
  }

  inline int version_minor () throw ()
  {
    return ev_version_minor ();
  }

  inline unsigned int supported_backends () throw ()
  {
    return ev_supported_backends ();
  }

  inline unsigned int recommended_backends () throw ()
  {
    return ev_recommended_backends ();
  }

  inline unsigned int embeddable_backends () throw ()
  {
    return ev_embeddable_backends ();
  }

  inline void set_allocator (void *(*cb)(void *ptr, long size)) throw ()
  {
    ev_set_allocator (cb);
  }

  inline void set_syserr_cb (void (*cb)(const char *msg)) throw ()
  {
    ev_set_syserr_cb (cb);
  }
# 561 "./../libev/ev++.h"
  /* using a template here would require quite a bit more lines,
   * so a macro solution was chosen */
# 597 "./../libev/ev++.h"
  struct io : base<ev_io, io> { void start () throw () { ev_io_start ( static_cast<ev_io *>(this)); } void stop () throw () { ev_io_stop ( static_cast<ev_io *>(this)); } io () throw () { } ~io () throw () { stop (); } using base<ev_io, io>::set; private: io (const io &o); io &operator =(const io &o); public:
    void set (int fd, int events) throw ()
    {
      int active = is_active ();
      if (active) stop ();
      do { (static_cast<ev_io *>(this))->fd = (fd); (static_cast<ev_io *>(this))->events = (events) | 0x80 /* internal use only */; } while (0);
      if (active) start ();
    }

    void set (int events) throw ()
    {
      int active = is_active ();
      if (active) stop ();
      do { (static_cast<ev_io *>(this))->fd = (fd); (static_cast<ev_io *>(this))->events = (events) | 0x80 /* internal use only */; } while (0);
      if (active) start ();
    }

    void start (int fd, int events) throw ()
    {
      set (fd, events);
      start ();
    }
  };

  struct timer : base<ev_timer, timer> { void start () throw () { ev_timer_start ( static_cast<ev_timer *>(this)); } void stop () throw () { ev_timer_stop ( static_cast<ev_timer *>(this)); } timer () throw () { } ~timer () throw () { stop (); } using base<ev_timer, timer>::set; private: timer (const timer &o); timer &operator =(const timer &o); public:
    void set (ev_tstamp after, ev_tstamp repeat = 0.) throw ()
    {
      int active = is_active ();
      if (active) stop ();
      do { ((ev_watcher_time *)(static_cast<ev_timer *>(this)))->at = (after); (static_cast<ev_timer *>(this))->repeat = (repeat); } while (0);
      if (active) start ();
    }

    void start (ev_tstamp after, ev_tstamp repeat = 0.) throw ()
    {
      set (after, repeat);
      start ();
    }

    void again () throw ()
    {
      ev_timer_again ( static_cast<ev_timer *>(this));
    }
  };
# 665 "./../libev/ev++.h"
  struct sig : base<ev_signal, sig> { void start () throw () { ev_signal_start ( static_cast<ev_signal *>(this)); } void stop () throw () { ev_signal_stop ( static_cast<ev_signal *>(this)); } sig () throw () { } ~sig () throw () { stop (); } using base<ev_signal, sig>::set; private: sig (const sig &o); sig &operator =(const sig &o); public:
    void set (int signum) throw ()
    {
      int active = is_active ();
      if (active) stop ();
      do { (static_cast<ev_signal *>(this))->signum = (signum); } while (0);
      if (active) start ();
    }

    void start (int signum) throw ()
    {
      set (signum);
      start ();
    }
  };

  struct child : base<ev_child, child> { void start () throw () { ev_child_start ( static_cast<ev_child *>(this)); } void stop () throw () { ev_child_stop ( static_cast<ev_child *>(this)); } child () throw () { } ~child () throw () { stop (); } using base<ev_child, child>::set; private: child (const child &o); child &operator =(const child &o); public:
    void set (int pid, int trace = 0) throw ()
    {
      int active = is_active ();
      if (active) stop ();
      do { (static_cast<ev_child *>(this))->pid = (pid); (static_cast<ev_child *>(this))->flags = !!(trace); } while (0);
      if (active) start ();
    }

    void start (int pid, int trace = 0) throw ()
    {
      set (pid, trace);
      start ();
    }
  };
# 721 "./../libev/ev++.h"
  struct idle : base<ev_idle, idle> { void start () throw () { ev_idle_start ( static_cast<ev_idle *>(this)); } void stop () throw () { ev_idle_stop ( static_cast<ev_idle *>(this)); } idle () throw () { } ~idle () throw () { stop (); } using base<ev_idle, idle>::set; private: idle (const idle &o); idle &operator =(const idle &o); public:
    void set () throw () { }
  };

  struct prepare : base<ev_prepare, prepare> { void start () throw () { ev_prepare_start ( static_cast<ev_prepare *>(this)); } void stop () throw () { ev_prepare_stop ( static_cast<ev_prepare *>(this)); } prepare () throw () { } ~prepare () throw () { stop (); } using base<ev_prepare, prepare>::set; private: prepare (const prepare &o); prepare &operator =(const prepare &o); public:
    void set () throw () { }
  };

  struct check : base<ev_check, check> { void start () throw () { ev_check_start ( static_cast<ev_check *>(this)); } void stop () throw () { ev_check_stop ( static_cast<ev_check *>(this)); } check () throw () { } ~check () throw () { stop (); } using base<ev_check, check>::set; private: check (const check &o); check &operator =(const check &o); public:
    void set () throw () { }
  };
# 783 "./../libev/ev++.h"
}
# 16 "ev_cpp.h" 2
# 2 "ev_cpp.C" 2
# 1 "./../libev/ev.c" 1
/*
 * libev event processing core, watcher management
 *
 * Copyright (c) 2007,2008 Marc Alexander Lehmann <libev@schmorp.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modifica-
 * tion, are permitted provided that the following conditions are met:
 * 
 *   1.  Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 * 
 *   2.  Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MER-
 * CHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPE-
 * CIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTH-
 * ERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * the GNU General Public License ("GPL") version 2 or any later version,
 * in which case the provisions of the GPL are applicable instead of
 * the above. If you wish to allow the use of your version of this file
 * only under the terms of the GPL and not to allow others to use your
 * version of this file under the BSD license, indicate your decision
 * by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL. If you do not delete the
 * provisions above, a recipient may use your version of this file under
 * either the BSD or the GPL.
 */


extern "C" {


/* this big block deduces configuration from config.h */


# 1 "../config.h" 1
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if you want to have sexy-looking background pixmaps. Needs
   libAfterImage */
/* #undef BG_IMAGE_FROM_FILE */

/* clone device filename */


/* Define if you want 8 bit control sequences */
/* #undef EIGHT_BIT_CONTROLS */

/* Define if you want to automatically compose combining characters */
/* #undef ENABLE_COMBINING */

/* Define if you want handling for rarely used but handy features */
/* #undef ENABLE_FRILLS */

/* Define if you can embed a perl interpreter */
/* #undef ENABLE_PERL */

/* Define if you want bold and italic support */
/* #undef ENABLE_STYLES */

/* Define if you want your background to use the parent window background */
/* #undef ENABLE_TRANSPARENCY */

/* Define if you want european extended codesets */


/* Define if you want japanese codesets */


/* Define if you want extended japanese codesets */


/* Define if you want korean codesets */


/* Define if you want vietnamese codesets */


/* Define if you want chinese codesets */


/* Define if you want extended chinese codesets */


/* Define if you want to use libAfterImage for image processing */
/* #undef HAVE_AFTERIMAGE */

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the <cwchar> header file. */


/* Define to 1 if you have /dev/ptym/clone */
/* #undef HAVE_DEV_CLONE */

/* Define to 1 if you have /dev/ptc */
/* #undef HAVE_DEV_PTC */

/* Define to 1 if you have /dev/ptmx */


/* Define to 1 if you have the `epoll_ctl' function. */
/* #undef HAVE_EPOLL_CTL */

/* Define to 1 if you have the `eventfd' function. */
/* #undef HAVE_EVENTFD */

/* Define to 1 if you have the `getpt' function. */
/* #undef HAVE_GETPT */

/* Define to 1 if you have the `inotify_init' function. */
/* #undef HAVE_INOTIFY_INIT */

/* Define to 1 if you have the <inttypes.h> header file. */


/* Define to 1 if you have the `isastream' function. */
/* #undef HAVE_ISASTREAM */

/* Define to 1 if you have the `kqueue' function. */


/* Define to 1 if you have the <lastlog.h> header file. */
/* #undef HAVE_LASTLOG_H */

/* Define to 1 if you have the `m' library (-lm). */


/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the <memory.h> header file. */


/* Define to 1 if you have the `nanosleep' function. */
/* #undef HAVE_NANOSLEEP */

/* Define if nl_langinfo(CODESET) works */


/* Define to 1 if you have the `openpty' function. */
/* #undef HAVE_OPENPTY */

/* Define to 1 if you have the `poll' function. */


/* Define to 1 if you have the <poll.h> header file. */


/* Define to 1 if you have the `port_create' function. */
/* #undef HAVE_PORT_CREATE */

/* Define to 1 if you have the <port.h> header file. */
/* #undef HAVE_PORT_H */

/* Define to 1 if you have the `posix_openpt' function. */


/* Define to 1 if you have the <pty.h> header file. */
/* #undef HAVE_PTY_H */

/* Define to 1 if you have the `revoke' function. */


/* Define to 1 if you have the `select' function. */


/* Define to 1 if you have the `seteuid' function. */


/* Define if plain old setlocale works */


/* Define to 1 if you have the `setresuid' function. */
/* #undef HAVE_SETRESUID */

/* Define to 1 if you have the `setreuid' function. */


/* Define to 1 if you have the `setuid' function. */


/* Define to 1 if you have the <stdint.h> header file. */


/* Define to 1 if you have the <stdlib.h> header file. */


/* Define to 1 if you have the <strings.h> header file. */


/* Define to 1 if you have the <string.h> header file. */


/* Define to 1 if you have the <stropts.h> header file. */
/* #undef HAVE_STROPTS_H */

/* Define if utmp.h or lastlog.h has struct lastlog */


/* Define if utmpx.h or lastlog.h has struct lastlogx */


/* Define if utmp.h has struct utmp */


/* Define if utmpx.h has struct utmpx */


/* Define to 1 if you have the <sys/byteorder.h> header file. */
/* #undef HAVE_SYS_BYTEORDER_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
/* #undef HAVE_SYS_EPOLL_H */

/* Define to 1 if you have the <sys/eventfd.h> header file. */
/* #undef HAVE_SYS_EVENTFD_H */

/* Define to 1 if you have the <sys/event.h> header file. */


/* Define to 1 if you have the <sys/inotify.h> header file. */
/* #undef HAVE_SYS_INOTIFY_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */


/* Define to 1 if you have the <sys/queue.h> header file. */


/* Define to 1 if you have the <sys/select.h> header file. */


/* Define to 1 if you have the <sys/sockio.h> header file. */


/* Define to 1 if you have the <sys/stat.h> header file. */


/* Define to 1 if you have the <sys/stropts.h> header file. */
/* #undef HAVE_SYS_STROPTS_H */

/* Define to 1 if you have the <sys/strredir.h> header file. */
/* #undef HAVE_SYS_STRREDIR_H */

/* Define to 1 if you have the <sys/types.h> header file. */


/* Define to 1 if you have the <unistd.h> header file. */


/* Define if sys/socket.h defines the necessary macros/functions for file
   handle passing */


/* Define to 1 if you have the `unsetenv' function. */


/* Define to 1 if you have the `updlastlogx' function. */
/* #undef HAVE_UPDLASTLOGX */

/* Define to 1 if you have the `updwtmp' function. */
/* #undef HAVE_UPDWTMP */

/* Define to 1 if you have the `updwtmpx' function. */
/* #undef HAVE_UPDWTMPX */

/* Define to 1 if you have the <util.h> header file. */


/* Define to 1 if you have the <utmpx.h> header file. */


/* Define if struct utmpx contains ut_host */


/* Define if struct utmpx contains ut_session */
/* #undef HAVE_UTMPX_SESSION */

/* Define to 1 if you have the <utmp.h> header file. */


/* Define if struct utmp contains ut_host */


/* Define if struct utmp contains ut_pid */
/* #undef HAVE_UTMP_PID */

/* Define to 1 if you have the <wchar.h> header file. */


/* Define to 1 if you have the <X11/Xft/Xft.h> header file. */
/* #undef HAVE_X11_XFT_XFT_H */

/* Define if you have XPointer typedef */


/* Define if setlocale (defined to Xsetlocale) works */


/* Define to 1 if you have the `_getpty' function. */
/* #undef HAVE__GETPTY */

/* Define if you want ISO 14755 extended support */


/* Define location of lastlogx */
/* #undef LASTLOGX_FILE */

/* Define location of lastlog */
/* #undef LASTLOG_FILE */

/* Define if you want to have lastlog support when utmp/utmpx is enabled */
/* #undef LASTLOG_SUPPORT */

/* Define to have CTRL cause wheel events to accelerate scrolling. Release
   CTRL to halt scrolling */
/* #undef MOUSE_SLIP_WHEELING */

/* Define to use wheel events (button4 and button5) to scroll */
/* #undef MOUSE_WHEEL */

/* Support NeXT style scrollbars */
/* #undef NEXT_SCROLLBAR */

/* Define if you don't want support for the backspace key */


/* Define if you don't want support for the (non-keypad) delete key */


/* Define if you don't want any resources read */


/* Define for continual scrolling when you keep the scrollbar button pressed
   */


/* Disable the secondary screen. Many programs use the secondary screen as
   their workplace */


/* Define if you want faded colors when focus is lost */
/* #undef OFF_FOCUS_FADING */

/* Define to the address where bug reports for this package should be sent. */


/* Define to the full name of this package. */


/* Define to the full name and version of this package. */


/* Define to the one symbol short name of this package. */


/* Define to the version of this package. */


/* Support plain style scrollbars */


/* Define if you want hide the pointer while typing */
/* #undef POINTER_BLANK */

/* Resource class */


/* Fallback resource class */


/* Default resource name */


/* Binary base name */


/* Support Rxvt original style scrollbars */
/* #undef RXVT_SCROLLBAR */

/* Set TERMINFO value to the value given by configure */
/* #undef RXVT_TERMINFO */

/* Define to allow scrolling when the selection moves to the top or bottom of
   the screen */
/* #undef SELECTION_SCROLLING */

/* Define to use "smart" resize behavior */
/* #undef SMART_RESIZE */

/* Define to 1 if you have the ANSI C header files. */


/* Set TERM to the value given by configure */
/* #undef TERMENV */

/* Define if you want blinking text support */


/* "" */
/* #undef TTY_GID_SUPPORT */

/* Define if you want to represent unicode characters outside plane 0 */
/* #undef UNICODE_3 */

/* "" */


/* Define if you want to have XIM (X Input Method) protocol support - required
   for multibyte characters input */
/* #undef USE_XIM */

/* Define location of utmpx */


/* Define location of utmp */


/* Define if you want to have utmp/utmpx support */


/* Define location of wtmpx */
/* #undef WTMPX_FILE */

/* Define location of wtmp */


/* Define if you want to have wtmp support when utmp/utmpx is enabled */
/* #undef WTMP_SUPPORT */

/* Define to enable xft support */
/* #undef XFT */

/* Define if your XIMCallback specifies XIC as first type. */
/* #undef XIMCB_PROTO_BROKEN */

/* Define ONLY iff Xlib.h supports it */


/* Support Xterm style scrollbars */


/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Define to 1 if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */

/* # undef _ALL_SOURCE */


/* Enable GNU extensions on systems that have them.  */




/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef was allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Needed to get declarations for msg_control and msg_controllen on Solaris */
/* #undef _XOPEN_SOURCE */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int16_t */

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */
# 48 "./../libev/ev.c" 2
# 146 "./../libev/ev.c"
# 1 "/usr/include/math.h" 1 3 4
/*
 * Copyright (c) 2002 Apple Computer, Inc. All rights reserved.
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






# 1 "/usr/include/architecture/i386/math.h" 1 3 4
/*
 * Copyright (c) 2002 Apple Computer, Inc. All rights reserved.
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

/*******************************************************************************
*                                                                              *
*     File:  math.h	                                                       *
*                                                                              *
*     Contains: typedefs, prototypes, and macros germane to C99 floating point.*
*                                                                              *
*******************************************************************************/



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
# 34 "/usr/include/architecture/i386/math.h" 2 3 4


extern "C" {


/******************************************************************************
*       Floating point data types                                             *
******************************************************************************/

/*	Define float_t and double_t per C standard, ISO/IEC 9899:1999 7.12 2,
	taking advantage of GCC's __FLT_EVAL_METHOD__ (which a compiler may
	define anytime and GCC does) that shadows FLT_EVAL_METHOD (which a compiler
	must and may define only in float.h).
*/

 typedef float float_t;
 typedef double double_t;
# 79 "/usr/include/architecture/i386/math.h" 3 4
/******************************************************************************
*      Taxonomy of floating point data types                                  *
******************************************************************************/

enum {
 _FP_NAN = 1, /*      NaN                    */
 _FP_INFINITE = 2, /*      + or - infinity        */
 _FP_ZERO = 3, /*      + or - zero            */
 _FP_NORMAL = 4, /*      all normal numbers     */
 _FP_SUBNORMAL = 5, /*      denormal numbers       */
 _FP_SUPERNORMAL = 6 /*      long double delivering > LDBL_DIG, e.g. 1. + 2^-1000 */
};
# 99 "/usr/include/architecture/i386/math.h" 3 4
/* fma() *function call* is more costly than equivalent (in-line) multiply and add operations    */
/* For single and double precision, the cost isn't too bad, because we can fall back on higher   */
/* precision hardware, with the necessary range to handle infinite precision products. However,  */
/* expect the long double fma to be at least an order of magnitude slower than a simple multiply */
/* and an add.                                                                                   */




/* The values returned by `ilogb' for 0 and NaN respectively. */



/* Bitmasks for the math_errhandling macro.  */




extern unsigned int __math_errhandling ( void );

/********************************************************************************
*                                                                               *
*                              Inquiry macros                                   *
*                                                                               *
*   fpclassify      Returns one of the FP_Å values.                             *
*   isnormal        Non-zero if and only if the argument x is normalized.       *
*   isfinite        Non-zero if and only if the argument x is finite.           *
*   isnan           Non-zero if and only if the argument x is a NaN.            *
*   signbit         Non-zero if and only if the sign of the argument x is       *
*                   negative.  This includes, NaNs, infinities and zeros.       *
*                                                                               *
********************************************************************************/






extern int __fpclassifyf(float );
extern int __fpclassifyd(double );
extern int __fpclassify (long double);


    /*  Yes, that's right. You only get the fast iswhatever() macros if you do NOT turn on -ffast-math.  */
    /*  These inline functions require the compiler to be compiling to standard in order to work.        */
    /*  -ffast-math, among other things, implies that NaNs don't happen. The compiler can in that case   */
    /*  optimize x != x to be false always, wheras it would be true for NaNs. That breaks __inline_isnan() */
    /*  below.                                                                                           */
# 172 "/usr/include/architecture/i386/math.h" 3 4
 static __inline__ int __inline_isfinitef (float ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isfinited (double ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isfinite (long double) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isinff (float ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isinfd (double ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isinf (long double) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnanf (float ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnand (double ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnan (long double) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnormalf (float ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnormald (double ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnormal (long double) __attribute__ ((__always_inline__));
 static __inline__ int __inline_signbitf (float ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_signbitd (double ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_signbit (long double) __attribute__ ((__always_inline__));

 static __inline__ int __inline_isinff( float __x ) { return __builtin_fabsf(__x) == __builtin_inff(); }
 static __inline__ int __inline_isinfd( double __x ) { return __builtin_fabs(__x) == __builtin_inf(); }
 static __inline__ int __inline_isinf( long double __x ) { return __builtin_fabsl(__x) == __builtin_infl(); }
 static __inline__ int __inline_isfinitef( float __x ) { return __x == __x && __builtin_fabsf(__x) != __builtin_inff(); }
 static __inline__ int __inline_isfinited( double __x ) { return __x == __x && __builtin_fabs(__x) != __builtin_inf(); }
 static __inline__ int __inline_isfinite( long double __x ) { return __x == __x && __builtin_fabsl(__x) != __builtin_infl(); }
 static __inline__ int __inline_isnanf( float __x ) { return __x != __x; }
 static __inline__ int __inline_isnand( double __x ) { return __x != __x; }
 static __inline__ int __inline_isnan( long double __x ) { return __x != __x; }
 static __inline__ int __inline_signbitf( float __x ) { union{ float __f; unsigned int __u; }__u; __u.__f = __x; return (int)(__u.__u >> 31); }
 static __inline__ int __inline_signbitd( double __x ) { union{ double __f; unsigned int __u[2]; }__u; __u.__f = __x; return (int)(__u.__u[1] >> 31); }
 static __inline__ int __inline_signbit( long double __x ){ union{ long double __ld; struct{ unsigned int __m[2]; short __sexp; }__p; }__u; __u.__ld = __x; return (int) (((unsigned short) __u.__p.__sexp) >> 15); }
 static __inline__ int __inline_isnormalf( float __x ) { float fabsf = __builtin_fabsf(__x); if( __x != __x ) return 0; return fabsf < __builtin_inff() && fabsf >= 1.17549435e-38F; }
 static __inline__ int __inline_isnormald( double __x ) { double fabsf = __builtin_fabs(__x); if( __x != __x ) return 0; return fabsf < __builtin_inf() && fabsf >= 2.2250738585072014e-308; }
 static __inline__ int __inline_isnormal( long double __x ) { long double fabsf = __builtin_fabsl(__x); if( __x != __x ) return 0; return fabsf < __builtin_infl() && fabsf >= 3.36210314311209350626e-4932L; }
# 256 "/usr/include/architecture/i386/math.h" 3 4
/********************************************************************************
*                                                                               *
*                              Math Functions                                   *
*                                                                               *
********************************************************************************/

extern double acos( double );
extern float acosf( float );

extern double asin( double );
extern float asinf( float );

extern double atan( double );
extern float atanf( float );

extern double atan2( double, double );
extern float atan2f( float, float );

extern double cos( double );
extern float cosf( float );

extern double sin( double );
extern float sinf( float );

extern double tan( double );
extern float tanf( float );

extern double acosh( double );
extern float acoshf( float );

extern double asinh( double );
extern float asinhf( float );

extern double atanh( double );
extern float atanhf( float );

extern double cosh( double );
extern float coshf( float );

extern double sinh( double );
extern float sinhf( float );

extern double tanh( double );
extern float tanhf( float );

extern double exp ( double );
extern float expf ( float );

extern double exp2 ( double );
extern float exp2f ( float );

extern double expm1 ( double );
extern float expm1f ( float );

extern double log ( double );
extern float logf ( float );

extern double log10 ( double );
extern float log10f ( float );

extern double log2 ( double );
extern float log2f ( float );

extern double log1p ( double );
extern float log1pf ( float );

extern double logb ( double );
extern float logbf ( float );

extern double modf ( double, double * );
extern float modff ( float, float * );

extern double ldexp ( double, int );
extern float ldexpf ( float, int );

extern double frexp ( double, int * );
extern float frexpf ( float, int * );

extern int ilogb ( double );
extern int ilogbf ( float );

extern double scalbn ( double, int );
extern float scalbnf ( float, int );

extern double scalbln ( double, long int );
extern float scalblnf ( float, long int );

extern double fabs( double );
extern float fabsf( float );

extern double cbrt( double );
extern float cbrtf( float );

extern double hypot ( double, double );
extern float hypotf ( float, float );

extern double pow ( double, double );
extern float powf ( float, float );

extern double sqrt( double );
extern float sqrtf( float );

extern double erf( double );
extern float erff( float );

extern double erfc( double );
extern float erfcf( float );

extern double lgamma( double );
extern float lgammaf( float );

extern double tgamma( double );
extern float tgammaf( float );

extern double ceil ( double );
extern float ceilf ( float );

extern double floor ( double );
extern float floorf ( float );

extern double nearbyint ( double );
extern float nearbyintf ( float );

extern double rint ( double );
extern float rintf ( float );

extern long int lrint ( double );
extern long int lrintf ( float );

extern double round ( double );
extern float roundf ( float );

extern long int lround ( double );
extern long int lroundf ( float );



    /* long long is not part of C90. Make sure you are passing -std=c99 or -std=gnu99 or better if you need this. */
    extern long long int llrint ( double );
    extern long long int llrintf ( float );

    extern long long int llround ( double );
    extern long long int llroundf ( float );



extern double trunc ( double );
extern float truncf ( float );

extern double fmod ( double, double );
extern float fmodf ( float, float );

extern double remainder ( double, double );
extern float remainderf ( float, float );

extern double remquo ( double, double, int * );
extern float remquof ( float, float, int * );

extern double copysign ( double, double );
extern float copysignf ( float, float );

extern double nan( const char * );
extern float nanf( const char * );

extern double nextafter ( double, double );
extern float nextafterf ( float, float );

extern double fdim ( double, double );
extern float fdimf ( float, float );

extern double fmax ( double, double );
extern float fmaxf ( float, float );

extern double fmin ( double, double );
extern float fminf ( float, float );

extern double fma ( double, double, double );
extern float fmaf ( float, float, float );

extern long double acosl(long double);
extern long double asinl(long double);
extern long double atanl(long double);
extern long double atan2l(long double, long double);
extern long double cosl(long double);
extern long double sinl(long double);
extern long double tanl(long double);
extern long double acoshl(long double);
extern long double asinhl(long double);
extern long double atanhl(long double);
extern long double coshl(long double);
extern long double sinhl(long double);
extern long double tanhl(long double);
extern long double expl(long double);
extern long double exp2l(long double);
extern long double expm1l(long double);
extern long double logl(long double);
extern long double log10l(long double);
extern long double log2l(long double);
extern long double log1pl(long double);
extern long double logbl(long double);
extern long double modfl(long double, long double *);
extern long double ldexpl(long double, int);
extern long double frexpl(long double, int *);
extern int ilogbl(long double);
extern long double scalbnl(long double, int);
extern long double scalblnl(long double, long int);
extern long double fabsl(long double);
extern long double cbrtl(long double);
extern long double hypotl(long double, long double);
extern long double powl(long double, long double);
extern long double sqrtl(long double);
extern long double erfl(long double);
extern long double erfcl(long double);
extern long double lgammal(long double);
extern long double tgammal(long double);
extern long double ceill(long double);
extern long double floorl(long double);
extern long double nearbyintl(long double);
extern long double rintl(long double);
extern long int lrintl(long double);
extern long double roundl(long double);
extern long int lroundl(long double);


    /* long long is not part of C90. Make sure you are passing -std=c99 or -std=gnu99 or better if you need this. */
    extern long long int llrintl(long double);
    extern long long int llroundl(long double);


extern long double truncl(long double);
extern long double fmodl(long double, long double);
extern long double remainderl(long double, long double);
extern long double remquol(long double, long double, int *);
extern long double copysignl(long double, long double);
extern long double nanl(const char *);
extern long double nextafterl(long double, long double);
extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);
extern long double fdiml(long double, long double);
extern long double fmaxl(long double, long double);
extern long double fminl(long double, long double);
extern long double fmal(long double, long double, long double);
# 507 "/usr/include/architecture/i386/math.h" 3 4
extern double __inf( void );
extern float __inff( void );
extern long double __infl( void );
extern float __nan( void ); /* 10.3 (and later) must retain in ABI for backward compatability */


extern double j0 ( double );

extern double j1 ( double );

extern double jn ( int, double );

extern double y0 ( double );

extern double y1 ( double );

extern double yn ( int, double );

extern double scalb ( double, double );
# 543 "/usr/include/architecture/i386/math.h" 3 4
extern int signgam; /* required for unix 2003 */
# 557 "/usr/include/architecture/i386/math.h" 3 4
extern long int rinttol ( double ); /* Legacy API: please use C99 lrint() instead. */

extern long int roundtol ( double ); /* Legacy API: please use C99 lround() instead. */

/*
 * XOPEN/SVID
 */
# 579 "/usr/include/architecture/i386/math.h" 3 4
/* 
 * set X_TLOSS = pi*2**52, which is possibly defined in <values.h>
 * (one may replace the following line by "#include <values.h>")
 */
# 597 "/usr/include/architecture/i386/math.h" 3 4
extern int finite ( double ); /* Legacy API: please use C99 isfinite() instead. */

extern double gamma ( double ); /* Legacy API: please use C99 tgamma() instead. */







/*
 * IEEE Test Vector
 */
extern double significand ( double );

/*
 * BSD math library entry points
 */
extern double drem ( double, double ); /* Legacy API: please use C99 remainder() instead. */







}
# 29 "/usr/include/math.h" 2 3 4
# 147 "./../libev/ev.c" 2
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
# 148 "./../libev/ev.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
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
# 1 "/usr/include/sys/fcntl.h" 1 3 4
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
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*-
 * Copyright (c) 1983, 1990, 1993
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
 *	@(#)fcntl.h	8.3 (Berkeley) 1/21/94
 */





/*
 * This file includes the definitions for open and fcntl
 * described by POSIX for <fcntl.h>; it also includes
 * related kernel definitions.
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
# 79 "/usr/include/sys/fcntl.h" 2 3 4
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
# 80 "/usr/include/sys/fcntl.h" 2 3 4

/* We should not be exporting size_t here.  Temporary for gcc bootstrapping. */
# 93 "/usr/include/sys/fcntl.h" 3 4
typedef __darwin_off_t off_t;
# 102 "/usr/include/sys/fcntl.h" 3 4
/*
 * File status flags: these are used by open(2), fcntl(2).
 * They are also used (indirectly) in the kernel file structure f_flags,
 * which is a superset of the open/fcntl flags.  Open flags and f_flags
 * are inter-convertible using OFLAGS(fflags) and FFLAGS(oflags).
 * Open/fcntl flags begin with O_; kernel-internal flags begin with F.
 */
/* open-only flags */





/*
 * Kernel encoding of open mode; separate read and write bits that are
 * independently testable: 1 greater than the above.
 *
 * XXX
 * FREAD and FWRITE are excluded from the #ifdef KERNEL so that TIOCFLUSH,
 * which was documented to use FREAD/FWRITE, continues to work.
 */
# 153 "/usr/include/sys/fcntl.h" 3 4
//#define	O_SYNC  /* ??? POSIX: Write according to synchronized I/O file integrity completion */


/*
 * The O_* flags used to have only F* names, which were used in the kernel
 * and by fcntl.  We retain the F* names for the kernel f_flags field
 * and for backward compatibility for fcntl.
 */
# 170 "/usr/include/sys/fcntl.h" 3 4
/*
 * Flags used for copyfile(2)
 */







/*
 * Constants used for fcntl(2)
 */

/* command values */
# 217 "/usr/include/sys/fcntl.h" 3 4
// FS-specific fcntl()'s numbers begin at 0x00010000 and go up




/* file descriptor flags (F_GETFD, F_SETFD) */


/* record locking flags (F_GETLK, F_SETLK, F_SETLKW) */




/*
 * [XSI] The values used for l_whence shall be defined as described
 * in <unistd.h>
 */






/*
 * [XSI] The symbolic names for file modes for use as values of mode_t
 * shall be defined as described in <sys/stat.h>
 */

/* File type */
# 259 "/usr/include/sys/fcntl.h" 3 4
/* File mode */
/* Read, write, execute/search by owner */




/* Read, write, execute/search by group */




/* Read, write, execute/search by others */
# 289 "/usr/include/sys/fcntl.h" 3 4
/* allocate flags (F_PREALLOCATE) */




/* Position Modes (fst_posmode) for F_PREALLOCATE */


     /* we can keep them in sync should we desire */



/*
 * Advisory file segment locking data type -
 * information passed to system by user
 */
struct flock {
 off_t l_start; /* starting offset */
 off_t l_len; /* len = 0 means until end of file */
 pid_t l_pid; /* lock owner */
 short l_type; /* lock type: read/write, etc. */
 short l_whence; /* type of l_start */
};



/*
 * advisory file read data type -
 * information passed by user to system
 */
struct radvisory {
       off_t ra_offset;
       int ra_count;
};

/*
 * detached code signatures data type -
 * information passed by user to system
 * used by F_ADDSIGS
 */
typedef struct fsignatures {
 off_t fs_file_start;
 void *fs_blob_start;
 size_t fs_blob_size;
} fsignatures_t;

/* lock operations for flock(2) */





/*  fstore_t type used by F_DEALLOCATE and F_PREALLOCATE commands */

typedef struct fstore {
 unsigned int fst_flags; /* IN: flags word */
 int fst_posmode; /* IN: indicates use of offset field */
 off_t fst_offset; /* IN: start of the region */
 off_t fst_length; /* IN: size of the region */
 off_t fst_bytesalloc; /* OUT: number of bytes allocated */
} fstore_t;

/* fbootstraptransfer_t used by F_READBOOTSTRAP and F_WRITEBOOTSTRAP commands */

typedef struct fbootstraptransfer {
  off_t fbt_offset; /* IN: offset to start read/write */
  size_t fbt_length; /* IN: number of bytes to transfer */
  void *fbt_buffer; /* IN: buffer to be read/written */
} fbootstraptransfer_t;



/*
 * For F_LOG2PHYS this information is passed back to user
 * Currently only devoffset is returned - that is the VOP_BMAP
 * result - the disk device address corresponding to the
 * current file offset (likely set with an lseek).
 *
 * The flags could hold an indication of whether the # of 
 * contiguous bytes reflects the true extent length on disk,
 * or is an advisory value that indicates there is at least that
 * many bytes contiguous.  For some filesystems it might be too
 * inefficient to provide anything beyond the advisory value.
 * Flags and contiguous bytes return values are not yet implemented.
 * For them the fcntl will nedd to switch from using BMAP to CMAP
 * and a per filesystem type flag will be needed to interpret the
 * contiguous bytes count result from CMAP.
 */
#pragma pack(4)

struct log2phys {
 unsigned int l2p_flags; /* unused so far */
 off_t l2p_contigbytes; /* unused so far */
 off_t l2p_devoffset; /* bytes into device */
};

#pragma pack()
# 396 "/usr/include/sys/fcntl.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;


typedef enum {
 FILESEC_OWNER = 1,
 FILESEC_GROUP = 2,
 FILESEC_UUID = 3,
 FILESEC_MODE = 4,
 FILESEC_ACL = 5,
 FILESEC_GRPUUID = 6,

/* XXX these are private to the implementation */
 FILESEC_ACL_RAW = 100,
 FILESEC_ACL_ALLOCSIZE = 101
} filesec_property_t;

/* XXX backwards compatibility */



extern "C" {
int open(const char *, int, ...) __asm("_" "open" /* nothing */ "$UNIX2003");
int creat(const char *, mode_t) __asm("_" "creat" /* nothing */ "$UNIX2003");
int fcntl(int, int, ...) __asm("_" "fcntl" /* nothing */ "$UNIX2003");

int openx_np(const char *, int, filesec_t);
int flock(int, int);
filesec_t filesec_init(void);
filesec_t filesec_dup(filesec_t);
void filesec_free(filesec_t);
int filesec_get_property(filesec_t, filesec_property_t, void *);
int filesec_set_property(filesec_t, filesec_property_t, const void *);
int filesec_query_property(filesec_t, filesec_property_t, int *);



}
# 23 "/usr/include/fcntl.h" 2 3 4
# 149 "./../libev/ev.c" 2
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
# 150 "./../libev/ev.c" 2

# 1 "/usr/include/stdio.h" 1 3 4
/*
 * Copyright (c) 2000, 2005, 2007 Apple Inc. All rights reserved.
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
 * This code is derived from software contributed to Berkeley by
 * Chris Torek.
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
 *	@(#)stdio.h	8.5 (Berkeley) 4/29/95
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
# 65 "/usr/include/stdio.h" 2 3 4



/* DO NOT REMOVE THIS COMMENT: fixincludes needs to see:
 * __gnuc_va_list and include <stdarg.h> */
typedef __darwin_va_list va_list;
# 87 "/usr/include/stdio.h" 3 4
typedef __darwin_off_t fpos_t;



/*
 * NB: to fit things in six character monocase externals, the stdio
 * code uses the prefix `__s' for stdio objects, typically followed
 * by a three-character attempt at a mnemonic.
 */

/* stdio buffers */
struct __sbuf {
 unsigned char *_base;
 int _size;
};

/* hold a buncha junk that would grow the ABI */
struct __sFILEX;

/*
 * stdio state variables.
 *
 * The following always hold:
 *
 *	if (_flags&(__SLBF|__SWR)) == (__SLBF|__SWR),
 *		_lbfsize is -_bf._size, else _lbfsize is 0
 *	if _flags&__SRD, _w is 0
 *	if _flags&__SWR, _r is 0
 *
 * This ensures that the getc and putc macros (or inline functions) never
 * try to write or read from a file that is in `read' or `write' mode.
 * (Moreover, they can, and do, automatically switch from read mode to
 * write mode, and back, on "r+" and "w+" files.)
 *
 * _lbfsize is used only to make the inline line-buffered output stream
 * code as compact as possible.
 *
 * _ub, _up, and _ur are used when ungetc() pushes back more characters
 * than fit in the current _bf, or when ungetc() pushes back a character
 * that does not match the previous one in _bf.  When this happens,
 * _ub._base becomes non-nil (i.e., a stream has ungetc() data iff
 * _ub._base!=NULL) and _up and _ur save the current values of _p and _r.
 *
 * NB: see WARNING above before changing the layout of this structure!
 */
typedef struct __sFILE {
 unsigned char *_p; /* current position in (some) buffer */
 int _r; /* read space left for getc() */
 int _w; /* write space left for putc() */
 short _flags; /* flags, below; this FILE is free if 0 */
 short _file; /* fileno, if Unix descriptor, else -1 */
 struct __sbuf _bf; /* the buffer (at least 1 byte, if !NULL) */
 int _lbfsize; /* 0 or -_bf._size, for inline putc */

 /* operations */
 void *_cookie; /* cookie passed to io functions */
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);

 /* separate buffer for long sequences of ungetc() */
 struct __sbuf _ub; /* ungetc buffer */
 struct __sFILEX *_extra; /* additions to FILE to not break ABI */
 int _ur; /* saved _r when _r is counting ungetc data */

 /* tricks to meet minimum requirements even when malloc() fails */
 unsigned char _ubuf[3]; /* guarantee an ungetc() buffer */
 unsigned char _nbuf[1]; /* guarantee a getc() buffer */

 /* separate buffer for fgetln() when line crosses buffer boundary */
 struct __sbuf _lb; /* buffer for fgetln() */

 /* Unix stdio files get aligned to block boundaries on fseek() */
 int _blksize; /* stat.st_blksize (may be != _bf._size) */
 fpos_t _offset; /* current lseek offset (see WARNING) */
} FILE;

extern "C" {

extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;



}





 /* RD and WR are never simultaneously asserted */
# 193 "/usr/include/stdio.h" 3 4
/*
 * The following three definitions are for ANSI C, which took them
 * from System V, which brilliantly took internal interface macros and
 * made them official arguments to setvbuf(), without renaming them.
 * Hence, these ugly _IOxxx names are *supposed* to appear in user code.
 *
 * Although numbered as their counterparts above, the implementation
 * does not rely on this.
 */







/*
 * FOPEN_MAX is a minimum maximum, and is the number of streams that
 * stdio can provide without attempting to allocate further resources
 * (which could fail).  Do not use this for anything.
 */
    /* must be == _POSIX_STREAM_MAX <limits.h> */



/* System V/ANSI C; this is the wrong way to do this, do *not* use these. */
# 245 "/usr/include/stdio.h" 3 4
/*
 * Functions defined in ANSI C standard.
 */
extern "C" {
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * , fpos_t *);
char *fgets(char * , int, FILE *);
FILE *fopen(const char * , const char * );
int fprintf(FILE * , const char * , ...) /* nothing */;
int fputc(int, FILE *);
int fputs(const char * , FILE * ) __asm("_" "fputs" "$UNIX2003");
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
     FILE * ) __asm("_" "freopen" "$UNIX2003");
int fscanf(FILE * , const char * , ...) /* nothing */;
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) __asm("_" "fwrite" "$UNIX2003");
int getc(FILE *);
int getchar(void);
char *gets(char *);

extern const /* define reserved names to standard */ int sys_nerr; /* perror(3) external variables */
extern const /* define reserved names to standard */ char *const /* define reserved names to standard */ sys_errlist[];

void perror(const char *);
int printf(const char * , ...) /* nothing */;
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * , ...) /* nothing */;
void setbuf(FILE * , char * );
int setvbuf(FILE * , char * , int, size_t);
int sprintf(char * , const char * , ...) /* nothing */;
int sscanf(const char * , const char * , ...) /* nothing */;
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * , const char * , va_list) /* nothing */;
int vprintf(const char * , va_list) /* nothing */;
int vsprintf(char * , const char * , va_list) /* nothing */;

int asprintf(char **, const char *, ...) /* nothing */;
int vasprintf(char **, const char *, va_list) /* nothing */;

}

/*
 * Functions defined in POSIX 1003.1.
 */



extern "C" {
char *ctermid(char *);

char *ctermid_r(char *);

FILE *fdopen(int, const char *);

char *fgetln(FILE *, size_t *);

int fileno(FILE *);
void flockfile(FILE *);

const /* define reserved names to standard */ char
 *fmtcheck(const char *, const char *);
int fpurge(FILE *);

int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);

int getw(FILE *);

int pclose(FILE *);
FILE *popen(const char *, const char *);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);

int putw(int, FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);

int snprintf(char * , size_t, const char * , ...) /* nothing */;
char *tempnam(const char *, const char *) __asm("_" "tempnam" "$UNIX2003");
int vfscanf(FILE * , const char * , va_list) /* nothing */;
int vscanf(const char * , va_list) /* nothing */;
int vsnprintf(char * , size_t, const char * , va_list) /* nothing */;
int vsscanf(const char * , const char * , va_list) /* nothing */;

FILE *zopen(const char *, const char *, int);

}

/*
 * Stdio function-access interface.
 */

extern "C" {
FILE *funopen(const void *,
  int (*)(void *, char *, int),
  int (*)(void *, const char *, int),
  fpos_t (*)(void *, fpos_t, int),
  int (*)(void *));
}





/*
 * Functions internal to the implementation.
 */
extern "C" {
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) /* nothing */;
int __swbuf(int, FILE *);
}

/*
 * The __sfoo macros are here so that we can
 * define function versions in the C library.
 */


static inline /* convert to C++ keyword */ int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 152 "./../libev/ev.c" 2

# 1 "/usr/include/assert.h" 1 3 4
/*-
 * Copyright (c) 1992, 1993
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
 *	@(#)assert.h	8.2 (Berkeley) 1/21/94
 * $FreeBSD: src/include/assert.h,v 1.4 2002/03/23 17:24:53 imp Exp $
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
# 43 "/usr/include/assert.h" 2 3 4

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
# 45 "/usr/include/assert.h" 2 3 4


/*
 * Unlike other ANSI header files, <assert.h> may usefully be included
 * multiple times, with and without NDEBUG defined.
 */
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__));
void __eprintf(const char *, const char *, unsigned, const char *) __attribute__((__noreturn__));
}
# 154 "./../libev/ev.c" 2
# 1 "/usr/include/errno.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
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
# 1 "/usr/include/sys/errno.h" 1 3 4
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
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1986, 1989, 1993
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
 *	@(#)errno.h	8.5 (Berkeley) 1/21/94
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
# 73 "/usr/include/sys/errno.h" 2 3 4
extern "C" {
extern int * __error(void);

}

/*
 * Error codes
 */
# 93 "/usr/include/sys/errno.h" 3 4
     /* 11 was EAGAIN */
# 118 "/usr/include/sys/errno.h" 3 4
/* math software */



/* non-blocking and interrupt i/o */





/* ipc/network software -- argument errors */
# 158 "/usr/include/sys/errno.h" 3 4
/* ipc/network software -- operational errors */
# 177 "/usr/include/sys/errno.h" 3 4
/* should be rearranged */






/* quotas & mush */






/* Network File System */
# 210 "/usr/include/sys/errno.h" 3 4
/* Intelligent device errors */






/* Program loading errors */
# 244 "/usr/include/sys/errno.h" 3 4
/* This value is only discrete when compiling __DARWIN_UNIX03, or KERNEL */
# 24 "/usr/include/errno.h" 2 3 4
# 155 "./../libev/ev.c" 2
# 1 "/usr/include/sys/types.h" 1 3 4
/*
 * Copyright (c) 2000-2004 Apple Computer, Inc. All rights reserved.
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
/*-
 * Copyright (c) 1982, 1986, 1991, 1993, 1994
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
 *	@(#)types.h	8.4 (Berkeley) 1/21/94
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
# 73 "/usr/include/sys/types.h" 2 3 4


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
# 76 "/usr/include/sys/types.h" 2 3 4

/* Machine type dependent parameters. */
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
# 79 "/usr/include/sys/types.h" 2 3 4
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
# 80 "/usr/include/sys/types.h" 2 3 4

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
# 82 "/usr/include/sys/types.h" 2 3 4


typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;

typedef unsigned long u_long;


typedef unsigned short ushort; /* Sys V compatibility */
typedef unsigned int uint; /* Sys V compatibility */


typedef u_int64_t u_quad_t; /* quads */
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t; /* core address */
typedef int32_t daddr_t; /* disk address */






typedef u_int32_t fixpt_t; /* fixed point number */


typedef __darwin_blkcnt_t blkcnt_t;




typedef __darwin_blksize_t blksize_t;




typedef __darwin_gid_t gid_t;





typedef __uint32_t in_addr_t; /* base type for internet address */




typedef __uint16_t in_port_t;



typedef __darwin_ino_t ino_t; /* inode number */





typedef __darwin_ino64_t ino64_t; /* 64bit inode number */






typedef __int32_t key_t; /* IPC key (for Sys V IPC) */
# 157 "/usr/include/sys/types.h" 3 4
typedef __uint16_t nlink_t; /* link count */
# 176 "/usr/include/sys/types.h" 3 4
typedef int32_t segsz_t; /* segment size */
typedef int32_t swblk_t; /* swap offset */
# 190 "/usr/include/sys/types.h" 3 4
/* Major, minor numbers, dev_t's. */

/*
 * These lowercase macros tend to match member functions in some C++ code,
 * so for C++, we must use inline functions instead.
 */

static inline __int32_t major(__uint32_t _x)
{
 return (__int32_t)(((__uint32_t)_x >> 24) & 0xff);
}

static inline __int32_t minor(__uint32_t _x)
{
 return (__int32_t)((_x) & 0xffffff);
}

static inline dev_t makedev(__uint32_t _major, __uint32_t _minor)
{
 return (dev_t)(((_major) << 24) | (_minor));
}
# 223 "/usr/include/sys/types.h" 3 4
typedef __darwin_clock_t clock_t;
# 235 "/usr/include/sys/types.h" 3 4
typedef __darwin_ssize_t ssize_t;




typedef __darwin_time_t time_t;




typedef __darwin_useconds_t useconds_t;




typedef __darwin_suseconds_t suseconds_t;



/*
 * This code is present here in order to maintain historical backward
 * compatability, and is intended to be removed at some point in the
 * future; please include <sys/select.h> instead.
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
# 168 "/usr/include/sys/_structs.h" 3 4
/*
 * Select uses bit masks of file descriptors in longs.  These macros
 * manipulate such bit fields (the filesystem macros use chars).  The
 * extra protection here is to permit application redefinition above
 * the default size.
 */
# 183 "/usr/include/sys/_structs.h" 3 4
extern "C" {
typedef struct fd_set {
 __int32_t fds_bits[(((1024) + (((sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */) - 1)) / ((sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */)) /* # y's == x bits? */];
} fd_set;
}

/* This inline avoids argument side-effect issues with FD_ISSET() */
static inline /* convert to C++ keyword */ int
__darwin_fd_isset(int _n, struct fd_set *_p)
{
 return (_p->fds_bits[_n/(sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */] & (1<<(_n % (sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */)));
}






/*
 * Use the built-in bzero function instead of the library version so that
 * we do not pollute the namespace or introduce prototype warnings.
 */
# 261 "/usr/include/sys/types.h" 2 3 4




typedef __int32_t fd_mask;

/*
 * Select uses bit masks of file descriptors in longs.  These macros
 * manipulate such bit fields (the filesystem macros use chars).  The
 * extra protection here is to permit application redefinition above
 * the default size.
 */
# 322 "/usr/include/sys/types.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;



typedef __darwin_pthread_condattr_t pthread_condattr_t;



typedef __darwin_pthread_mutex_t pthread_mutex_t;



typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;



typedef __darwin_pthread_once_t pthread_once_t;



typedef __darwin_pthread_rwlock_t pthread_rwlock_t;



typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 357 "/usr/include/sys/types.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;


/* statvfs and fstatvfs */


typedef __darwin_fsblkcnt_t fsblkcnt_t;




typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 156 "./../libev/ev.c" 2
# 1 "/usr/include/time.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
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
/*
 * Copyright (c) 1989, 1993
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
 *	@(#)time.h	8.3 (Berkeley) 1/21/94
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
# 67 "/usr/include/time.h" 2 3 4


# 1 "/usr/include/_structs.h" 1 3 4
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
# 88 "/usr/include/sys/_structs.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 25 "/usr/include/_structs.h" 2 3 4
# 70 "/usr/include/time.h" 2 3 4
# 90 "/usr/include/time.h" 3 4
struct tm {
 int tm_sec; /* seconds after the minute [0-60] */
 int tm_min; /* minutes after the hour [0-59] */
 int tm_hour; /* hours since midnight [0-23] */
 int tm_mday; /* day of the month [1-31] */
 int tm_mon; /* months since January [0-11] */
 int tm_year; /* years since 1900 */
 int tm_wday; /* days since Sunday [0-6] */
 int tm_yday; /* days since January 1 [0-365] */
 int tm_isdst; /* Daylight Savings Time flag */
 long tm_gmtoff; /* offset from CUT in seconds */
 char *tm_zone; /* timezone abbreviation */
};
# 113 "/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" "$UNIX2003");

extern int daylight;

extern "C" {
char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" "$UNIX2003");
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" "$UNIX2003");
size_t strftime(char * , size_t, const char * , const struct tm * ) __asm("_" "strftime" "$UNIX2003");
char *strptime(const char * , const char * , struct tm * ) __asm("_" "strptime" "$UNIX2003");
time_t time(time_t *);


void tzset(void);


/* [TSF] Thread safe functions */
char *asctime_r(const struct tm * , char * );
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * , struct tm * );
struct tm *localtime_r(const time_t * , struct tm * );


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep" /* nothing */ "$UNIX2003");

}
# 157 "./../libev/ev.c" 2

# 1 "/usr/include/signal.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
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
 * Copyright (c) 1991, 1993
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
 *	@(#)signal.h	8.3 (Berkeley) 3/30/94
 */
# 159 "./../libev/ev.c" 2




# 1 "./../libev/ev.h" 1
/*
 * libev native API header
 *
 * Copyright (c) 2007,2008 Marc Alexander Lehmann <libev@schmorp.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modifica-
 * tion, are permitted provided that the following conditions are met:
 * 
 *   1.  Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 * 
 *   2.  Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MER-
 * CHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPE-
 * CIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTH-
 * ERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * the GNU General Public License ("GPL") version 2 or any later version,
 * in which case the provisions of the GPL are applicable instead of
 * the above. If you wish to allow the use of your version of this file
 * only under the terms of the GPL and not to allow others to use your
 * version of this file under the BSD license, indicate your decision
 * by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL. If you do not delete the
 * provisions above, a recipient may use your version of this file under
 * either the BSD or the GPL.
 */
# 164 "./../libev/ev.c" 2



# 1 "/usr/include/sys/time.h" 1 3 4
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
 *	@(#)time.h	8.2 (Berkeley) 7/10/94
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
# 68 "/usr/include/sys/time.h" 2 3 4
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
# 69 "/usr/include/sys/time.h" 2 3 4

/*
 * [XSI] The fd_set type shall be defined as described in <sys/select.h>.
 * The timespec structure shall be defined as described in <time.h>
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
# 78 "/usr/include/sys/time.h" 2 3 4
# 89 "/usr/include/sys/time.h" 3 4
/*
 * Structure used as a parameter by getitimer(2) and setitimer(2) system
 * calls.
 */
struct itimerval {
 struct timeval it_interval; /* timer interval */
 struct timeval it_value; /* current value */
};

/*
 * Names of the interval timers, and structure
 * defining a timer setting.
 */




/*
 * Select uses bit masks of file descriptors in longs.  These macros
 * manipulate such bit fields (the filesystem macros use chars).  The
 * extra protection here is to permit application redefinition above
 * the default size.
 */
# 144 "/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest; /* minutes west of Greenwich */
 int tz_dsttime; /* type of dst correction */
};
# 156 "/usr/include/sys/time.h" 3 4
/* Operations on timevals. */
# 184 "/usr/include/sys/time.h" 3 4
/*
 * Getkerninfo clock information structure
 */
struct clockinfo {
 int hz; /* clock frequency */
 int tick; /* micro-seconds per hz tick */
 int tickadj; /* clock skew rate for adjtime() */
 int stathz; /* statistics clock frequency */
 int profhz; /* profiling clock frequency */
};




# 1 "/usr/include/time.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
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
/*
 * Copyright (c) 1989, 1993
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
 *	@(#)time.h	8.3 (Berkeley) 1/21/94
 */
# 199 "/usr/include/sys/time.h" 2 3 4


extern "C" {


int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *);
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * , void * );

# 1 "/usr/include/sys/_select.h" 1 3 4
/*
 * Copyright (c) 2005, 2007 Apple Inc. All rights reserved.
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
 * This is called from sys/select.h and sys/time.h for the common prototype
 * of select().  Setting _DARWIN_C_SOURCE or _DARWIN_UNLIMITED_SELECT uses
 * the version of select() that does not place a limit on the first argument
 * (nfds).  In the UNIX conformance case, values of nfds greater than
 * FD_SETSIZE will return an error of EINVAL.
 */



int select(int, fd_set * , fd_set * ,
  fd_set * , struct timeval * )






  __asm("_" "select" /* nothing */ "$UNIX2003")


  ;
# 214 "/usr/include/sys/time.h" 2 3 4

int setitimer(int, const struct itimerval * ,
  struct itimerval * );
int utimes(const char *, const struct timeval *);

}
# 168 "./../libev/ev.c" 2
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
# 169 "./../libev/ev.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
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
 * Copyright (c) 1998-1999 Apple Computer, Inc. All Rights Reserved
 * Copyright (c) 1991, 1993, 1994
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
 *	@(#)unistd.h	8.12 (Berkeley) 4/27/95
 *
 *  Copyright (c)  1998 Apple Compter, Inc.
 *  All Rights Reserved
 */

/* History:
        7/14/99 EKN at Apple fixed getdirentriesattr from getdirentryattr
        3/26/98 CHW at Apple added real interface to searchfs call
  	3/5/98  CHW at Apple added hfs semantic system calls headers
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
# 72 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
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
 * Copyright (c) 1989, 1993
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
 *	@(#)unistd.h	8.2 (Berkeley) 1/7/94
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
# 68 "/usr/include/sys/unistd.h" 2 3 4

/*
 * Although we have saved user/group IDs, we do not use them in setuid
 * as described in POSIX 1003.1, because the feature does not work for
 * root.  We use the saved IDs in seteuid/setegid, which are not currently
 * part of the POSIX 1003.1 specification.
 */







/* execution-time symbolic constants */
    /* may disable terminal special characters */






/* access function */






/*
 * Extended access functions.
 * Note that we depend on these matching the definitions in sys/kauth.h,
 * but with the bits shifted left by 8.
 */
# 123 "/usr/include/sys/unistd.h" 3 4
/* whence values for lseek(2) */







/* whence values for lseek(2); renamed by POSIX 1003.1 */






struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};




/* configurable pathname variables */
# 178 "/usr/include/sys/unistd.h" 3 4
/* configurable system strings */
# 73 "/usr/include/unistd.h" 2 3 4
# 133 "/usr/include/unistd.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 145 "/usr/include/unistd.h" 3 4
/* Version test macros */
/* _POSIX_VERSION and _POSIX2_VERSION from sys/unistd.h */




/* Please keep this list in the same order as the applicable standard */
# 243 "/usr/include/unistd.h" 3 4
/* configurable system variables */
# 392 "/usr/include/unistd.h" 3 4
/* reserved for compatibility with Issue 5 */
# 414 "/usr/include/unistd.h" 3 4
extern "C" {

void _exit(int) __attribute__((__noreturn__));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);
int close(int) __asm("_" "close" /* nothing */ "$UNIX2003");
size_t confstr(int, char *, size_t) __asm("_" "confstr" "$UNIX2003");
char *crypt(const char *, const char *);
char *ctermid(char *);
int dup(int);
int dup2(int, int);

void encrypt(char *, int) __asm("_" "encrypt" "$UNIX2003");



int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char * const *);
int execve(const char *, char * const *, char * const *);
int execvp(const char *, char * const *);
int fchown(int, uid_t, gid_t);
int fchdir(int);
pid_t fork(void);
long fpathconf(int, int);
int fsync(int) __asm("_" "fsync" /* nothing */ "$UNIX2003");
int ftruncate(int, off_t);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);
int getgroups(int, gid_t []);
long gethostid(void);
int gethostname(char *, size_t);
char *getlogin(void);
int getlogin_r(char *, size_t);
int getopt(int, char * const [], const char *) __asm("_" "getopt" "$UNIX2003");
pid_t getpgid(pid_t);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
pid_t getsid(pid_t);
uid_t getuid(void);
char *getwd(char *); /* obsoleted by getcwd() */
int isatty(int);
int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" "$UNIX2003");
int link(const char *, const char *);
int lockf(int, int, off_t) __asm("_" "lockf" /* nothing */ "$UNIX2003");
off_t lseek(int, off_t, int);
int nice(int) __asm("_" "nice" "$UNIX2003");
long pathconf(const char *, int);
int pause(void) __asm("_" "pause" /* nothing */ "$UNIX2003");
int pipe(int [2]);
ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" /* nothing */ "$UNIX2003");
ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" /* nothing */ "$UNIX2003");
ssize_t read(int, void *, size_t) __asm("_" "read" /* nothing */ "$UNIX2003");
ssize_t readlink(const char * , char * , size_t);
int rmdir(const char *);
int setegid(gid_t);
int seteuid(uid_t);
int setgid(gid_t);
int setpgid(pid_t, pid_t);

pid_t setpgrp(void) __asm("_" "setpgrp" "$UNIX2003");



int setregid(gid_t, gid_t) __asm("_" "setregid" "$UNIX2003");
int setreuid(uid_t, uid_t) __asm("_" "setreuid" "$UNIX2003");
pid_t setsid(void);
int setuid(uid_t);
unsigned int
  sleep(unsigned int) __asm("_" "sleep" /* nothing */ "$UNIX2003");
void swab(const void * , void * , ssize_t);
int symlink(const char *, const char *);
void sync(void);
long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
int truncate(const char *, off_t);
char *ttyname(int);

int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" "$UNIX2003");



useconds_t
  ualarm(useconds_t, useconds_t);
int unlink(const char *);
int usleep(useconds_t) __asm("_" "usleep" /* nothing */ "$UNIX2003");
pid_t vfork(void);
ssize_t write(int, const void *, size_t) __asm("_" "write" /* nothing */ "$UNIX2003");

extern char *optarg; /* getopt(3) external variables */
extern int optind, opterr, optopt;


# 1 "/usr/include/sys/select.h" 1 3 4
/*
 * Copyright (c) 2000-2005 Apple Computer, Inc. All rights reserved.
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
 * Copyright (c) 1992, 1993
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
 *	@(#)select.h	8.2 (Berkeley) 1/4/94
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
# 67 "/usr/include/sys/select.h" 2 3 4
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
# 68 "/usr/include/sys/select.h" 2 3 4
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
# 69 "/usr/include/sys/select.h" 2 3 4

/*
 * [XSI] The <sys/select.h> header shall define the fd_set type as a structure.
 * The timespec structure shall be defined as described in <time.h>
 * The <sys/select.h> header shall define the timeval structure.
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
# 79 "/usr/include/sys/select.h" 2 3 4

/*
 * The time_t and suseconds_t types shall be defined as described in
 * <sys/types.h>
 * The sigset_t type shall be defined as described in <signal.h>
 */
# 100 "/usr/include/sys/select.h" 3 4
/*
 * [XSI] FD_CLR, FD_ISSET, FD_SET, FD_ZERO may be declared as a function, or
 *	 defined as a macro, or both
 * [XSI] FD_SETSIZE shall be defined as a macro
 */

/*
 * Select uses bit masks of file descriptors in longs.  These macros
 * manipulate such bit fields (the filesystem macros use chars).  The
 * extra protection here is to permit application redefinition above
 * the default size.
 */
# 134 "/usr/include/sys/select.h" 3 4
extern "C" {


int pselect(int, fd_set * , fd_set * ,
  fd_set * , const struct timespec * ,
  const sigset_t * )






  __asm("_" "pselect" /* nothing */ "$UNIX2003")


  ;


# 1 "/usr/include/sys/_select.h" 1 3 4
/*
 * Copyright (c) 2005, 2007 Apple Inc. All rights reserved.
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
 * This is called from sys/select.h and sys/time.h for the common prototype
 * of select().  Setting _DARWIN_C_SOURCE or _DARWIN_UNLIMITED_SELECT uses
 * the version of select() that does not place a limit on the first argument
 * (nfds).  In the UNIX conformance case, values of nfds greater than
 * FD_SETSIZE will return an error of EINVAL.
 */
# 153 "/usr/include/sys/select.h" 2 3 4

}
# 516 "/usr/include/unistd.h" 2 3 4

void _Exit(int) __attribute__((__noreturn__));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int);
void *brk(const void *);
int chroot(const char *);
void endusershell(void);
int execvP(const char *, const char *, char * const *);
char *fflagstostr(unsigned long);
int getdtablesize(void);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);
mode_t getmode(const void *, mode_t);
int getpagesize(void) __attribute__((__const__));
char *getpass(const char *);
int getpeereid(int, uid_t *, gid_t *);
int getpgid(pid_t _pid);
int getsgroups_np(int *, uuid_t);
int getsid(pid_t _pid);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
void *sbrk(int);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" "$UNIX2003");



int setlogin(const char *);
void *setmode(const char *);
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg; /* getsubopt(3) external variable */
int getsubopt(char **, char * const *, char **);

/*  HFS & HFS Plus semantics system calls go here */
# 597 "/usr/include/unistd.h" 3 4
int getattrlist(const char*,void*,void*,size_t,unsigned long) __asm("_" "getattrlist" "$UNIX2003");
int setattrlist(const char*,void*,void*,size_t,unsigned long) __asm("_" "setattrlist" "$UNIX2003");
int exchangedata(const char*,const char*,unsigned long);
int getdirentriesattr(int,void*,void*,size_t,unsigned long*,unsigned long*,unsigned long*,unsigned long);
int searchfs(const char*,void*,void*,unsigned long,unsigned long,void*);

int fsctl(const char *,unsigned long,void*,unsigned long);


extern int optreset;


}
# 170 "./../libev/ev.c" 2
# 179 "./../libev/ev.c"
/* this block tries to deduce configuration from header-defined symbols and defaults */
# 287 "./../libev/ev.c"
/* this block fixes any misconfiguration where we know we run into trouble otherwise */
# 306 "./../libev/ev.c"
# 1 "/usr/include/sys/select.h" 1 3 4
/*
 * Copyright (c) 2000-2005 Apple Computer, Inc. All rights reserved.
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
 * Copyright (c) 1992, 1993
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
 *	@(#)select.h	8.2 (Berkeley) 1/4/94
 */
# 307 "./../libev/ev.c" 2
# 325 "./../libev/ev.c"
/* on linux, we can use a (slow) syscall to avoid a dependency on pthread, */
/* which makes programs even slower. might work on other unices, too. */
# 346 "./../libev/ev.c"
/**/







/*
 * This is used to avoid floating point rounding problems.
 * It is added to ev_rt_now when scheduling periodics
 * to ensure progress, time-wise, even when rounding
 * errors are against us.
 * This value is good at least till the year 4000.
 * Better solutions welcome.
 */




/*#define CLEANUP_INTERVAL (MAX_BLOCKTIME * 5.) /* how often to try to free memory and re-check fds, TODO */
# 395 "./../libev/ev.c"
typedef ev_watcher *W;
typedef ev_watcher_list *WL;
typedef ev_watcher_time *WT;
# 412 "./../libev/ev.c"
/*****************************************************************************/

static void (*syserr_cb)(const char *msg);

void
ev_set_syserr_cb (void (*cb)(const char *msg))
{
  syserr_cb = cb;
}

static void __attribute__ ((noinline))
ev_syserr (const char *msg)
{
  if (!msg)
    msg = "(libev) system error";

  if (syserr_cb)
    syserr_cb (msg);
  else
    {
      perror (msg);
      abort ();
    }
}

static void *
ev_realloc_emul (void *ptr, long size)
{
  /* some systems, notably openbsd and darwin, fail to properly
   * implement realloc (x, 0) (as required by both ansi c-98 and
   * the single unix specification, so work around them here.
   */

  if (size)
    return realloc (ptr, size);

  free (ptr);
  return 0;
}

static void *(*alloc)(void *ptr, long size) = ev_realloc_emul;

void
ev_set_allocator (void *(*cb)(void *ptr, long size))
{
  alloc = cb;
}

static __attribute__ ((noinline)) void *
ev_realloc (void *ptr, long size)
{
  ptr = alloc (ptr, size);

  if (!ptr && size)
    {
      fprintf (__stderrp, "libev: cannot allocate %ld bytes, aborting.", size);
      abort ();
    }

  return ptr;
}




/*****************************************************************************/

typedef struct
{
  WL head;
  unsigned char events;
  unsigned char reify;
  unsigned char emask; /* the epoll backend stores the actual kernel mask in here */
  unsigned char unused;






} ANFD;

typedef struct
{
  W w;
  int events;
} ANPENDING;
# 508 "./../libev/ev.c"
/* Heap Entry */
# 519 "./../libev/ev.c"
  typedef WT ANHE;
# 543 "./../libev/ev.c"
  ev_tstamp ev_rt_now;

# 1 "./../libev/ev_vars.h" 1
/*
 * loop member variable declarations
 *
 * Copyright (c) 2007,2008 Marc Alexander Lehmann <libev@schmorp.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modifica-
 * tion, are permitted provided that the following conditions are met:
 * 
 *   1.  Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 * 
 *   2.  Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MER-
 * CHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPE-
 * CIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTH-
 * ERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * the GNU General Public License ("GPL") version 2 or any later version,
 * in which case the provisions of the GPL are applicable instead of
 * the above. If you wish to allow the use of your version of this file
 * only under the terms of the GPL and not to allow others to use your
 * version of this file under the BSD license, indicate your decision
 * by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL. If you do not delete the
 * provisions above, a recipient may use your version of this file under
 * either the BSD or the GPL.
 */



static ev_tstamp now_floor; /* last time we refreshed rt_time */
static ev_tstamp mn_now; /* monotonic clock "now" */
static ev_tstamp rtmn_diff; /* difference realtime - monotonic time */

static ev_tstamp io_blocktime;
static ev_tstamp timeout_blocktime;

static int backend;
static int activecnt; /* total number of active events ("refcount") */
static unsigned int loop_count; /* total number of loop iterations/blocks */

static int backend_fd;
static ev_tstamp backend_fudge; /* assumed typical timer resolution */
static void (*backend_modify)( int fd, int oev, int nev);
static void (*backend_poll)( ev_tstamp timeout);




static int evpipe [2];
static ev_io pipeev;


static pid_t curpid;


static char postfork; /* true if we need to recreate kernel state after fork */


static void * vec_ri;
static void * vec_ro;
static void * vec_wi;
static void * vec_wo;



static int vec_max;
# 95 "./../libev/ev_vars.h"
static struct kevent * kqueue_changes;
static int kqueue_changemax;
static int kqueue_changecnt;
static struct kevent * kqueue_events;
static int kqueue_eventmax;







static ANFD * anfds;
static int anfdmax;

static ANPENDING *pendings [(0 - 0 + 1)];
static int pendingmax [(0 - 0 + 1)];
static int pendingcnt [(0 - 0 + 1)];

static int * fdchanges;
static int fdchangemax;
static int fdchangecnt;

static ANHE * timers;
static int timermax;
static int timercnt;
# 129 "./../libev/ev_vars.h"
static ev_idle **idles [(0 - 0 + 1)];
static int idlemax [(0 - 0 + 1)];
static int idlecnt [(0 - 0 + 1)];

static int idleall; /* total number */

static struct ev_prepare ** prepares;
static int preparemax;
static int preparecnt;

static struct ev_check ** checks;
static int checkmax;
static int checkcnt;







static sig_atomic_t volatile gotasync;
# 546 "./../libev/ev.c" 2


  static int ev_default_loop_ptr;



/*****************************************************************************/

ev_tstamp
ev_time (void)
{





  struct timeval tv;
  gettimeofday (&tv, 0);
  return tv.tv_sec + tv.tv_usec * 1e-6;

}

ev_tstamp static inline
get_clock (void)
{
# 580 "./../libev/ev.c"
  return ev_time ();
}
# 591 "./../libev/ev.c"
void
ev_sleep (ev_tstamp delay)
{
  if (delay > 0.)
    {
# 606 "./../libev/ev.c"
      struct timeval tv;

      tv.tv_sec = (time_t)delay;
      tv.tv_usec = (long)((delay - (ev_tstamp)(tv.tv_sec)) * 1e6);

      /* here we rely on sys/time.h + sys/types.h + unistd.h providing select */
      /* somehting nto guaranteed by newer posix versions, but guaranteed */
      /* by older ones */
      select (0, 0, 0, 0, &tv);

    }
}

/*****************************************************************************/



int static inline
array_nextsize (int elem, int cur, int cnt)
{
  int ncur = cur + 1;

  do
    ncur <<= 1;
  while (cnt > ncur);

  /* if size is large, round to MALLOC_ROUND - 4 * longs to accomodate malloc overhead */
  if (elem * ncur > 4096 /* prefer to allocate in chunks of this size, must be 2**n and >> 4 longs */ - sizeof (void *) * 4)
    {
      ncur *= elem;
      ncur = (ncur + elem + (4096 /* prefer to allocate in chunks of this size, must be 2**n and >> 4 longs */ - 1) + sizeof (void *) * 4) & ~(4096 /* prefer to allocate in chunks of this size, must be 2**n and >> 4 longs */ - 1);
      ncur = ncur - sizeof (void *) * 4;
      ncur /= elem;
    }

  return ncur;
}

static __attribute__ ((noinline)) void *
array_realloc (int elem, void *base, int *cur, int cnt)
{
  *cur = array_nextsize (elem, *cur, cnt);
  return ev_realloc (base, elem * *cur);
}
# 676 "./../libev/ev.c"
/*****************************************************************************/

void __attribute__ ((noinline))
ev_feed_event ( void *w, int revents)
{
  W w_ = (W)w;
  int pri = (((W)w_)->priority - 0);

  if (__builtin_expect (((w_->pending) != 0),(0)))
    pendings [pri][w_->pending - 1].events |= revents;
  else
    {
      w_->pending = ++pendingcnt [pri];
      if (__builtin_expect ((((w_->pending) > (pendingmax [pri])) != 0),(0))) { int ocur_ = (pendingmax [pri]); (pendings [pri]) = (ANPENDING *)array_realloc (sizeof (ANPENDING), (pendings [pri]), &(pendingmax [pri]), (w_->pending)); /* used to suppress some warnings */; };
      pendings [pri][w_->pending - 1].w = w_;
      pendings [pri][w_->pending - 1].events = revents;
    }
}

void static __attribute__ ((noinline))
queue_events ( W *events, int eventcnt, int type)
{
  int i;

  for (i = 0; i < eventcnt; ++i)
    ev_feed_event ( events [i], type);
}

/*****************************************************************************/

void static __attribute__ ((noinline))
fd_event ( int fd, int revents)
{
  ANFD *anfd = anfds + fd;
  ev_io *w;

  for (w = (ev_io *)anfd->head; w; w = (ev_io *)((WL)w)->next)
    {
      int ev = w->events & revents;

      if (ev)
        ev_feed_event ( (W)w, ev);
    }
}

void
ev_feed_fd_event ( int fd, int revents)
{
  if (fd >= 0 && fd < anfdmax)
    fd_event ( fd, revents);
}

void static inline
fd_reify (void)
{
  int i;

  for (i = 0; i < fdchangecnt; ++i)
    {
      int fd = fdchanges [i];
      ANFD *anfd = anfds + fd;
      ev_io *w;

      unsigned char events = 0;

      for (w = (ev_io *)anfd->head; w; w = (ev_io *)((WL)w)->next)
        events |= (unsigned char)w->events;
# 757 "./../libev/ev.c"
      {
        unsigned char o_events = anfd->events;
        unsigned char o_reify = anfd->reify;

        anfd->reify = 0;
        anfd->events = events;

        if (o_events != events || o_reify & 0x80 /* internal use only */)
          backend_modify ( fd, o_events, events);
      }
    }

  fdchangecnt = 0;
}

void static inline
fd_change ( int fd, int flags)
{
  unsigned char reify = anfds [fd].reify;
  anfds [fd].reify |= flags;

  if (__builtin_expect (((!reify) != 0),(1)))
    {
      ++fdchangecnt;
      if (__builtin_expect ((((fdchangecnt) > (fdchangemax)) != 0),(0))) { int ocur_ = (fdchangemax); (fdchanges) = (int *)array_realloc (sizeof (int), (fdchanges), &(fdchangemax), (fdchangecnt)); /* used to suppress some warnings */; };
      fdchanges [fdchangecnt - 1] = fd;
    }
}

void static __attribute__ ((noinline))
fd_kill ( int fd)
{
  ev_io *w;

  while ((w = (ev_io *)anfds [fd].head))
    {
      ev_io_stop ( w);
      ev_feed_event ( (W)w, 0x80000000 /* sent when an error occurs */ | 0x01 /* ev_io detected read will not block */ | 0x02 /* ev_io detected write will not block */);
    }
}

int static inline
fd_valid (int fd)
{



  return fcntl (fd, 1 /* get file descriptor flags */) != -1;

}

/* called on EBADF to verify fds */
static void __attribute__ ((noinline))
fd_ebadf (void)
{
  int fd;

  for (fd = 0; fd < anfdmax; ++fd)
    if (anfds [fd].events)
      if (!fd_valid (fd) && (*__error()) == 9 /* Bad file descriptor */)
        fd_kill ( fd);
}

/* called on ENOMEM in select/poll to kill some fds and retry */
static void __attribute__ ((noinline))
fd_enomem (void)
{
  int fd;

  for (fd = anfdmax; fd--; )
    if (anfds [fd].events)
      {
        fd_kill ( fd);
        return;
      }
}

/* usually called after fork if backend needs to re-arm all fds from scratch */
static void __attribute__ ((noinline))
fd_rearm_all (void)
{
  int fd;

  for (fd = 0; fd < anfdmax; ++fd)
    if (anfds [fd].events)
      {
        anfds [fd].events = 0;
        anfds [fd].emask = 0;
        fd_change ( fd, 0x80 /* internal use only */ | 1);
      }
}

/*****************************************************************************/

/*
 * the heap functions want a real array index. array index 0 uis guaranteed to not
 * be in-use at any time. the first heap entry is at array [HEAP0]. DHEAP gives
 * the branching factor of the d-tree.
 */

/*
 * at the moment we allow libev the luxury of two heaps,
 * a small-code-size 2-heap one and a ~1.5kb larger 4-heap
 * which is more cache-efficient.
 * the difference is about 5% with 50000+ watchers.
 */
# 920 "./../libev/ev.c"
/* away from the root */
void static __attribute__ ((noinline))
downheap (ANHE *heap, int N, int k)
{
  ANHE he = heap [k];

  for (;;)
    {
      int c = k << 1;

      if (c > N + 1 - 1)
        break;

      c += c + 1 < N + 1 && (heap [c])->at > (heap [c + 1])->at
           ? 1 : 0;

      if ((he)->at <= (heap [c])->at)
        break;

      heap [k] = heap [c];
      ((W)((heap [k])))->active = k;

      k = c;
    }

  heap [k] = he;
  ((W)((he)))->active = k;
}


/* towards the root */
void static __attribute__ ((noinline))
upheap (ANHE *heap, int k)
{
  ANHE he = heap [k];

  for (;;)
    {
      int p = ((k) >> 1);

      if ((!(p)) || (heap [p])->at <= (he)->at)
        break;

      heap [k] = heap [p];
      ((W)((heap [k])))->active = k;
      k = p;
    }

  heap [k] = he;
  ((W)((he)))->active = k;
}

void static inline
adjustheap (ANHE *heap, int N, int k)
{
  if (k > 1 && (heap [((k) >> 1)])->at >= (heap [k])->at)
    upheap (heap, k);
  else
    downheap (heap, N, k);
}

/* rebuild the heap: this function is used only once and executed rarely */
void static inline
reheap (ANHE *heap, int N)
{
  int i;

  /* we don't use floyds algorithm, upheap is simpler and is more cache-efficient */
  /* also, this is easy to implement and correct for both 2-heaps and 4-heaps */
  for (i = 0; i < N; ++i)
    upheap (heap, i + 1);
}

/*****************************************************************************/

typedef struct
{
  WL head;
  sig_atomic_t volatile gotsig;
} ANSIG;

static ANSIG *signals;
static int signalmax;

static sig_atomic_t volatile gotsig;

/*****************************************************************************/

void static __attribute__ ((noinline))
fd_intern (int fd)
{




  fcntl (fd, 2 /* set file descriptor flags */, 1 /* close-on-exec flag */);
  fcntl (fd, 4 /* set file status flags */, 0x0004 /* no delay */);

}

static void __attribute__ ((noinline))
evpipe_init (void)
{
  if (!(0 + ((ev_watcher *)(void *)(&pipeev))->active) /* ro, true when the watcher has been started */)
    {
# 1034 "./../libev/ev.c"
        {
          while (pipe (evpipe))
            ev_syserr ("(libev) error creating signal/async pipe");

          fd_intern (evpipe [0]);
          fd_intern (evpipe [1]);
          do { (&pipeev)->fd = (evpipe [0]); (&pipeev)->events = (0x01 /* ev_io detected read will not block */) | 0x80 /* internal use only */; } while (0);
        }

      ev_io_start ( &pipeev);
      ev_unref (); /* watcher should not keep loop alive */
    }
}

void static inline
evpipe_write ( sig_atomic_t volatile *flag)
{
  if (!*flag)
    {
      int old_errno = (*__error()); /* save errno because write might clobber it */

      *flag = 1;
# 1065 "./../libev/ev.c"
        write (evpipe [1], &old_errno, 1);

      (*__error()) = old_errno;
    }
}

static void
pipecb ( ev_io *iow, int revents)
{
# 1082 "./../libev/ev.c"
    {
      char dummy;
      read (evpipe [0], &dummy, 1);
    }

  if (gotsig && ev_is_default_loop ())
    {
      int signum;
      gotsig = 0;

      for (signum = signalmax; signum--; )
        if (signals [signum].gotsig)
          ev_feed_signal_event ( signum + 1);
    }
# 1111 "./../libev/ev.c"
}

/*****************************************************************************/

static void
ev_sighandler (int signum)
{
# 1126 "./../libev/ev.c"
  signals [signum - 1].gotsig = 1;
  evpipe_write ( &gotsig);
}

void __attribute__ ((noinline))
ev_feed_signal_event ( int signum)
{
  WL w;





  --signum;

  if (signum < 0 || signum >= signalmax)
    return;

  signals [signum].gotsig = 0;

  for (w = signals [signum].head; w; w = w->next)
    ev_feed_event ( (W)w, 0x00000400 /* signal was received */);
}

/*****************************************************************************/

static WL childs [1];



static ev_signal childev;





void static __attribute__ ((noinline))
child_reap ( int chain, int pid, int status)
{
  ev_child *w;
  int traced = (((*(int *)&(status)) /* convert union wait to int */ & 0177) == 0177 /* _WSTATUS if process is stopped */ && ((*(int *)&(status)) /* convert union wait to int */ >> 8) != 0x13) || (((*(int *)&(status)) /* convert union wait to int */ & 0177) == 0177 /* _WSTATUS if process is stopped */ && ((*(int *)&(status)) /* convert union wait to int */ >> 8) == 0x13);

  for (w = (ev_child *)childs [chain & (1 - 1)]; w; w = (ev_child *)((WL)w)->next)
    {
      if ((w->pid == pid || !w->pid)
          && (!traced || (w->flags & 1)))
        {
          ((ev_watcher *)(void *)(w))->priority = (0); /* need to do it *now*, this *must* be the same prio as the signal watcher itself */
          w->rpid = pid;
          w->rstatus = status;
          ev_feed_event ( (W)w, 0x00000800 /* child/pid had status change */);
        }
    }
}





static void
childcb ( ev_signal *sw, int revents)
{
  int pid, status;

  /* some systems define WCONTINUED but then fail to support it (linux 2.4) */
  if (0 >= (pid = waitpid (-1, &status, 0x00000001 /* [XSI] no hang in wait/no child to reap */ | 0x00000002 /* [XSI] notify on stop, untraced child */ | 0x00000010 /* [XSI] Any child stopped then continued */)))
    if (!0x00000010 /* [XSI] Any child stopped then continued */
        || (*__error()) != 22 /* Invalid argument */
        || 0 >= (pid = waitpid (-1, &status, 0x00000001 /* [XSI] no hang in wait/no child to reap */ | 0x00000002 /* [XSI] notify on stop, untraced child */)))
      return;

  /* make sure we are called again until all children have been reaped */
  /* we need to do it this way so that the callback gets called before we continue */
  ev_feed_event ( (W)sw, 0x00000400 /* signal was received */);

  child_reap ( pid, pid, status);
  if (1 > 1)
    child_reap ( 0, pid, status); /* this might trigger a watcher twice, but feed_event catches that */
}



/*****************************************************************************/





# 1 "./../libev/ev_kqueue.c" 1
/*
 * libev kqueue backend
 *
 * Copyright (c) 2007,2008 Marc Alexander Lehmann <libev@schmorp.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modifica-
 * tion, are permitted provided that the following conditions are met:
 * 
 *   1.  Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 * 
 *   2.  Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MER-
 * CHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPE-
 * CIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTH-
 * ERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * the GNU General Public License ("GPL") version 2 or any later version,
 * in which case the provisions of the GPL are applicable instead of
 * the above. If you wish to allow the use of your version of this file
 * only under the terms of the GPL and not to allow others to use your
 * version of this file under the BSD license, indicate your decision
 * by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL. If you do not delete the
 * provisions above, a recipient may use your version of this file under
 * either the BSD or the GPL.
 */

# 1 "/usr/include/sys/types.h" 1 3 4
/*
 * Copyright (c) 2000-2004 Apple Computer, Inc. All rights reserved.
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
/*-
 * Copyright (c) 1982, 1986, 1991, 1993, 1994
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
 *	@(#)types.h	8.4 (Berkeley) 1/21/94
 */
# 41 "./../libev/ev_kqueue.c" 2
# 1 "/usr/include/sys/time.h" 1 3 4
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
 *	@(#)time.h	8.2 (Berkeley) 7/10/94
 */
# 42 "./../libev/ev_kqueue.c" 2
# 1 "/usr/include/sys/queue.h" 1 3 4
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
/*-
 * Copyright (c) 1991, 1993
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
 *	@(#)queue.h	8.5 (Berkeley) 8/20/94
 */




/*
 * This file defines five types of data structures: singly-linked lists,
 * singly-linked tail queues, lists, tail queues, and circular queues.
 *
 * A singly-linked list is headed by a single forward pointer. The elements
 * are singly linked for minimum space and pointer manipulation overhead at
 * the expense of O(n) removal for arbitrary elements. New elements can be
 * added to the list after an existing element or at the head of the list.
 * Elements being removed from the head of the list should use the explicit
 * macro for this purpose for optimum efficiency. A singly-linked list may
 * only be traversed in the forward direction.  Singly-linked lists are ideal
 * for applications with large datasets and few or no removals or for
 * implementing a LIFO queue.
 *
 * A singly-linked tail queue is headed by a pair of pointers, one to the
 * head of the list and the other to the tail of the list. The elements are
 * singly linked for minimum space and pointer manipulation overhead at the
 * expense of O(n) removal for arbitrary elements. New elements can be added
 * to the list after an existing element, at the head of the list, or at the
 * end of the list. Elements being removed from the head of the tail queue
 * should use the explicit macro for this purpose for optimum efficiency.
 * A singly-linked tail queue may only be traversed in the forward direction.
 * Singly-linked tail queues are ideal for applications with large datasets
 * and few or no removals or for implementing a FIFO queue.
 *
 * A list is headed by a single forward pointer (or an array of forward
 * pointers for a hash table header). The elements are doubly linked
 * so that an arbitrary element can be removed without a need to
 * traverse the list. New elements can be added to the list before
 * or after an existing element or at the head of the list. A list
 * may only be traversed in the forward direction.
 *
 * A tail queue is headed by a pair of pointers, one to the head of the
 * list and the other to the tail of the list. The elements are doubly
 * linked so that an arbitrary element can be removed without a need to
 * traverse the list. New elements can be added to the list before or
 * after an existing element, at the head of the list, or at the end of
 * the list. A tail queue may be traversed in either direction.
 *
 * A circle queue is headed by a pair of pointers, one to the head of the
 * list and the other to the tail of the list. The elements are doubly
 * linked so that an arbitrary element can be removed without a need to
 * traverse the list. New elements can be added to the list before or after
 * an existing element, at the head of the list, or at the end of the list.
 * A circle queue may be traversed in either direction, but has a more
 * complex end of list detection.
 * Note that circle queues are deprecated, because, as the removal log
 * in FreeBSD states, "CIRCLEQs are a disgrace to everything Knuth taught
 * us in Volume 1 Chapter 2. [...] Use TAILQ instead, it provides the same
 * functionality." Code using them will continue to compile, but they
 * are no longer documented on the man page.
 *
 * For details on the use of these macros, see the queue(3) manual page.
 *
 *
 *				SLIST	LIST	STAILQ	TAILQ	CIRCLEQ
 * _HEAD			+	+	+	+	+
 * _HEAD_INITIALIZER		+	+	+	+	-
 * _ENTRY			+	+	+	+	+
 * _INIT			+	+	+	+	+
 * _EMPTY			+	+	+	+	+
 * _FIRST			+	+	+	+	+
 * _NEXT			+	+	+	+	+
 * _PREV			-	-	-	+	+
 * _LAST			-	-	+	+	+
 * _FOREACH			+	+	+	+	+
 * _FOREACH_SAFE		+	+	+	+	-
 * _FOREACH_REVERSE		-	-	-	+	-
 * _FOREACH_REVERSE_SAFE	-	-	-	+	-
 * _INSERT_HEAD			+	+	+	+	+
 * _INSERT_BEFORE		-	+	-	+	+
 * _INSERT_AFTER		+	+	+	+	+
 * _INSERT_TAIL			-	-	+	+	+
 * _CONCAT			-	-	+	+	-
 * _REMOVE_HEAD			+	-	+	-	-
 * _REMOVE			+	+	+	+	+
 *
 */
# 173 "/usr/include/sys/queue.h" 3 4
/*
 * Singly-linked List declarations.
 */
# 189 "/usr/include/sys/queue.h" 3 4
/*
 * Singly-linked List functions.
 */
# 245 "/usr/include/sys/queue.h" 3 4
/*
 * Singly-linked Tail queue declarations.
 */
# 262 "/usr/include/sys/queue.h" 3 4
/*
 * Singly-linked Tail queue functions.
 */
# 345 "/usr/include/sys/queue.h" 3 4
/*
 * List declarations.
 */
# 362 "/usr/include/sys/queue.h" 3 4
/*
 * List functions.
 */
# 447 "/usr/include/sys/queue.h" 3 4
/*
 * Tail queue declarations.
 */
# 467 "/usr/include/sys/queue.h" 3 4
/*
 * Tail queue functions.
 */
# 577 "/usr/include/sys/queue.h" 3 4
/*
 * Circular queue definitions.
 */
# 592 "/usr/include/sys/queue.h" 3 4
/*
 * Circular queue functions.
 */
# 43 "./../libev/ev_kqueue.c" 2
# 1 "/usr/include/sys/event.h" 1 3 4
/*
 * Copyright (c) 2003-2006 Apple Computer, Inc. All rights reserved.
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
/*-
 * Copyright (c) 1999,2000,2001 Jonathan Lemon <jlemon@FreeBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	$FreeBSD: src/sys/sys/event.h,v 1.5.2.5 2001/12/14 19:21:22 jlemon Exp $
 */




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
# 60 "/usr/include/sys/event.h" 2 3 4
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
# 61 "/usr/include/sys/event.h" 2 3 4
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
# 62 "/usr/include/sys/event.h" 2 3 4
# 76 "/usr/include/sys/event.h" 3 4
#pragma pack(4)

struct kevent {
 uintptr_t ident; /* identifier for this event */
 short filter; /* filter for event */
 unsigned short flags; /* general flags */
 unsigned int fflags; /* filter-specific flags */
 intptr_t data; /* filter-specific data */
 void *udata; /* opaque user data identifier */
};


#pragma pack()
# 100 "/usr/include/sys/event.h" 3 4
/* actions */






/* flags */







/* returned values */



/*
 * Filter specific flags for EVFILT_READ
 *
 * The default behavior for EVFILT_READ is to make the "read" determination
 * relative to the current file descriptor read pointer. The EV_POLL
 * flag indicates the determination should be made via poll(2) semantics
 * (which always returns true for regular files - regardless of the amount
 * of unread data in the file).
 *
 * On input, EV_OOBAND specifies that only OOB data should be looked for.
 * The returned data count is the number of bytes beyond the current OOB marker.
 *
 * On output, EV_OOBAND indicates that OOB data is present
 * If it was not specified as an input parameter, then the data count is the
 * number of bytes before the current OOB marker. If at the marker, the
 * data count indicates the number of bytes available after it.  In either
 * case, it's the amount of data one could expect to receive next.
 */



/*
 * data/hint fflags for EVFILT_{READ|WRITE}, shared with userspace
 *
 * The default behavior for EVFILT_READ is to make the determination
 * realtive to the current file descriptor read pointer.
 */

/*
 * data/hint fflags for EVFILT_VNODE, shared with userspace
 */
# 158 "/usr/include/sys/event.h" 3 4
/*
 * data/hint fflags for EVFILT_PROC, shared with userspace
 *
 * Please note that EVFILT_PROC and EVFILT_SIGNAL share the same knote list
 * that hangs off the proc structure. They also both play games with the hint
 * passed to KNOTE(). If NOTE_SIGNAL is passed as a hint, then the lower bits
 * of the hint contain the signal. IF NOTE_FORK is passed, then the lower bits
 * contain the PID of the child.
 */
# 175 "/usr/include/sys/event.h" 3 4
/*
 * data/hint fflags for EVFILT_TIMER, shared with userspace.
 * The default is a (repeating) interval timer with the data
 * specifying the timeout interval in milliseconds.
 *
 * All timeouts are implicitly EV_CLEAR events.
 */




      /* ... implicit EV_ONESHOT */

/*
 * DEPRECATED!!!!!!!!!
 * NOTE_TRACK, NOTE_TRACKERR, and NOTE_CHILD are no longer supported as of 10.5
 */
/* additional flags for EVFILT_PROC */






/* Temporay solution for BootX to use inode.h till kqueue moves to vfs layer */
# 1 "/usr/include/sys/queue.h" 1 3 4
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
/*-
 * Copyright (c) 1991, 1993
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
 *	@(#)queue.h	8.5 (Berkeley) 8/20/94
 */
# 201 "/usr/include/sys/event.h" 2 3 4
struct knote;
struct klist { struct knote *slh_first; /* first element */ };



struct timespec;

extern "C" {
int kqueue(void);
int kevent(int kq, const struct kevent *changelist, int nchanges,
      struct kevent *eventlist, int nevents,
      const struct timespec *timeout);
}
# 44 "./../libev/ev_kqueue.c" 2
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
# 78 "/usr/include/string.h" 3 4
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
# 45 "./../libev/ev_kqueue.c" 2
# 1 "/usr/include/errno.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
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
# 1 "/usr/include/sys/errno.h" 1 3 4
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
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1986, 1989, 1993
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
 *	@(#)errno.h	8.5 (Berkeley) 1/21/94
 */
# 24 "/usr/include/errno.h" 2 3 4
# 46 "./../libev/ev_kqueue.c" 2

void static __attribute__ ((noinline))
kqueue_change ( int fd, int filter, int flags, int fflags)
{
  ++kqueue_changecnt;
  if (__builtin_expect ((((kqueue_changecnt) > (kqueue_changemax)) != 0),(0))) { int ocur_ = (kqueue_changemax); (kqueue_changes) = (struct kevent *)array_realloc (sizeof (struct kevent), (kqueue_changes), &(kqueue_changemax), (kqueue_changecnt)); /* used to suppress some warnings */; };

  do { struct kevent *__kevp__ = (&kqueue_changes [kqueue_changecnt - 1]); __kevp__->ident = (fd); __kevp__->filter = (filter); __kevp__->flags = (flags); __kevp__->fflags = (fflags); __kevp__->data = (0); __kevp__->udata = (0); } while(0);
}





static void
kqueue_modify ( int fd, int oev, int nev)
{
  if (oev != nev)
    {
      if (oev & 0x01 /* ev_io detected read will not block */)
        kqueue_change ( fd, (-1) , 0x0002 /* delete event from kq */, 0);

      if (oev & 0x02 /* ev_io detected write will not block */)
        kqueue_change ( fd, (-2), 0x0002 /* delete event from kq */, 0);
    }

  /* to detect close/reopen reliably, we have to re-add */
  /* event requests even when oev == nev */

  if (nev & 0x01 /* ev_io detected read will not block */)
    kqueue_change ( fd, (-1) , 0x0001 /* add event to kq (implies enable) */, 0);

  if (nev & 0x02 /* ev_io detected write will not block */)
    kqueue_change ( fd, (-2), 0x0001 /* add event to kq (implies enable) */, 0);
}

static void
kqueue_poll ( ev_tstamp timeout)
{
  int res, i;
  struct timespec ts;

  /* need to resize so there is enough space for errors */
  if (kqueue_changecnt > kqueue_eventmax)
    {
      ev_realloc ((kqueue_events), 0);
      kqueue_eventmax = array_nextsize (sizeof (struct kevent), kqueue_eventmax, kqueue_changecnt);
      kqueue_events = (struct kevent *)ev_realloc (0, (sizeof (struct kevent) * kqueue_eventmax));
    }

  ts.tv_sec = (time_t)timeout;
  ts.tv_nsec = (long)((timeout - (ev_tstamp)ts.tv_sec) * 1e9);
  res = kevent (backend_fd, kqueue_changes, kqueue_changecnt, kqueue_events, kqueue_eventmax, &ts);
  kqueue_changecnt = 0;

  if (__builtin_expect (((res < 0) != 0),(0)))
    {
      if ((*__error()) != 4 /* Interrupted system call */)
        ev_syserr ("(libev) kevent");

      return;
    }

  for (i = 0; i < res; ++i)
    {
      int fd = kqueue_events [i].ident;

      if (__builtin_expect (((kqueue_events [i].flags & 0x4000 /* error, data contains errno */) != 0),(0)))
        {
   int err = kqueue_events [i].data;

          /* we are only interested in errors for fds that we are interested in :) */
          if (anfds [fd].events)
     {
              if (err == 2 /* No such file or directory */) /* resubmit changes on ENOENT */
                kqueue_modify ( fd, 0, anfds [fd].events);
              else if (err == 9 /* Bad file descriptor */) /* on EBADF, we re-check the fd */
                {
                  if (fd_valid (fd))
                    kqueue_modify ( fd, 0, anfds [fd].events);
                  else
                    fd_kill ( fd);
                }
              else /* on all other errors, we error out on the fd */
                fd_kill ( fd);
     }
        }
      else
        fd_event (
         
          fd,
          kqueue_events [i].filter == (-1) ? 0x01 /* ev_io detected read will not block */
          : kqueue_events [i].filter == (-2) ? 0x02 /* ev_io detected write will not block */
          : 0
        );
    }

  if (__builtin_expect (((res == kqueue_eventmax) != 0),(0)))
    {
      ev_realloc ((kqueue_events), 0);
      kqueue_eventmax = array_nextsize (sizeof (struct kevent), kqueue_eventmax, kqueue_eventmax + 1);
      kqueue_events = (struct kevent *)ev_realloc (0, (sizeof (struct kevent) * kqueue_eventmax));
    }
}

int static inline
kqueue_init ( int flags)
{
  /* Initalize the kernel queue */
  if ((backend_fd = kqueue ()) < 0)
    return 0;

  fcntl (backend_fd, 2 /* set file descriptor flags */, 1 /* close-on-exec flag */); /* not sure if necessary, hopefully doesn't hurt */

  backend_fudge = 0.;
  backend_modify = kqueue_modify;
  backend_poll = kqueue_poll;

  kqueue_eventmax = 64; /* initial number of events receivable per poll */
  kqueue_events = (struct kevent *)ev_realloc (0, (sizeof (struct kevent) * kqueue_eventmax));

  kqueue_changes = 0;
  kqueue_changemax = 0;
  kqueue_changecnt = 0;

  return 0x00000008U /* bsd */;
}

void static inline
kqueue_destroy (void)
{
  ev_realloc ((kqueue_events), 0);
  ev_realloc ((kqueue_changes), 0);
}

void static inline
kqueue_fork (void)
{
  close (backend_fd);

  while ((backend_fd = kqueue ()) < 0)
    ev_syserr ("(libev) kqueue");

  fcntl (backend_fd, 2 /* set file descriptor flags */, 1 /* close-on-exec flag */);

  /* re-register interest in fds */
  fd_rearm_all ();
}
# 1215 "./../libev/ev.c" 2
# 1223 "./../libev/ev.c"
# 1 "./../libev/ev_select.c" 1
/*
 * libev select fd activity backend
 *
 * Copyright (c) 2007,2008 Marc Alexander Lehmann <libev@schmorp.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modifica-
 * tion, are permitted provided that the following conditions are met:
 * 
 *   1.  Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 * 
 *   2.  Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MER-
 * CHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPE-
 * CIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTH-
 * ERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * the GNU General Public License ("GPL") version 2 or any later version,
 * in which case the provisions of the GPL are applicable instead of
 * the above. If you wish to allow the use of your version of this file
 * only under the terms of the GPL and not to allow others to use your
 * version of this file under the BSD license, indicate your decision
 * by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL. If you do not delete the
 * provisions above, a recipient may use your version of this file under
 * either the BSD or the GPL.
 */


/* for unix systems */
# 1 "/usr/include/sys/select.h" 1 3 4
/*
 * Copyright (c) 2000-2005 Apple Computer, Inc. All rights reserved.
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
 * Copyright (c) 1992, 1993
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
 *	@(#)select.h	8.2 (Berkeley) 1/4/94
 */
# 43 "./../libev/ev_select.c" 2
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
# 44 "./../libev/ev_select.c" 2
# 65 "./../libev/ev_select.c"
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
# 66 "./../libev/ev_select.c" 2

static void
select_modify ( int fd, int oev, int nev)
{
  if (oev == nev)
    return;

  {
# 103 "./../libev/ev_select.c"
    int word = fd / (sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */ /* bits per mask */;
    fd_mask mask = 1UL << (fd % (sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */ /* bits per mask */);

    if (__builtin_expect (((vec_max <= word) != 0),(0)))
      {
        int new_max = word + 1;

        vec_ri = ev_realloc (vec_ri, new_max * ((sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */ /* bits per mask */ / 8));
        vec_ro = ev_realloc (vec_ro, new_max * ((sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */ /* bits per mask */ / 8)); /* could free/malloc */
        vec_wi = ev_realloc (vec_wi, new_max * ((sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */ /* bits per mask */ / 8));
        vec_wo = ev_realloc (vec_wo, new_max * ((sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */ /* bits per mask */ / 8)); /* could free/malloc */




        for (; vec_max < new_max; ++vec_max)
          ((fd_mask *)vec_ri) [vec_max] =
          ((fd_mask *)vec_wi) [vec_max] = 0;
      }

    ((fd_mask *)vec_ri) [word] |= mask;
    if (!(nev & 0x01 /* ev_io detected read will not block */))
      ((fd_mask *)vec_ri) [word] &= ~mask;

    ((fd_mask *)vec_wi) [word] |= mask;
    if (!(nev & 0x02 /* ev_io detected write will not block */))
      ((fd_mask *)vec_wi) [word] &= ~mask;

  }
}

static void
select_poll ( ev_tstamp timeout)
{
  struct timeval tv;
  int res;
  int fd_setsize;

  tv.tv_sec = (long)timeout;
  tv.tv_usec = (long)((timeout - (ev_tstamp)tv.tv_sec) * 1e6);




  fd_setsize = vec_max * ((sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */ /* bits per mask */ / 8);


  memcpy (vec_ro, vec_ri, fd_setsize);
  memcpy (vec_wo, vec_wi, fd_setsize);
# 162 "./../libev/ev_select.c"
  res = select (vec_max * (sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */ /* bits per mask */, (fd_set *)vec_ro, (fd_set *)vec_wo, 0, &tv);


  if (__builtin_expect (((res < 0) != 0),(0)))
    {
# 194 "./../libev/ev_select.c"
      if ((*__error()) == 9 /* Bad file descriptor */)
        fd_ebadf ();
      else if ((*__error()) == 12 /* Cannot allocate memory */ && !syserr_cb)
        fd_enomem ();
      else if ((*__error()) != 4 /* Interrupted system call */)
        ev_syserr ("(libev) select");

      return;
    }
# 232 "./../libev/ev_select.c"
  {
    int word, bit;
    for (word = vec_max; word--; )
      {
        fd_mask word_r = ((fd_mask *)vec_ro) [word];
        fd_mask word_w = ((fd_mask *)vec_wo) [word];




        if (word_r || word_w)
          for (bit = (sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */ /* bits per mask */; bit--; )
            {
              fd_mask mask = 1UL << bit;
              int events = 0;

              events |= word_r & mask ? 0x01 /* ev_io detected read will not block */ : 0;
              events |= word_w & mask ? 0x02 /* ev_io detected write will not block */ : 0;

              if (__builtin_expect (((events) != 0),(1)))
                fd_event ( word * (sizeof(__int32_t) * 8 /* bits in a byte */) /* bits per mask */ /* bits per mask */ + bit, events);
            }
      }
  }


}

int static inline
select_init ( int flags)
{
  backend_fudge = 0.; /* posix says this is zero */
  backend_modify = select_modify;
  backend_poll = select_poll;
# 277 "./../libev/ev_select.c"
  vec_max = 0;
  vec_ri = 0;
  vec_ri = 0;
  vec_wo = 0;
  vec_wo = 0;


  return 0x00000001U /* about anywhere */;
}

void static inline
select_destroy (void)
{
  ev_realloc ((vec_ri), 0);
  ev_realloc ((vec_ro), 0);
  ev_realloc ((vec_wi), 0);
  ev_realloc ((vec_wo), 0);
}
# 1224 "./../libev/ev.c" 2


int
ev_version_major (void)
{
  return 3;
}

int
ev_version_minor (void)
{
  return 0;
}

/* return true if we are running with elevated privileges and should ignore env variables */
int static inline
enable_secure (void)
{



  return getuid () != geteuid ()
      || getgid () != getegid ();

}

unsigned int
ev_supported_backends (void)
{
  unsigned int flags = 0;

  if (0 ) flags |= 0x00000020U /* solaris 10 */;
  if (1) flags |= 0x00000008U /* bsd */;
  if (0 ) flags |= 0x00000004U /* linux */;
  if (0 ) flags |= 0x00000002U /* !win */;
  if (1) flags |= 0x00000001U /* about anywhere */;

  return flags;
}

unsigned int
ev_recommended_backends (void)
{
  unsigned int flags = ev_supported_backends ();


  /* kqueue is borked on everything but netbsd apparently */
  /* it usually doesn't work correctly on anything but sockets and pipes */
  flags &= ~0x00000008U /* bsd */;


  // flags &= ~EVBACKEND_KQUEUE & ~EVBACKEND_POLL; for documentation
  flags &= ~0x00000001U /* about anywhere */;


  return flags;
}

unsigned int
ev_embeddable_backends (void)
{
  int flags = 0x00000004U /* linux */ | 0x00000008U /* bsd */ | 0x00000020U /* solaris 10 */;

  /* epoll embeddability broken on all linux versions up to at least 2.6.23 */
  /* please fix it and tell me how to detect the fix */
  flags &= ~0x00000004U /* linux */;

  return flags;
}

unsigned int
ev_backend (void)
{
  return backend;
}

unsigned int
ev_loop_count (void)
{
  return loop_count;
}

void
ev_set_io_collect_interval ( ev_tstamp interval)
{
  io_blocktime = interval;
}

void
ev_set_timeout_collect_interval ( ev_tstamp interval)
{
  timeout_blocktime = interval;
}

static void __attribute__ ((noinline))
loop_init ( unsigned int flags)
{
  if (!backend)
    {
# 1331 "./../libev/ev.c"
      ev_rt_now = ev_time ();
      mn_now = get_clock ();
      now_floor = mn_now;
      rtmn_diff = ev_rt_now - mn_now;

      io_blocktime = 0.;
      timeout_blocktime = 0.;
      backend = 0;
      backend_fd = -1;
      gotasync = 0;




      /* pid check not overridable via env */

      if (flags & 0x02000000U /* check for a fork in each iteration */)
        curpid = getpid ();


      if (!(flags & 0x01000000U /* do NOT consult environment */)
          && !enable_secure ()
          && getenv ("LIBEV_FLAGS"))
        flags = atoi (getenv ("LIBEV_FLAGS"));

      if (!(flags & 0x0000ffffU))
        flags |= ev_recommended_backends ();





      if (!backend && (flags & 0x00000008U /* bsd */)) backend = kqueue_init ( flags);
# 1372 "./../libev/ev.c"
      if (!backend && (flags & 0x00000001U /* about anywhere */)) backend = select_init ( flags);


      do { ((ev_watcher *)(void *)(&pipeev))->active = ((ev_watcher *)(void *)(&pipeev))->pending = ((ev_watcher *)(void *)(&pipeev))->priority = 0; ((&pipeev))->cb /* rw */ = (pipecb); } while (0);
      ((ev_watcher *)(void *)(&pipeev))->priority = (0);
    }
}

static void __attribute__ ((noinline))
loop_destroy (void)
{
  int i;

  if ((0 + ((ev_watcher *)(void *)(&pipeev))->active) /* ro, true when the watcher has been started */)
    {
      ev_ref (); /* signal watcher */
      ev_io_stop ( &pipeev);






      if (evpipe [0] >= 0)
        {
          close (evpipe [0]);
          close (evpipe [1]);
        }
    }






  if (backend_fd >= 0)
    close (backend_fd);





  if (backend == 0x00000008U /* bsd */) kqueue_destroy ();
# 1423 "./../libev/ev.c"
  if (backend == 0x00000001U /* about anywhere */) select_destroy ();


  for (i = (0 - 0 + 1); i--; )
    {
      ev_realloc ((pendings [i]), 0); pendingcnt [i] = pendingmax [i] = 0;;

      ev_realloc ((idles [i]), 0); idlecnt [i] = idlemax [i] = 0;;

    }

  ev_realloc ((anfds), 0); anfdmax = 0;

  /* have to use the microsoft-never-gets-it-right macro */
  ev_realloc ((fdchanges /* required for microsofts broken pseudo-c compiler */), 0); fdchangecnt /* required for microsofts broken pseudo-c compiler */ = fdchangemax /* required for microsofts broken pseudo-c compiler */ = 0;;
  ev_realloc ((timers /* required for microsofts broken pseudo-c compiler */), 0); timercnt /* required for microsofts broken pseudo-c compiler */ = timermax /* required for microsofts broken pseudo-c compiler */ = 0;;






  ev_realloc ((prepares /* required for microsofts broken pseudo-c compiler */), 0); preparecnt /* required for microsofts broken pseudo-c compiler */ = preparemax /* required for microsofts broken pseudo-c compiler */ = 0;;
  ev_realloc ((checks /* required for microsofts broken pseudo-c compiler */), 0); checkcnt /* required for microsofts broken pseudo-c compiler */ = checkmax /* required for microsofts broken pseudo-c compiler */ = 0;;




  backend = 0;
}





void static inline
loop_fork (void)
{




  if (backend == 0x00000008U /* bsd */) kqueue_fork ();
# 1474 "./../libev/ev.c"
  if ((0 + ((ev_watcher *)(void *)(&pipeev))->active) /* ro, true when the watcher has been started */)
    {
      /* this "locks" the handlers against writing to the pipe */
      /* while we modify the fd vars */
      gotsig = 1;




      ev_ref ();
      ev_io_stop ( &pipeev);






      if (evpipe [0] >= 0)
        {
          close (evpipe [0]);
          close (evpipe [1]);
        }

      evpipe_init ();
      /* now iterate over everything, in case we missed something */
      pipecb ( &pipeev, 0x01 /* ev_io detected read will not block */);
    }

  postfork = 0;
}
# 1640 "./../libev/ev.c"
int
ev_default_loop (unsigned int flags)

{
  if (!ev_default_loop_ptr)
    {



      ev_default_loop_ptr = 1;


      loop_init ( flags);

      if (ev_backend ())
        {

          do { do { ((ev_watcher *)(void *)((&childev)))->active = ((ev_watcher *)(void *)((&childev)))->pending = ((ev_watcher *)(void *)((&childev)))->priority = 0; (((&childev)))->cb /* rw */ = ((childcb)); } while (0); do { ((&childev))->signum = ((20 /* to parent on child stop or exit */)); } while (0); } while (0);
          ((ev_watcher *)(void *)(&childev))->priority = (0);
          ev_signal_start ( &childev);
          ev_unref (); /* child watcher should not keep loop alive */

        }
      else
        ev_default_loop_ptr = 0;
    }

  return ev_default_loop_ptr;
}

void
ev_default_destroy (void)
{




  ev_default_loop_ptr = 0;


  ev_ref (); /* child watcher */
  ev_signal_stop ( &childev);


  loop_destroy ();
}

void
ev_default_fork (void)
{




  postfork = 1; /* must be in line with ev_loop_fork */
}

/*****************************************************************************/

void
ev_invoke ( void *w, int revents)
{
  ((W)w)->cb ( ((W)w), (revents));
}

void static __attribute__ ((noinline))
call_pending (void)
{
  int pri;

  for (pri = (0 - 0 + 1); pri--; )
    while (pendingcnt [pri])
      {
        ANPENDING *p = pendings [pri] + --pendingcnt [pri];

        if (__builtin_expect (((p->w) != 0),(1)))
          {
            /*assert (("non-pending watcher on pending list", p->w->pending));*/

            p->w->pending = 0;
            (p->w)->cb ( (p->w), (p->events));
            do { } while (0);
          }
      }
}


void static inline
idle_reify (void)
{
  if (__builtin_expect (((idleall) != 0),(0)))
    {
      int pri;

      for (pri = (0 - 0 + 1); pri--; )
        {
          if (pendingcnt [pri])
            break;

          if (idlecnt [pri])
            {
              queue_events ( (W *)idles [pri], idlecnt [pri], 0x00002000 /* event loop is idling */);
              break;
            }
        }
    }
}


void static inline
timers_reify (void)
{
  do { } while (0);

  while (timercnt && (timers [1])->at < mn_now)
    {
      ev_timer *w = (ev_timer *)(timers [1]);

      /*assert (("inactive timer on timer heap detected", ev_is_active (w)));*/

      /* first reschedule or stop timer */
      if (w->repeat)
        {
          ((WT)(w))->at += w->repeat;
          if (((WT)(w))->at < mn_now)
            ((WT)(w))->at = mn_now;

          (__builtin_expect(!(("negative ev_timer repeat value found while processing timers", w->repeat > 0.)), 0) ? __assert_rtn(__func__, "./../libev/ev.c", 1767, "(\"negative ev_timer repeat value found while processing timers\", w->repeat > 0.)") : (void)0);

          ;
          downheap (timers, timercnt, 1);
        }
      else
        ev_timer_stop ( w); /* nonrepeating: stop timer */

      do { } while (0);
      ev_feed_event ( (W)w, 0x00000100 /* timer timed out */);
    }
}
# 1851 "./../libev/ev.c"
void static __attribute__ ((noinline))
time_update ( ev_tstamp max_block)
{
  int i;
# 1902 "./../libev/ev.c"
    {
      ev_rt_now = ev_time ();

      if (__builtin_expect (((mn_now > ev_rt_now || ev_rt_now > mn_now + max_block + 1. /* minimum timejump that gets detected (if monotonic clock available) */) != 0),(0)))
        {



          /* adjust timers. this is easy, as the offset is the same for all of them */
          for (i = 0; i < timercnt; ++i)
            {
              ANHE *he = timers + i + 1;
              (*he)->at += ev_rt_now - mn_now;
              ;
            }
        }

      mn_now = ev_rt_now;
    }
}

void
ev_ref (void)
{
  ++activecnt;
}

void
ev_unref (void)
{
  --activecnt;
}

void
ev_now_update (void)
{
  time_update ( 1e100);
}

static int loop_done;

void
ev_loop ( int flags)
{
  loop_done = 0 /* undo unloop */;

  call_pending (); /* in case we recurse, ensure ordering stays nice and clean */

  do
    {





      if (__builtin_expect (((curpid) != 0),(0))) /* penalise the forking check even more */
        if (__builtin_expect (((getpid () != curpid) != 0),(0)))
          {
            curpid = getpid ();
            postfork = 1;
          }
# 1975 "./../libev/ev.c"
      /* queue prepare watchers (and execute them) */
      if (__builtin_expect (((preparecnt) != 0),(0)))
        {
          queue_events ( (W *)prepares, preparecnt, 0x00004000 /* event loop about to poll */);
          call_pending ();
        }

      if (__builtin_expect (((!activecnt) != 0),(0)))
        break;

      /* we might have forked, so reify kernel state if necessary */
      if (__builtin_expect (((postfork) != 0),(0)))
        loop_fork ();

      /* update fd-related kernel structures */
      fd_reify ();

      /* calculate blocking time */
      {
        ev_tstamp waittime = 0.;
        ev_tstamp sleeptime = 0.;

        if (__builtin_expect (((!(flags & 1 /* do not block/wait */ || idleall || !activecnt)) != 0),(1)))
          {
            /* update time to cancel out callback processing overhead */
            time_update ( 1e100);

            waittime = 59.743 /* never wait longer than this time (to detect time jumps) */;

            if (timercnt)
              {
                ev_tstamp to = (timers [1])->at - mn_now + backend_fudge;
                if (waittime > to) waittime = to;
              }
# 2018 "./../libev/ev.c"
            if (__builtin_expect (((waittime < timeout_blocktime) != 0),(0)))
              waittime = timeout_blocktime;

            sleeptime = waittime - backend_fudge;

            if (__builtin_expect (((sleeptime > io_blocktime) != 0),(1)))
              sleeptime = io_blocktime;

            if (sleeptime)
              {
                ev_sleep (sleeptime);
                waittime -= sleeptime;
              }
          }

        ++loop_count;
        backend_poll ( waittime);

        /* update ev_rt_now, do magic */
        time_update ( waittime + sleeptime);
      }

      /* queue pending timers and reschedule them */
      timers_reify (); /* relative timers called last */





      /* queue idle watchers unless other events are pending */
      idle_reify ();


      /* queue check watchers, to be executed first */
      if (__builtin_expect (((checkcnt) != 0),(0)))
        queue_events ( (W *)checks, checkcnt, 0x00008000 /* event loop finished poll */);

      call_pending ();
    }
  while (__builtin_expect (((activecnt && !loop_done && !(flags & (2 /* block *once* only */ | 1 /* do not block/wait */))) != 0),(1)));





  if (loop_done == 1 /* unloop once */)
    loop_done = 0 /* undo unloop */;
}

void
ev_unloop ( int how)
{
  loop_done = how;
}

/*****************************************************************************/

void static inline
wlist_add (WL *head, WL elem)
{
  elem->next = *head;
  *head = elem;
}

void static inline
wlist_del (WL *head, WL elem)
{
  while (*head)
    {
      if (*head == elem)
        {
          *head = elem->next;
          return;
        }

      head = &(*head)->next;
    }
}

void static __attribute__ ((noinline))
clear_pending ( W w)
{
  if (w->pending)
    {
      pendings [(((W)w)->priority - 0)][w->pending - 1].w = 0;
      w->pending = 0;
    }
}

int
ev_clear_pending ( void *w)
{
  W w_ = (W)w;
  int pending = w_->pending;

  if (__builtin_expect (((pending) != 0),(1)))
    {
      ANPENDING *p = pendings [(((W)w_)->priority - 0)] + pending - 1;
      w_->pending = 0;
      p->w = 0;
      return p->events;
    }
  else
    return 0;
}

void static inline
pri_adjust ( W w)
{
  int pri = w->priority;
  pri = pri < 0 ? 0 : pri;
  pri = pri > 0 ? 0 : pri;
  w->priority = pri;
}

void static __attribute__ ((noinline))
ev_start ( W w, int active)
{
  pri_adjust ( w);
  w->active = active;
  ev_ref ();
}

void static inline
ev_stop ( W w)
{
  ev_unref ();
  w->active = 0;
}

/*****************************************************************************/

void __attribute__ ((noinline))
ev_io_start ( ev_io *w)
{
  int fd = w->fd;

  if (__builtin_expect ((((0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  (__builtin_expect(!(("ev_io_start called with negative fd", fd >= 0)), 0) ? __assert_rtn(__func__, "./../libev/ev.c", 2158, "(\"ev_io_start called with negative fd\", fd >= 0)") : (void)0);
  (__builtin_expect(!(("ev_io start called with illegal event mask", !(w->events & ~(0x80 /* internal use only */ | 0x01 /* ev_io detected read will not block */ | 0x02 /* ev_io detected write will not block */)))), 0) ? __assert_rtn(__func__, "./../libev/ev.c", 2159, "(\"ev_io start called with illegal event mask\", !(w->events & ~(EV_IOFDSET | EV_READ | EV_WRITE)))") : (void)0);

  do { } while (0);

  ev_start ( (W)w, 1);
  if (__builtin_expect ((((fd + 1) > (anfdmax)) != 0),(0))) { int ocur_ = (anfdmax); (anfds) = (ANFD *)array_realloc (sizeof (ANFD), (anfds), &(anfdmax), (fd + 1)); memset ((void *)((anfds) + (ocur_)), 0, sizeof (*((anfds) + (ocur_))) * ((anfdmax) - ocur_)); };
  wlist_add (&anfds[fd].head, (WL)w);

  fd_change ( fd, w->events & 0x80 /* internal use only */ | 1);
  w->events &= ~0x80 /* internal use only */;

  do { } while (0);
}

void __attribute__ ((noinline))
ev_io_stop ( ev_io *w)
{
  clear_pending ( (W)w);
  if (__builtin_expect (((!(0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  (__builtin_expect(!(("ev_io_stop called with illegal fd (must stay constant after start!)", w->fd >= 0 && w->fd < anfdmax)), 0) ? __assert_rtn(__func__, "./../libev/ev.c", 2180, "(\"ev_io_stop called with illegal fd (must stay constant after start!)\", w->fd >= 0 && w->fd < anfdmax)") : (void)0);

  do { } while (0);

  wlist_del (&anfds[w->fd].head, (WL)w);
  ev_stop ( (W)w);

  fd_change ( w->fd, 1);

  do { } while (0);
}

void __attribute__ ((noinline))
ev_timer_start ( ev_timer *w)
{
  if (__builtin_expect ((((0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  ((WT)(w))->at += mn_now;

  (__builtin_expect(!(("ev_timer_start called with negative timer repeat value", w->repeat >= 0.)), 0) ? __assert_rtn(__func__, "./../libev/ev.c", 2200, "(\"ev_timer_start called with negative timer repeat value\", w->repeat >= 0.)") : (void)0);

  do { } while (0);

  ++timercnt;
  ev_start ( (W)w, timercnt + 1 - 1);
  if (__builtin_expect ((((((W)(w))->active + 1) > (timermax)) != 0),(0))) { int ocur_ = (timermax); (timers) = (ANHE *)array_realloc (sizeof (ANHE), (timers), &(timermax), (((W)(w))->active + 1)); /* used to suppress some warnings */; };
  (timers [((W)(w))->active]) = (WT)w;
  ;
  upheap (timers, ((W)(w))->active);

  do { } while (0);

  /*assert (("internal timer heap corruption", timers [ev_active (w)] == (WT)w));*/
}

void __attribute__ ((noinline))
ev_timer_stop ( ev_timer *w)
{
  clear_pending ( (W)w);
  if (__builtin_expect (((!(0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    (__builtin_expect(!(("internal timer heap corruption", (timers [active]) == (WT)w)), 0) ? __assert_rtn(__func__, "./../libev/ev.c", 2228, "(\"internal timer heap corruption\", ANHE_w (timers [active]) == (WT)w)") : (void)0);

    --timercnt;

    if (__builtin_expect (((active < timercnt + 1) != 0),(1)))
      {
        timers [active] = timers [timercnt + 1];
        adjustheap (timers, timercnt, active);
      }
  }

  do { } while (0);

  ((WT)(w))->at -= mn_now;

  ev_stop ( (W)w);
}

void __attribute__ ((noinline))
ev_timer_again ( ev_timer *w)
{
  do { } while (0);

  if ((0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */)
    {
      if (w->repeat)
        {
          ((WT)(w))->at = mn_now + w->repeat;
          ;
          adjustheap (timers, timercnt, ((W)(w))->active);
        }
      else
        ev_timer_stop ( w);
    }
  else if (w->repeat)
    {
      ((WT)(w))->at = w->repeat;
      ev_timer_start ( w);
    }

  do { } while (0);
}
# 2344 "./../libev/ev.c"
void __attribute__ ((noinline))
ev_signal_start ( ev_signal *w)
{



  if (__builtin_expect ((((0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  (__builtin_expect(!(("ev_signal_start called with illegal signal number", w->signum > 0)), 0) ? __assert_rtn(__func__, "./../libev/ev.c", 2353, "(\"ev_signal_start called with illegal signal number\", w->signum > 0)") : (void)0);

  evpipe_init ();

  do { } while (0);

  {

    sigset_t full, prev;
    (*(&full) = ~(sigset_t)0, 0);
    sigprocmask (3 /* set specified signal set */, &full, &prev);


    if (__builtin_expect ((((w->signum) > (signalmax)) != 0),(0))) { int ocur_ = (signalmax); (signals) = (ANSIG *)array_realloc (sizeof (ANSIG), (signals), &(signalmax), (w->signum)); memset ((void *)((signals) + (ocur_)), 0, sizeof (*((signals) + (ocur_))) * ((signalmax) - ocur_)); };


    sigprocmask (3 /* set specified signal set */, &prev, 0);

  }

  ev_start ( (W)w, 1);
  wlist_add (&signals [w->signum - 1].head, (WL)w);

  if (!((WL)w)->next)
    {



      struct sigaction sa;
      sa.__sigaction_u.__sa_handler = ev_sighandler;
      (*(&sa.sa_mask) = ~(sigset_t)0, 0);
      sa.sa_flags = 0x0002 /* restart system on signal return */; /* if restarting works we save one iteration */
      sigaction (w->signum, &sa, 0);

    }

  do { } while (0);
}

void __attribute__ ((noinline))
ev_signal_stop ( ev_signal *w)
{
  clear_pending ( (W)w);
  if (__builtin_expect (((!(0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  do { } while (0);

  wlist_del (&signals [w->signum - 1].head, (WL)w);
  ev_stop ( (W)w);

  if (!signals [w->signum - 1].head)
    signal (w->signum, (void (*)(int))0);

  do { } while (0);
}

void
ev_child_start ( ev_child *w)
{



  if (__builtin_expect ((((0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  do { } while (0);

  ev_start ( (W)w, 1);
  wlist_add (&childs [w->pid & (1 - 1)], (WL)w);

  do { } while (0);
}

void
ev_child_stop ( ev_child *w)
{
  clear_pending ( (W)w);
  if (__builtin_expect (((!(0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  do { } while (0);

  wlist_del (&childs [w->pid & (1 - 1)], (WL)w);
  ev_stop ( (W)w);

  do { } while (0);
}
# 2753 "./../libev/ev.c"
void
ev_idle_start ( ev_idle *w)
{
  if (__builtin_expect ((((0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  pri_adjust ( (W)w);

  do { } while (0);

  {
    int active = ++idlecnt [(((W)w)->priority - 0)];

    ++idleall;
    ev_start ( (W)w, active);

    if (__builtin_expect ((((active) > (idlemax [(((W)w)->priority - 0)])) != 0),(0))) { int ocur_ = (idlemax [(((W)w)->priority - 0)]); (idles [(((W)w)->priority - 0)]) = (ev_idle * *)array_realloc (sizeof (ev_idle *), (idles [(((W)w)->priority - 0)]), &(idlemax [(((W)w)->priority - 0)]), (active)); /* used to suppress some warnings */; };
    idles [(((W)w)->priority - 0)][active - 1] = w;
  }

  do { } while (0);
}

void
ev_idle_stop ( ev_idle *w)
{
  clear_pending ( (W)w);
  if (__builtin_expect (((!(0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    idles [(((W)w)->priority - 0)][active - 1] = idles [(((W)w)->priority - 0)][--idlecnt [(((W)w)->priority - 0)]];
    ((W)(idles [(((W)w)->priority - 0)][active - 1]))->active = active;

    ev_stop ( (W)w);
    --idleall;
  }

  do { } while (0);
}


void
ev_prepare_start ( ev_prepare *w)
{
  if (__builtin_expect ((((0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  do { } while (0);

  ev_start ( (W)w, ++preparecnt);
  if (__builtin_expect ((((preparecnt) > (preparemax)) != 0),(0))) { int ocur_ = (preparemax); (prepares) = (ev_prepare * *)array_realloc (sizeof (ev_prepare *), (prepares), &(preparemax), (preparecnt)); /* used to suppress some warnings */; };
  prepares [preparecnt - 1] = w;

  do { } while (0);
}

void
ev_prepare_stop ( ev_prepare *w)
{
  clear_pending ( (W)w);
  if (__builtin_expect (((!(0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    prepares [active - 1] = prepares [--preparecnt];
    ((W)(prepares [active - 1]))->active = active;
  }

  ev_stop ( (W)w);

  do { } while (0);
}

void
ev_check_start ( ev_check *w)
{
  if (__builtin_expect ((((0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  do { } while (0);

  ev_start ( (W)w, ++checkcnt);
  if (__builtin_expect ((((checkcnt) > (checkmax)) != 0),(0))) { int ocur_ = (checkmax); (checks) = (ev_check * *)array_realloc (sizeof (ev_check *), (checks), &(checkmax), (checkcnt)); /* used to suppress some warnings */; };
  checks [checkcnt - 1] = w;

  do { } while (0);
}

void
ev_check_stop ( ev_check *w)
{
  clear_pending ( (W)w);
  if (__builtin_expect (((!(0 + ((ev_watcher *)(void *)(w))->active) /* ro, true when the watcher has been started */) != 0),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    checks [active - 1] = checks [--checkcnt];
    ((W)(checks [active - 1]))->active = active;
  }

  ev_stop ( (W)w);

  do { } while (0);
}
# 3063 "./../libev/ev.c"
/*****************************************************************************/

struct ev_once
{
  ev_io io;
  ev_timer to;
  void (*cb)(int revents, void *arg);
  void *arg;
};

static void
once_cb ( struct ev_once *once, int revents)
{
  void (*cb)(int revents, void *arg) = once->cb;
  void *arg = once->arg;

  ev_io_stop ( &once->io);
  ev_timer_stop ( &once->to);
  ev_realloc ((once), 0);

  cb (revents, arg);
}

static void
once_cb_io ( ev_io *w, int revents)
{
  struct ev_once *once = (struct ev_once *)(((char *)w) - __builtin_offsetof (struct ev_once, io));

  once_cb ( once, revents | ev_clear_pending ( &once->to));
}

static void
once_cb_to ( ev_timer *w, int revents)
{
  struct ev_once *once = (struct ev_once *)(((char *)w) - __builtin_offsetof (struct ev_once, to));

  once_cb ( once, revents | ev_clear_pending ( &once->io));
}

void
ev_once ( int fd, int events, ev_tstamp timeout, void (*cb)(int revents, void *arg), void *arg)
{
  struct ev_once *once = (struct ev_once *)ev_realloc (0, (sizeof (struct ev_once)));

  if (__builtin_expect (((!once) != 0),(0)))
    {
      cb (0x4000 /* error, data contains errno */ | 0x01 /* ev_io detected read will not block */ | 0x02 /* ev_io detected write will not block */ | 0x00000100 /* timer timed out */, arg);
      return;
    }

  once->cb = cb;
  once->arg = arg;

  do { ((ev_watcher *)(void *)(&once->io))->active = ((ev_watcher *)(void *)(&once->io))->pending = ((ev_watcher *)(void *)(&once->io))->priority = 0; ((&once->io))->cb /* rw */ = (once_cb_io); } while (0);
  if (fd >= 0)
    {
      do { (&once->io)->fd = (fd); (&once->io)->events = (events) | 0x80 /* internal use only */; } while (0);
      ev_io_start ( &once->io);
    }

  do { ((ev_watcher *)(void *)(&once->to))->active = ((ev_watcher *)(void *)(&once->to))->pending = ((ev_watcher *)(void *)(&once->to))->priority = 0; ((&once->to))->cb /* rw */ = (once_cb_to); } while (0);
  if (timeout >= 0.)
    {
      do { ((ev_watcher_time *)(&once->to))->at = (timeout); (&once->to)->repeat = (0.); } while (0);
      ev_timer_start ( &once->to);
    }
}






}
# 3 "ev_cpp.C" 2
