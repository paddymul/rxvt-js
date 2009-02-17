# 1 "misc.C"
# 1 "/Users/patrickmullen/temp/downloads/rxvt/urxvt-my-conf/src//"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "misc.C"
/*----------------------------------------------------------------------*
 * File:	misc.C
 *----------------------------------------------------------------------*
 *
 * All portions of code are copyright by their respective author/s.
 * Copyright (c) 1996      mj olesen <olesen@me.QueensU.CA> Queen's Univ at Kingston
 * Copyright (c) 1997,1998 Oezguer Kesim <kesim@math.fu-berlin.de>
 * Copyright (c) 1998-2000 Geoff Wing <gcw@pobox.com>
 * Copyright (c) 2003-2006 Marc Lehmann <pcg@goof.com>
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
# 27 "misc.C" 2
# 1 "rxvt.h" 1



# 1 "/usr/include/c++/4.0.0/cstdio" 1 3
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
// ISO C++ 14882: 27.8.2  C Library files
//

/** @file cstdio
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stdio.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */




       
# 48 "/usr/include/c++/4.0.0/cstdio" 3

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
# 50 "/usr/include/c++/4.0.0/cstdio" 2 3
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
# 51 "/usr/include/c++/4.0.0/cstdio" 2 3

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
# 65 "/usr/include/stdio.h" 2 3 4



/* DO NOT REMOVE THIS COMMENT: fixincludes needs to see:
 * __gnuc_va_list and include <stdarg.h> */
typedef __darwin_va_list va_list;




typedef __darwin_off_t off_t;
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
# 53 "/usr/include/c++/4.0.0/cstdio" 2 3

// Get rid of those macros defined in <stdio.h> in lieu of real functions.
# 97 "/usr/include/c++/4.0.0/cstdio" 3
namespace std
{
  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;
}
# 153 "/usr/include/c++/4.0.0/cstdio" 3
namespace __gnu_cxx
{
# 167 "/usr/include/c++/4.0.0/cstdio" 3
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;

}

namespace std
{
  using __gnu_cxx::snprintf;
  using __gnu_cxx::vfscanf;
  using __gnu_cxx::vscanf;
  using __gnu_cxx::vsnprintf;
  using __gnu_cxx::vsscanf;
}
# 5 "rxvt.h" 2
# 1 "/usr/include/c++/4.0.0/cctype" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997, 1998, 1999, 2000, 2001 Free Software Foundation, Inc.
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
// ISO C++ 14882: <ccytpe>
//

/** @file cctype
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c ctype.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */




       
# 47 "/usr/include/c++/4.0.0/cctype" 3

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
# 49 "/usr/include/c++/4.0.0/cctype" 2 3
# 1 "/usr/include/ctype.h" 1 3 4
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
/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 * (c) UNIX System Laboratories, Inc.
 * All or some portions of this file are derived from material licensed
 * to the University of California by American Telephone and Telegraph
 * Co. or Unix System Laboratories, Inc. and are reproduced herein with
 * the permission of UNIX System Laboratories, Inc.
 *
 * This code is derived from software contributed to Berkeley by
 * Paul Borman at Krystal Technologies.
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
 *	@(#)ctype.h	8.4 (Berkeley) 1/21/94
 */




# 1 "/usr/include/runetype.h" 1 3 4
/*-
 * Copyright (c) 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Paul Borman at Krystal Technologies.
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
 *	@(#)runetype.h	8.1 (Berkeley) 6/2/93
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
# 43 "/usr/include/runetype.h" 2 3 4
# 53 "/usr/include/runetype.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;




typedef __darwin_rune_t rune_t;
# 70 "/usr/include/runetype.h" 3 4
typedef __darwin_wint_t wint_t;







/*
 * The lower 8 bits of runetype[] contain the digit value of the rune.
 */
typedef struct {
 __darwin_rune_t __min; /* First rune of the range */
 __darwin_rune_t __max; /* Last rune (inclusive) of the range */
 __darwin_rune_t __map; /* What first maps to in maps */
 __uint32_t *__types; /* Array of types in range */
} _RuneEntry;

typedef struct {
 int __nranges; /* Number of ranges stored */
 _RuneEntry *__ranges; /* Pointer to the ranges */
} _RuneRange;

typedef struct {
 char __name[14]; /* CHARCLASS_NAME_MAX = 14 */
 __uint32_t __mask; /* charclass mask */
} _RuneCharClass;

typedef struct {
 char __magic[8]; /* Magic saying what version we are */
 char __encoding[32]; /* ASCII name of this encoding */

 __darwin_rune_t (*__sgetrune)(const char *, __darwin_size_t, char const **);
 int (*__sputrune)(__darwin_rune_t, char *, __darwin_size_t, char **);
 __darwin_rune_t __invalid_rune;

 __uint32_t __runetype[(1 <<8 ) /* Must be a power of 2 */];
 __darwin_rune_t __maplower[(1 <<8 ) /* Must be a power of 2 */];
 __darwin_rune_t __mapupper[(1 <<8 ) /* Must be a power of 2 */];

 /*
	 * The following are to deal with Runes larger than _CACHED_RUNES - 1.
	 * Their data is actually contiguous with this structure so as to make
	 * it easier to read/write from/to disk.
	 */
 _RuneRange __runetype_ext;
 _RuneRange __maplower_ext;
 _RuneRange __mapupper_ext;

 void *__variable; /* Data which depends on the encoding */
 int __variable_len; /* how long that data is */

 /*
	 * extra fields to deal with arbitrary character classes
	 */
 int __ncharclasses;
 _RuneCharClass *__charclasses;
} _RuneLocale;



extern "C" {
extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;
}
# 70 "/usr/include/ctype.h" 2 3 4
# 116 "/usr/include/ctype.h" 3 4
/*
 * _EXTERNALIZE_CTYPE_INLINES_ is defined in locale/nomacros.c to tell us
 * to generate code for extern versions of all intermediate inline functions.
 */







/*
 * _EXTERNALIZE_CTYPE_INLINES_TOP_ is defined in locale/isctype.c to tell us
 * to generate code for extern versions of all top-level inline functions.
 */







/*
 * Use inline functions if we are allowed to and the compiler supports them.
 */



/* See comments in <machine/_type.h> about __darwin_ct_rune_t. */
extern "C" {
unsigned long ___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t ___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t ___toupper(__darwin_ct_rune_t);
}

static inline /* convert to C++ keyword */ int
isascii(int _c)
{
 return ((_c & ~0x7F) == 0);
}
# 164 "/usr/include/ctype.h" 3 4
extern "C" {
int __maskrune(__darwin_ct_rune_t, unsigned long);
}


static inline /* convert to C++ keyword */ int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
  : !!__maskrune(_c, _f));

}

static inline /* convert to C++ keyword */ __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (_c < 0 || _c >= (1 <<8 ) /* Must be a power of 2 */) ? 0 :
  !!(_DefaultRuneLocale.__runetype[_c] & _f);

}
# 204 "/usr/include/ctype.h" 3 4
extern "C" {
__darwin_ct_rune_t __toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t __tolower(__darwin_ct_rune_t);
}


static inline /* convert to C++ keyword */ int
__wcwidth(__darwin_ct_rune_t _c)
{
 unsigned int _x;

 if (_c == 0)
  return (0);
 _x = (unsigned int)__maskrune(_c, 0xe0000000L /* Mask for screen width data */|0x00040000L /* Print */);
 if ((_x & 0xe0000000L /* Mask for screen width data */) != 0)
  return ((_x & 0xe0000000L /* Mask for screen width data */) >> 30 /* Bits to shift to get width */);
 return ((_x & 0x00040000L /* Print */) != 0 ? 1 : -1);
}






static inline /* convert to C++ keyword */ int
isalnum(int _c)
{
 return (__istype(_c, 0x00000100L /* Alpha */|0x00000400L /* Digit */));
}

static inline /* convert to C++ keyword */ int
isalpha(int _c)
{
 return (__istype(_c, 0x00000100L /* Alpha */));
}

static inline /* convert to C++ keyword */ int
isblank(int _c)
{
 return (__istype(_c, 0x00020000L /* Blank */));
}

static inline /* convert to C++ keyword */ int
iscntrl(int _c)
{
 return (__istype(_c, 0x00000200L /* Control */));
}

/* ANSI -- locale independent */
static inline /* convert to C++ keyword */ int
isdigit(int _c)
{
 return (__isctype(_c, 0x00000400L /* Digit */));
}

static inline /* convert to C++ keyword */ int
isgraph(int _c)
{
 return (__istype(_c, 0x00000800L /* Graph */));
}

static inline /* convert to C++ keyword */ int
islower(int _c)
{
 return (__istype(_c, 0x00001000L /* Lower */));
}

static inline /* convert to C++ keyword */ int
isprint(int _c)
{
 return (__istype(_c, 0x00040000L /* Print */));
}

static inline /* convert to C++ keyword */ int
ispunct(int _c)
{
 return (__istype(_c, 0x00002000L /* Punct */));
}

static inline /* convert to C++ keyword */ int
isspace(int _c)
{
 return (__istype(_c, 0x00004000L /* Space */));
}

static inline /* convert to C++ keyword */ int
isupper(int _c)
{
 return (__istype(_c, 0x00008000L /* Upper */));
}

/* ANSI -- locale independent */
static inline /* convert to C++ keyword */ int
isxdigit(int _c)
{
 return (__isctype(_c, 0x00010000L /* X digit */));
}

static inline /* convert to C++ keyword */ int
toascii(int _c)
{
 return (_c & 0x7F);
}

static inline /* convert to C++ keyword */ int
tolower(int _c)
{
        return (__tolower(_c));
}

static inline /* convert to C++ keyword */ int
toupper(int _c)
{
        return (__toupper(_c));
}


static inline /* convert to C++ keyword */ int
digittoint(int _c)
{
 return (__maskrune(_c, 0x0F));
}

static inline /* convert to C++ keyword */ int
ishexnumber(int _c)
{
 return (__istype(_c, 0x00010000L /* X digit */));
}

static inline /* convert to C++ keyword */ int
isideogram(int _c)
{
 return (__istype(_c, 0x00080000L /* Ideogram */));
}

static inline /* convert to C++ keyword */ int
isnumber(int _c)
{
 return (__istype(_c, 0x00000400L /* Digit */));
}

static inline /* convert to C++ keyword */ int
isphonogram(int _c)
{
 return (__istype(_c, 0x00200000L /* Phonogram */));
}

static inline /* convert to C++ keyword */ int
isrune(int _c)
{
 return (__istype(_c, 0xFFFFFFF0L));
}

static inline /* convert to C++ keyword */ int
isspecial(int _c)
{
 return (__istype(_c, 0x00100000L /* Special */));
}
# 50 "/usr/include/c++/4.0.0/cctype" 2 3

// Get rid of those macros defined in <ctype.h> in lieu of real functions.
# 66 "/usr/include/c++/4.0.0/cctype" 3
namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}
# 6 "rxvt.h" 2
# 1 "/usr/include/c++/4.0.0/cerrno" 1 3
// The -*- C++ -*- forwarding header.

// Copyright (C) 1997, 1998, 1999, 2001, 2002 Free Software Foundation, Inc.
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
// ISO C++ 14882: 19.3  Error numbers
//

/** @file cerrno
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c errno.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */




       
# 47 "/usr/include/c++/4.0.0/cerrno" 3

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
# 49 "/usr/include/c++/4.0.0/cerrno" 2 3

// Adhere to section 17.4.1.2 clause 5 of ISO 14882:1998
# 7 "rxvt.h" 2
# 1 "/usr/include/c++/4.0.0/cstdarg" 1 3
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
// ISO C++ 14882: 20.4.6  C library
//

/** @file cstdarg
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stdarg.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */




       
# 47 "/usr/include/c++/4.0.0/cstdarg" 3

# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdarg.h" 1 3 4
/* Copyright (C) 1989, 1997, 1998, 1999, 2000 Free Software Foundation, Inc.

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
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 39 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 58 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdarg.h" 3 4
/* Define va_list, if desired, from __gnuc_va_list. */
/* We deliberately do not define va_list when called from
   stdio.h, because ANSI C says that stdio.h is not supposed to define
   va_list.  stdio.h needs to have access to that data type, 
   but must not use that name.  It should use the name __gnuc_va_list,
   which is safe because it is reserved for the implementation.  */
# 92 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdarg.h" 3 4
/* The macro _VA_LIST_ is the same thing used by this file in Ultrix.
   But on BSD NET2 we must not test or define or undef it.
   (Note that the comments in NET 2's ansi.h
   are incorrect for _VA_LIST_--see stdio.h!)  */

/* The macro _VA_LIST_DEFINED is used in Windows NT 3.5  */

/* The macro _VA_LIST is used in SCO Unix 3.2.  */
# 49 "/usr/include/c++/4.0.0/cstdarg" 2 3

// Adhere to section 17.4.1.2 clause 5 of ISO 14882:1998




namespace std
{
  using ::va_list;
}
# 8 "rxvt.h" 2
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
# 9 "rxvt.h" 2

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
# 11 "rxvt.h" 2

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



typedef __darwin_pthread_t pthread_t;






typedef __darwin_pthread_key_t pthread_key_t;


/* statvfs and fstatvfs */


typedef __darwin_fsblkcnt_t fsblkcnt_t;




typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 13 "rxvt.h" 2
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
# 88 "/usr/include/sys/_structs.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
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



int select(int, fd_set * , fd_set * ,
  fd_set * , struct timeval * )






  __asm("_" "select" /* nothing */ "$UNIX2003")


  ;
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
# 14 "rxvt.h" 2
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
# 15 "rxvt.h" 2
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
# 16 "rxvt.h" 2

# 1 "/usr/include/sys/ioctl.h" 1 3 4
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
/*-
 * Copyright (c) 1982, 1986, 1990, 1993, 1994
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
 *	@(#)ioctl.h	8.6 (Berkeley) 3/28/94
 */




# 1 "/usr/include/sys/ttycom.h" 1 3 4
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
/* Copyright (c) 1997 Apple Computer, Inc. All Rights Reserved */
/*-
 * Copyright (c) 1982, 1986, 1990, 1993, 1994
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
 *      This product includes software developed by the University of
 *      California, Berkeley and its contributors.
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
 *	@(#)ttycom.h	8.1 (Berkeley) 3/28/94
 */




# 1 "/usr/include/sys/ioccom.h" 1 3 4
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
/*-
 * Copyright (c) 1982, 1986, 1990, 1993, 1994
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
 *	@(#)ioccom.h	8.2 (Berkeley) 3/28/94
 */




/*
 * Ioctl's have the command encoded in the lower word, and the size of
 * any in or out parameters in the upper word.  The high 3 bits of the
 * upper word are used to encode the in/out status of the parameter.
 */






    /* no parameters */

    /* copy parameters out */

    /* copy parameters in */

    /* copy paramters in and out */

    /* mask for IN/OUT/VOID */







/* this should be _IORW, but stdio got there first */
# 73 "/usr/include/sys/ttycom.h" 2 3 4

/*
 * Tty ioctl's except for those supported only for backwards compatibility
 * with the old tty driver.
 */

/*
 * Window/terminal size structure.  This information is stored by the kernel
 * in order to provide a consistent interface, but is not used by the kernel.
 */
struct winsize {
 unsigned short ws_row; /* rows, in characters */
 unsigned short ws_col; /* columns, in characters */
 unsigned short ws_xpixel; /* horizontal size, pixels */
 unsigned short ws_ypixel; /* vertical size, pixels */
};
# 103 "/usr/include/sys/ttycom.h" 3 4
      /* 8-10 compat */


      /* 15 unused */

      /* 17-18 compat */
# 117 "/usr/include/sys/ttycom.h" 3 4
      /* 127-124 compat */






      /* 117-116 compat */
# 73 "/usr/include/sys/ioctl.h" 2 3 4

/*
 * Pun for SunOS prior to 3.2.  SunOS 3.2 and later support TIOCGWINSZ
 * and TIOCSWINSZ (yes, even 3.2-3.5, the fact that it wasn't documented
 * nonwithstanding).
 */
struct ttysize {
 unsigned short ts_lines;
 unsigned short ts_cols;
 unsigned short ts_xxx;
 unsigned short ts_yyy;
};



# 1 "/usr/include/sys/ioccom.h" 1 3 4
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
/*-
 * Copyright (c) 1982, 1986, 1990, 1993, 1994
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
 *	@(#)ioccom.h	8.2 (Berkeley) 3/28/94
 */
# 89 "/usr/include/sys/ioctl.h" 2 3 4

# 1 "/usr/include/sys/filio.h" 1 3 4
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
/*-
 * Copyright (c) 1982, 1986, 1990, 1993, 1994
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
 *	@(#)filio.h	8.1 (Berkeley) 3/28/94
 */




# 1 "/usr/include/sys/ioccom.h" 1 3 4
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
/*-
 * Copyright (c) 1982, 1986, 1990, 1993, 1994
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
 *	@(#)ioccom.h	8.2 (Berkeley) 3/28/94
 */
# 73 "/usr/include/sys/filio.h" 2 3 4

/* Generic file-descriptor ioctl's. */
# 91 "/usr/include/sys/ioctl.h" 2 3 4
# 1 "/usr/include/sys/sockio.h" 1 3 4
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
 * Copyright (c) 1982, 1986, 1990, 1993, 1994
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
 *	@(#)sockio.h	8.1 (Berkeley) 3/28/94
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
# 68 "/usr/include/sys/sockio.h" 2 3 4

# 1 "/usr/include/sys/ioccom.h" 1 3 4
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
/*-
 * Copyright (c) 1982, 1986, 1990, 1993, 1994
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
 *	@(#)ioccom.h	8.2 (Berkeley) 3/28/94
 */
# 70 "/usr/include/sys/sockio.h" 2 3 4

/* Socket ioctl's. */
# 85 "/usr/include/sys/sockio.h" 3 4
/*
 * OSIOCGIF* ioctls are deprecated; they are kept for binary compatibility.
 */
# 92 "/usr/include/sys/ioctl.h" 2 3 4


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
# 95 "/usr/include/sys/ioctl.h" 2 3 4

extern "C" {
int ioctl(int, unsigned long, ...);
}


/*
 * Keep outside _SYS_IOCTL_H_
 * Compatability with old terminal driver
 *
 * Source level -> #define USE_OLD_TTY
 * Kernel level -> options COMPAT_SUNOS
 */
# 18 "rxvt.h" 2






# 1 "/usr/include/c++/4.0.0/cwchar" 1 3
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
// ISO C++ 14882: 21.4
//

/** @file cwchar
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c wchar.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */




       
# 48 "/usr/include/c++/4.0.0/cwchar" 3

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
# 50 "/usr/include/c++/4.0.0/cwchar" 2 3
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
# 51 "/usr/include/c++/4.0.0/cwchar" 2 3
# 1 "/usr/include/c++/4.0.0/ctime" 1 3
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
// ISO C++ 14882: 20.5  Date and time
//

/** @file ctime
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c time.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */




       
# 48 "/usr/include/c++/4.0.0/ctime" 3

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
# 50 "/usr/include/c++/4.0.0/ctime" 2 3

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
# 52 "/usr/include/c++/4.0.0/ctime" 2 3

// Get rid of those macros defined in <time.h> in lieu of real functions.
# 64 "/usr/include/c++/4.0.0/ctime" 3
namespace std
{
  using ::clock_t;
  using ::time_t;
  using ::tm;

  using ::clock;
  using ::difftime;
  using ::mktime;
  using ::time;
  using ::asctime;
  using ::ctime;
  using ::gmtime;
  using ::localtime;
  using ::strftime;
}
# 52 "/usr/include/c++/4.0.0/cwchar" 2 3


# 1 "/usr/include/wchar.h" 1 3 4
/*-
 * Copyright (c)1999 Citrus Project,
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
 * $FreeBSD: /repoman/r/ncvs/src/include/wchar.h,v 1.34 2003/03/13 06:29:53 tjr Exp $
 */

/*-
 * Copyright (c) 1999, 2000 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Julian Coleman.
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
 *        This product includes software developed by the NetBSD
 *        Foundation, Inc. and its contributors.
 * 4. Neither the name of The NetBSD Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 *	$NetBSD: wchar.h,v 1.8 2000/12/22 05:31:42 itojun Exp $
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
# 71 "/usr/include/wchar.h" 2 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef __darwin_mbstate_t mbstate_t;
# 111 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdarg.h" 1 3 4
/* Copyright (C) 1989, 1997, 1998, 1999, 2000 Free Software Foundation, Inc.

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
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 112 "/usr/include/wchar.h" 2 3 4
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
# 113 "/usr/include/wchar.h" 2 3 4
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
# 114 "/usr/include/wchar.h" 2 3 4
# 1 "/usr/include/_wctype.h" 1 3 4
/*-
 * Copyright (c)1999 Citrus Project,
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
 */

/*
 * Common header for wctype.h and wchar.h
 *
 * Contains everything required by wctype.h except:
 *
 *	typedef __darwin_wctrans_t wctrans_t;
 *	int iswblank(wint_t);
 *	wint_t towctrans(wint_t, wctrans_t);
 *	wctrans_t wctrans(const char *);
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
# 43 "/usr/include/_wctype.h" 2 3 4
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
# 44 "/usr/include/_wctype.h" 2 3 4
# 52 "/usr/include/_wctype.h" 3 4
typedef __darwin_wctype_t wctype_t;
# 63 "/usr/include/_wctype.h" 3 4
# 1 "/usr/include/ctype.h" 1 3 4
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
/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 * (c) UNIX System Laboratories, Inc.
 * All or some portions of this file are derived from material licensed
 * to the University of California by American Telephone and Telegraph
 * Co. or Unix System Laboratories, Inc. and are reproduced herein with
 * the permission of UNIX System Laboratories, Inc.
 *
 * This code is derived from software contributed to Berkeley by
 * Paul Borman at Krystal Technologies.
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
 *	@(#)ctype.h	8.4 (Berkeley) 1/21/94
 */
# 64 "/usr/include/_wctype.h" 2 3 4

/*
 * Use inline functions if we are allowed to and the compiler supports them.
 */



static inline /* convert to C++ keyword */ int
iswalnum(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L /* Alpha */|0x00000400L /* Digit */));
}

static inline /* convert to C++ keyword */ int
iswalpha(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L /* Alpha */));
}

static inline /* convert to C++ keyword */ int
iswcntrl(wint_t _wc)
{
 return (__istype(_wc, 0x00000200L /* Control */));
}

static inline /* convert to C++ keyword */ int
iswctype(wint_t _wc, wctype_t _charclass)
{
 return (__istype(_wc, _charclass));
}

static inline /* convert to C++ keyword */ int
iswdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00000400L /* Digit */));
}

static inline /* convert to C++ keyword */ int
iswgraph(wint_t _wc)
{
 return (__istype(_wc, 0x00000800L /* Graph */));
}

static inline /* convert to C++ keyword */ int
iswlower(wint_t _wc)
{
 return (__istype(_wc, 0x00001000L /* Lower */));
}

static inline /* convert to C++ keyword */ int
iswprint(wint_t _wc)
{
 return (__istype(_wc, 0x00040000L /* Print */));
}

static inline /* convert to C++ keyword */ int
iswpunct(wint_t _wc)
{
 return (__istype(_wc, 0x00002000L /* Punct */));
}

static inline /* convert to C++ keyword */ int
iswspace(wint_t _wc)
{
 return (__istype(_wc, 0x00004000L /* Space */));
}

static inline /* convert to C++ keyword */ int
iswupper(wint_t _wc)
{
 return (__istype(_wc, 0x00008000L /* Upper */));
}

static inline /* convert to C++ keyword */ int
iswxdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00010000L /* X digit */));
}

static inline /* convert to C++ keyword */ wint_t
towlower(wint_t _wc)
{
        return (__tolower(_wc));
}

static inline /* convert to C++ keyword */ wint_t
towupper(wint_t _wc)
{
        return (__toupper(_wc));
}
# 176 "/usr/include/_wctype.h" 3 4
extern "C" {
wctype_t
 wctype(const char *);
}
# 115 "/usr/include/wchar.h" 2 3 4

extern "C" {
wint_t btowc(int);
wint_t fgetwc(FILE *);
wchar_t *fgetws(wchar_t * , int, FILE * );
wint_t fputwc(wchar_t, FILE *);
int fputws(const wchar_t * , FILE * );
int fwide(FILE *, int);
int fwprintf(FILE * , const wchar_t * , ...) /* nothing */;
int fwscanf(FILE * , const wchar_t * , ...) /* nothing */;
wint_t getwc(FILE *);
wint_t getwchar(void);
size_t mbrlen(const char * , size_t, mbstate_t * );
size_t mbrtowc(wchar_t * , const char * , size_t,
     mbstate_t * );
int mbsinit(const mbstate_t *);
size_t mbsrtowcs(wchar_t * , const char ** , size_t,
     mbstate_t * );
wint_t putwc(wchar_t, FILE *);
wint_t putwchar(wchar_t);
int swprintf(wchar_t * , size_t, const wchar_t * ,
     ...) /* nothing */;
int swscanf(const wchar_t * , const wchar_t * , ...) /* nothing */;
wint_t ungetwc(wint_t, FILE *);
int vfwprintf(FILE * , const wchar_t * ,
     __darwin_va_list) /* nothing */;
int vswprintf(wchar_t * , size_t, const wchar_t * ,
     __darwin_va_list) /* nothing */;
int vwprintf(const wchar_t * , __darwin_va_list) /* nothing */;
size_t wcrtomb(char * , wchar_t, mbstate_t * );
wchar_t *wcscat(wchar_t * , const wchar_t * );
wchar_t *wcschr(const wchar_t *, wchar_t);
int wcscmp(const wchar_t *, const wchar_t *);
int wcscoll(const wchar_t *, const wchar_t *);
wchar_t *wcscpy(wchar_t * , const wchar_t * );
size_t wcscspn(const wchar_t *, const wchar_t *);
size_t wcsftime(wchar_t * , size_t, const wchar_t * ,
     const struct tm * ) __asm("_" "wcsftime" "$UNIX2003");
size_t wcslen(const wchar_t *);
wchar_t *wcsncat(wchar_t * , const wchar_t * , size_t);
int wcsncmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wcsncpy(wchar_t * , const wchar_t * , size_t);
wchar_t *wcspbrk(const wchar_t *, const wchar_t *);
wchar_t *wcsrchr(const wchar_t *, wchar_t);
size_t wcsrtombs(char * , const wchar_t ** , size_t,
     mbstate_t * );
size_t wcsspn(const wchar_t *, const wchar_t *);
wchar_t *wcsstr(const wchar_t * , const wchar_t * );
size_t wcsxfrm(wchar_t * , const wchar_t * , size_t);
int wctob(wint_t);
double wcstod(const wchar_t * , wchar_t ** );
wchar_t *wcstok(wchar_t * , const wchar_t * ,
     wchar_t ** );
long wcstol(const wchar_t * , wchar_t ** , int);
unsigned long
  wcstoul(const wchar_t * , wchar_t ** , int);
wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
int wmemcmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wmemcpy(wchar_t * , const wchar_t * , size_t);
wchar_t *wmemmove(wchar_t *, const wchar_t *, size_t);
wchar_t *wmemset(wchar_t *, wchar_t, size_t);
int wprintf(const wchar_t * , ...) /* nothing */;
int wscanf(const wchar_t * , ...) /* nothing */;


int vfwscanf(FILE * , const wchar_t * ,
     __darwin_va_list) /* nothing */;
int vswscanf(const wchar_t * , const wchar_t * ,
     __darwin_va_list) /* nothing */;
int vwscanf(const wchar_t * , __darwin_va_list) /* nothing */;
float wcstof(const wchar_t * , wchar_t ** );
long double
 wcstold(const wchar_t * , wchar_t ** ) /* nothing */;

long long
 wcstoll(const wchar_t * , wchar_t ** , int);
unsigned long long
 wcstoull(const wchar_t * , wchar_t ** , int);

int wcswidth(const wchar_t *, size_t);
int wcwidth(wchar_t);



size_t mbsnrtowcs(wchar_t * , const char ** , size_t,
     size_t, mbstate_t * );
size_t wcslcat(wchar_t *, const wchar_t *, size_t);
size_t wcslcpy(wchar_t *, const wchar_t *, size_t);
size_t wcsnrtombs(char * , const wchar_t ** , size_t,
     size_t, mbstate_t * );


/* Poison the following routines if -fshort-wchar is set */



}
# 55 "/usr/include/c++/4.0.0/cwchar" 2 3


// Need to do a bit of trickery here with mbstate_t as char_traits
// assumes it is in wchar.h, regardless of wchar_t specializations.
# 69 "/usr/include/c++/4.0.0/cwchar" 3
namespace std
{
  using ::mbstate_t;
}

// Get rid of those macros defined in <wchar.h> in lieu of real functions.
# 141 "/usr/include/c++/4.0.0/cwchar" 3
namespace std
{
  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;
  using ::swprintf;
  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;

  using ::vswprintf;

  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;

  using ::wcschr;

  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }

  using ::wcspbrk;

  inline wchar_t*
  wcspbrk(wchar_t* __s1, wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }

  using ::wcsrchr;

  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }

  using ::wcsstr;

  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }

  using ::wmemchr;

  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }
}







namespace __gnu_cxx
{





  using ::wcstold;
# 258 "/usr/include/c++/4.0.0/cwchar" 3
  using ::wcstoll;
  using ::wcstoull;

}

namespace std
{
  using __gnu_cxx::wcstold;
  using __gnu_cxx::wcstoll;
  using __gnu_cxx::wcstoull;
}
# 25 "rxvt.h" 2






using namespace std;

extern "C" {
# 1 "/usr/X11/include/X11/Xlib.h" 1
/* $XdotOrg: lib/X11/include/X11/Xlib.h,v 1.6 2005-11-08 06:33:25 jkj Exp $ */
/* $Xorg: Xlib.h,v 1.6 2001/02/09 02:03:38 xorgcvs Exp $ */
/* 

Copyright 1985, 1986, 1987, 1991, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

*/
/* $XFree86: xc/lib/X11/Xlib.h,v 3.25 2003/11/17 22:20:10 dawes Exp $ */


/*
 *	Xlib.h - Header definition and support file for the C subroutine
 *	interface library (Xlib) to the X Window System Protocol (V11).
 *	Structures and symbols starting with "_" are private to the library.
 */
# 52 "/usr/X11/include/X11/Xlib.h"
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
# 53 "/usr/X11/include/X11/Xlib.h" 2







# 1 "/usr/X11/include/X11/X.h" 1
/*
 *	$Xorg: X.h,v 1.4 2001/02/09 02:03:22 xorgcvs Exp $
 */

/* Definitions for the X window system likely to be used by applications */




/***********************************************************

Copyright 1987, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.


Copyright 1987 by Digital Equipment Corporation, Maynard, Massachusetts.

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its 
documentation for any purpose and without fee is hereby granted, 
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in 
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.  

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/
/* $XFree86: xc/include/X.h,v 1.6 2003/07/09 15:27:28 tsi Exp $ */




/* Resources */

/*
 * _XSERVER64 must ONLY be defined when compiling X server sources on
 * systems where unsigned long is not 32 bits, must NOT be used in
 * client or library code.
 */



typedef unsigned long XID;



typedef unsigned long Mask;



typedef unsigned long Atom; /* Also in Xdefs.h */

typedef unsigned long VisualID;
typedef unsigned long Time;
# 101 "/usr/X11/include/X11/X.h"
typedef XID Window;
typedef XID Drawable;


typedef XID Font;

typedef XID Pixmap;
typedef XID Cursor;
typedef XID Colormap;
typedef XID GContext;
typedef XID KeySym;

typedef unsigned char KeyCode;

/*****************************************************************
 * RESERVED RESOURCE AND CONSTANT DEFINITIONS
 *****************************************************************/
# 148 "/usr/X11/include/X11/X.h"
/***************************************************************** 
 * EVENT DEFINITIONS 
 *****************************************************************/

/* Input Event Masks. Used as event-mask window attribute and as arguments
   to Grab requests.  Not to be confused with event names.  */
# 182 "/usr/X11/include/X11/X.h"
/* Event names.  Used in "type" field in XEvent structures.  Not to be
confused with event masks above.  They start from 2 because 0 and 1
are reserved in the protocol for errors and replies. */
# 223 "/usr/X11/include/X11/X.h"
/* Key masks. Used as modifiers to GrabButton and GrabKey, results of QueryPointer,
   state in various key-, mouse-, and button-related events. */
# 235 "/usr/X11/include/X11/X.h"
/* modifier names.  Used to build a SetModifierMapping request or
   to read a GetModifierMapping request.  These correspond to the
   masks defined above. */
# 248 "/usr/X11/include/X11/X.h"
/* button masks.  Used in same manner as Key masks above. Not to be confused
   with button names below. */
# 260 "/usr/X11/include/X11/X.h"
/* button names. Used as arguments to GrabButton and as detail in ButtonPress
   and ButtonRelease events.  Not to be confused with button masks above.
   Note that 0 is already defined above as "AnyButton".  */







/* Notify modes */
# 279 "/usr/X11/include/X11/X.h"
/* Notify detail */
# 290 "/usr/X11/include/X11/X.h"
/* Visibility notify */





/* Circulation request */




/* protocol families */






/* authentication families not tied to a specific protocol */


/* Property notification */




/* Color Map notification */




/* GrabPointer, GrabButton, GrabKeyboard, GrabKey Modes */




/* GrabPointer, GrabKeyboard reply status */







/* AllowEvents modes */
# 345 "/usr/X11/include/X11/X.h"
/* Used in SetInputFocus, GetInputFocus */





/*****************************************************************
 * ERROR CODES 
 *****************************************************************/
# 385 "/usr/X11/include/X11/X.h"
/*****************************************************************
 * WINDOW DEFINITIONS 
 *****************************************************************/

/* Window classes used by CreateWindow */
/* Note that CopyFromParent is already defined as 0 above */




/* Window attributes for CreateWindow and ChangeWindowAttributes */
# 413 "/usr/X11/include/X11/X.h"
/* ConfigureWindow structure */
# 424 "/usr/X11/include/X11/X.h"
/* Bit Gravity */
# 438 "/usr/X11/include/X11/X.h"
/* Window gravity + bit gravity above */



/* Used in CreateWindow for backing-store hint */





/* Used in GetWindowAttributes reply */





/* Used in ChangeSaveSet */




/* Used in ChangeCloseDownMode */





/* Window stacking method (in configureWindow) */







/* Circulation direction */




/* Property modes */





/*****************************************************************
 * GRAPHICS DEFINITIONS
 *****************************************************************/

/* graphics functions, as in GC.alu */
# 507 "/usr/X11/include/X11/X.h"
/* LineStyle */





/* capStyle */






/* joinStyle */





/* fillStyle */






/* fillRule */




/* subwindow mode */




/* SetClipRectangles ordering */






/* CoordinateMode for drawing routines */




/* Polygon shapes */





/* Arc modes for PolyFillArc */




/* GC components: masks used in CreateGC, CopyGC, ChangeGC, OR'ed into
   GC.stateChanges */
# 594 "/usr/X11/include/X11/X.h"
/*****************************************************************
 * FONTS 
 *****************************************************************/

/* used in QueryFont -- draw direction */






/*****************************************************************
 *  IMAGING 
 *****************************************************************/

/* ImageFormat -- PutImage, GetImage */





/*****************************************************************
 *  COLOR MAP STUFF 
 *****************************************************************/

/* For CreateColormap */





/* Flags used in StoreNamedColor, StoreColors */





/*****************************************************************
 * CURSOR STUFF
 *****************************************************************/

/* QueryBestSize Class */





/***************************************************************** 
 * KEYBOARD/POINTER STUFF
 *****************************************************************/
# 652 "/usr/X11/include/X11/X.h"
/* masks for ChangeKeyboardControl */
# 671 "/usr/X11/include/X11/X.h"
/*****************************************************************
 * SCREEN SAVER STUFF 
 *****************************************************************/
# 686 "/usr/X11/include/X11/X.h"
/* for ForceScreenSaver */




/*****************************************************************
 * HOSTS AND CONNECTIONS
 *****************************************************************/

/* for ChangeHosts */




/* for ChangeAccessControl */




/* Display classes  used in opening the connection 
 * Note that the statically allocated ones are even numbered and the
 * dynamically changeable ones are odd numbered */
# 717 "/usr/X11/include/X11/X.h"
/* Byte order  used in imageByteOrder and bitmapBitOrder */
# 61 "/usr/X11/include/X11/Xlib.h" 2

/* applications should not depend on these two headers being included! */
# 1 "/usr/X11/include/X11/Xfuncproto.h" 1
/* Xfuncproto.h.  Generated from Xfuncproto.h.in by configure.  */
/* $Xorg: Xfuncproto.h,v 1.4 2001/02/09 02:03:22 xorgcvs Exp $ */
/*
 *
Copyright 1989, 1991, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.
 *
 */
/* $XFree86: xc/include/Xfuncproto.h,v 3.4 2001/12/14 19:53:25 dawes Exp $ */

/* Definitions to make function prototypes manageable */
# 53 "/usr/X11/include/X11/Xfuncproto.h"
/* Function prototype configuration (see configure for more info) */

/* #undef NARROWPROTO */


/* #undef FUNCPROTO */
# 64 "/usr/X11/include/X11/Xlib.h" 2
# 1 "/usr/X11/include/X11/Xosdefs.h" 1
/*
 * O/S-dependent (mis)feature macro definitions
 *
 * $XdotOrg: xc/include/Xosdefs.h,v 1.3 2005/04/28 22:04:12 alanc Exp $
 * $Xorg: Xosdefs.h,v 1.5 2001/02/09 02:03:23 xorgcvs Exp $
 *
Copyright 1991, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.
 */
/* $XFree86: xc/include/Xosdefs.h,v 3.20 2002/05/31 18:45:39 dawes Exp $ */




/*
 * X_NOT_STDC_ENV means does not have ANSI C header files.  Lack of this
 * symbol does NOT mean that the system has stdarg.h.
 *
 * X_NOT_POSIX means does not have POSIX header files.  Lack of this
 * symbol does NOT mean that the POSIX environment is the default.
 * You may still have to define _POSIX_SOURCE to get it.
 */
# 139 "/usr/X11/include/X11/Xosdefs.h"
/* Defining any of these will sanitize the namespace to JUST want is defined by
 * that particular standard.  If that happens, we don't get some expected
 * prototypes, typedefs, etc (like fd_mask).  We can define _DARWIN_C_SOURCE to
 * loosen our belts a tad.
 */
# 65 "/usr/X11/include/X11/Xlib.h" 2
# 75 "/usr/X11/include/X11/Xlib.h"
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
# 76 "/usr/X11/include/X11/Xlib.h" 2
# 93 "/usr/X11/include/X11/Xlib.h"
extern int
_Xmblen(




    char *str,
    int len

    );

/* API mentioning "UTF8" or "utf8" is an XFree86 extension, introduced in
   November 2000. Its presence is indicated through the following macro. */


typedef char *XPointer;
# 154 "/usr/X11/include/X11/Xlib.h"
/* macros for screen oriented applications (toolkit) */
# 177 "/usr/X11/include/X11/Xlib.h"
/*
 * Extensions need a way to hang private data on some structures.
 */
typedef struct _XExtData {
 int number; /* number returned by XRegisterExtension */
 struct _XExtData *next; /* next item on list of data for structure */
 int (*free_private)( /* called to free private storage */
 struct _XExtData *extension
 );
 XPointer private_data; /* data private to this extension. */
} XExtData;

/*
 * This file contains structures used by the extension mechanism.
 */
typedef struct { /* public to extension, cannot be changed */
 int extension; /* extension number */
 int major_opcode; /* major op-code assigned by server */
 int first_event; /* first event number for the extension */
 int first_error; /* first error number for the extension */
} XExtCodes;

/*
 * Data structure for retrieving info about pixmap formats.
 */

typedef struct {
    int depth;
    int bits_per_pixel;
    int scanline_pad;
} XPixmapFormatValues;


/*
 * Data structure for setting graphics context.
 */
typedef struct {
 int function; /* logical operation */
 unsigned long plane_mask;/* plane mask */
 unsigned long foreground;/* foreground pixel */
 unsigned long background;/* background pixel */
 int line_width; /* line width */
 int line_style; /* LineSolid, LineOnOffDash, LineDoubleDash */
 int cap_style; /* CapNotLast, CapButt, 
				   CapRound, CapProjecting */
 int join_style; /* JoinMiter, JoinRound, JoinBevel */
 int fill_style; /* FillSolid, FillTiled, 
				   FillStippled, FillOpaeueStippled */
 int fill_rule; /* EvenOddRule, WindingRule */
 int arc_mode; /* ArcChord, ArcPieSlice */
 Pixmap tile; /* tile pixmap for tiling operations */
 Pixmap stipple; /* stipple 1 plane pixmap for stipping */
 int ts_x_origin; /* offset for tile or stipple operations */
 int ts_y_origin;
        Font font; /* default text font for text operations */
 int subwindow_mode; /* ClipByChildren, IncludeInferiors */
 int graphics_exposures;/* boolean, should exposures be generated */
 int clip_x_origin; /* origin for clipping */
 int clip_y_origin;
 Pixmap clip_mask; /* bitmap clipping; other calls for rects */
 int dash_offset; /* patterned/dashed line information */
 char dashes;
} XGCValues;

/*
 * Graphics context.  The contents of this structure are implementation
 * dependent.  A GC should be treated as opaque by application code.
 */

typedef struct _XGC

{
    XExtData *ext_data; /* hook for extension to hang data */
    GContext gid; /* protocol ID for graphics context */
    /* there is more to this structure, but it is private to Xlib */
}

*GC;

/*
 * Visual structure; contains information about colormapping possible.
 */
typedef struct {
 XExtData *ext_data; /* hook for extension to hang data */
 VisualID visualid; /* visual id of this visual */

 int c_class; /* C++ class of screen (monochrome, etc.) */



 unsigned long red_mask, green_mask, blue_mask; /* mask values */
 int bits_per_rgb; /* log base 2 of distinct color values */
 int map_entries; /* color map entries */
} Visual;

/*
 * Depth structure; contains information for each possible depth.
 */
typedef struct {
 int depth; /* this depth (Z) of the depth */
 int nvisuals; /* number of Visual types at this depth */
 Visual *visuals; /* list of visuals possible at this depth */
} Depth;

/*
 * Information about the screen.  The contents of this structure are
 * implementation dependent.  A Screen should be treated as opaque
 * by application code.
 */

struct _XDisplay; /* Forward declare before use for C++ */

typedef struct {
 XExtData *ext_data; /* hook for extension to hang data */
 struct _XDisplay *display;/* back pointer to display structure */
 Window root; /* Root window id. */
 int width, height; /* width and height of screen */
 int mwidth, mheight; /* width and height of  in millimeters */
 int ndepths; /* number of depths possible */
 Depth *depths; /* list of allowable depths on the screen */
 int root_depth; /* bits per pixel */
 Visual *root_visual; /* root visual */
 GC default_gc; /* GC for the root root visual */
 Colormap cmap; /* default color map */
 unsigned long white_pixel;
 unsigned long black_pixel; /* White and Black pixel values */
 int max_maps, min_maps; /* max and min color maps */
 int backing_store; /* Never, WhenMapped, Always */
 int save_unders;
 long root_input_mask; /* initial root input mask */
} Screen;

/*
 * Format structure; describes ZFormat data the screen will understand.
 */
typedef struct {
 XExtData *ext_data; /* hook for extension to hang data */
 int depth; /* depth of this image format */
 int bits_per_pixel; /* bits/pixel at this depth */
 int scanline_pad; /* scanline must padded to this multiple */
} ScreenFormat;

/*
 * Data structure for setting window attributes.
 */
typedef struct {
    Pixmap background_pixmap; /* background or None or ParentRelative */
    unsigned long background_pixel; /* background pixel */
    Pixmap border_pixmap; /* border of the window */
    unsigned long border_pixel; /* border pixel value */
    int bit_gravity; /* one of bit gravity values */
    int win_gravity; /* one of the window gravity values */
    int backing_store; /* NotUseful, WhenMapped, Always */
    unsigned long backing_planes;/* planes to be preseved if possible */
    unsigned long backing_pixel;/* value to use in restoring planes */
    int save_under; /* should bits under be saved? (popups) */
    long event_mask; /* set of events that should be saved */
    long do_not_propagate_mask; /* set of events that should not propagate */
    int override_redirect; /* boolean value for override-redirect */
    Colormap colormap; /* color map to be associated with window */
    Cursor cursor; /* cursor to be displayed (or None) */
} XSetWindowAttributes;

typedef struct {
    int x, y; /* location of window */
    int width, height; /* width and height of window */
    int border_width; /* border width of window */
    int depth; /* depth of window */
    Visual *visual; /* the associated visual structure */
    Window root; /* root of screen containing window */

    int c_class; /* C++ InputOutput, InputOnly*/



    int bit_gravity; /* one of bit gravity values */
    int win_gravity; /* one of the window gravity values */
    int backing_store; /* NotUseful, WhenMapped, Always */
    unsigned long backing_planes;/* planes to be preserved if possible */
    unsigned long backing_pixel;/* value to be used when restoring planes */
    int save_under; /* boolean, should bits under be saved? */
    Colormap colormap; /* color map to be associated with window */
    int map_installed; /* boolean, is color map currently installed*/
    int map_state; /* IsUnmapped, IsUnviewable, IsViewable */
    long all_event_masks; /* set of events all people have interest in*/
    long your_event_mask; /* my event mask */
    long do_not_propagate_mask; /* set of events that should not propagate */
    int override_redirect; /* boolean value for override-redirect */
    Screen *screen; /* back pointer to correct screen */
} XWindowAttributes;

/*
 * Data structure for host setting; getting routines.
 *
 */

typedef struct {
 int family; /* for example FamilyInternet */
 int length; /* length of address, in bytes */
 char *address; /* pointer to where to find the bytes */
} XHostAddress;

/*
 * Data structure for ServerFamilyInterpreted addresses in host routines
 */
typedef struct {
 int typelength; /* length of type string, in bytes */
 int valuelength; /* length of value string, in bytes */
 char *type; /* pointer to where to find the type string */
 char *value; /* pointer to where to find the address */
} XServerInterpretedAddress;

/*
 * Data structure for "image" data, used by image manipulation routines.
 */
typedef struct _XImage {
    int width, height; /* size of image */
    int xoffset; /* number of pixels offset in X direction */
    int format; /* XYBitmap, XYPixmap, ZPixmap */
    char *data; /* pointer to image data */
    int byte_order; /* data byte order, LSBFirst, MSBFirst */
    int bitmap_unit; /* quant. of scanline 8, 16, 32 */
    int bitmap_bit_order; /* LSBFirst, MSBFirst */
    int bitmap_pad; /* 8, 16, 32 either XY or ZPixmap */
    int depth; /* depth of image */
    int bytes_per_line; /* accelarator to next line */
    int bits_per_pixel; /* bits per pixel (ZPixmap) */
    unsigned long red_mask; /* bits in z arrangment */
    unsigned long green_mask;
    unsigned long blue_mask;
    XPointer obdata; /* hook for the object routines to hang on */
    struct funcs { /* image manipulation routines */
 struct _XImage *(*create_image)(
  struct _XDisplay* /* display */,
  Visual* /* visual */,
  unsigned int /* depth */,
  int /* format */,
  int /* offset */,
  char* /* data */,
  unsigned int /* width */,
  unsigned int /* height */,
  int /* bitmap_pad */,
  int /* bytes_per_line */);
 int (*destroy_image) (struct _XImage *);
 unsigned long (*get_pixel) (struct _XImage *, int, int);
 int (*put_pixel) (struct _XImage *, int, int, unsigned long);
 struct _XImage *(*sub_image)(struct _XImage *, int, int, unsigned int, unsigned int);
 int (*add_pixel) (struct _XImage *, long);
 } f;
} XImage;

/* 
 * Data structure for XReconfigureWindow
 */
typedef struct {
    int x, y;
    int width, height;
    int border_width;
    Window sibling;
    int stack_mode;
} XWindowChanges;

/*
 * Data structure used by color operations
 */
typedef struct {
 unsigned long pixel;
 unsigned short red, green, blue;
 char flags; /* do_red, do_green, do_blue */
 char pad;
} XColor;

/* 
 * Data structures for graphics operations.  On most machines, these are
 * congruent with the wire protocol structures, so reformatting the data
 * can be avoided on these architectures.
 */
typedef struct {
    short x1, y1, x2, y2;
} XSegment;

typedef struct {
    short x, y;
} XPoint;

typedef struct {
    short x, y;
    unsigned short width, height;
} XRectangle;

typedef struct {
    short x, y;
    unsigned short width, height;
    short angle1, angle2;
} XArc;


/* Data structure for XChangeKeyboardControl */

typedef struct {
        int key_click_percent;
        int bell_percent;
        int bell_pitch;
        int bell_duration;
        int led;
        int led_mode;
        int key;
        int auto_repeat_mode; /* On, Off, Default */
} XKeyboardControl;

/* Data structure for XGetKeyboardControl */

typedef struct {
        int key_click_percent;
 int bell_percent;
 unsigned int bell_pitch, bell_duration;
 unsigned long led_mask;
 int global_auto_repeat;
 char auto_repeats[32];
} XKeyboardState;

/* Data structure for XGetMotionEvents.  */

typedef struct {
        Time time;
 short x, y;
} XTimeCoord;

/* Data structure for X{Set,Get}ModifierMapping */

typedef struct {
  int max_keypermod; /* The server's max # of keys per modifier */
  KeyCode *modifiermap; /* An 8 by max_keypermod array of modifiers */
} XModifierKeymap;


/*
 * Display datatype maintaining display specific data.
 * The contents of this structure are implementation dependent.
 * A Display should be treated as opaque by application code.
 */




struct _XPrivate; /* Forward declare before use for C++ */
struct _XrmHashBucketRec;

typedef struct

_XDisplay

{
 XExtData *ext_data; /* hook for extension to hang data */
 struct _XPrivate *private1;
 int fd; /* Network socket. */
 int private2;
 int proto_major_version;/* major version of server's X protocol */
 int proto_minor_version;/* minor version of servers X protocol */
 char *vendor; /* vendor of the server hardware */
        XID private3;
 XID private4;
 XID private5;
 int private6;
 XID (*resource_alloc)( /* allocator function */
  struct _XDisplay*
 );
 int byte_order; /* screen byte order, LSBFirst, MSBFirst */
 int bitmap_unit; /* padding and data requirements */
 int bitmap_pad; /* padding requirements on bitmaps */
 int bitmap_bit_order; /* LeastSignificant or MostSignificant */
 int nformats; /* number of pixmap formats in list */
 ScreenFormat *pixmap_format; /* pixmap format list */
 int private8;
 int release; /* release of the server */
 struct _XPrivate *private9, *private10;
 int qlen; /* Length of input event queue */
 unsigned long last_request_read; /* seq number of last event read */
 unsigned long request; /* sequence number of last request. */
 XPointer private11;
 XPointer private12;
 XPointer private13;
 XPointer private14;
 unsigned max_request_size; /* maximum number 32 bit words in request*/
 struct _XrmHashBucketRec *db;
 int (*private15)(
  struct _XDisplay*
  );
 char *display_name; /* "host:display" string used on this connect*/
 int default_screen; /* default screen for operations */
 int nscreens; /* number of screens on this server*/
 Screen *screens; /* pointer to list of screens */
 unsigned long motion_buffer; /* size of motion buffer */
 unsigned long private16;
 int min_keycode; /* minimum defined keycode */
 int max_keycode; /* maximum defined keycode */
 XPointer private17;
 XPointer private18;
 int private19;
 char *xdefaults; /* contents of defaults from server */
 /* there is more to this structure, but it is private to Xlib */
}

Display,

*_XPrivDisplay;



/*
 * Definitions of specific events.
 */
typedef struct {
 int type; /* of event */
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window; /* "event" window it is reported relative to */
 Window root; /* root window that the event occurred on */
 Window subwindow; /* child window */
 Time time; /* milliseconds */
 int x, y; /* pointer x, y coordinates in event window */
 int x_root, y_root; /* coordinates relative to root */
 unsigned int state; /* key or button mask */
 unsigned int keycode; /* detail */
 int same_screen; /* same screen flag */
} XKeyEvent;
typedef XKeyEvent XKeyPressedEvent;
typedef XKeyEvent XKeyReleasedEvent;

typedef struct {
 int type; /* of event */
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window; /* "event" window it is reported relative to */
 Window root; /* root window that the event occurred on */
 Window subwindow; /* child window */
 Time time; /* milliseconds */
 int x, y; /* pointer x, y coordinates in event window */
 int x_root, y_root; /* coordinates relative to root */
 unsigned int state; /* key or button mask */
 unsigned int button; /* detail */
 int same_screen; /* same screen flag */
} XButtonEvent;
typedef XButtonEvent XButtonPressedEvent;
typedef XButtonEvent XButtonReleasedEvent;

typedef struct {
 int type; /* of event */
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window; /* "event" window reported relative to */
 Window root; /* root window that the event occurred on */
 Window subwindow; /* child window */
 Time time; /* milliseconds */
 int x, y; /* pointer x, y coordinates in event window */
 int x_root, y_root; /* coordinates relative to root */
 unsigned int state; /* key or button mask */
 char is_hint; /* detail */
 int same_screen; /* same screen flag */
} XMotionEvent;
typedef XMotionEvent XPointerMovedEvent;

typedef struct {
 int type; /* of event */
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window; /* "event" window reported relative to */
 Window root; /* root window that the event occurred on */
 Window subwindow; /* child window */
 Time time; /* milliseconds */
 int x, y; /* pointer x, y coordinates in event window */
 int x_root, y_root; /* coordinates relative to root */
 int mode; /* NotifyNormal, NotifyGrab, NotifyUngrab */
 int detail;
 /*
	 * NotifyAncestor, NotifyVirtual, NotifyInferior, 
	 * NotifyNonlinear,NotifyNonlinearVirtual
	 */
 int same_screen; /* same screen flag */
 int focus; /* boolean focus */
 unsigned int state; /* key or button mask */
} XCrossingEvent;
typedef XCrossingEvent XEnterWindowEvent;
typedef XCrossingEvent XLeaveWindowEvent;

typedef struct {
 int type; /* FocusIn or FocusOut */
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window; /* window of event */
 int mode; /* NotifyNormal, NotifyWhileGrabbed,
				   NotifyGrab, NotifyUngrab */
 int detail;
 /*
	 * NotifyAncestor, NotifyVirtual, NotifyInferior, 
	 * NotifyNonlinear,NotifyNonlinearVirtual, NotifyPointer,
	 * NotifyPointerRoot, NotifyDetailNone 
	 */
} XFocusChangeEvent;
typedef XFocusChangeEvent XFocusInEvent;
typedef XFocusChangeEvent XFocusOutEvent;

/* generated on EnterWindow and FocusIn  when KeyMapState selected */
typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window;
 char key_vector[32];
} XKeymapEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window;
 int x, y;
 int width, height;
 int count; /* if non-zero, at least this many more */
} XExposeEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Drawable drawable;
 int x, y;
 int width, height;
 int count; /* if non-zero, at least this many more */
 int major_code; /* core is CopyArea or CopyPlane */
 int minor_code; /* not defined in the core */
} XGraphicsExposeEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Drawable drawable;
 int major_code; /* core is CopyArea or CopyPlane */
 int minor_code; /* not defined in the core */
} XNoExposeEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window;
 int state; /* Visibility state */
} XVisibilityEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window parent; /* parent of the window */
 Window window; /* window id of window created */
 int x, y; /* window location */
 int width, height; /* size of window */
 int border_width; /* border width */
 int override_redirect; /* creation should be overridden */
} XCreateWindowEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window event;
 Window window;
} XDestroyWindowEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window event;
 Window window;
 int from_configure;
} XUnmapEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window event;
 Window window;
 int override_redirect; /* boolean, is override set... */
} XMapEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window parent;
 Window window;
} XMapRequestEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window event;
 Window window;
 Window parent;
 int x, y;
 int override_redirect;
} XReparentEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window event;
 Window window;
 int x, y;
 int width, height;
 int border_width;
 Window above;
 int override_redirect;
} XConfigureEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window event;
 Window window;
 int x, y;
} XGravityEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window;
 int width, height;
} XResizeRequestEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window parent;
 Window window;
 int x, y;
 int width, height;
 int border_width;
 Window above;
 int detail; /* Above, Below, TopIf, BottomIf, Opposite */
 unsigned long value_mask;
} XConfigureRequestEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window event;
 Window window;
 int place; /* PlaceOnTop, PlaceOnBottom */
} XCirculateEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window parent;
 Window window;
 int place; /* PlaceOnTop, PlaceOnBottom */
} XCirculateRequestEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window;
 Atom atom;
 Time time;
 int state; /* NewValue, Deleted */
} XPropertyEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window;
 Atom selection;
 Time time;
} XSelectionClearEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window owner;
 Window requestor;
 Atom selection;
 Atom target;
 Atom property;
 Time time;
} XSelectionRequestEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window requestor;
 Atom selection;
 Atom target;
 Atom property; /* ATOM or None */
 Time time;
} XSelectionEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window;
 Colormap colormap; /* COLORMAP or None */

 int c_new; /* C++ */



 int state; /* ColormapInstalled, ColormapUninstalled */
} XColormapEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window;
 Atom message_type;
 int format;
 union {
  char b[20];
  short s[10];
  long l[5];
  } data;
} XClientMessageEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display; /* Display the event was read from */
 Window window; /* unused */
 int request; /* one of MappingModifier, MappingKeyboard,
				   MappingPointer */
 int first_keycode; /* first keycode */
 int count; /* defines range of change w. first_keycode*/
} XMappingEvent;

typedef struct {
 int type;
 Display *display; /* Display the event was read from */
 XID resourceid; /* resource id */
 unsigned long serial; /* serial number of failed request */
 unsigned char error_code; /* error code of failed request */
 unsigned char request_code; /* Major op-code of failed request */
 unsigned char minor_code; /* Minor op-code of failed request */
} XErrorEvent;

typedef struct {
 int type;
 unsigned long serial; /* # of last request processed by server */
 int send_event; /* true if this came from a SendEvent request */
 Display *display;/* Display the event was read from */
 Window window; /* window on which event was requested in event mask */
} XAnyEvent;

/*
 * this union is defined so Xlib can always use the same sized
 * event structure internally, to avoid memory fragmentation.
 */
typedef union _XEvent {
        int type; /* must not be changed; first element */
 XAnyEvent xany;
 XKeyEvent xkey;
 XButtonEvent xbutton;
 XMotionEvent xmotion;
 XCrossingEvent xcrossing;
 XFocusChangeEvent xfocus;
 XExposeEvent xexpose;
 XGraphicsExposeEvent xgraphicsexpose;
 XNoExposeEvent xnoexpose;
 XVisibilityEvent xvisibility;
 XCreateWindowEvent xcreatewindow;
 XDestroyWindowEvent xdestroywindow;
 XUnmapEvent xunmap;
 XMapEvent xmap;
 XMapRequestEvent xmaprequest;
 XReparentEvent xreparent;
 XConfigureEvent xconfigure;
 XGravityEvent xgravity;
 XResizeRequestEvent xresizerequest;
 XConfigureRequestEvent xconfigurerequest;
 XCirculateEvent xcirculate;
 XCirculateRequestEvent xcirculaterequest;
 XPropertyEvent xproperty;
 XSelectionClearEvent xselectionclear;
 XSelectionRequestEvent xselectionrequest;
 XSelectionEvent xselection;
 XColormapEvent xcolormap;
 XClientMessageEvent xclient;
 XMappingEvent xmapping;
 XErrorEvent xerror;
 XKeymapEvent xkeymap;
 long pad[24];
} XEvent;




/*
 * per character font metric information.
 */
typedef struct {
    short lbearing; /* origin to left edge of raster */
    short rbearing; /* origin to right edge of raster */
    short width; /* advance to next char's origin */
    short ascent; /* baseline to top edge of raster */
    short descent; /* baseline to bottom edge of raster */
    unsigned short attributes; /* per char flags (not predefined) */
} XCharStruct;

/*
 * To allow arbitrary information with fonts, there are additional properties
 * returned.
 */
typedef struct {
    Atom name;
    unsigned long card32;
} XFontProp;

typedef struct {
    XExtData *ext_data; /* hook for extension to hang data */
    Font fid; /* Font id for this font */
    unsigned direction; /* hint about direction the font is painted */
    unsigned min_char_or_byte2;/* first character */
    unsigned max_char_or_byte2;/* last character */
    unsigned min_byte1; /* first row that exists */
    unsigned max_byte1; /* last row that exists */
    int all_chars_exist;/* flag if all characters have non-zero size*/
    unsigned default_char; /* char to print for undefined character */
    int n_properties; /* how many properties there are */
    XFontProp *properties; /* pointer to array of additional properties*/
    XCharStruct min_bounds; /* minimum bounds over all existing char*/
    XCharStruct max_bounds; /* maximum bounds over all existing char*/
    XCharStruct *per_char; /* first_char to last_char information */
    int ascent; /* log. extent above baseline for spacing */
    int descent; /* log. descent below baseline for spacing */
} XFontStruct;

/*
 * PolyText routines take these as arguments.
 */
typedef struct {
    char *chars; /* pointer to string */
    int nchars; /* number of characters */
    int delta; /* delta between strings */
    Font font; /* font to print it in, None don't change */
} XTextItem;

typedef struct { /* normal 16 bit characters are two bytes */
    unsigned char byte1;
    unsigned char byte2;
} XChar2b;

typedef struct {
    XChar2b *chars; /* two byte characters */
    int nchars; /* number of characters */
    int delta; /* delta between strings */
    Font font; /* font to print it in, None don't change */
} XTextItem16;


typedef union { Display *display;
  GC gc;
  Visual *visual;
  Screen *screen;
  ScreenFormat *pixmap_format;
  XFontStruct *font; } XEDataObject;

typedef struct {
    XRectangle max_ink_extent;
    XRectangle max_logical_extent;
} XFontSetExtents;

/* unused:
typedef void (*XOMProc)();
 */

typedef struct _XOM *XOM;
typedef struct _XOC *XOC, *XFontSet;

typedef struct {
    char *chars;
    int nchars;
    int delta;
    XFontSet font_set;
} XmbTextItem;

typedef struct {
    wchar_t *chars;
    int nchars;
    int delta;
    XFontSet font_set;
} XwcTextItem;
# 1124 "/usr/X11/include/X11/Xlib.h"
typedef struct {
    int charset_count;
    char **charset_list;
} XOMCharSetList;

typedef enum {
    XOMOrientation_LTR_TTB,
    XOMOrientation_RTL_TTB,
    XOMOrientation_TTB_LTR,
    XOMOrientation_TTB_RTL,
    XOMOrientation_Context
} XOrientation;

typedef struct {
    int num_orientation;
    XOrientation *orientation; /* Input Text description */
} XOMOrientation;

typedef struct {
    int num_font;
    XFontStruct **font_struct_list;
    char **font_name_list;
} XOMFontInfo;

typedef struct _XIM *XIM;
typedef struct _XIC *XIC;

typedef void (*XIMProc)(
    XIM,
    XPointer,
    XPointer
);

typedef int (*XICProc)(
    XIC,
    XPointer,
    XPointer
);

typedef void (*XIDProc)(
    Display*,
    XPointer,
    XPointer
);

typedef unsigned long XIMStyle;

typedef struct {
    unsigned short count_styles;
    XIMStyle *supported_styles;
} XIMStyles;
# 1236 "/usr/X11/include/X11/Xlib.h"
typedef void *XVaNestedList;

typedef struct {
    XPointer client_data;
    XIMProc callback;
} XIMCallback;

typedef struct {
    XPointer client_data;
    XICProc callback;
} XICCallback;

typedef unsigned long XIMFeedback;
# 1260 "/usr/X11/include/X11/Xlib.h"
typedef struct _XIMText {
    unsigned short length;
    XIMFeedback *feedback;
    int encoding_is_wchar;
    union {
 char *multi_byte;
 wchar_t *wide_char;
    } string;
} XIMText;

typedef unsigned long XIMPreeditState;





typedef struct _XIMPreeditStateNotifyCallbackStruct {
    XIMPreeditState state;
} XIMPreeditStateNotifyCallbackStruct;

typedef unsigned long XIMResetState;




typedef unsigned long XIMStringConversionFeedback;
# 1294 "/usr/X11/include/X11/Xlib.h"
typedef struct _XIMStringConversionText {
    unsigned short length;
    XIMStringConversionFeedback *feedback;
    int encoding_is_wchar;
    union {
 char *mbs;
 wchar_t *wcs;
    } string;
} XIMStringConversionText;

typedef unsigned short XIMStringConversionPosition;

typedef unsigned short XIMStringConversionType;






typedef unsigned short XIMStringConversionOperation;




typedef enum {
    XIMForwardChar, XIMBackwardChar,
    XIMForwardWord, XIMBackwardWord,
    XIMCaretUp, XIMCaretDown,
    XIMNextLine, XIMPreviousLine,
    XIMLineStart, XIMLineEnd,
    XIMAbsolutePosition,
    XIMDontChange
} XIMCaretDirection;

typedef struct _XIMStringConversionCallbackStruct {
    XIMStringConversionPosition position;
    XIMCaretDirection direction;
    XIMStringConversionOperation operation;
    unsigned short factor;
    XIMStringConversionText *text;
} XIMStringConversionCallbackStruct;

typedef struct _XIMPreeditDrawCallbackStruct {
    int caret; /* Cursor offset within pre-edit string */
    int chg_first; /* Starting change position */
    int chg_length; /* Length of the change in character count */
    XIMText *text;
} XIMPreeditDrawCallbackStruct;

typedef enum {
    XIMIsInvisible, /* Disable caret feedback */
    XIMIsPrimary, /* UI defined caret feedback */
    XIMIsSecondary /* UI defined caret feedback */
} XIMCaretStyle;

typedef struct _XIMPreeditCaretCallbackStruct {
    int position; /* Caret offset within pre-edit string */
    XIMCaretDirection direction; /* Caret moves direction */
    XIMCaretStyle style; /* Feedback of the caret */
} XIMPreeditCaretCallbackStruct;

typedef enum {
    XIMTextType,
    XIMBitmapType
} XIMStatusDataType;

typedef struct _XIMStatusDrawCallbackStruct {
    XIMStatusDataType type;
    union {
 XIMText *text;
 Pixmap bitmap;
    } data;
} XIMStatusDrawCallbackStruct;

typedef struct _XIMHotKeyTrigger {
    KeySym keysym;
    int modifier;
    int modifier_mask;
} XIMHotKeyTrigger;

typedef struct _XIMHotKeyTriggers {
    int num_hot_key;
    XIMHotKeyTrigger *key;
} XIMHotKeyTriggers;

typedef unsigned long XIMHotKeyState;




typedef struct {
    unsigned short count_values;
    char **supported_values;
} XIMValuesList;

extern "C" { /* do not leave open across includes */





extern int _Xdebug;

extern XFontStruct *XLoadQueryFont(
    Display* /* display */,
    const char* /* name */
);

extern XFontStruct *XQueryFont(
    Display* /* display */,
    XID /* font_ID */
);


extern XTimeCoord *XGetMotionEvents(
    Display* /* display */,
    Window /* w */,
    Time /* start */,
    Time /* stop */,
    int* /* nevents_return */
);

extern XModifierKeymap *XDeleteModifiermapEntry(
    XModifierKeymap* /* modmap */,

    unsigned int /* keycode_entry */,



    int /* modifier */
);

extern XModifierKeymap *XGetModifierMapping(
    Display* /* display */
);

extern XModifierKeymap *XInsertModifiermapEntry(
    XModifierKeymap* /* modmap */,

    unsigned int /* keycode_entry */,



    int /* modifier */
);

extern XModifierKeymap *XNewModifiermap(
    int /* max_keys_per_mod */
);

extern XImage *XCreateImage(
    Display* /* display */,
    Visual* /* visual */,
    unsigned int /* depth */,
    int /* format */,
    int /* offset */,
    char* /* data */,
    unsigned int /* width */,
    unsigned int /* height */,
    int /* bitmap_pad */,
    int /* bytes_per_line */
);
extern int XInitImage(
    XImage* /* image */
);
extern XImage *XGetImage(
    Display* /* display */,
    Drawable /* d */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */,
    unsigned long /* plane_mask */,
    int /* format */
);
extern XImage *XGetSubImage(
    Display* /* display */,
    Drawable /* d */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */,
    unsigned long /* plane_mask */,
    int /* format */,
    XImage* /* dest_image */,
    int /* dest_x */,
    int /* dest_y */
);

/* 
 * X function declarations.
 */
extern Display *XOpenDisplay(
    const char* /* display_name */
);

extern void XrmInitialize(
    void
);

extern char *XFetchBytes(
    Display* /* display */,
    int* /* nbytes_return */
);
extern char *XFetchBuffer(
    Display* /* display */,
    int* /* nbytes_return */,
    int /* buffer */
);
extern char *XGetAtomName(
    Display* /* display */,
    Atom /* atom */
);
extern int XGetAtomNames(
    Display* /* dpy */,
    Atom* /* atoms */,
    int /* count */,
    char** /* names_return */
);
extern char *XGetDefault(
    Display* /* display */,
    const char* /* program */,
    const char* /* option */
);
extern char *XDisplayName(
    const char* /* string */
);
extern char *XKeysymToString(
    KeySym /* keysym */
);

extern int (*XSynchronize(
    Display* /* display */,
    int /* onoff */
))(
    Display* /* display */
);
extern int (*XSetAfterFunction(
    Display* /* display */,
    int (*) (
      Display* /* display */
            ) /* procedure */
))(
    Display* /* display */
);
extern Atom XInternAtom(
    Display* /* display */,
    const char* /* atom_name */,
    int /* only_if_exists */
);
extern int XInternAtoms(
    Display* /* dpy */,
    char** /* names */,
    int /* count */,
    int /* onlyIfExists */,
    Atom* /* atoms_return */
);
extern Colormap XCopyColormapAndFree(
    Display* /* display */,
    Colormap /* colormap */
);
extern Colormap XCreateColormap(
    Display* /* display */,
    Window /* w */,
    Visual* /* visual */,
    int /* alloc */
);
extern Cursor XCreatePixmapCursor(
    Display* /* display */,
    Pixmap /* source */,
    Pixmap /* mask */,
    XColor* /* foreground_color */,
    XColor* /* background_color */,
    unsigned int /* x */,
    unsigned int /* y */
);
extern Cursor XCreateGlyphCursor(
    Display* /* display */,
    Font /* source_font */,
    Font /* mask_font */,
    unsigned int /* source_char */,
    unsigned int /* mask_char */,
    XColor const * /* foreground_color */,
    XColor const * /* background_color */
);
extern Cursor XCreateFontCursor(
    Display* /* display */,
    unsigned int /* shape */
);
extern Font XLoadFont(
    Display* /* display */,
    const char* /* name */
);
extern GC XCreateGC(
    Display* /* display */,
    Drawable /* d */,
    unsigned long /* valuemask */,
    XGCValues* /* values */
);
extern GContext XGContextFromGC(
    GC /* gc */
);
extern void XFlushGC(
    Display* /* display */,
    GC /* gc */
);
extern Pixmap XCreatePixmap(
    Display* /* display */,
    Drawable /* d */,
    unsigned int /* width */,
    unsigned int /* height */,
    unsigned int /* depth */
);
extern Pixmap XCreateBitmapFromData(
    Display* /* display */,
    Drawable /* d */,
    const char* /* data */,
    unsigned int /* width */,
    unsigned int /* height */
);
extern Pixmap XCreatePixmapFromBitmapData(
    Display* /* display */,
    Drawable /* d */,
    char* /* data */,
    unsigned int /* width */,
    unsigned int /* height */,
    unsigned long /* fg */,
    unsigned long /* bg */,
    unsigned int /* depth */
);
extern Window XCreateSimpleWindow(
    Display* /* display */,
    Window /* parent */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */,
    unsigned int /* border_width */,
    unsigned long /* border */,
    unsigned long /* background */
);
extern Window XGetSelectionOwner(
    Display* /* display */,
    Atom /* selection */
);
extern Window XCreateWindow(
    Display* /* display */,
    Window /* parent */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */,
    unsigned int /* border_width */,
    int /* depth */,
    unsigned int /* class */,
    Visual* /* visual */,
    unsigned long /* valuemask */,
    XSetWindowAttributes* /* attributes */
);
extern Colormap *XListInstalledColormaps(
    Display* /* display */,
    Window /* w */,
    int* /* num_return */
);
extern char **XListFonts(
    Display* /* display */,
    const char* /* pattern */,
    int /* maxnames */,
    int* /* actual_count_return */
);
extern char **XListFontsWithInfo(
    Display* /* display */,
    const char* /* pattern */,
    int /* maxnames */,
    int* /* count_return */,
    XFontStruct** /* info_return */
);
extern char **XGetFontPath(
    Display* /* display */,
    int* /* npaths_return */
);
extern char **XListExtensions(
    Display* /* display */,
    int* /* nextensions_return */
);
extern Atom *XListProperties(
    Display* /* display */,
    Window /* w */,
    int* /* num_prop_return */
);
extern XHostAddress *XListHosts(
    Display* /* display */,
    int* /* nhosts_return */,
    int* /* state_return */
);
extern KeySym XKeycodeToKeysym(
    Display* /* display */,

    unsigned int /* keycode */,



    int /* index */
);
extern KeySym XLookupKeysym(
    XKeyEvent* /* key_event */,
    int /* index */
);
extern KeySym *XGetKeyboardMapping(
    Display* /* display */,

    unsigned int /* first_keycode */,



    int /* keycode_count */,
    int* /* keysyms_per_keycode_return */
);
extern KeySym XStringToKeysym(
    const char* /* string */
);
extern long XMaxRequestSize(
    Display* /* display */
);
extern long XExtendedMaxRequestSize(
    Display* /* display */
);
extern char *XResourceManagerString(
    Display* /* display */
);
extern char *XScreenResourceString(
 Screen* /* screen */
);
extern unsigned long XDisplayMotionBufferSize(
    Display* /* display */
);
extern VisualID XVisualIDFromVisual(
    Visual* /* visual */
);

/* multithread routines */

extern int XInitThreads(
    void
);

extern void XLockDisplay(
    Display* /* display */
);

extern void XUnlockDisplay(
    Display* /* display */
);

/* routines for dealing with extensions */

extern XExtCodes *XInitExtension(
    Display* /* display */,
    const char* /* name */
);

extern XExtCodes *XAddExtension(
    Display* /* display */
);
extern XExtData *XFindOnExtensionList(
    XExtData** /* structure */,
    int /* number */
);
extern XExtData **XEHeadOfExtensionList(
    XEDataObject /* object */
);

/* these are routines for which there are also macros */
extern Window XRootWindow(
    Display* /* display */,
    int /* screen_number */
);
extern Window XDefaultRootWindow(
    Display* /* display */
);
extern Window XRootWindowOfScreen(
    Screen* /* screen */
);
extern Visual *XDefaultVisual(
    Display* /* display */,
    int /* screen_number */
);
extern Visual *XDefaultVisualOfScreen(
    Screen* /* screen */
);
extern GC XDefaultGC(
    Display* /* display */,
    int /* screen_number */
);
extern GC XDefaultGCOfScreen(
    Screen* /* screen */
);
extern unsigned long XBlackPixel(
    Display* /* display */,
    int /* screen_number */
);
extern unsigned long XWhitePixel(
    Display* /* display */,
    int /* screen_number */
);
extern unsigned long XAllPlanes(
    void
);
extern unsigned long XBlackPixelOfScreen(
    Screen* /* screen */
);
extern unsigned long XWhitePixelOfScreen(
    Screen* /* screen */
);
extern unsigned long XNextRequest(
    Display* /* display */
);
extern unsigned long XLastKnownRequestProcessed(
    Display* /* display */
);
extern char *XServerVendor(
    Display* /* display */
);
extern char *XDisplayString(
    Display* /* display */
);
extern Colormap XDefaultColormap(
    Display* /* display */,
    int /* screen_number */
);
extern Colormap XDefaultColormapOfScreen(
    Screen* /* screen */
);
extern Display *XDisplayOfScreen(
    Screen* /* screen */
);
extern Screen *XScreenOfDisplay(
    Display* /* display */,
    int /* screen_number */
);
extern Screen *XDefaultScreenOfDisplay(
    Display* /* display */
);
extern long XEventMaskOfScreen(
    Screen* /* screen */
);

extern int XScreenNumberOfScreen(
    Screen* /* screen */
);

typedef int (*XErrorHandler) ( /* WARNING, this type not in Xlib spec */
    Display* /* display */,
    XErrorEvent* /* error_event */
);

extern XErrorHandler XSetErrorHandler (
    XErrorHandler /* handler */
);


typedef int (*XIOErrorHandler) ( /* WARNING, this type not in Xlib spec */
    Display* /* display */
);

extern XIOErrorHandler XSetIOErrorHandler (
    XIOErrorHandler /* handler */
);


extern XPixmapFormatValues *XListPixmapFormats(
    Display* /* display */,
    int* /* count_return */
);
extern int *XListDepths(
    Display* /* display */,
    int /* screen_number */,
    int* /* count_return */
);

/* ICCCM routines for things that don't require special include files; */
/* other declarations are given in Xutil.h                             */
extern int XReconfigureWMWindow(
    Display* /* display */,
    Window /* w */,
    int /* screen_number */,
    unsigned int /* mask */,
    XWindowChanges* /* changes */
);

extern int XGetWMProtocols(
    Display* /* display */,
    Window /* w */,
    Atom** /* protocols_return */,
    int* /* count_return */
);
extern int XSetWMProtocols(
    Display* /* display */,
    Window /* w */,
    Atom* /* protocols */,
    int /* count */
);
extern int XIconifyWindow(
    Display* /* display */,
    Window /* w */,
    int /* screen_number */
);
extern int XWithdrawWindow(
    Display* /* display */,
    Window /* w */,
    int /* screen_number */
);
extern int XGetCommand(
    Display* /* display */,
    Window /* w */,
    char*** /* argv_return */,
    int* /* argc_return */
);
extern int XGetWMColormapWindows(
    Display* /* display */,
    Window /* w */,
    Window** /* windows_return */,
    int* /* count_return */
);
extern int XSetWMColormapWindows(
    Display* /* display */,
    Window /* w */,
    Window* /* colormap_windows */,
    int /* count */
);
extern void XFreeStringList(
    char** /* list */
);
extern int XSetTransientForHint(
    Display* /* display */,
    Window /* w */,
    Window /* prop_window */
);

/* The following are given in alphabetical order */

extern int XActivateScreenSaver(
    Display* /* display */
);

extern int XAddHost(
    Display* /* display */,
    XHostAddress* /* host */
);

extern int XAddHosts(
    Display* /* display */,
    XHostAddress* /* hosts */,
    int /* num_hosts */
);

extern int XAddToExtensionList(
    struct _XExtData** /* structure */,
    XExtData* /* ext_data */
);

extern int XAddToSaveSet(
    Display* /* display */,
    Window /* w */
);

extern int XAllocColor(
    Display* /* display */,
    Colormap /* colormap */,
    XColor* /* screen_in_out */
);

extern int XAllocColorCells(
    Display* /* display */,
    Colormap /* colormap */,
    int /* contig */,
    unsigned long* /* plane_masks_return */,
    unsigned int /* nplanes */,
    unsigned long* /* pixels_return */,
    unsigned int /* npixels */
);

extern int XAllocColorPlanes(
    Display* /* display */,
    Colormap /* colormap */,
    int /* contig */,
    unsigned long* /* pixels_return */,
    int /* ncolors */,
    int /* nreds */,
    int /* ngreens */,
    int /* nblues */,
    unsigned long* /* rmask_return */,
    unsigned long* /* gmask_return */,
    unsigned long* /* bmask_return */
);

extern int XAllocNamedColor(
    Display* /* display */,
    Colormap /* colormap */,
    const char* /* color_name */,
    XColor* /* screen_def_return */,
    XColor* /* exact_def_return */
);

extern int XAllowEvents(
    Display* /* display */,
    int /* event_mode */,
    Time /* time */
);

extern int XAutoRepeatOff(
    Display* /* display */
);

extern int XAutoRepeatOn(
    Display* /* display */
);

extern int XBell(
    Display* /* display */,
    int /* percent */
);

extern int XBitmapBitOrder(
    Display* /* display */
);

extern int XBitmapPad(
    Display* /* display */
);

extern int XBitmapUnit(
    Display* /* display */
);

extern int XCellsOfScreen(
    Screen* /* screen */
);

extern int XChangeActivePointerGrab(
    Display* /* display */,
    unsigned int /* event_mask */,
    Cursor /* cursor */,
    Time /* time */
);

extern int XChangeGC(
    Display* /* display */,
    GC /* gc */,
    unsigned long /* valuemask */,
    XGCValues* /* values */
);

extern int XChangeKeyboardControl(
    Display* /* display */,
    unsigned long /* value_mask */,
    XKeyboardControl* /* values */
);

extern int XChangeKeyboardMapping(
    Display* /* display */,
    int /* first_keycode */,
    int /* keysyms_per_keycode */,
    KeySym* /* keysyms */,
    int /* num_codes */
);

extern int XChangePointerControl(
    Display* /* display */,
    int /* do_accel */,
    int /* do_threshold */,
    int /* accel_numerator */,
    int /* accel_denominator */,
    int /* threshold */
);

extern int XChangeProperty(
    Display* /* display */,
    Window /* w */,
    Atom /* property */,
    Atom /* type */,
    int /* format */,
    int /* mode */,
    const unsigned char* /* data */,
    int /* nelements */
);

extern int XChangeSaveSet(
    Display* /* display */,
    Window /* w */,
    int /* change_mode */
);

extern int XChangeWindowAttributes(
    Display* /* display */,
    Window /* w */,
    unsigned long /* valuemask */,
    XSetWindowAttributes* /* attributes */
);

extern int XCheckIfEvent(
    Display* /* display */,
    XEvent* /* event_return */,
    int (*) (
        Display* /* display */,
               XEvent* /* event */,
               XPointer /* arg */
             ) /* predicate */,
    XPointer /* arg */
);

extern int XCheckMaskEvent(
    Display* /* display */,
    long /* event_mask */,
    XEvent* /* event_return */
);

extern int XCheckTypedEvent(
    Display* /* display */,
    int /* event_type */,
    XEvent* /* event_return */
);

extern int XCheckTypedWindowEvent(
    Display* /* display */,
    Window /* w */,
    int /* event_type */,
    XEvent* /* event_return */
);

extern int XCheckWindowEvent(
    Display* /* display */,
    Window /* w */,
    long /* event_mask */,
    XEvent* /* event_return */
);

extern int XCirculateSubwindows(
    Display* /* display */,
    Window /* w */,
    int /* direction */
);

extern int XCirculateSubwindowsDown(
    Display* /* display */,
    Window /* w */
);

extern int XCirculateSubwindowsUp(
    Display* /* display */,
    Window /* w */
);

extern int XClearArea(
    Display* /* display */,
    Window /* w */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */,
    int /* exposures */
);

extern int XClearWindow(
    Display* /* display */,
    Window /* w */
);

extern int XCloseDisplay(
    Display* /* display */
);

extern int XConfigureWindow(
    Display* /* display */,
    Window /* w */,
    unsigned int /* value_mask */,
    XWindowChanges* /* values */
);

extern int XConnectionNumber(
    Display* /* display */
);

extern int XConvertSelection(
    Display* /* display */,
    Atom /* selection */,
    Atom /* target */,
    Atom /* property */,
    Window /* requestor */,
    Time /* time */
);

extern int XCopyArea(
    Display* /* display */,
    Drawable /* src */,
    Drawable /* dest */,
    GC /* gc */,
    int /* src_x */,
    int /* src_y */,
    unsigned int /* width */,
    unsigned int /* height */,
    int /* dest_x */,
    int /* dest_y */
);

extern int XCopyGC(
    Display* /* display */,
    GC /* src */,
    unsigned long /* valuemask */,
    GC /* dest */
);

extern int XCopyPlane(
    Display* /* display */,
    Drawable /* src */,
    Drawable /* dest */,
    GC /* gc */,
    int /* src_x */,
    int /* src_y */,
    unsigned int /* width */,
    unsigned int /* height */,
    int /* dest_x */,
    int /* dest_y */,
    unsigned long /* plane */
);

extern int XDefaultDepth(
    Display* /* display */,
    int /* screen_number */
);

extern int XDefaultDepthOfScreen(
    Screen* /* screen */
);

extern int XDefaultScreen(
    Display* /* display */
);

extern int XDefineCursor(
    Display* /* display */,
    Window /* w */,
    Cursor /* cursor */
);

extern int XDeleteProperty(
    Display* /* display */,
    Window /* w */,
    Atom /* property */
);

extern int XDestroyWindow(
    Display* /* display */,
    Window /* w */
);

extern int XDestroySubwindows(
    Display* /* display */,
    Window /* w */
);

extern int XDoesBackingStore(
    Screen* /* screen */
);

extern int XDoesSaveUnders(
    Screen* /* screen */
);

extern int XDisableAccessControl(
    Display* /* display */
);


extern int XDisplayCells(
    Display* /* display */,
    int /* screen_number */
);

extern int XDisplayHeight(
    Display* /* display */,
    int /* screen_number */
);

extern int XDisplayHeightMM(
    Display* /* display */,
    int /* screen_number */
);

extern int XDisplayKeycodes(
    Display* /* display */,
    int* /* min_keycodes_return */,
    int* /* max_keycodes_return */
);

extern int XDisplayPlanes(
    Display* /* display */,
    int /* screen_number */
);

extern int XDisplayWidth(
    Display* /* display */,
    int /* screen_number */
);

extern int XDisplayWidthMM(
    Display* /* display */,
    int /* screen_number */
);

extern int XDrawArc(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */,
    int /* angle1 */,
    int /* angle2 */
);

extern int XDrawArcs(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    XArc* /* arcs */,
    int /* narcs */
);

extern int XDrawImageString(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    const char* /* string */,
    int /* length */
);

extern int XDrawImageString16(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    const XChar2b* /* string */,
    int /* length */
);

extern int XDrawLine(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x1 */,
    int /* y1 */,
    int /* x2 */,
    int /* y2 */
);

extern int XDrawLines(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    XPoint* /* points */,
    int /* npoints */,
    int /* mode */
);

extern int XDrawPoint(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */
);

extern int XDrawPoints(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    XPoint* /* points */,
    int /* npoints */,
    int /* mode */
);

extern int XDrawRectangle(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */
);

extern int XDrawRectangles(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    XRectangle* /* rectangles */,
    int /* nrectangles */
);

extern int XDrawSegments(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    XSegment* /* segments */,
    int /* nsegments */
);

extern int XDrawString(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    const char* /* string */,
    int /* length */
);

extern int XDrawString16(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    const XChar2b* /* string */,
    int /* length */
);

extern int XDrawText(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    XTextItem* /* items */,
    int /* nitems */
);

extern int XDrawText16(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    XTextItem16* /* items */,
    int /* nitems */
);

extern int XEnableAccessControl(
    Display* /* display */
);

extern int XEventsQueued(
    Display* /* display */,
    int /* mode */
);

extern int XFetchName(
    Display* /* display */,
    Window /* w */,
    char** /* window_name_return */
);

extern int XFillArc(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */,
    int /* angle1 */,
    int /* angle2 */
);

extern int XFillArcs(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    XArc* /* arcs */,
    int /* narcs */
);

extern int XFillPolygon(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    XPoint* /* points */,
    int /* npoints */,
    int /* shape */,
    int /* mode */
);

extern int XFillRectangle(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */
);

extern int XFillRectangles(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    XRectangle* /* rectangles */,
    int /* nrectangles */
);

extern int XFlush(
    Display* /* display */
);

extern int XForceScreenSaver(
    Display* /* display */,
    int /* mode */
);

extern int XFree(
    void* /* data */
);

extern int XFreeColormap(
    Display* /* display */,
    Colormap /* colormap */
);

extern int XFreeColors(
    Display* /* display */,
    Colormap /* colormap */,
    unsigned long* /* pixels */,
    int /* npixels */,
    unsigned long /* planes */
);

extern int XFreeCursor(
    Display* /* display */,
    Cursor /* cursor */
);

extern int XFreeExtensionList(
    char** /* list */
);

extern int XFreeFont(
    Display* /* display */,
    XFontStruct* /* font_struct */
);

extern int XFreeFontInfo(
    char** /* names */,
    XFontStruct* /* free_info */,
    int /* actual_count */
);

extern int XFreeFontNames(
    char** /* list */
);

extern int XFreeFontPath(
    char** /* list */
);

extern int XFreeGC(
    Display* /* display */,
    GC /* gc */
);

extern int XFreeModifiermap(
    XModifierKeymap* /* modmap */
);

extern int XFreePixmap(
    Display* /* display */,
    Pixmap /* pixmap */
);

extern int XGeometry(
    Display* /* display */,
    int /* screen */,
    const char* /* position */,
    const char* /* default_position */,
    unsigned int /* bwidth */,
    unsigned int /* fwidth */,
    unsigned int /* fheight */,
    int /* xadder */,
    int /* yadder */,
    int* /* x_return */,
    int* /* y_return */,
    int* /* width_return */,
    int* /* height_return */
);

extern int XGetErrorDatabaseText(
    Display* /* display */,
    const char* /* name */,
    const char* /* message */,
    const char* /* default_string */,
    char* /* buffer_return */,
    int /* length */
);

extern int XGetErrorText(
    Display* /* display */,
    int /* code */,
    char* /* buffer_return */,
    int /* length */
);

extern int XGetFontProperty(
    XFontStruct* /* font_struct */,
    Atom /* atom */,
    unsigned long* /* value_return */
);

extern int XGetGCValues(
    Display* /* display */,
    GC /* gc */,
    unsigned long /* valuemask */,
    XGCValues* /* values_return */
);

extern int XGetGeometry(
    Display* /* display */,
    Drawable /* d */,
    Window* /* root_return */,
    int* /* x_return */,
    int* /* y_return */,
    unsigned int* /* width_return */,
    unsigned int* /* height_return */,
    unsigned int* /* border_width_return */,
    unsigned int* /* depth_return */
);

extern int XGetIconName(
    Display* /* display */,
    Window /* w */,
    char** /* icon_name_return */
);

extern int XGetInputFocus(
    Display* /* display */,
    Window* /* focus_return */,
    int* /* revert_to_return */
);

extern int XGetKeyboardControl(
    Display* /* display */,
    XKeyboardState* /* values_return */
);

extern int XGetPointerControl(
    Display* /* display */,
    int* /* accel_numerator_return */,
    int* /* accel_denominator_return */,
    int* /* threshold_return */
);

extern int XGetPointerMapping(
    Display* /* display */,
    unsigned char* /* map_return */,
    int /* nmap */
);

extern int XGetScreenSaver(
    Display* /* display */,
    int* /* timeout_return */,
    int* /* interval_return */,
    int* /* prefer_blanking_return */,
    int* /* allow_exposures_return */
);

extern int XGetTransientForHint(
    Display* /* display */,
    Window /* w */,
    Window* /* prop_window_return */
);

extern int XGetWindowProperty(
    Display* /* display */,
    Window /* w */,
    Atom /* property */,
    long /* long_offset */,
    long /* long_length */,
    int /* delete */,
    Atom /* req_type */,
    Atom* /* actual_type_return */,
    int* /* actual_format_return */,
    unsigned long* /* nitems_return */,
    unsigned long* /* bytes_after_return */,
    unsigned char** /* prop_return */
);

extern int XGetWindowAttributes(
    Display* /* display */,
    Window /* w */,
    XWindowAttributes* /* window_attributes_return */
);

extern int XGrabButton(
    Display* /* display */,
    unsigned int /* button */,
    unsigned int /* modifiers */,
    Window /* grab_window */,
    int /* owner_events */,
    unsigned int /* event_mask */,
    int /* pointer_mode */,
    int /* keyboard_mode */,
    Window /* confine_to */,
    Cursor /* cursor */
);

extern int XGrabKey(
    Display* /* display */,
    int /* keycode */,
    unsigned int /* modifiers */,
    Window /* grab_window */,
    int /* owner_events */,
    int /* pointer_mode */,
    int /* keyboard_mode */
);

extern int XGrabKeyboard(
    Display* /* display */,
    Window /* grab_window */,
    int /* owner_events */,
    int /* pointer_mode */,
    int /* keyboard_mode */,
    Time /* time */
);

extern int XGrabPointer(
    Display* /* display */,
    Window /* grab_window */,
    int /* owner_events */,
    unsigned int /* event_mask */,
    int /* pointer_mode */,
    int /* keyboard_mode */,
    Window /* confine_to */,
    Cursor /* cursor */,
    Time /* time */
);

extern int XGrabServer(
    Display* /* display */
);

extern int XHeightMMOfScreen(
    Screen* /* screen */
);

extern int XHeightOfScreen(
    Screen* /* screen */
);

extern int XIfEvent(
    Display* /* display */,
    XEvent* /* event_return */,
    int (*) (
        Display* /* display */,
               XEvent* /* event */,
               XPointer /* arg */
             ) /* predicate */,
    XPointer /* arg */
);

extern int XImageByteOrder(
    Display* /* display */
);

extern int XInstallColormap(
    Display* /* display */,
    Colormap /* colormap */
);

extern KeyCode XKeysymToKeycode(
    Display* /* display */,
    KeySym /* keysym */
);

extern int XKillClient(
    Display* /* display */,
    XID /* resource */
);

extern int XLookupColor(
    Display* /* display */,
    Colormap /* colormap */,
    const char* /* color_name */,
    XColor* /* exact_def_return */,
    XColor* /* screen_def_return */
);

extern int XLowerWindow(
    Display* /* display */,
    Window /* w */
);

extern int XMapRaised(
    Display* /* display */,
    Window /* w */
);

extern int XMapSubwindows(
    Display* /* display */,
    Window /* w */
);

extern int XMapWindow(
    Display* /* display */,
    Window /* w */
);

extern int XMaskEvent(
    Display* /* display */,
    long /* event_mask */,
    XEvent* /* event_return */
);

extern int XMaxCmapsOfScreen(
    Screen* /* screen */
);

extern int XMinCmapsOfScreen(
    Screen* /* screen */
);

extern int XMoveResizeWindow(
    Display* /* display */,
    Window /* w */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */
);

extern int XMoveWindow(
    Display* /* display */,
    Window /* w */,
    int /* x */,
    int /* y */
);

extern int XNextEvent(
    Display* /* display */,
    XEvent* /* event_return */
);

extern int XNoOp(
    Display* /* display */
);

extern int XParseColor(
    Display* /* display */,
    Colormap /* colormap */,
    const char* /* spec */,
    XColor* /* exact_def_return */
);

extern int XParseGeometry(
    const char* /* parsestring */,
    int* /* x_return */,
    int* /* y_return */,
    unsigned int* /* width_return */,
    unsigned int* /* height_return */
);

extern int XPeekEvent(
    Display* /* display */,
    XEvent* /* event_return */
);

extern int XPeekIfEvent(
    Display* /* display */,
    XEvent* /* event_return */,
    int (*) (
        Display* /* display */,
               XEvent* /* event */,
               XPointer /* arg */
             ) /* predicate */,
    XPointer /* arg */
);

extern int XPending(
    Display* /* display */
);

extern int XPlanesOfScreen(
    Screen* /* screen */
);

extern int XProtocolRevision(
    Display* /* display */
);

extern int XProtocolVersion(
    Display* /* display */
);


extern int XPutBackEvent(
    Display* /* display */,
    XEvent* /* event */
);

extern int XPutImage(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    XImage* /* image */,
    int /* src_x */,
    int /* src_y */,
    int /* dest_x */,
    int /* dest_y */,
    unsigned int /* width */,
    unsigned int /* height */
);

extern int XQLength(
    Display* /* display */
);

extern int XQueryBestCursor(
    Display* /* display */,
    Drawable /* d */,
    unsigned int /* width */,
    unsigned int /* height */,
    unsigned int* /* width_return */,
    unsigned int* /* height_return */
);

extern int XQueryBestSize(
    Display* /* display */,
    int /* class */,
    Drawable /* which_screen */,
    unsigned int /* width */,
    unsigned int /* height */,
    unsigned int* /* width_return */,
    unsigned int* /* height_return */
);

extern int XQueryBestStipple(
    Display* /* display */,
    Drawable /* which_screen */,
    unsigned int /* width */,
    unsigned int /* height */,
    unsigned int* /* width_return */,
    unsigned int* /* height_return */
);

extern int XQueryBestTile(
    Display* /* display */,
    Drawable /* which_screen */,
    unsigned int /* width */,
    unsigned int /* height */,
    unsigned int* /* width_return */,
    unsigned int* /* height_return */
);

extern int XQueryColor(
    Display* /* display */,
    Colormap /* colormap */,
    XColor* /* def_in_out */
);

extern int XQueryColors(
    Display* /* display */,
    Colormap /* colormap */,
    XColor* /* defs_in_out */,
    int /* ncolors */
);

extern int XQueryExtension(
    Display* /* display */,
    const char* /* name */,
    int* /* major_opcode_return */,
    int* /* first_event_return */,
    int* /* first_error_return */
);

extern int XQueryKeymap(
    Display* /* display */,
    char [32] /* keys_return */
);

extern int XQueryPointer(
    Display* /* display */,
    Window /* w */,
    Window* /* root_return */,
    Window* /* child_return */,
    int* /* root_x_return */,
    int* /* root_y_return */,
    int* /* win_x_return */,
    int* /* win_y_return */,
    unsigned int* /* mask_return */
);

extern int XQueryTextExtents(
    Display* /* display */,
    XID /* font_ID */,
    const char* /* string */,
    int /* nchars */,
    int* /* direction_return */,
    int* /* font_ascent_return */,
    int* /* font_descent_return */,
    XCharStruct* /* overall_return */
);

extern int XQueryTextExtents16(
    Display* /* display */,
    XID /* font_ID */,
    const XChar2b* /* string */,
    int /* nchars */,
    int* /* direction_return */,
    int* /* font_ascent_return */,
    int* /* font_descent_return */,
    XCharStruct* /* overall_return */
);

extern int XQueryTree(
    Display* /* display */,
    Window /* w */,
    Window* /* root_return */,
    Window* /* parent_return */,
    Window** /* children_return */,
    unsigned int* /* nchildren_return */
);

extern int XRaiseWindow(
    Display* /* display */,
    Window /* w */
);

extern int XReadBitmapFile(
    Display* /* display */,
    Drawable /* d */,
    const char* /* filename */,
    unsigned int* /* width_return */,
    unsigned int* /* height_return */,
    Pixmap* /* bitmap_return */,
    int* /* x_hot_return */,
    int* /* y_hot_return */
);

extern int XReadBitmapFileData(
    const char* /* filename */,
    unsigned int* /* width_return */,
    unsigned int* /* height_return */,
    unsigned char** /* data_return */,
    int* /* x_hot_return */,
    int* /* y_hot_return */
);

extern int XRebindKeysym(
    Display* /* display */,
    KeySym /* keysym */,
    KeySym* /* list */,
    int /* mod_count */,
    const unsigned char* /* string */,
    int /* bytes_string */
);

extern int XRecolorCursor(
    Display* /* display */,
    Cursor /* cursor */,
    XColor* /* foreground_color */,
    XColor* /* background_color */
);

extern int XRefreshKeyboardMapping(
    XMappingEvent* /* event_map */
);

extern int XRemoveFromSaveSet(
    Display* /* display */,
    Window /* w */
);

extern int XRemoveHost(
    Display* /* display */,
    XHostAddress* /* host */
);

extern int XRemoveHosts(
    Display* /* display */,
    XHostAddress* /* hosts */,
    int /* num_hosts */
);

extern int XReparentWindow(
    Display* /* display */,
    Window /* w */,
    Window /* parent */,
    int /* x */,
    int /* y */
);

extern int XResetScreenSaver(
    Display* /* display */
);

extern int XResizeWindow(
    Display* /* display */,
    Window /* w */,
    unsigned int /* width */,
    unsigned int /* height */
);

extern int XRestackWindows(
    Display* /* display */,
    Window* /* windows */,
    int /* nwindows */
);

extern int XRotateBuffers(
    Display* /* display */,
    int /* rotate */
);

extern int XRotateWindowProperties(
    Display* /* display */,
    Window /* w */,
    Atom* /* properties */,
    int /* num_prop */,
    int /* npositions */
);

extern int XScreenCount(
    Display* /* display */
);

extern int XSelectInput(
    Display* /* display */,
    Window /* w */,
    long /* event_mask */
);

extern int XSendEvent(
    Display* /* display */,
    Window /* w */,
    int /* propagate */,
    long /* event_mask */,
    XEvent* /* event_send */
);

extern int XSetAccessControl(
    Display* /* display */,
    int /* mode */
);

extern int XSetArcMode(
    Display* /* display */,
    GC /* gc */,
    int /* arc_mode */
);

extern int XSetBackground(
    Display* /* display */,
    GC /* gc */,
    unsigned long /* background */
);

extern int XSetClipMask(
    Display* /* display */,
    GC /* gc */,
    Pixmap /* pixmap */
);

extern int XSetClipOrigin(
    Display* /* display */,
    GC /* gc */,
    int /* clip_x_origin */,
    int /* clip_y_origin */
);

extern int XSetClipRectangles(
    Display* /* display */,
    GC /* gc */,
    int /* clip_x_origin */,
    int /* clip_y_origin */,
    XRectangle* /* rectangles */,
    int /* n */,
    int /* ordering */
);

extern int XSetCloseDownMode(
    Display* /* display */,
    int /* close_mode */
);

extern int XSetCommand(
    Display* /* display */,
    Window /* w */,
    char** /* argv */,
    int /* argc */
);

extern int XSetDashes(
    Display* /* display */,
    GC /* gc */,
    int /* dash_offset */,
    const char* /* dash_list */,
    int /* n */
);

extern int XSetFillRule(
    Display* /* display */,
    GC /* gc */,
    int /* fill_rule */
);

extern int XSetFillStyle(
    Display* /* display */,
    GC /* gc */,
    int /* fill_style */
);

extern int XSetFont(
    Display* /* display */,
    GC /* gc */,
    Font /* font */
);

extern int XSetFontPath(
    Display* /* display */,
    char** /* directories */,
    int /* ndirs */
);

extern int XSetForeground(
    Display* /* display */,
    GC /* gc */,
    unsigned long /* foreground */
);

extern int XSetFunction(
    Display* /* display */,
    GC /* gc */,
    int /* function */
);

extern int XSetGraphicsExposures(
    Display* /* display */,
    GC /* gc */,
    int /* graphics_exposures */
);

extern int XSetIconName(
    Display* /* display */,
    Window /* w */,
    const char* /* icon_name */
);

extern int XSetInputFocus(
    Display* /* display */,
    Window /* focus */,
    int /* revert_to */,
    Time /* time */
);

extern int XSetLineAttributes(
    Display* /* display */,
    GC /* gc */,
    unsigned int /* line_width */,
    int /* line_style */,
    int /* cap_style */,
    int /* join_style */
);

extern int XSetModifierMapping(
    Display* /* display */,
    XModifierKeymap* /* modmap */
);

extern int XSetPlaneMask(
    Display* /* display */,
    GC /* gc */,
    unsigned long /* plane_mask */
);

extern int XSetPointerMapping(
    Display* /* display */,
    const unsigned char* /* map */,
    int /* nmap */
);

extern int XSetScreenSaver(
    Display* /* display */,
    int /* timeout */,
    int /* interval */,
    int /* prefer_blanking */,
    int /* allow_exposures */
);

extern int XSetSelectionOwner(
    Display* /* display */,
    Atom /* selection */,
    Window /* owner */,
    Time /* time */
);

extern int XSetState(
    Display* /* display */,
    GC /* gc */,
    unsigned long /* foreground */,
    unsigned long /* background */,
    int /* function */,
    unsigned long /* plane_mask */
);

extern int XSetStipple(
    Display* /* display */,
    GC /* gc */,
    Pixmap /* stipple */
);

extern int XSetSubwindowMode(
    Display* /* display */,
    GC /* gc */,
    int /* subwindow_mode */
);

extern int XSetTSOrigin(
    Display* /* display */,
    GC /* gc */,
    int /* ts_x_origin */,
    int /* ts_y_origin */
);

extern int XSetTile(
    Display* /* display */,
    GC /* gc */,
    Pixmap /* tile */
);

extern int XSetWindowBackground(
    Display* /* display */,
    Window /* w */,
    unsigned long /* background_pixel */
);

extern int XSetWindowBackgroundPixmap(
    Display* /* display */,
    Window /* w */,
    Pixmap /* background_pixmap */
);

extern int XSetWindowBorder(
    Display* /* display */,
    Window /* w */,
    unsigned long /* border_pixel */
);

extern int XSetWindowBorderPixmap(
    Display* /* display */,
    Window /* w */,
    Pixmap /* border_pixmap */
);

extern int XSetWindowBorderWidth(
    Display* /* display */,
    Window /* w */,
    unsigned int /* width */
);

extern int XSetWindowColormap(
    Display* /* display */,
    Window /* w */,
    Colormap /* colormap */
);

extern int XStoreBuffer(
    Display* /* display */,
    const char* /* bytes */,
    int /* nbytes */,
    int /* buffer */
);

extern int XStoreBytes(
    Display* /* display */,
    const char* /* bytes */,
    int /* nbytes */
);

extern int XStoreColor(
    Display* /* display */,
    Colormap /* colormap */,
    XColor* /* color */
);

extern int XStoreColors(
    Display* /* display */,
    Colormap /* colormap */,
    XColor* /* color */,
    int /* ncolors */
);

extern int XStoreName(
    Display* /* display */,
    Window /* w */,
    const char* /* window_name */
);

extern int XStoreNamedColor(
    Display* /* display */,
    Colormap /* colormap */,
    const char* /* color */,
    unsigned long /* pixel */,
    int /* flags */
);

extern int XSync(
    Display* /* display */,
    int /* discard */
);

extern int XTextExtents(
    XFontStruct* /* font_struct */,
    const char* /* string */,
    int /* nchars */,
    int* /* direction_return */,
    int* /* font_ascent_return */,
    int* /* font_descent_return */,
    XCharStruct* /* overall_return */
);

extern int XTextExtents16(
    XFontStruct* /* font_struct */,
    const XChar2b* /* string */,
    int /* nchars */,
    int* /* direction_return */,
    int* /* font_ascent_return */,
    int* /* font_descent_return */,
    XCharStruct* /* overall_return */
);

extern int XTextWidth(
    XFontStruct* /* font_struct */,
    const char* /* string */,
    int /* count */
);

extern int XTextWidth16(
    XFontStruct* /* font_struct */,
    const XChar2b* /* string */,
    int /* count */
);

extern int XTranslateCoordinates(
    Display* /* display */,
    Window /* src_w */,
    Window /* dest_w */,
    int /* src_x */,
    int /* src_y */,
    int* /* dest_x_return */,
    int* /* dest_y_return */,
    Window* /* child_return */
);

extern int XUndefineCursor(
    Display* /* display */,
    Window /* w */
);

extern int XUngrabButton(
    Display* /* display */,
    unsigned int /* button */,
    unsigned int /* modifiers */,
    Window /* grab_window */
);

extern int XUngrabKey(
    Display* /* display */,
    int /* keycode */,
    unsigned int /* modifiers */,
    Window /* grab_window */
);

extern int XUngrabKeyboard(
    Display* /* display */,
    Time /* time */
);

extern int XUngrabPointer(
    Display* /* display */,
    Time /* time */
);

extern int XUngrabServer(
    Display* /* display */
);

extern int XUninstallColormap(
    Display* /* display */,
    Colormap /* colormap */
);

extern int XUnloadFont(
    Display* /* display */,
    Font /* font */
);

extern int XUnmapSubwindows(
    Display* /* display */,
    Window /* w */
);

extern int XUnmapWindow(
    Display* /* display */,
    Window /* w */
);

extern int XVendorRelease(
    Display* /* display */
);

extern int XWarpPointer(
    Display* /* display */,
    Window /* src_w */,
    Window /* dest_w */,
    int /* src_x */,
    int /* src_y */,
    unsigned int /* src_width */,
    unsigned int /* src_height */,
    int /* dest_x */,
    int /* dest_y */
);

extern int XWidthMMOfScreen(
    Screen* /* screen */
);

extern int XWidthOfScreen(
    Screen* /* screen */
);

extern int XWindowEvent(
    Display* /* display */,
    Window /* w */,
    long /* event_mask */,
    XEvent* /* event_return */
);

extern int XWriteBitmapFile(
    Display* /* display */,
    const char* /* filename */,
    Pixmap /* bitmap */,
    unsigned int /* width */,
    unsigned int /* height */,
    int /* x_hot */,
    int /* y_hot */
);

extern int XSupportsLocale (void);

extern char *XSetLocaleModifiers(
    const char* /* modifier_list */
);

extern XOM XOpenOM(
    Display* /* display */,
    struct _XrmHashBucketRec* /* rdb */,
    const char* /* res_name */,
    const char* /* res_class */
);

extern int XCloseOM(
    XOM /* om */
);

extern char *XSetOMValues(
    XOM /* om */,
    ...
) __attribute__ ((__sentinel__(0)));

extern char *XGetOMValues(
    XOM /* om */,
    ...
) __attribute__ ((__sentinel__(0)));

extern Display *XDisplayOfOM(
    XOM /* om */
);

extern char *XLocaleOfOM(
    XOM /* om */
);

extern XOC XCreateOC(
    XOM /* om */,
    ...
) __attribute__ ((__sentinel__(0)));

extern void XDestroyOC(
    XOC /* oc */
);

extern XOM XOMOfOC(
    XOC /* oc */
);

extern char *XSetOCValues(
    XOC /* oc */,
    ...
) __attribute__ ((__sentinel__(0)));

extern char *XGetOCValues(
    XOC /* oc */,
    ...
) __attribute__ ((__sentinel__(0)));

extern XFontSet XCreateFontSet(
    Display* /* display */,
    const char* /* base_font_name_list */,
    char*** /* missing_charset_list */,
    int* /* missing_charset_count */,
    char** /* def_string */
);

extern void XFreeFontSet(
    Display* /* display */,
    XFontSet /* font_set */
);

extern int XFontsOfFontSet(
    XFontSet /* font_set */,
    XFontStruct*** /* font_struct_list */,
    char*** /* font_name_list */
);

extern char *XBaseFontNameListOfFontSet(
    XFontSet /* font_set */
);

extern char *XLocaleOfFontSet(
    XFontSet /* font_set */
);

extern int XContextDependentDrawing(
    XFontSet /* font_set */
);

extern int XDirectionalDependentDrawing(
    XFontSet /* font_set */
);

extern int XContextualDrawing(
    XFontSet /* font_set */
);

extern XFontSetExtents *XExtentsOfFontSet(
    XFontSet /* font_set */
);

extern int XmbTextEscapement(
    XFontSet /* font_set */,
    const char* /* text */,
    int /* bytes_text */
);

extern int XwcTextEscapement(
    XFontSet /* font_set */,
    const wchar_t* /* text */,
    int /* num_wchars */
);

extern int Xutf8TextEscapement(
    XFontSet /* font_set */,
    const char* /* text */,
    int /* bytes_text */
);

extern int XmbTextExtents(
    XFontSet /* font_set */,
    const char* /* text */,
    int /* bytes_text */,
    XRectangle* /* overall_ink_return */,
    XRectangle* /* overall_logical_return */
);

extern int XwcTextExtents(
    XFontSet /* font_set */,
    const wchar_t* /* text */,
    int /* num_wchars */,
    XRectangle* /* overall_ink_return */,
    XRectangle* /* overall_logical_return */
);

extern int Xutf8TextExtents(
    XFontSet /* font_set */,
    const char* /* text */,
    int /* bytes_text */,
    XRectangle* /* overall_ink_return */,
    XRectangle* /* overall_logical_return */
);

extern int XmbTextPerCharExtents(
    XFontSet /* font_set */,
    const char* /* text */,
    int /* bytes_text */,
    XRectangle* /* ink_extents_buffer */,
    XRectangle* /* logical_extents_buffer */,
    int /* buffer_size */,
    int* /* num_chars */,
    XRectangle* /* overall_ink_return */,
    XRectangle* /* overall_logical_return */
);

extern int XwcTextPerCharExtents(
    XFontSet /* font_set */,
    const wchar_t* /* text */,
    int /* num_wchars */,
    XRectangle* /* ink_extents_buffer */,
    XRectangle* /* logical_extents_buffer */,
    int /* buffer_size */,
    int* /* num_chars */,
    XRectangle* /* overall_ink_return */,
    XRectangle* /* overall_logical_return */
);

extern int Xutf8TextPerCharExtents(
    XFontSet /* font_set */,
    const char* /* text */,
    int /* bytes_text */,
    XRectangle* /* ink_extents_buffer */,
    XRectangle* /* logical_extents_buffer */,
    int /* buffer_size */,
    int* /* num_chars */,
    XRectangle* /* overall_ink_return */,
    XRectangle* /* overall_logical_return */
);

extern void XmbDrawText(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    XmbTextItem* /* text_items */,
    int /* nitems */
);

extern void XwcDrawText(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    XwcTextItem* /* text_items */,
    int /* nitems */
);

extern void Xutf8DrawText(
    Display* /* display */,
    Drawable /* d */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    XmbTextItem* /* text_items */,
    int /* nitems */
);

extern void XmbDrawString(
    Display* /* display */,
    Drawable /* d */,
    XFontSet /* font_set */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    const char* /* text */,
    int /* bytes_text */
);

extern void XwcDrawString(
    Display* /* display */,
    Drawable /* d */,
    XFontSet /* font_set */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    const wchar_t* /* text */,
    int /* num_wchars */
);

extern void Xutf8DrawString(
    Display* /* display */,
    Drawable /* d */,
    XFontSet /* font_set */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    const char* /* text */,
    int /* bytes_text */
);

extern void XmbDrawImageString(
    Display* /* display */,
    Drawable /* d */,
    XFontSet /* font_set */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    const char* /* text */,
    int /* bytes_text */
);

extern void XwcDrawImageString(
    Display* /* display */,
    Drawable /* d */,
    XFontSet /* font_set */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    const wchar_t* /* text */,
    int /* num_wchars */
);

extern void Xutf8DrawImageString(
    Display* /* display */,
    Drawable /* d */,
    XFontSet /* font_set */,
    GC /* gc */,
    int /* x */,
    int /* y */,
    const char* /* text */,
    int /* bytes_text */
);

extern XIM XOpenIM(
    Display* /* dpy */,
    struct _XrmHashBucketRec* /* rdb */,
    char* /* res_name */,
    char* /* res_class */
);

extern int XCloseIM(
    XIM /* im */
);

extern char *XGetIMValues(
    XIM /* im */, ...
) __attribute__ ((__sentinel__(0)));

extern char *XSetIMValues(
    XIM /* im */, ...
) __attribute__ ((__sentinel__(0)));

extern Display *XDisplayOfIM(
    XIM /* im */
);

extern char *XLocaleOfIM(
    XIM /* im*/
);

extern XIC XCreateIC(
    XIM /* im */, ...
) __attribute__ ((__sentinel__(0)));

extern void XDestroyIC(
    XIC /* ic */
);

extern void XSetICFocus(
    XIC /* ic */
);

extern void XUnsetICFocus(
    XIC /* ic */
);

extern wchar_t *XwcResetIC(
    XIC /* ic */
);

extern char *XmbResetIC(
    XIC /* ic */
);

extern char *Xutf8ResetIC(
    XIC /* ic */
);

extern char *XSetICValues(
    XIC /* ic */, ...
) __attribute__ ((__sentinel__(0)));

extern char *XGetICValues(
    XIC /* ic */, ...
) __attribute__ ((__sentinel__(0)));

extern XIM XIMOfIC(
    XIC /* ic */
);

extern int XFilterEvent(
    XEvent* /* event */,
    Window /* window */
);

extern int XmbLookupString(
    XIC /* ic */,
    XKeyPressedEvent* /* event */,
    char* /* buffer_return */,
    int /* bytes_buffer */,
    KeySym* /* keysym_return */,
    int* /* status_return */
);

extern int XwcLookupString(
    XIC /* ic */,
    XKeyPressedEvent* /* event */,
    wchar_t* /* buffer_return */,
    int /* wchars_buffer */,
    KeySym* /* keysym_return */,
    int* /* status_return */
);

extern int Xutf8LookupString(
    XIC /* ic */,
    XKeyPressedEvent* /* event */,
    char* /* buffer_return */,
    int /* bytes_buffer */,
    KeySym* /* keysym_return */,
    int* /* status_return */
);

extern XVaNestedList XVaCreateNestedList(
    int /*unused*/, ...
) __attribute__ ((__sentinel__(0)));

/* internal connections for IMs */

extern int XRegisterIMInstantiateCallback(
    Display* /* dpy */,
    struct _XrmHashBucketRec* /* rdb */,
    char* /* res_name */,
    char* /* res_class */,
    XIDProc /* callback */,
    XPointer /* client_data */
);

extern int XUnregisterIMInstantiateCallback(
    Display* /* dpy */,
    struct _XrmHashBucketRec* /* rdb */,
    char* /* res_name */,
    char* /* res_class */,
    XIDProc /* callback */,
    XPointer /* client_data */
);

typedef void (*XConnectionWatchProc)(
    Display* /* dpy */,
    XPointer /* client_data */,
    int /* fd */,
    int /* opening */, /* open or close flag */
    XPointer* /* watch_data */ /* open sets, close uses */
);


extern int XInternalConnectionNumbers(
    Display* /* dpy */,
    int** /* fd_return */,
    int* /* count_return */
);

extern void XProcessInternalConnection(
    Display* /* dpy */,
    int /* fd */
);

extern int XAddConnectionWatch(
    Display* /* dpy */,
    XConnectionWatchProc /* callback */,
    XPointer /* client_data */
);

extern void XRemoveConnectionWatch(
    Display* /* dpy */,
    XConnectionWatchProc /* callback */,
    XPointer /* client_data */
);

extern void XSetAuthorization(
    char * /* name */,
    int /* namelen */,
    char * /* data */,
    int /* datalen */
);

extern int _Xmbtowc(
    wchar_t * /* wstr */,




    char * /* str */,
    int /* len */

);

extern int _Xwctomb(
    char * /* str */,
    wchar_t /* wc */
);

}
# 35 "rxvt.h" 2
# 1 "/usr/X11/include/X11/Xutil.h" 1
/* $Xorg: Xutil.h,v 1.8 2001/02/09 02:03:39 xorgcvs Exp $ */

/***********************************************************

Copyright 1987, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.


Copyright 1987 by Digital Equipment Corporation, Maynard, Massachusetts.

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its 
documentation for any purpose and without fee is hereby granted, 
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in 
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.  

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/
/* $XFree86: xc/lib/X11/Xutil.h,v 3.6 2003/04/13 19:22:20 dawes Exp $ */




/* You must include <X11/Xlib.h> before including this file */
# 1 "/usr/X11/include/X11/Xlib.h" 1
/* $XdotOrg: lib/X11/include/X11/Xlib.h,v 1.6 2005-11-08 06:33:25 jkj Exp $ */
/* $Xorg: Xlib.h,v 1.6 2001/02/09 02:03:38 xorgcvs Exp $ */
/* 

Copyright 1985, 1986, 1987, 1991, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

*/
/* $XFree86: xc/lib/X11/Xlib.h,v 3.25 2003/11/17 22:20:10 dawes Exp $ */


/*
 *	Xlib.h - Header definition and support file for the C subroutine
 *	interface library (Xlib) to the X Window System Protocol (V11).
 *	Structures and symbols starting with "_" are private to the library.
 */
# 56 "/usr/X11/include/X11/Xutil.h" 2
# 1 "/usr/X11/include/X11/keysym.h" 1
/* $Xorg: keysym.h,v 1.4 2001/02/09 02:03:23 xorgcvs Exp $ */

/***********************************************************

Copyright 1987, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.


Copyright 1987 by Digital Equipment Corporation, Maynard, Massachusetts.

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its 
documentation for any purpose and without fee is hereby granted, 
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in 
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.  

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/
/* $XFree86: xc/include/keysym.h,v 1.3 2001/01/17 17:53:12 dawes Exp $ */

/* default keysyms */
# 75 "/usr/X11/include/X11/keysym.h"
# 1 "/usr/X11/include/X11/keysymdef.h" 1
/* $Xorg: keysymdef.h,v 1.4 2001/02/09 02:03:23 $ */

/***********************************************************
Copyright 1987, 1994, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall
not be used in advertising or otherwise to promote the sale, use or
other dealings in this Software without prior written authorization
from The Open Group.


Copyright 1987 by Digital Equipment Corporation, Maynard, Massachusetts

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its
documentation for any purpose and without fee is hereby granted,
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/
/* $XFree86: $ */

/*
 * The "X11 Window System Protocol" standard defines in Appendix A the
 * keysym codes. These 29-bit integer values identify characters or
 * functions associated with each key (e.g., via the visible
 * engraving) of a keyboard layout. This file assigns mnemonic macro
 * names for these keysyms.
 *
 * This file is also compiled (by src/util/makekeys.c in libX11) into
 * hash tables that can be accessed with X11 library functions such as
 * XStringToKeysym() and XKeysymToString().
 *
 * Where a keysym corresponds one-to-one to an ISO 10646 / Unicode
 * character, this is noted in a comment that provides both the U+xxxx
 * Unicode position, as well as the official Unicode name of the
 * character.
 *
 * Where the correspondence is either not one-to-one or semantically
 * unclear, the Unicode position and name are enclosed in
 * parentheses. Such legacy keysyms should be considered deprecated
 * and are not recommended for use in future keyboard mappings.
 *
 * For any future extension of the keysyms with characters already
 * found in ISO 10646 / Unicode, the following algorithm shall be
 * used. The new keysym code position will simply be the character's
 * Unicode number plus 0x01000000. The keysym values in the range
 * 0x01000100 to 0x0110ffff are reserved to represent Unicode
 * characters in the range U+0100 to U+10FFFF.
 * 
 * While most newer Unicode-based X11 clients do already accept
 * Unicode-mapped keysyms in the range 0x01000100 to 0x0110ffff, it
 * will remain necessary for clients -- in the interest of
 * compatibility with existing servers -- to also understand the
 * existing legacy keysym values in the range 0x0100 to 0x20ff.
 *
 * Where several mnemonic names are defined for the same keysym in this
 * file, all but the first one listed should be considered deprecated.
 *
 * Mnemonic names for keysyms are defined in this file with lines
 * that match one of these Perl regular expressions:
 *
 *    /^\#define XK_([a-zA-Z_0-9]+)\s+0x([0-9a-f]+)\s*\/\* U+([0-9A-F]{4,6}) (.*) \*\/\s*$/
 *    /^\#define XK_([a-zA-Z_0-9]+)\s+0x([0-9a-f]+)\s*\/\*\(U+([0-9A-F]{4,6}) (.*)\)\*\/\s*$/
 *    /^\#define XK_([a-zA-Z_0-9]+)\s+0x([0-9a-f]+)\s*(\/\*\s*(.*)\s*\*\/)?\s*$/
 *
 * Before adding new keysyms, please do consider the following: In
 * addition to the keysym names defined in this file, the
 * XStringToKeysym() and XKeysymToString() functions will also handle
 * any keysym string of the form "U0020" to "U007E" and "U00A0" to
 * "U10FFFF" for all possible Unicode characters. In other words,
 * every possible Unicode character has already a keysym string
 * defined algorithmically, even if it is not listed here. Therefore,
 * defining an additional keysym macro is only necessary where a
 * non-hexadecimal mnemonic name is needed, or where the new keysym
 * does not represent any existing Unicode character.
 *
 * When adding new keysyms to this file, do not forget to also update the
 * following:
 *
 *   - the mappings in src/KeyBind.c in the repo
 *     git://anongit.freedesktop.org/xorg/lib/libX11
 *
 *   - the protocol specification in specs/XProtocol/X11.keysyms
 *     in the repo git://anongit.freedesktop.org/xorg/doc/xorg-docs
 *
 */




/*
 * TTY function keys, cleverly chosen to map to ASCII, for convenience of
 * programming, but could have been arbitrary (at the cost of lookup
 * tables in client code).
 */
# 140 "/usr/X11/include/X11/keysymdef.h"
/* International & multi-key character composition */







/* Japanese keyboard support */
# 171 "/usr/X11/include/X11/keysymdef.h"
/* 0xff31 thru 0xff3f are under XK_KOREAN */

/* Cursor control & motion */
# 188 "/usr/X11/include/X11/keysymdef.h"
/* Misc functions */
# 205 "/usr/X11/include/X11/keysymdef.h"
/* Keypad functions, keypad numbers cleverly chosen to map to ASCII */
# 248 "/usr/X11/include/X11/keysymdef.h"
/*
 * Auxiliary functions; note the duplicate definitions for left and right
 * function keys;  Sun keyboards and a few other manufacturers have such
 * function key groups on the left and/or right sides of the keyboard.
 * We've not found a keyboard with more than 35 function keys total.
 */
# 316 "/usr/X11/include/X11/keysymdef.h"
/* Modifiers */
# 335 "/usr/X11/include/X11/keysymdef.h"
/*
 * Keyboard (XKB) Extension function and modifier keys
 * (from Appendix C of "The X Keyboard Extension: Protocol Specification")
 * Byte 3 = 0xfe
 */
# 467 "/usr/X11/include/X11/keysymdef.h"
/*
 * 3270 Terminal Keys
 * Byte 3 = 0xfd
 */
# 505 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 1
 * (ISO/IEC 8859-1 = Unicode U+0020..U+00FF)
 * Byte 3 = 0
 */
# 711 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 2
 * Byte 3 = 1
 */
# 776 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 3
 * Byte 3 = 2
 */
# 807 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 4
 * Byte 3 = 3
 */
# 851 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 8
 */
# 883 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 9
 * Byte 3 = 0x13
 */







/*
 * Katakana
 * Byte 3 = 4
 */
# 972 "/usr/X11/include/X11/keysymdef.h"
/*
 * Arabic
 * Byte 3 = 5
 */
# 1071 "/usr/X11/include/X11/keysymdef.h"
/*
 * Cyrillic
 * Byte 3 = 6
 */
# 1219 "/usr/X11/include/X11/keysymdef.h"
/*
 * Greek
 * (based on an early draft of, and not quite identical to, ISO/IEC 8859-7)
 * Byte 3 = 7
 */
# 1303 "/usr/X11/include/X11/keysymdef.h"
/*
 * Technical
 * (from the DEC VT330/VT420 Technical Character Set, http://vt100.net/charsets/technical.html)
 * Byte 3 = 8
 */
# 1361 "/usr/X11/include/X11/keysymdef.h"
/*
 * Special
 * (from the DEC VT100 Special Graphics Character Set)
 * Byte 3 = 9
 */
# 1394 "/usr/X11/include/X11/keysymdef.h"
/*
 * Publishing
 * (these are probably from a long forgotten DEC Publishing
 * font that once shipped with DECwrite)
 * Byte 3 = 0x0a
 */
# 1487 "/usr/X11/include/X11/keysymdef.h"
/*
 * APL
 * Byte 3 = 0x0b
 */
# 1514 "/usr/X11/include/X11/keysymdef.h"
/*
 * Hebrew
 * Byte 3 = 0x0c
 */
# 1562 "/usr/X11/include/X11/keysymdef.h"
/*
 * Thai
 * Byte 3 = 0x0d
 */
# 1654 "/usr/X11/include/X11/keysymdef.h"
/*
 * Korean
 * Byte 3 = 0x0e
 */
# 1678 "/usr/X11/include/X11/keysymdef.h"
/* Hangul Consonant Characters */
# 1710 "/usr/X11/include/X11/keysymdef.h"
/* Hangul Vowel Characters */
# 1733 "/usr/X11/include/X11/keysymdef.h"
/* Hangul syllable-final (JongSeong) Characters */
# 1762 "/usr/X11/include/X11/keysymdef.h"
/* Ancient Hangul Consonant Characters */
# 1771 "/usr/X11/include/X11/keysymdef.h"
/* Ancient Hangul Vowel Characters */



/* Ancient Hangul syllable-final (JongSeong) Characters */




/* Korean currency symbol */




/*
 * Armenian
 */
# 1882 "/usr/X11/include/X11/keysymdef.h"
/*
 * Georgian
 */
# 1928 "/usr/X11/include/X11/keysymdef.h"
/*
 * Azeri (and other Turkic or Caucasian languages)
 */


/* latin */
# 1948 "/usr/X11/include/X11/keysymdef.h"
/* those are not really Caucasus */
/* For Inupiak */




/*
 * Vietnamese
 */
# 2071 "/usr/X11/include/X11/keysymdef.h"
/* one, two and three are defined above. */
# 76 "/usr/X11/include/X11/keysym.h" 2
# 57 "/usr/X11/include/X11/Xutil.h" 2

/* 
 * Bitmask returned by XParseGeometry().  Each bit tells if the corresponding
 * value (x, y, width, height) was found in the parsed string.
 */
# 71 "/usr/X11/include/X11/Xutil.h"
/*
 * new version containing base_width, base_height, and win_gravity fields;
 * used with WM_NORMAL_HINTS.
 */
typedef struct {
     long flags; /* marks which fields in this structure are defined */
 int x, y; /* obsolete for new window mgrs, but clients */
 int width, height; /* should set so old wm's don't mess up */
 int min_width, min_height;
 int max_width, max_height;
     int width_inc, height_inc;
 struct {
  int x; /* numerator */
  int y; /* denominator */
 } min_aspect, max_aspect;
 int base_width, base_height; /* added by ICCCM version 1 */
 int win_gravity; /* added by ICCCM version 1 */
} XSizeHints;

/*
 * The next block of definitions are for window manager properties that
 * clients and applications use for communication.
 */

/* flags argument in size hints */
# 108 "/usr/X11/include/X11/Xutil.h"
/* obsolete */




typedef struct {
 long flags; /* marks which fields in this structure are defined */
 int input; /* does this application rely on the window manager to
			get keyboard input? */
 int initial_state; /* see below */
 Pixmap icon_pixmap; /* pixmap to be used as icon */
 Window icon_window; /* window to be used as icon */
 int icon_x, icon_y; /* initial position of icon */
 Pixmap icon_mask; /* icon mask bitmap */
 XID window_group; /* id of related window group */
 /* this structure may be extended in the future */
} XWMHints;

/* definition for flags of XWMHints */
# 139 "/usr/X11/include/X11/Xutil.h"
/* definitions for initial window state */




/*
 * Obsolete states no longer defined by ICCCM
 */



   /* some wm's may put it on inactive menu */


/*
 * new structure for manipulating TEXT properties; used with WM_NAME, 
 * WM_ICON_NAME, WM_CLIENT_MACHINE, and WM_COMMAND.
 */
typedef struct {
    unsigned char *value; /* same as Property routines */
    Atom encoding; /* prop type */
    int format; /* prop data format: 8, 16, or 32 */
    unsigned long nitems; /* number of data items in value */
} XTextProperty;





typedef enum {
    XStringStyle, /* STRING */
    XCompoundTextStyle, /* COMPOUND_TEXT */
    XTextStyle, /* text in owner's encoding (current locale)*/
    XStdICCTextStyle, /* STRING, else COMPOUND_TEXT */
    /* The following is an XFree86 extension, introduced in November 2000 */
    XUTF8StringStyle /* UTF8_STRING */
} XICCEncodingStyle;

typedef struct {
 int min_width, min_height;
 int max_width, max_height;
 int width_inc, height_inc;
} XIconSize;

typedef struct {
 char *res_name;
 char *res_class;
} XClassHint;
# 206 "/usr/X11/include/X11/Xutil.h"
/*
 * These macros are used to give some sugar to the image routines so that
 * naive people are more comfortable with them.
 */
# 222 "/usr/X11/include/X11/Xutil.h"
/*
 * Compose sequence status structure, used in calling XLookupString.
 */
typedef struct _XComposeStatus {
    XPointer compose_ptr; /* state table pointer */
    int chars_matched; /* match state */
} XComposeStatus;

/*
 * Keysym macros, used on Keysyms to test for classes of symbols
 */
# 264 "/usr/X11/include/X11/Xutil.h"
/*
 * opaque reference to Region data type 
 */
typedef struct _XRegion *Region;

/* Return values from XRectInRegion() */






/*
 * Information used by the visual utility routines to find desired visual
 * type from the many visuals a display may support.
 */

typedef struct {
  Visual *visual;
  VisualID visualid;
  int screen;
  int depth;

  int c_class; /* C++ */



  unsigned long red_mask;
  unsigned long green_mask;
  unsigned long blue_mask;
  int colormap_size;
  int bits_per_rgb;
} XVisualInfo;
# 310 "/usr/X11/include/X11/Xutil.h"
/*
 * This defines a window manager property that clients may use to
 * share standard color maps of type RGB_COLOR_MAP:
 */
typedef struct {
 Colormap colormap;
 unsigned long red_max;
 unsigned long red_mult;
 unsigned long green_max;
 unsigned long green_mult;
 unsigned long blue_max;
 unsigned long blue_mult;
 unsigned long base_pixel;
 VisualID visualid; /* added by ICCCM version 1 */
 XID killid; /* added by ICCCM version 1 */
} XStandardColormap;




/*
 * return codes for XReadBitmapFile and XWriteBitmapFile
 */





/****************************************************************
 *
 * Context Management
 *
 ****************************************************************/


/* Associative lookup table return codes */





typedef int XContext;




extern "C" { /* do not leave open across includes */

/* The following declarations are alphabetized. */

extern XClassHint *XAllocClassHint (
    void
);

extern XIconSize *XAllocIconSize (
    void
);

extern XSizeHints *XAllocSizeHints (
    void
);

extern XStandardColormap *XAllocStandardColormap (
    void
);

extern XWMHints *XAllocWMHints (
    void
);

extern int XClipBox(
    Region /* r */,
    XRectangle* /* rect_return */
);

extern Region XCreateRegion(
    void
);

extern const char *XDefaultString (void);

extern int XDeleteContext(
    Display* /* display */,
    XID /* rid */,
    XContext /* context */
);

extern int XDestroyRegion(
    Region /* r */
);

extern int XEmptyRegion(
    Region /* r */
);

extern int XEqualRegion(
    Region /* r1 */,
    Region /* r2 */
);

extern int XFindContext(
    Display* /* display */,
    XID /* rid */,
    XContext /* context */,
    XPointer* /* data_return */
);

extern int XGetClassHint(
    Display* /* display */,
    Window /* w */,
    XClassHint* /* class_hints_return */
);

extern int XGetIconSizes(
    Display* /* display */,
    Window /* w */,
    XIconSize** /* size_list_return */,
    int* /* count_return */
);

extern int XGetNormalHints(
    Display* /* display */,
    Window /* w */,
    XSizeHints* /* hints_return */
);

extern int XGetRGBColormaps(
    Display* /* display */,
    Window /* w */,
    XStandardColormap** /* stdcmap_return */,
    int* /* count_return */,
    Atom /* property */
);

extern int XGetSizeHints(
    Display* /* display */,
    Window /* w */,
    XSizeHints* /* hints_return */,
    Atom /* property */
);

extern int XGetStandardColormap(
    Display* /* display */,
    Window /* w */,
    XStandardColormap* /* colormap_return */,
    Atom /* property */
);

extern int XGetTextProperty(
    Display* /* display */,
    Window /* window */,
    XTextProperty* /* text_prop_return */,
    Atom /* property */
);

extern XVisualInfo *XGetVisualInfo(
    Display* /* display */,
    long /* vinfo_mask */,
    XVisualInfo* /* vinfo_template */,
    int* /* nitems_return */
);

extern int XGetWMClientMachine(
    Display* /* display */,
    Window /* w */,
    XTextProperty* /* text_prop_return */
);

extern XWMHints *XGetWMHints(
    Display* /* display */,
    Window /* w */
);

extern int XGetWMIconName(
    Display* /* display */,
    Window /* w */,
    XTextProperty* /* text_prop_return */
);

extern int XGetWMName(
    Display* /* display */,
    Window /* w */,
    XTextProperty* /* text_prop_return */
);

extern int XGetWMNormalHints(
    Display* /* display */,
    Window /* w */,
    XSizeHints* /* hints_return */,
    long* /* supplied_return */
);

extern int XGetWMSizeHints(
    Display* /* display */,
    Window /* w */,
    XSizeHints* /* hints_return */,
    long* /* supplied_return */,
    Atom /* property */
);

extern int XGetZoomHints(
    Display* /* display */,
    Window /* w */,
    XSizeHints* /* zhints_return */
);

extern int XIntersectRegion(
    Region /* sra */,
    Region /* srb */,
    Region /* dr_return */
);

extern void XConvertCase(
    KeySym /* sym */,
    KeySym* /* lower */,
    KeySym* /* upper */
);

extern int XLookupString(
    XKeyEvent* /* event_struct */,
    char* /* buffer_return */,
    int /* bytes_buffer */,
    KeySym* /* keysym_return */,
    XComposeStatus* /* status_in_out */
);

extern int XMatchVisualInfo(
    Display* /* display */,
    int /* screen */,
    int /* depth */,
    int /* class */,
    XVisualInfo* /* vinfo_return */
);

extern int XOffsetRegion(
    Region /* r */,
    int /* dx */,
    int /* dy */
);

extern int XPointInRegion(
    Region /* r */,
    int /* x */,
    int /* y */
);

extern Region XPolygonRegion(
    XPoint* /* points */,
    int /* n */,
    int /* fill_rule */
);

extern int XRectInRegion(
    Region /* r */,
    int /* x */,
    int /* y */,
    unsigned int /* width */,
    unsigned int /* height */
);

extern int XSaveContext(
    Display* /* display */,
    XID /* rid */,
    XContext /* context */,
    const char* /* data */
);

extern int XSetClassHint(
    Display* /* display */,
    Window /* w */,
    XClassHint* /* class_hints */
);

extern int XSetIconSizes(
    Display* /* display */,
    Window /* w */,
    XIconSize* /* size_list */,
    int /* count */
);

extern int XSetNormalHints(
    Display* /* display */,
    Window /* w */,
    XSizeHints* /* hints */
);

extern void XSetRGBColormaps(
    Display* /* display */,
    Window /* w */,
    XStandardColormap* /* stdcmaps */,
    int /* count */,
    Atom /* property */
);

extern int XSetSizeHints(
    Display* /* display */,
    Window /* w */,
    XSizeHints* /* hints */,
    Atom /* property */
);

extern int XSetStandardProperties(
    Display* /* display */,
    Window /* w */,
    const char* /* window_name */,
    const char* /* icon_name */,
    Pixmap /* icon_pixmap */,
    char** /* argv */,
    int /* argc */,
    XSizeHints* /* hints */
);

extern void XSetTextProperty(
    Display* /* display */,
    Window /* w */,
    XTextProperty* /* text_prop */,
    Atom /* property */
);

extern void XSetWMClientMachine(
    Display* /* display */,
    Window /* w */,
    XTextProperty* /* text_prop */
);

extern int XSetWMHints(
    Display* /* display */,
    Window /* w */,
    XWMHints* /* wm_hints */
);

extern void XSetWMIconName(
    Display* /* display */,
    Window /* w */,
    XTextProperty* /* text_prop */
);

extern void XSetWMName(
    Display* /* display */,
    Window /* w */,
    XTextProperty* /* text_prop */
);

extern void XSetWMNormalHints(
    Display* /* display */,
    Window /* w */,
    XSizeHints* /* hints */
);

extern void XSetWMProperties(
    Display* /* display */,
    Window /* w */,
    XTextProperty* /* window_name */,
    XTextProperty* /* icon_name */,
    char** /* argv */,
    int /* argc */,
    XSizeHints* /* normal_hints */,
    XWMHints* /* wm_hints */,
    XClassHint* /* class_hints */
);

extern void XmbSetWMProperties(
    Display* /* display */,
    Window /* w */,
    const char* /* window_name */,
    const char* /* icon_name */,
    char** /* argv */,
    int /* argc */,
    XSizeHints* /* normal_hints */,
    XWMHints* /* wm_hints */,
    XClassHint* /* class_hints */
);

extern void Xutf8SetWMProperties(
    Display* /* display */,
    Window /* w */,
    const char* /* window_name */,
    const char* /* icon_name */,
    char** /* argv */,
    int /* argc */,
    XSizeHints* /* normal_hints */,
    XWMHints* /* wm_hints */,
    XClassHint* /* class_hints */
);

extern void XSetWMSizeHints(
    Display* /* display */,
    Window /* w */,
    XSizeHints* /* hints */,
    Atom /* property */
);

extern int XSetRegion(
    Display* /* display */,
    GC /* gc */,
    Region /* r */
);

extern void XSetStandardColormap(
    Display* /* display */,
    Window /* w */,
    XStandardColormap* /* colormap */,
    Atom /* property */
);

extern int XSetZoomHints(
    Display* /* display */,
    Window /* w */,
    XSizeHints* /* zhints */
);

extern int XShrinkRegion(
    Region /* r */,
    int /* dx */,
    int /* dy */
);

extern int XStringListToTextProperty(
    char** /* list */,
    int /* count */,
    XTextProperty* /* text_prop_return */
);

extern int XSubtractRegion(
    Region /* sra */,
    Region /* srb */,
    Region /* dr_return */
);

extern int XmbTextListToTextProperty(
    Display* display,
    char** list,
    int count,
    XICCEncodingStyle style,
    XTextProperty* text_prop_return
);

extern int XwcTextListToTextProperty(
    Display* display,
    wchar_t** list,
    int count,
    XICCEncodingStyle style,
    XTextProperty* text_prop_return
);

extern int Xutf8TextListToTextProperty(
    Display* display,
    char** list,
    int count,
    XICCEncodingStyle style,
    XTextProperty* text_prop_return
);

extern void XwcFreeStringList(
    wchar_t** list
);

extern int XTextPropertyToStringList(
    XTextProperty* /* text_prop */,
    char*** /* list_return */,
    int* /* count_return */
);

extern int XmbTextPropertyToTextList(
    Display* display,
    const XTextProperty* text_prop,
    char*** list_return,
    int* count_return
);

extern int XwcTextPropertyToTextList(
    Display* display,
    const XTextProperty* text_prop,
    wchar_t*** list_return,
    int* count_return
);

extern int Xutf8TextPropertyToTextList(
    Display* display,
    const XTextProperty* text_prop,
    char*** list_return,
    int* count_return
);

extern int XUnionRectWithRegion(
    XRectangle* /* rectangle */,
    Region /* src_region */,
    Region /* dest_region_return */
);

extern int XUnionRegion(
    Region /* sra */,
    Region /* srb */,
    Region /* dr_return */
);

extern int XWMGeometry(
    Display* /* display */,
    int /* screen_number */,
    const char* /* user_geometry */,
    const char* /* default_geometry */,
    unsigned int /* border_width */,
    XSizeHints* /* hints */,
    int* /* x_return */,
    int* /* y_return */,
    int* /* width_return */,
    int* /* height_return */,
    int* /* gravity_return */
);

extern int XXorRegion(
    Region /* sra */,
    Region /* srb */,
    Region /* dr_return */
);

}
# 36 "rxvt.h" 2
# 1 "/usr/X11/include/X11/Xresource.h" 1
/* $Xorg: Xresource.h,v 1.7 2001/02/09 02:03:39 xorgcvs Exp $ */

/***********************************************************

Copyright 1987, 1988, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.


Copyright 1987, 1988 by Digital Equipment Corporation, Maynard, Massachusetts.

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its 
documentation for any purpose and without fee is hereby granted, 
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in 
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.  

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/
/* $XFree86: xc/lib/X11/Xresource.h,v 3.8 2001/12/14 19:54:10 dawes Exp $ */





# 1 "/usr/X11/include/X11/Xlib.h" 1
/* $XdotOrg: lib/X11/include/X11/Xlib.h,v 1.6 2005-11-08 06:33:25 jkj Exp $ */
/* $Xorg: Xlib.h,v 1.6 2001/02/09 02:03:38 xorgcvs Exp $ */
/* 

Copyright 1985, 1986, 1987, 1991, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

*/
/* $XFree86: xc/lib/X11/Xlib.h,v 3.25 2003/11/17 22:20:10 dawes Exp $ */


/*
 *	Xlib.h - Header definition and support file for the C subroutine
 *	interface library (Xlib) to the X Window System Protocol (V11).
 *	Structures and symbols starting with "_" are private to the library.
 */
# 56 "/usr/X11/include/X11/Xresource.h" 2


/****************************************************************
 ****************************************************************
 ***                                                          ***
 ***                                                          ***
 ***          X Resource Manager Intrinsics                   ***
 ***                                                          ***
 ***                                                          ***
 ****************************************************************
 ****************************************************************/

extern "C" { /* do not leave open across includes */

/****************************************************************
 *
 * Memory Management
 *
 ****************************************************************/

extern char *Xpermalloc(
    unsigned int /* size */
);

/****************************************************************
 *
 * Quark Management
 *
 ****************************************************************/

typedef int XrmQuark, *XrmQuarkList;


typedef char *XrmString;


/* find quark for string, create new quark if none already exists */
extern XrmQuark XrmStringToQuark(
    const char* /* string */
);

extern XrmQuark XrmPermStringToQuark(
    const char* /* string */
);

/* find string for quark */
extern XrmString XrmQuarkToString(
    XrmQuark /* quark */
);

extern XrmQuark XrmUniqueQuark(
    void
);




/****************************************************************
 *
 * Conversion of Strings to Lists
 *
 ****************************************************************/

typedef enum {XrmBindTightly, XrmBindLoosely} XrmBinding, *XrmBindingList;

extern void XrmStringToQuarkList(
    const char* /* string */,
    XrmQuarkList /* quarks_return */
);

extern void XrmStringToBindingQuarkList(
    const char* /* string */,
    XrmBindingList /* bindings_return */,
    XrmQuarkList /* quarks_return */
);

/****************************************************************
 *
 * Name and Class lists.
 *
 ****************************************************************/

typedef XrmQuark XrmName;
typedef XrmQuarkList XrmNameList;




typedef XrmQuark XrmClass;
typedef XrmQuarkList XrmClassList;






/****************************************************************
 *
 * Resource Representation Types and Values
 *
 ****************************************************************/

typedef XrmQuark XrmRepresentation;



typedef struct {
    unsigned int size;
    XPointer addr;
} XrmValue, *XrmValuePtr;


/****************************************************************
 *
 * Resource Manager Functions
 *
 ****************************************************************/

typedef struct _XrmHashBucketRec *XrmHashBucket;
typedef XrmHashBucket *XrmHashTable;
typedef XrmHashTable XrmSearchList[];
typedef struct _XrmHashBucketRec *XrmDatabase;


extern void XrmDestroyDatabase(
    XrmDatabase /* database */
);

extern void XrmQPutResource(
    XrmDatabase* /* database */,
    XrmBindingList /* bindings */,
    XrmQuarkList /* quarks */,
    XrmRepresentation /* type */,
    XrmValue* /* value */
);

extern void XrmPutResource(
    XrmDatabase* /* database */,
    const char* /* specifier */,
    const char* /* type */,
    XrmValue* /* value */
);

extern void XrmQPutStringResource(
    XrmDatabase* /* database */,
    XrmBindingList /* bindings */,
    XrmQuarkList /* quarks */,
    const char* /* value */
);

extern void XrmPutStringResource(
    XrmDatabase* /* database */,
    const char* /* specifier */,
    const char* /* value */
);

extern void XrmPutLineResource(
    XrmDatabase* /* database */,
    const char* /* line */
);

extern int XrmQGetResource(
    XrmDatabase /* database */,
    XrmNameList /* quark_name */,
    XrmClassList /* quark_class */,
    XrmRepresentation* /* quark_type_return */,
    XrmValue* /* value_return */
);

extern int XrmGetResource(
    XrmDatabase /* database */,
    const char* /* str_name */,
    const char* /* str_class */,
    char** /* str_type_return */,
    XrmValue* /* value_return */
);

extern int XrmQGetSearchList(
    XrmDatabase /* database */,
    XrmNameList /* names */,
    XrmClassList /* classes */,
    XrmSearchList /* list_return */,
    int /* list_length */
);

extern int XrmQGetSearchResource(
    XrmSearchList /* list */,
    XrmName /* name */,
    XrmClass /* class */,
    XrmRepresentation* /* type_return */,
    XrmValue* /* value_return */
);

/****************************************************************
 *
 * Resource Database Management
 *
 ****************************************************************/



extern void XrmSetDatabase(
    Display* /* display */,
    XrmDatabase /* database */
);

extern XrmDatabase XrmGetDatabase(
    Display* /* display */
);



extern XrmDatabase XrmGetFileDatabase(
    const char* /* filename */
);

extern int XrmCombineFileDatabase(
    const char* /* filename */,
    XrmDatabase* /* target */,
    int /* override */
);

extern XrmDatabase XrmGetStringDatabase(
    const char* /* data */ /*  null terminated string */
);

extern void XrmPutFileDatabase(
    XrmDatabase /* database */,
    const char* /* filename */
);

extern void XrmMergeDatabases(
    XrmDatabase /* source_db */,
    XrmDatabase* /* target_db */
);

extern void XrmCombineDatabase(
    XrmDatabase /* source_db */,
    XrmDatabase* /* target_db */,
    int /* override */
);




extern int XrmEnumerateDatabase(
    XrmDatabase /* db */,
    XrmNameList /* name_prefix */,
    XrmClassList /* class_prefix */,
    int /* mode */,
    int (*)(
      XrmDatabase* /* db */,
      XrmBindingList /* bindings */,
      XrmQuarkList /* quarks */,
      XrmRepresentation* /* type */,
      XrmValue* /* value */,
      XPointer /* closure */
      ) /* proc */,
    XPointer /* closure */
);

extern const char *XrmLocaleOfDatabase(
    XrmDatabase /* database */
);


/****************************************************************
 *
 * Command line option mapping to resource entries
 *
 ****************************************************************/

typedef enum {
    XrmoptionNoArg, /* Value is specified in OptionDescRec.value	    */
    XrmoptionIsArg, /* Value is the option string itself		    */
    XrmoptionStickyArg, /* Value is characters immediately following option */
    XrmoptionSepArg, /* Value is next argument in argv		    */
    XrmoptionResArg, /* Resource and value in next argument in argv      */
    XrmoptionSkipArg, /* Ignore this option and the next argument in argv */
    XrmoptionSkipLine, /* Ignore this option and the rest of argv	    */
    XrmoptionSkipNArgs /* Ignore this option and the next 
			   OptionDescRes.value arguments in argv */
} XrmOptionKind;

typedef struct {
    char *option; /* Option abbreviation in argv	    */
    char *specifier; /* Resource specifier		    */
    XrmOptionKind argKind; /* Which style of option it is	    */
    XPointer value; /* Value to provide if XrmoptionNoArg   */
} XrmOptionDescRec, *XrmOptionDescList;


extern void XrmParseCommand(
    XrmDatabase* /* database */,
    XrmOptionDescList /* table */,
    int /* table_count */,
    const char* /* name */,
    int* /* argc_in_out */,
    char** /* argv_in_out */
);

}


/* DON'T ADD STUFF AFTER THIS #endif */
# 37 "rxvt.h" 2
}




typedef uint16_t text_t; // saves lots of memory

typedef uint32_t rend_t;
typedef int32_t tlen_t; // was int16_t, but this results in smaller code and memory use
typedef int32_t tlen_t_; // specifically for use in the line_t structure

# 1 "feature.h" 1
/*
 * File:	feature.h
 *
 * Compile-time configuration.
 *-----------------------------------------------------------------------
 * Copyright (c) 1997,1998 Oezguer Kesim <kesim@math.fu-berlin.de>
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
 *
 *----------------------------------------------------------------------*/
# 37 "feature.h"
/*-------------------------------SECURITY-------------------------------*/

/*
 * Default mode to restore when releasing the PTS device. It is relaxed to be
 * compatible with most systems, change it to a more secure value if your
 * system supports it (0640 for example).
 */


/*
 * Define if you want to use a separate process for pty/tty handling
 * when running setuid/setgid. You need this when making it setuid/setgid.
 */


/*-----------------------SCREEN OPTIONS AND COLOURS---------------------*/

/*
 * NOTE:
 *
 * Some of these configuration options have not been tested within the new
 * rxvt-unicode framework. Changing them should work, might have no effect,
 * destroy your disks or have any other effects. You may freely try (and
 * report bugs, too!), but don't _expect_ them to work.
 */

/*
 * The cursor blink interval, in seconds.
 */


/*
 * The text blink interval, in seconds.
 */


/*
 * Avoid enabling the colour cursor (-cr, cursorColor, cursorColor2)
 */
/* #define NO_CURSORCOLOR */

/*
 * Make colours match xterm colours instead of `traditional' rxvt colours
 */


/*
 * Disable separate colours for bold, underline and reverse video
 */
/* #define NO_BOLD_UNDERLINE_REVERSE */

/*
 * Define maximum possible columns and rows
 */



/*
 * Define maximum possible savelines
 */


/*
 * Define to remove support for XCopyArea () support.  XCopyArea () is useful
 * for scrolling on non-local X displays
 */


/*
 * Allow 80/132 mode switching on startup
 */
/* #define ALLOW_132_MODE */

/*---------------------------------KEYS---------------------------------*/

/*
 * Enable the keysym resource which allows you to define strings associated
 * with various KeySyms (0xFF00 - 0xFFFF).
 * Required by perl.
 */




/*
 * Modifier/s to use to allow up/down arrows and Prior/Next keys
 * to scroll single or page-fulls
 */

/* #define SCROLL_ON_CTRL */
/* #define SCROLL_ON_META */

/*
 * Allow scrolling with modifier+Up/Down keys, in addition
 * to modifier+Prior/Next? (modifier is controlled with
 * SCROLL_ON_* defines above.).
 * Also for modifier+Home/End keys to move to top/bottom
 */
/* #define SCROLL_ON_UPDOWN_KEYS */
/* #define SCROLL_ON_HOMEEND_KEYS */

/*
 * Allow unshifted Next/Prior keys to scroll forward/back
 * (in addition to shift+Next/shift+Prior)       --pjh
 */
/* #define UNSHIFTED_SCROLLKEYS */

/* (Hops) Set to choose a number of lines of context between pages
 *      (rather than a proportion (1/5) of savedlines buffer)
 *      when paging the savedlines with SHIFT-{Prior,Next} keys.
 */


/*
 * Have either Ctrl+Tab or Mod4+Tab emit \e\t
 * Useful when window manager grabs Alt+Tab   -- mg
 */
/* #define CTRL_TAB_MAKES_META */
/* #define MOD4_TAB_MAKES_META */

/*--------------------------------MOUSE---------------------------------*/
/*
 * Disable sending escape sequences (up, down, page up/down)
 * from the scrollbar when XTerm mouse reporting is enabled
 */
/* #define NO_SCROLLBAR_REPORT */

/*
 * Have mouse reporting include double-click info for button1
 */
/* #define MOUSE_REPORT_DOUBLECLICK */

/*
 * Set delay between multiple click events [default: 500 milliseconds]
 */
/* #define MULTICLICK_TIME 500 */

/*
 * Time factor to slow down a `jumpy' mouse.  Motion isn't recognised until
 * this long after the last mouse click [default: 50 milliseconds]
 */


/*
 * Set delay periods for continuous scrolling with scrollbar buttons
 */
/* #define SCROLLBAR_INITIAL_DELAY 0.33 */
/* #define SCROLLBAR_CONTINUOUS_DELAY 0.05 */

/*
 * The speed of selection scrolling is proportional to the distance
 * the mouse pointer is out of the text window.  This is the max
 * number of lines to scroll at a time.
 */


/*
 * The number of lines (measured in character's heights, not pixels)
 * the pointer must be out of the window for each increase in the
 * number of lines scrolled.
 */


/*--------------------------------MISC----------------------------------*/
/*
 * Only log in wtmp and lastlog files when we're a login shell (-ls option)
 */


/*--------------------------------BELL----------------------------------*/
/*
 * Disable all bell indications
 */
/* #define NO_BELL */

/*
 * Disable automatic de-iconify when a bell is received
 */
/* #define NO_MAPALERT */

/*
 * Have mapAlert behaviour selectable with mapAlert resource
 */


/*-----------------------------SCROLL BAR-------------------------------*/
/*
 * Choose the rxvt style scrollbar width
 * - should be an even number [default: 10]
 */
/* #define SB_WIDTH_RXVT 10 */

/*
 * Minimum and maximum widths of the scrollbar (all styles)
 */



/*
 * rxvt scrollbar shadow width in pixels, must be 1 or 2
 */


/*
 * clicking above or below the scrollbar slider (all styles minus
 * xterm) will scroll by (height - 1) rather than (height / 4).
 */


/*
 * (Hops) draw an internal border line on inside edge of the rxvt scrollbar
 */
/* #define SB_BORDER */

/*---------------------------MULTILINGUAL-------------------------------*/
/*
 * Allow run-time selection of Meta (Alt) to set the 8th bit on
 */


/*---------------------------DISPLAY OPTIONS----------------------------*/
/*
 * Force local connection to be socket (or other local) communication
 */
/* #define LOCAL_X_IS_UNIX */

/*
 * Have DISPLAY environment variable & "\E[7n" transmit display with IP number
 */
/* #define DISPLAY_IS_IP */

/*
 * Change what ESC Z transmits instead of the default "\E[?1;2c"
 */
/* #define ESCZ_ANSWER	"\033[?1;2C" */

/*
 * Allow foreground/background colour to be changed with xterm
 * operating system commands.
 */


/*
 * Remove secondary screen's independent cursor position, a la xterm
 */
/* #define NO_SECONDARY_SCREEN_CURSOR */

/*
 * Provide termcap/terminfo bw support (wrap backwards on cub1)
 */


/*
 * The duration of the visual bell flash in s. The default of 20ms
 * corresponds to the delay given in the terminfo flash code.
 */


/*--------------------------------OTHER---------------------------------*/

/*
 * Enable the linux yield/usleep hack, which can dramatically improve
 * performance by working around the linux kernel tty ratelimit bug.
 * Unfortunately, it seems screen is negatively affected by this on some
 * machines, so it is disabled by default. Use freebsd or any other kernel
 * that doesn't suffer form this bug and it will be fast either way.
 *
 * See command.C for details.
 */




/* DEFAULT RESOURCES VALUES */

/*
 * Define default colours for certain items.  If you have a low colour
 * display, then consider using colours which are already pre-allocated:
 *
 *   Black		(#000000)
 *   Red3		(#CD0000)
 *   Green3		(#00CD00)
 *   Yellow3		(#CDCD00)
 *   Blue3		(#0000CD)
 *   Magenta3		(#CD00CD)
 *   Cyan3		(#00CDCD)
 *   AntiqueWhite	(#FAEBD7)
 *   Grey25		(#404040)
 *   Red		(#FF0000)
 *   Green		(#00FF00)
 *   Yellow		(#FFFF00)
 *   Blue		(#0000FF)
 *   Magenta		(#FF00FF)
 *   Cyan		(#00FFFF)
 *   White		(#FFFFFF)
 */
/* These colours MUST be defined */





/*
 * The cursor colours are special.  Be very careful about setting these:
 * foreground/background colours may be modified by command line or resources
 * prior to this allocation.  Also, they are not valid if NO_CURSORCOLOR is
 * defined
 */



/*
 * Printer pipe which will be used for emulation of attached vt100 printer
 */


/*
 * Define defaults for backspace and delete keys - unless they have been
 * configured out with --disable-backspace-key / --disable-delete-key
 */



/*
 * Default separating chars for multiple-click selection
 * Space and tab are separate separating characters and are not settable
 */


/*
 * Width of the term internal border
 */


/*
 * Width of the term external border
 */


/*
 * Default number of extra dots between lines
 */


/*
 * Default number of lines in the scrollback buffer
 */
# 49 "rxvt.h" 2
# 70 "rxvt.h"
# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/limits.h" 1 3 4
/* This administrivia gets added to the beginning of limits.h
   if the system has its own version of limits.h.  */

/* APPLE LOCAL begin 4401222 */

/* Use "..." so that we find syslimits.h only in this same directory.  */
# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/syslimits.h" 1 3 4
/* syslimits.h stands for the system's own limits.h file.
   If we can use it ok unmodified, then we install this text.
   If fixincludes fixes it, then the fixed version is installed
   instead of this text.  */


/* APPLE LOCAL begin 4401222 */
/* APPLE LOCAL end 4401222 */
# 8 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/limits.h" 2 3 4


# 1 "/usr/include/limits.h" 1 3 4
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
/*	$NetBSD: limits.h,v 1.8 1996/10/21 05:10:50 jtc Exp $	*/

/*
 * Copyright (c) 1988, 1993
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
 *	@(#)limits.h	8.2 (Berkeley) 1/4/94
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
# 64 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/machine/limits.h" 1 3 4
/* This is the `system' limits.h, independent of any particular
   compiler.  GCC provides its own limits.h which can be found in
   /usr/lib/gcc, although it is not very informative.  
   This file is public domain.  */



# 1 "/usr/include/i386/limits.h" 1 3 4
/*
 * Copyright (c) 1988, 1993
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
 *	@(#)limits.h	8.3 (Berkeley) 1/4/94
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
# 40 "/usr/include/i386/limits.h" 2 3 4
# 1 "/usr/include/i386/_limits.h" 1 3 4
/*
 * Copyright (c) 2004 Apple Computer, Inc. All rights reserved.
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
# 41 "/usr/include/i386/limits.h" 2 3 4
# 49 "/usr/include/i386/limits.h" 3 4
/*
 * According to ANSI (section 2.2.4.2), the values below must be usable by
 * #if preprocessing directives.  Additionally, the expression must have the
 * same type as would an expression that is an object of the corresponding
 * type converted according to the integral promotions.  The subtraction for
 * INT_MIN and LONG_MIN is so the value is not unsigned; 2147483648 is an
 * unsigned int for 32-bit two's complement ANSI compilers (section 3.1.3.2).
 * These numbers work for pcc as well.  The UINT_MAX and ULONG_MAX values
 * are written as hex so that GCC will be quiet about large integer constants.
 */
# 9 "/usr/include/machine/limits.h" 2 3 4
# 65 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
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
/*	$NetBSD: syslimits.h,v 1.15 1997/06/25 00:48:09 lukem Exp $	*/

/*
 * Copyright (c) 1988, 1993
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
 *	@(#)syslimits.h	8.1 (Berkeley) 6/2/93
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
# 69 "/usr/include/sys/syslimits.h" 2 3 4


/*
 * Note: CHILD_MAX *must* be less than hard_maxproc, which is set at
 * compile time; you *cannot* set it higher than the hard limit!!
 */
# 107 "/usr/include/sys/syslimits.h" 3 4
     /* = ((PRIO_MAX - PRIO_MIN) / 2) + 1 */
     /* range: 0 - 39 [(2 * NZERO) - 1] */
     /* 0 is not actually used */
# 66 "/usr/include/limits.h" 2 3 4
# 141 "/usr/include/limits.h" 3 4
/* NZERO to be defined here. TBD. See also sys/param.h  */
# 11 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/limits.h" 2 3 4


/* APPLE LOCAL end 4401222 */



/* Number of bits in a `char'.  */



/* Maximum length of a multibyte character.  */




/* Minimum and maximum values a `signed char' can hold.  */





/* Maximum value an `unsigned char' can hold.  (Minimum is 0).  */







/* Minimum and maximum values a `char' can hold.  */
# 57 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/limits.h" 3 4
/* Minimum and maximum values a `signed short int' can hold.  */





/* Maximum value an `unsigned short int' can hold.  (Minimum is 0).  */







/* Minimum and maximum values a `signed int' can hold.  */





/* Maximum value an `unsigned int' can hold.  (Minimum is 0).  */



/* Minimum and maximum values a `signed long int' can hold.
   (Same as `int').  */





/* Maximum value an `unsigned long int' can hold.  (Minimum is 0).  */
# 105 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/limits.h" 3 4
/* Minimum and maximum values a `signed long long int' can hold.  */





/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0).  */





/* APPLE LOCAL begin 4401222 */
/* APPLE LOCAL end 4401222 */
# 71 "rxvt.h" 2

# 1 "/usr/X11/include/X11/cursorfont.h" 1
/* $Xorg: cursorfont.h,v 1.4 2001/02/09 02:03:39 xorgcvs Exp $ */
/*

Copyright 1987, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall
not be used in advertising or otherwise to promote the sale, use or
other dealings in this Software without prior written authorization
from The Open Group.

*/
# 73 "rxvt.h" 2
# 1 "/usr/X11/include/X11/keysym.h" 1
/* $Xorg: keysym.h,v 1.4 2001/02/09 02:03:23 xorgcvs Exp $ */

/***********************************************************

Copyright 1987, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.


Copyright 1987 by Digital Equipment Corporation, Maynard, Massachusetts.

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its 
documentation for any purpose and without fee is hereby granted, 
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in 
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.  

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/
/* $XFree86: xc/include/keysym.h,v 1.3 2001/01/17 17:53:12 dawes Exp $ */

/* default keysyms */
# 75 "/usr/X11/include/X11/keysym.h"
# 1 "/usr/X11/include/X11/keysymdef.h" 1
/* $Xorg: keysymdef.h,v 1.4 2001/02/09 02:03:23 $ */

/***********************************************************
Copyright 1987, 1994, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall
not be used in advertising or otherwise to promote the sale, use or
other dealings in this Software without prior written authorization
from The Open Group.


Copyright 1987 by Digital Equipment Corporation, Maynard, Massachusetts

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its
documentation for any purpose and without fee is hereby granted,
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/
/* $XFree86: $ */

/*
 * The "X11 Window System Protocol" standard defines in Appendix A the
 * keysym codes. These 29-bit integer values identify characters or
 * functions associated with each key (e.g., via the visible
 * engraving) of a keyboard layout. This file assigns mnemonic macro
 * names for these keysyms.
 *
 * This file is also compiled (by src/util/makekeys.c in libX11) into
 * hash tables that can be accessed with X11 library functions such as
 * XStringToKeysym() and XKeysymToString().
 *
 * Where a keysym corresponds one-to-one to an ISO 10646 / Unicode
 * character, this is noted in a comment that provides both the U+xxxx
 * Unicode position, as well as the official Unicode name of the
 * character.
 *
 * Where the correspondence is either not one-to-one or semantically
 * unclear, the Unicode position and name are enclosed in
 * parentheses. Such legacy keysyms should be considered deprecated
 * and are not recommended for use in future keyboard mappings.
 *
 * For any future extension of the keysyms with characters already
 * found in ISO 10646 / Unicode, the following algorithm shall be
 * used. The new keysym code position will simply be the character's
 * Unicode number plus 0x01000000. The keysym values in the range
 * 0x01000100 to 0x0110ffff are reserved to represent Unicode
 * characters in the range U+0100 to U+10FFFF.
 * 
 * While most newer Unicode-based X11 clients do already accept
 * Unicode-mapped keysyms in the range 0x01000100 to 0x0110ffff, it
 * will remain necessary for clients -- in the interest of
 * compatibility with existing servers -- to also understand the
 * existing legacy keysym values in the range 0x0100 to 0x20ff.
 *
 * Where several mnemonic names are defined for the same keysym in this
 * file, all but the first one listed should be considered deprecated.
 *
 * Mnemonic names for keysyms are defined in this file with lines
 * that match one of these Perl regular expressions:
 *
 *    /^\#define XK_([a-zA-Z_0-9]+)\s+0x([0-9a-f]+)\s*\/\* U+([0-9A-F]{4,6}) (.*) \*\/\s*$/
 *    /^\#define XK_([a-zA-Z_0-9]+)\s+0x([0-9a-f]+)\s*\/\*\(U+([0-9A-F]{4,6}) (.*)\)\*\/\s*$/
 *    /^\#define XK_([a-zA-Z_0-9]+)\s+0x([0-9a-f]+)\s*(\/\*\s*(.*)\s*\*\/)?\s*$/
 *
 * Before adding new keysyms, please do consider the following: In
 * addition to the keysym names defined in this file, the
 * XStringToKeysym() and XKeysymToString() functions will also handle
 * any keysym string of the form "U0020" to "U007E" and "U00A0" to
 * "U10FFFF" for all possible Unicode characters. In other words,
 * every possible Unicode character has already a keysym string
 * defined algorithmically, even if it is not listed here. Therefore,
 * defining an additional keysym macro is only necessary where a
 * non-hexadecimal mnemonic name is needed, or where the new keysym
 * does not represent any existing Unicode character.
 *
 * When adding new keysyms to this file, do not forget to also update the
 * following:
 *
 *   - the mappings in src/KeyBind.c in the repo
 *     git://anongit.freedesktop.org/xorg/lib/libX11
 *
 *   - the protocol specification in specs/XProtocol/X11.keysyms
 *     in the repo git://anongit.freedesktop.org/xorg/doc/xorg-docs
 *
 */




/*
 * TTY function keys, cleverly chosen to map to ASCII, for convenience of
 * programming, but could have been arbitrary (at the cost of lookup
 * tables in client code).
 */
# 140 "/usr/X11/include/X11/keysymdef.h"
/* International & multi-key character composition */







/* Japanese keyboard support */
# 171 "/usr/X11/include/X11/keysymdef.h"
/* 0xff31 thru 0xff3f are under XK_KOREAN */

/* Cursor control & motion */
# 188 "/usr/X11/include/X11/keysymdef.h"
/* Misc functions */
# 205 "/usr/X11/include/X11/keysymdef.h"
/* Keypad functions, keypad numbers cleverly chosen to map to ASCII */
# 248 "/usr/X11/include/X11/keysymdef.h"
/*
 * Auxiliary functions; note the duplicate definitions for left and right
 * function keys;  Sun keyboards and a few other manufacturers have such
 * function key groups on the left and/or right sides of the keyboard.
 * We've not found a keyboard with more than 35 function keys total.
 */
# 316 "/usr/X11/include/X11/keysymdef.h"
/* Modifiers */
# 335 "/usr/X11/include/X11/keysymdef.h"
/*
 * Keyboard (XKB) Extension function and modifier keys
 * (from Appendix C of "The X Keyboard Extension: Protocol Specification")
 * Byte 3 = 0xfe
 */
# 467 "/usr/X11/include/X11/keysymdef.h"
/*
 * 3270 Terminal Keys
 * Byte 3 = 0xfd
 */
# 505 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 1
 * (ISO/IEC 8859-1 = Unicode U+0020..U+00FF)
 * Byte 3 = 0
 */
# 711 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 2
 * Byte 3 = 1
 */
# 776 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 3
 * Byte 3 = 2
 */
# 807 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 4
 * Byte 3 = 3
 */
# 851 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 8
 */
# 883 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 9
 * Byte 3 = 0x13
 */







/*
 * Katakana
 * Byte 3 = 4
 */
# 972 "/usr/X11/include/X11/keysymdef.h"
/*
 * Arabic
 * Byte 3 = 5
 */
# 1071 "/usr/X11/include/X11/keysymdef.h"
/*
 * Cyrillic
 * Byte 3 = 6
 */
# 1219 "/usr/X11/include/X11/keysymdef.h"
/*
 * Greek
 * (based on an early draft of, and not quite identical to, ISO/IEC 8859-7)
 * Byte 3 = 7
 */
# 1303 "/usr/X11/include/X11/keysymdef.h"
/*
 * Technical
 * (from the DEC VT330/VT420 Technical Character Set, http://vt100.net/charsets/technical.html)
 * Byte 3 = 8
 */
# 1361 "/usr/X11/include/X11/keysymdef.h"
/*
 * Special
 * (from the DEC VT100 Special Graphics Character Set)
 * Byte 3 = 9
 */
# 1394 "/usr/X11/include/X11/keysymdef.h"
/*
 * Publishing
 * (these are probably from a long forgotten DEC Publishing
 * font that once shipped with DECwrite)
 * Byte 3 = 0x0a
 */
# 1487 "/usr/X11/include/X11/keysymdef.h"
/*
 * APL
 * Byte 3 = 0x0b
 */
# 1514 "/usr/X11/include/X11/keysymdef.h"
/*
 * Hebrew
 * Byte 3 = 0x0c
 */
# 1562 "/usr/X11/include/X11/keysymdef.h"
/*
 * Thai
 * Byte 3 = 0x0d
 */
# 1654 "/usr/X11/include/X11/keysymdef.h"
/*
 * Korean
 * Byte 3 = 0x0e
 */
# 1678 "/usr/X11/include/X11/keysymdef.h"
/* Hangul Consonant Characters */
# 1710 "/usr/X11/include/X11/keysymdef.h"
/* Hangul Vowel Characters */
# 1733 "/usr/X11/include/X11/keysymdef.h"
/* Hangul syllable-final (JongSeong) Characters */
# 1762 "/usr/X11/include/X11/keysymdef.h"
/* Ancient Hangul Consonant Characters */
# 1771 "/usr/X11/include/X11/keysymdef.h"
/* Ancient Hangul Vowel Characters */



/* Ancient Hangul syllable-final (JongSeong) Characters */




/* Korean currency symbol */




/*
 * Armenian
 */
# 1882 "/usr/X11/include/X11/keysymdef.h"
/*
 * Georgian
 */
# 1928 "/usr/X11/include/X11/keysymdef.h"
/*
 * Azeri (and other Turkic or Caucasian languages)
 */


/* latin */
# 1948 "/usr/X11/include/X11/keysymdef.h"
/* those are not really Caucasus */
/* For Inupiak */




/*
 * Vietnamese
 */
# 2071 "/usr/X11/include/X11/keysymdef.h"
/* one, two and three are defined above. */
# 76 "/usr/X11/include/X11/keysym.h" 2
# 74 "rxvt.h" 2
# 1 "/usr/X11/include/X11/keysymdef.h" 1
/* $Xorg: keysymdef.h,v 1.4 2001/02/09 02:03:23 $ */

/***********************************************************
Copyright 1987, 1994, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall
not be used in advertising or otherwise to promote the sale, use or
other dealings in this Software without prior written authorization
from The Open Group.


Copyright 1987 by Digital Equipment Corporation, Maynard, Massachusetts

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its
documentation for any purpose and without fee is hereby granted,
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/
/* $XFree86: $ */

/*
 * The "X11 Window System Protocol" standard defines in Appendix A the
 * keysym codes. These 29-bit integer values identify characters or
 * functions associated with each key (e.g., via the visible
 * engraving) of a keyboard layout. This file assigns mnemonic macro
 * names for these keysyms.
 *
 * This file is also compiled (by src/util/makekeys.c in libX11) into
 * hash tables that can be accessed with X11 library functions such as
 * XStringToKeysym() and XKeysymToString().
 *
 * Where a keysym corresponds one-to-one to an ISO 10646 / Unicode
 * character, this is noted in a comment that provides both the U+xxxx
 * Unicode position, as well as the official Unicode name of the
 * character.
 *
 * Where the correspondence is either not one-to-one or semantically
 * unclear, the Unicode position and name are enclosed in
 * parentheses. Such legacy keysyms should be considered deprecated
 * and are not recommended for use in future keyboard mappings.
 *
 * For any future extension of the keysyms with characters already
 * found in ISO 10646 / Unicode, the following algorithm shall be
 * used. The new keysym code position will simply be the character's
 * Unicode number plus 0x01000000. The keysym values in the range
 * 0x01000100 to 0x0110ffff are reserved to represent Unicode
 * characters in the range U+0100 to U+10FFFF.
 * 
 * While most newer Unicode-based X11 clients do already accept
 * Unicode-mapped keysyms in the range 0x01000100 to 0x0110ffff, it
 * will remain necessary for clients -- in the interest of
 * compatibility with existing servers -- to also understand the
 * existing legacy keysym values in the range 0x0100 to 0x20ff.
 *
 * Where several mnemonic names are defined for the same keysym in this
 * file, all but the first one listed should be considered deprecated.
 *
 * Mnemonic names for keysyms are defined in this file with lines
 * that match one of these Perl regular expressions:
 *
 *    /^\#define XK_([a-zA-Z_0-9]+)\s+0x([0-9a-f]+)\s*\/\* U+([0-9A-F]{4,6}) (.*) \*\/\s*$/
 *    /^\#define XK_([a-zA-Z_0-9]+)\s+0x([0-9a-f]+)\s*\/\*\(U+([0-9A-F]{4,6}) (.*)\)\*\/\s*$/
 *    /^\#define XK_([a-zA-Z_0-9]+)\s+0x([0-9a-f]+)\s*(\/\*\s*(.*)\s*\*\/)?\s*$/
 *
 * Before adding new keysyms, please do consider the following: In
 * addition to the keysym names defined in this file, the
 * XStringToKeysym() and XKeysymToString() functions will also handle
 * any keysym string of the form "U0020" to "U007E" and "U00A0" to
 * "U10FFFF" for all possible Unicode characters. In other words,
 * every possible Unicode character has already a keysym string
 * defined algorithmically, even if it is not listed here. Therefore,
 * defining an additional keysym macro is only necessary where a
 * non-hexadecimal mnemonic name is needed, or where the new keysym
 * does not represent any existing Unicode character.
 *
 * When adding new keysyms to this file, do not forget to also update the
 * following:
 *
 *   - the mappings in src/KeyBind.c in the repo
 *     git://anongit.freedesktop.org/xorg/lib/libX11
 *
 *   - the protocol specification in specs/XProtocol/X11.keysyms
 *     in the repo git://anongit.freedesktop.org/xorg/doc/xorg-docs
 *
 */




/*
 * TTY function keys, cleverly chosen to map to ASCII, for convenience of
 * programming, but could have been arbitrary (at the cost of lookup
 * tables in client code).
 */
# 140 "/usr/X11/include/X11/keysymdef.h"
/* International & multi-key character composition */







/* Japanese keyboard support */
# 171 "/usr/X11/include/X11/keysymdef.h"
/* 0xff31 thru 0xff3f are under XK_KOREAN */

/* Cursor control & motion */
# 188 "/usr/X11/include/X11/keysymdef.h"
/* Misc functions */
# 205 "/usr/X11/include/X11/keysymdef.h"
/* Keypad functions, keypad numbers cleverly chosen to map to ASCII */
# 248 "/usr/X11/include/X11/keysymdef.h"
/*
 * Auxiliary functions; note the duplicate definitions for left and right
 * function keys;  Sun keyboards and a few other manufacturers have such
 * function key groups on the left and/or right sides of the keyboard.
 * We've not found a keyboard with more than 35 function keys total.
 */
# 316 "/usr/X11/include/X11/keysymdef.h"
/* Modifiers */
# 335 "/usr/X11/include/X11/keysymdef.h"
/*
 * Keyboard (XKB) Extension function and modifier keys
 * (from Appendix C of "The X Keyboard Extension: Protocol Specification")
 * Byte 3 = 0xfe
 */
# 467 "/usr/X11/include/X11/keysymdef.h"
/*
 * 3270 Terminal Keys
 * Byte 3 = 0xfd
 */
# 505 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 1
 * (ISO/IEC 8859-1 = Unicode U+0020..U+00FF)
 * Byte 3 = 0
 */
# 711 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 2
 * Byte 3 = 1
 */
# 776 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 3
 * Byte 3 = 2
 */
# 807 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 4
 * Byte 3 = 3
 */
# 851 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 8
 */
# 883 "/usr/X11/include/X11/keysymdef.h"
/*
 * Latin 9
 * Byte 3 = 0x13
 */







/*
 * Katakana
 * Byte 3 = 4
 */
# 972 "/usr/X11/include/X11/keysymdef.h"
/*
 * Arabic
 * Byte 3 = 5
 */
# 1071 "/usr/X11/include/X11/keysymdef.h"
/*
 * Cyrillic
 * Byte 3 = 6
 */
# 1219 "/usr/X11/include/X11/keysymdef.h"
/*
 * Greek
 * (based on an early draft of, and not quite identical to, ISO/IEC 8859-7)
 * Byte 3 = 7
 */
# 1303 "/usr/X11/include/X11/keysymdef.h"
/*
 * Technical
 * (from the DEC VT330/VT420 Technical Character Set, http://vt100.net/charsets/technical.html)
 * Byte 3 = 8
 */
# 1361 "/usr/X11/include/X11/keysymdef.h"
/*
 * Special
 * (from the DEC VT100 Special Graphics Character Set)
 * Byte 3 = 9
 */
# 1394 "/usr/X11/include/X11/keysymdef.h"
/*
 * Publishing
 * (these are probably from a long forgotten DEC Publishing
 * font that once shipped with DECwrite)
 * Byte 3 = 0x0a
 */
# 1487 "/usr/X11/include/X11/keysymdef.h"
/*
 * APL
 * Byte 3 = 0x0b
 */
# 1514 "/usr/X11/include/X11/keysymdef.h"
/*
 * Hebrew
 * Byte 3 = 0x0c
 */
# 1562 "/usr/X11/include/X11/keysymdef.h"
/*
 * Thai
 * Byte 3 = 0x0d
 */
# 1654 "/usr/X11/include/X11/keysymdef.h"
/*
 * Korean
 * Byte 3 = 0x0e
 */
# 1678 "/usr/X11/include/X11/keysymdef.h"
/* Hangul Consonant Characters */
# 1710 "/usr/X11/include/X11/keysymdef.h"
/* Hangul Vowel Characters */
# 1733 "/usr/X11/include/X11/keysymdef.h"
/* Hangul syllable-final (JongSeong) Characters */
# 1762 "/usr/X11/include/X11/keysymdef.h"
/* Ancient Hangul Consonant Characters */
# 1771 "/usr/X11/include/X11/keysymdef.h"
/* Ancient Hangul Vowel Characters */



/* Ancient Hangul syllable-final (JongSeong) Characters */




/* Korean currency symbol */




/*
 * Armenian
 */
# 1882 "/usr/X11/include/X11/keysymdef.h"
/*
 * Georgian
 */
# 1928 "/usr/X11/include/X11/keysymdef.h"
/*
 * Azeri (and other Turkic or Caucasian languages)
 */


/* latin */
# 1948 "/usr/X11/include/X11/keysymdef.h"
/* those are not really Caucasus */
/* For Inupiak */




/*
 * Vietnamese
 */
# 2071 "/usr/X11/include/X11/keysymdef.h"
/* one, two and three are defined above. */
# 75 "rxvt.h" 2
# 1 "/usr/X11/include/X11/Xatom.h" 1



/* THIS IS A GENERATED FILE
 *
 * Do not change!  Changing this file implies a protocol change!
 */
# 76 "rxvt.h" 2

# 1 "encoding.h" 1



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
# 5 "encoding.h" 2

typedef uint32_t unicode_t;

// order must match the table in encoding.C(!)
enum codeset {
  CS_UNKNOWN = 0,
  CS_US_ASCII,

  CS_ISO8859_1,
  CS_ISO8859_2,
  CS_ISO8859_3,
  CS_ISO8859_4,
  CS_ISO8859_5,
  CS_ISO8859_6,
  CS_ISO8859_7,
  CS_ISO8859_8,
  CS_ISO8859_9,
  CS_ISO8859_10,
  CS_ISO8859_11,
  CS_ISO8859_13,
  CS_ISO8859_14,
  CS_ISO8859_15,
  CS_ISO8859_16,

  CS_KOI8_R,
  CS_KOI8_U,
  CS_JIS0201_1976_0,
  CS_JIS0208_1990_0,
  CS_JIS0212_1990_0,
  CS_JIS0213_1,
  CS_JIS0213_2,

  CS_KSC5601_1987_0,

  CS_GB2312_1980_0,
  CS_GBK_0,

  CS_CNS11643_1992_1,
  CS_CNS11643_1992_2,
  CS_CNS11643_1992_3,
  CS_CNS11643_1992_4,
  CS_CNS11643_1992_5,
  CS_CNS11643_1992_6,
  CS_CNS11643_1992_7,
  CS_CNS11643_1992_F,

  CS_BIG5,
  CS_BIG5_EXT,
  CS_BIG5_PLUS,

  CS_VISCII,

  CS_UNICODE_16, /* 16-bit subset of unicode, for X11 */
  CS_UNICODE,

  NUM_CODESETS
};

codeset codeset_from_name (const char *name);

enum {
  ZERO_WIDTH_CHAR = 0x200b,
  REPLACEMENT_CHAR = 0xfffd,
  NOCHAR = 0xffff, // must be invalid in ANY codeset (!)
};

struct rxvt_codeset_conv
{
  uint32_t (*from_unicode) (unicode_t unicode);



};

extern const rxvt_codeset_conv rxvt_codeset[NUM_CODESETS];

extern unicode_t rxvt_compose (unicode_t c1, unicode_t c2);




struct unicode // namespace für arme
{
  static bool is_space (unicode_t c);
};
# 78 "rxvt.h" 2
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
# 79 "rxvt.h" 2
# 1 "rxvtfont.h" 1



# 1 "/usr/X11/include/X11/Xlib.h" 1
/* $XdotOrg: lib/X11/include/X11/Xlib.h,v 1.6 2005-11-08 06:33:25 jkj Exp $ */
/* $Xorg: Xlib.h,v 1.6 2001/02/09 02:03:38 xorgcvs Exp $ */
/* 

Copyright 1985, 1986, 1987, 1991, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

*/
/* $XFree86: xc/lib/X11/Xlib.h,v 3.25 2003/11/17 22:20:10 dawes Exp $ */


/*
 *	Xlib.h - Header definition and support file for the C subroutine
 *	interface library (Xlib) to the X Window System Protocol (V11).
 *	Structures and symbols starting with "_" are private to the library.
 */
# 5 "rxvtfont.h" 2




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
# 10 "rxvtfont.h" 2

# 1 "feature.h" 1
/*
 * File:	feature.h
 *
 * Compile-time configuration.
 *-----------------------------------------------------------------------
 * Copyright (c) 1997,1998 Oezguer Kesim <kesim@math.fu-berlin.de>
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
 *
 *----------------------------------------------------------------------*/
# 12 "rxvtfont.h" 2


# 1 "rxvttoolkit.h" 1
/*----------------------------------------------------------------------*
 * File:	rxvttoolkit.h - provide toolkit-functionality for rxvt.
 *----------------------------------------------------------------------*
 *
 * All portions of code are copyright by their respective author/s.
 * Copyright (c) 2003-2006 Marc Lehmann <pcg@goof.com>
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




# 1 "/usr/X11/include/X11/Xlib.h" 1
/* $XdotOrg: lib/X11/include/X11/Xlib.h,v 1.6 2005-11-08 06:33:25 jkj Exp $ */
/* $Xorg: Xlib.h,v 1.6 2001/02/09 02:03:38 xorgcvs Exp $ */
/* 

Copyright 1985, 1986, 1987, 1991, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

*/
/* $XFree86: xc/lib/X11/Xlib.h,v 3.25 2003/11/17 22:20:10 dawes Exp $ */


/*
 *	Xlib.h - Header definition and support file for the C subroutine
 *	interface library (Xlib) to the X Window System Protocol (V11).
 *	Structures and symbols starting with "_" are private to the library.
 */
# 27 "rxvttoolkit.h" 2





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
# 64 "/usr/include/signal.h" 2 3 4







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
# 33 "rxvttoolkit.h" 2



# 1 "callback.h" 1
// THIS IS A GENERATED FILE: RUN callback.pl to regenerate it
// THIS IS A GENERATED FILE: callback.pl is part of the GVPE
// THIS IS A GENERATED FILE: distribution.

/*
    callback.h -- C++ callback mechanism
    Copyright (C) 2003-2007 Marc Lehmann <pcg@goof.com>
 
    This file is part of GVPE.

    GVPE is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
 
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
 
    You should have received a copy of the GNU General Public License
    along with gvpe; if not, write to the Free Software
    Foundation, Inc. 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/






template<typename signature>
struct callback;

template<class R>
struct callback<R ()>
{
  typedef R (*ptr_type)(void *self);

  template<class K, R (K::*method)()>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call () const
  {
    return func (self);
  }

  R operator ()() const
  {
    return call ();
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)()>
  static R thunk (void *self)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) ();
  }
};

template<class R, class A1>
struct callback<R (A1)>
{
  typedef R (*ptr_type)(void *self, A1);

  template<class K, R (K::*method)(A1)>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call (A1 a1) const
  {
    return func (self, a1);
  }

  R operator ()(A1 a1) const
  {
    return call (a1);
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)(A1)>
  static R thunk (void *self, A1 a1)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) (a1);
  }
};

template<class R, class A1, class A2>
struct callback<R (A1, A2)>
{
  typedef R (*ptr_type)(void *self, A1, A2);

  template<class K, R (K::*method)(A1, A2)>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call (A1 a1, A2 a2) const
  {
    return func (self, a1, a2);
  }

  R operator ()(A1 a1, A2 a2) const
  {
    return call (a1, a2);
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)(A1, A2)>
  static R thunk (void *self, A1 a1, A2 a2)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) (a1, a2);
  }
};

template<class R, class A1, class A2, class A3>
struct callback<R (A1, A2, A3)>
{
  typedef R (*ptr_type)(void *self, A1, A2, A3);

  template<class K, R (K::*method)(A1, A2, A3)>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call (A1 a1, A2 a2, A3 a3) const
  {
    return func (self, a1, a2, a3);
  }

  R operator ()(A1 a1, A2 a2, A3 a3) const
  {
    return call (a1, a2, a3);
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)(A1, A2, A3)>
  static R thunk (void *self, A1 a1, A2 a2, A3 a3)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) (a1, a2, a3);
  }
};

template<class R, class A1, class A2, class A3, class A4>
struct callback<R (A1, A2, A3, A4)>
{
  typedef R (*ptr_type)(void *self, A1, A2, A3, A4);

  template<class K, R (K::*method)(A1, A2, A3, A4)>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call (A1 a1, A2 a2, A3 a3, A4 a4) const
  {
    return func (self, a1, a2, a3, a4);
  }

  R operator ()(A1 a1, A2 a2, A3 a3, A4 a4) const
  {
    return call (a1, a2, a3, a4);
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)(A1, A2, A3, A4)>
  static R thunk (void *self, A1 a1, A2 a2, A3 a3, A4 a4)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) (a1, a2, a3, a4);
  }
};

template<class R, class A1, class A2, class A3, class A4, class A5>
struct callback<R (A1, A2, A3, A4, A5)>
{
  typedef R (*ptr_type)(void *self, A1, A2, A3, A4, A5);

  template<class K, R (K::*method)(A1, A2, A3, A4, A5)>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call (A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) const
  {
    return func (self, a1, a2, a3, a4, a5);
  }

  R operator ()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) const
  {
    return call (a1, a2, a3, a4, a5);
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)(A1, A2, A3, A4, A5)>
  static R thunk (void *self, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) (a1, a2, a3, a4, a5);
  }
};

template<class R, class A1, class A2, class A3, class A4, class A5, class A6>
struct callback<R (A1, A2, A3, A4, A5, A6)>
{
  typedef R (*ptr_type)(void *self, A1, A2, A3, A4, A5, A6);

  template<class K, R (K::*method)(A1, A2, A3, A4, A5, A6)>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call (A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) const
  {
    return func (self, a1, a2, a3, a4, a5, a6);
  }

  R operator ()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) const
  {
    return call (a1, a2, a3, a4, a5, a6);
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)(A1, A2, A3, A4, A5, A6)>
  static R thunk (void *self, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) (a1, a2, a3, a4, a5, a6);
  }
};

template<class R, class A1, class A2, class A3, class A4, class A5, class A6, class A7>
struct callback<R (A1, A2, A3, A4, A5, A6, A7)>
{
  typedef R (*ptr_type)(void *self, A1, A2, A3, A4, A5, A6, A7);

  template<class K, R (K::*method)(A1, A2, A3, A4, A5, A6, A7)>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call (A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) const
  {
    return func (self, a1, a2, a3, a4, a5, a6, a7);
  }

  R operator ()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) const
  {
    return call (a1, a2, a3, a4, a5, a6, a7);
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)(A1, A2, A3, A4, A5, A6, A7)>
  static R thunk (void *self, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) (a1, a2, a3, a4, a5, a6, a7);
  }
};

template<class R, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8>
struct callback<R (A1, A2, A3, A4, A5, A6, A7, A8)>
{
  typedef R (*ptr_type)(void *self, A1, A2, A3, A4, A5, A6, A7, A8);

  template<class K, R (K::*method)(A1, A2, A3, A4, A5, A6, A7, A8)>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call (A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) const
  {
    return func (self, a1, a2, a3, a4, a5, a6, a7, a8);
  }

  R operator ()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) const
  {
    return call (a1, a2, a3, a4, a5, a6, a7, a8);
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)(A1, A2, A3, A4, A5, A6, A7, A8)>
  static R thunk (void *self, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) (a1, a2, a3, a4, a5, a6, a7, a8);
  }
};

template<class R, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9>
struct callback<R (A1, A2, A3, A4, A5, A6, A7, A8, A9)>
{
  typedef R (*ptr_type)(void *self, A1, A2, A3, A4, A5, A6, A7, A8, A9);

  template<class K, R (K::*method)(A1, A2, A3, A4, A5, A6, A7, A8, A9)>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call (A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9) const
  {
    return func (self, a1, a2, a3, a4, a5, a6, a7, a8, a9);
  }

  R operator ()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9) const
  {
    return call (a1, a2, a3, a4, a5, a6, a7, a8, a9);
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)(A1, A2, A3, A4, A5, A6, A7, A8, A9)>
  static R thunk (void *self, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) (a1, a2, a3, a4, a5, a6, a7, a8, a9);
  }
};

template<class R, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10>
struct callback<R (A1, A2, A3, A4, A5, A6, A7, A8, A9, A10)>
{
  typedef R (*ptr_type)(void *self, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10);

  template<class K, R (K::*method)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10)>
  void set (K *object)
  {
    self = object;
    func = thunk<K, method>;
  }

  R call (A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10) const
  {
    return func (self, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  }

  R operator ()(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10) const
  {
    return call (a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  }

private:

  void *self;
  ptr_type func;

  template<class klass, R (klass::*method)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10)>
  static R thunk (void *self, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10)
  {
    klass *obj = static_cast<klass *>(self);
    return (obj->*method) (a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  }
};
# 37 "rxvttoolkit.h" 2

// see rxvttoolkit.C:xa_names, which must be kept in sync
enum {
  XA_TEXT,
  XA_COMPOUND_TEXT,
  XA_UTF8_STRING,
  XA_MULTIPLE,
  XA_TARGETS,
  XA_TIMESTAMP,
  XA_VT_SELECTION,
  XA_INCR,
  XA_WM_PROTOCOLS,
  XA_WM_DELETE_WINDOW,
  XA_CLIPBOARD,
  XA_AVERAGE_WIDTH,
  XA_WEIGHT_NAME,
  XA_SLANT,
  XA_CHARSET_REGISTRY,
  XA_CHARSET_ENCODING,
# 96 "rxvttoolkit.h"
  NUM_XA
};

struct rxvt_term;
struct rxvt_display;

struct im_watcher;
struct xevent_watcher;

template<class watcher>
struct event_vec : vector<watcher *>
{
  void erase_unordered (unsigned int pos)
  {
    watcher *w = (*this)[this->size () - 1];
    this->pop_back ();

    if (!this->empty ())
      if (((*this)[pos] = w)) // '=' is correct!
        w->active = pos + 1;
  }
};

struct rxvt_watcher
{
  int active; /* 0 == inactive, else index into respective vector */

  bool is_active () { return active; }

  rxvt_watcher () : active (0) { }
};

struct refcounted
{
  int referenced;
  char *id;

  refcounted (const char *id);
  bool ref_init () { return false; }
  void ref_next () { }
  ~refcounted ();
};

template<class T>
struct refcache : vector<T *>
{
  T *get (const char *id);
  void put (T *obj);
  void clear ();

  ~refcache ()
  {
    clear ();
  }
};

/////////////////////////////////////////////////////////////////////////////

struct rxvt_screen;

struct rxvt_drawable
{
  rxvt_screen *screen;
  Drawable drawable;
  operator Drawable() { return drawable; }






  rxvt_drawable (rxvt_screen *screen, Drawable drawable)
  : screen(screen),



    drawable(drawable)
  { }




};

/////////////////////////////////////////////////////////////////////////////
# 197 "rxvttoolkit.h"
struct rxvt_screen
{
  rxvt_display *display;
  Display *dpy;
  int depth;
  Visual *visual;
  Colormap cmap;
# 215 "rxvttoolkit.h"
  void set (rxvt_display *disp);
  void select_visual (int bitdepth);
  void clear ();
};

struct rxvt_display : refcounted
{
  event_vec<xevent_watcher> xw;

  ev::prepare flush_ev; void flush_cb (ev::prepare &w, int revents);
  ev::io x_ev ; void x_cb (ev::io &w, int revents);
# 235 "rxvttoolkit.h"
//public
  Display *dpy;
  int screen;
  Window root;
  rxvt_term *selection_owner;
  Atom xa[NUM_XA];
  bool is_local;




  rxvt_display (const char *id);
  XrmDatabase get_resources (bool refresh);
  bool ref_init ();
  void ref_next ();
  ~rxvt_display ();

  void flush ()
  {
    flush_ev.start ();
  }

  Atom atom (const char *name);
  void set_selection_owner (rxvt_term *owner);

  void reg (xevent_watcher *w);
  void unreg (xevent_watcher *w);
# 270 "rxvttoolkit.h"
};
# 287 "rxvttoolkit.h"
struct xevent_watcher : rxvt_watcher, callback<void (XEvent &)>
{
  Window window;

  void start (rxvt_display *display, Window window)
  {
    this->window = window;
    display->reg (this);
  }

  void stop (rxvt_display *display)
  {
    display->unreg (this);
  }
};

extern refcache<rxvt_display> displays;

/////////////////////////////////////////////////////////////////////////////

typedef unsigned long Pixel;

struct rgba
{
  unsigned short r, g, b, a;

  enum { MIN_CC = 0x0000, MAX_CC = 0xffff };

  rgba ()
  { }

  rgba (unsigned short r, unsigned short g, unsigned short b, unsigned short a = MAX_CC)
  : r(r), g(g), b(b), a(a)
  { }
};

struct rxvt_color
{



  XColor c;


  operator Pixel () const { return c.pixel; }

  bool operator == (const rxvt_color &b) const { return Pixel (*this) == Pixel (b); }
  bool operator != (const rxvt_color &b) const { return Pixel (*this) != Pixel (b); }

  bool is_opaque () const
  {



    return 1;

  }

  bool alloc (rxvt_screen *screen, const rgba &color);
  void free (rxvt_screen *screen);

  void get (rgba &color);
  void get (XColor &color);

  bool set (rxvt_screen *screen, const char *name);
  bool set (rxvt_screen *screen, const rgba &color);

  void fade (rxvt_screen *screen, int percent, rxvt_color &result, const rgba &to = rgba (0, 0, 0));
};
# 15 "rxvtfont.h" 2

struct rxvt_term;

struct rxvt_fontprop
{
  enum {
    unset = -1,
    medium = 100, bold = 200,
    roman = 0, italic = 100,
  };
  int width, height, ascent;
  int weight, slant;
};

struct rxvt_font
{
  // managed by the fontset
  rxvt_term *term;
  void set_term (rxvt_term *term) { this->term = term; }

  char *name;
  codeset cs;
  bool loaded; // wether we tried loading it before (not wether it's loaded)

  // managed by the font object
  int ascent, descent,
      width, height;

  void set_name (char *name);

  rxvt_font ();
  virtual ~rxvt_font () { free (name); };

  virtual void clear () { };

  void clear_rect (rxvt_drawable &d, int x, int y, int w, int h, int color) const;

  virtual rxvt_fontprop properties () = 0;

  virtual bool load (const rxvt_fontprop &morph, bool force_prop) = 0;
  virtual bool has_char (uint32_t unicode, const rxvt_fontprop *prop, bool &careful) const = 0;

  virtual void draw (rxvt_drawable &d,
                     int x, int y,
                     const text_t *text, int len,
                     int fg, int bg) = 0;
};



struct rxvt_fallback_font;

struct rxvt_fontset
{
  char *fontdesc;

  rxvt_fontset (rxvt_term *term);
  ~rxvt_fontset ();

  bool populate (const char *desc);
  void set_prop (const rxvt_fontprop &prop, bool force_prop) { this->prop = prop; this->force_prop = force_prop; }
  int find_font (uint32_t unicode);
  int find_font (const char *name) const;
  bool realize_font (int i);

  // font-id's MUST fit into a signed 16 bit integer, and within 0..255
  rxvt_font *operator [] (int id) const
  {
    return fonts[id & 0x7f];
  }

private:
  rxvt_term *term;
  rxvt_fontprop prop;
  bool force_prop;
  simplevec<rxvt_font *> fonts;
  const rxvt_fallback_font *fallback;

  typedef unsigned char pagemap[256];
  vector<pagemap *> fmap;

  void clear ();
  rxvt_font *new_font (const char *name, codeset cs);
  void add_fonts (const char *desc);
};
# 80 "rxvt.h" 2
# 1 "rxvttoolkit.h" 1
/*----------------------------------------------------------------------*
 * File:	rxvttoolkit.h - provide toolkit-functionality for rxvt.
 *----------------------------------------------------------------------*
 *
 * All portions of code are copyright by their respective author/s.
 * Copyright (c) 2003-2006 Marc Lehmann <pcg@goof.com>
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
# 81 "rxvt.h" 2
# 1 "scrollbar.h" 1



# 1 "/usr/X11/include/X11/Xlib.h" 1
/* $XdotOrg: lib/X11/include/X11/Xlib.h,v 1.6 2005-11-08 06:33:25 jkj Exp $ */
/* $Xorg: Xlib.h,v 1.6 2001/02/09 02:03:38 xorgcvs Exp $ */
/* 

Copyright 1985, 1986, 1987, 1991, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

*/
/* $XFree86: xc/lib/X11/Xlib.h,v 3.25 2003/11/17 22:20:10 dawes Exp $ */


/*
 *	Xlib.h - Header definition and support file for the C subroutine
 *	interface library (Xlib) to the X Window System Protocol (V11).
 *	Structures and symbols starting with "_" are private to the library.
 */
# 5 "scrollbar.h" 2

struct rxvt_term;
# 24 "scrollbar.h"
/*
 * NeXT scrollbar defines
 */
# 42 "scrollbar.h"
enum sb_state {
  STATE_IDLE = 1,
  STATE_MOTION,
  STATE_UP,
  STATE_DOWN,
};

struct scrollBar_t
{
  rxvt_term *term;
  char state; /* scrollbar state                          */
  char init; /* scrollbar has been initialised           */
  unsigned int beg; /* slider sub-window begin height           */
  unsigned int end; /* slider sub-window end height             */
  unsigned int top; /* slider top position                      */
  unsigned int bot; /* slider bottom position                   */
  unsigned int style; /* style: rxvt, xterm, next                 */
  unsigned int width; /* scrollbar width                          */
  int shadow; /* scrollbar shadow width                   */
  int last_bot; /* scrollbar last bottom position           */
  int last_top; /* scrollbar last top position              */
  int last_state; /* scrollbar last state                     */
  unsigned char align;
  Window win;
  Cursor leftptr_cursor;
  int (scrollBar_t::*update)(int);
  void setup (rxvt_term *);
  void resize ();
  int map (int);
  int show (int);
  void destroy ();

  bool upButton (int y)
  {
    if (style == 1)
      return y > end && y <= end + width + 1;
    if (style == 8)
      return y < beg;
    return false;
  }
  bool dnButton (int y)
  {
    if (style == 1)
      return y > end + width + 1;
    if (style == 8)
      return y > end;
    return false;
  }
  unsigned min_height ()
  {
    return style == 1 ? ((19 - (1 * 2) - 1) - (1 * 2)) : 10;
  }
  unsigned size ()
  {
    return end - beg - min_height ();
  }
  unsigned total_width ()
  {
    return width + shadow * 2;
  }
# 123 "scrollbar.h"
  GC xscrollbarGC,
                  ShadowGC;



  GC pscrollbarGC;


private:
  // update style dependent data
  void update_data ();

  // scrollbar-next.C
  int show_next (int);
  // scrollbar-rxvt.C
  int show_rxvt (int);
  // scrollbar-xterm.C
  int show_xterm (int);
  // scrollbar-plain.C
  int show_plain (int);

  void init_next ();
};





 /*
  *    +-------------+
  *    |             | <---< SB_PADDING
  *    | ::::::::::: |
  *    | ::::::::::: |
  *   '''''''''''''''''
  *   ,,,,,,,,,,,,,,,,,
  *    | ::::::::::: |
  *    | ::::::::::: |
  *    |  +---------------< SB_BEVEL_WIDTH_UPPER_LEFT
  *    |  | :::::::: |
  *    |  V :::: vv-------< SB_BEVEL_WIDTH_LOWER_RIGHT
  *    | +---------+ |
  *    | | ......%%| |
  *    | | ......%%| |
  *    | | .. ()..%%| |
  *    | | ......%%| |
  *    | | %%%%%%%%| |
  *    | +---------+ | <.........................
  *    |             | <---< SB_PADDING         :
  *    | +---------+ | <-+..........            :---< SB_BUTTON_TOTAL_HEIGHT
  *    | | ......%%| |   |         :            :
  *    | | ../\..%%| |   |---< SB_BUTTON_HEIGHT :
  *    | | %%%%%%%%| |   |         :            :
  *    | +---------+ | <-+         :            :
  *    |             |             :            :
  *    | +---------+ | <-+         :---< SB_BUTTON_BOTH_HEIGHT
  *    | | ......%%| |   |         :            :
  *    | | ..\/..%%| |   |         :            :
  *    | | %%%%%%%%| |   |---< SB_BUTTON_SINGLE_HEIGHT
  *    | +---------+ |   |         :            :
  *    |             |   |         :            :
  *    +-------------+ <-+.........:............:
  *    ^^|_________| :
  *    ||     |      :
  *    ||     +---< SB_BUTTON_WIDTH
  *    ||            :
  *    |+------< SB_PADDING
  *    |:            :
  *    +----< SB_BORDER_WIDTH
  *     :            :
  *     :............:
  *           |
  *           +---< SB_WIDTH_NEXT
  */
# 82 "rxvt.h" 2
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
# 16 "ev_cpp.h" 2
# 83 "rxvt.h" 2
# 1 "salloc.h" 1



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
# 5 "salloc.h" 2

// small blocks allocator

struct rxvt_salloc
{
  struct chain {
    struct chain *next;
  };

  chain *firstblock;
  chain *firstline;
  unsigned int firstfree;
  unsigned int size;

  rxvt_salloc (unsigned int size);
  ~rxvt_salloc ();

  void *alloc ();
  void *alloc (void *data, unsigned int datalen);
  void free (void *data);
};
# 84 "rxvt.h" 2
# 1 "libptytty.h" 1
// This file is part of libptytty. Do not make local modifications.
// http://software.schmorp.de/pkg/libptytty






// C++ API

struct ptytty {
  int pty; // pty file descriptor; connected to terminal emulator
  int tty; // tty file descriptor; connected to child

  virtual ~ptytty ()
  {
  }

  virtual bool get () = 0;
  virtual void login (int cmd_pid, bool login_shell, const char *hostname) = 0;

  void close_tty ();
  bool make_controlling_tty ();
  void set_utf8_mode (bool on);

  static void sanitise_stdfd ();
  static void init ();
  static ptytty *create (); // create a new pty object

  static void drop_privileges ();
  static void use_helper ();

  static bool send_fd (int socket, int fd);
  static int recv_fd (int socket);

protected:

  ptytty ()
  : pty(-1), tty(-1)
  {
  }
};
# 85 "rxvt.h" 2

# 1 "rxvtperl.h" 1
/*
 * rxvtperl.h
 */
# 87 "rxvt.h" 2

// try to avoid some macros to decrease code size, on some systems
# 97 "rxvt.h"
/*
 *****************************************************************************
 * SYSTEM HACKS
 *****************************************************************************
 */





# 1 "/usr/include/termios.h" 1 3 4
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
# 27 "/usr/include/termios.h" 2 3 4
# 1 "/usr/include/sys/termios.h" 1 3 4
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
/* Copyright (c) 1997 Apple Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1988, 1989, 1993, 1994
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
 *      This product includes software developed by the University of
 *      California, Berkeley and its contributors.
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
 *	@(#)termios.h	8.3 (Berkeley) 3/28/94
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
# 68 "/usr/include/sys/termios.h" 2 3 4

/*
 * Special Control Characters
 *
 * Index into c_cc[] character array.
 *
 *	Name	     Subscript	Enabled by
 */
# 89 "/usr/include/sys/termios.h" 3 4
/*			7	   spare 1 */
# 106 "/usr/include/sys/termios.h" 3 4
/*			19	   spare 2 */
# 118 "/usr/include/sys/termios.h" 3 4
/*
 * Input flags - software input processing
 */
# 138 "/usr/include/sys/termios.h" 3 4
/*
 * Output flags - software output processing
 */






/*
 * The following block of features is unimplemented.  Use of these flags in
 * programs will currently result in unexpected behaviour.
 *
 * - Begin unimplemented features
 */
# 165 "/usr/include/sys/termios.h" 3 4
/*
 * These manifest constants have the same names as those in the header
 * <sys/ioctl_compat.h>, so you are not permitted to have both definitions
 * in scope simultaneously in the same compilation unit.  Nevertheless,
 * they are required to be in scope when _POSIX_C_SOURCE is requested;
 * this means that including the <sys/ioctl_compat.h> header before this
 * one when _POSIX_C_SOURCE is in scope will result in redefintions.  We
 * attempt to maintain these as the same values so as to avoid this being
 * an outright error in most compilers.
 */
# 184 "/usr/include/sys/termios.h" 3 4
/* not in sys/ioctl_compat.h, use OXTABS value */
# 197 "/usr/include/sys/termios.h" 3 4
/*
 * + End unimplemented features
 */

/*
 * Control flags - hardware control of terminal
 */
# 229 "/usr/include/sys/termios.h" 3 4
/*
 * "Local" flags - dumping ground for other state
 *
 * Warning: some flags in this structure begin with
 * the letter "I" and look like they belong in the
 * input flag.
 */
# 265 "/usr/include/sys/termios.h" 3 4
typedef unsigned long tcflag_t;
typedef unsigned char cc_t;
typedef unsigned long speed_t;

struct termios {
 tcflag_t c_iflag; /* input flags */
 tcflag_t c_oflag; /* output flags */
 tcflag_t c_cflag; /* control flags */
 tcflag_t c_lflag; /* local flags */
 cc_t c_cc[20]; /* control chars */
 speed_t c_ispeed; /* input speed */
 speed_t c_ospeed; /* output speed */
};


/*
 * Commands passed to tcsetattr() for setting the termios structure.
 */







/*
 * Standard speeds
 */
# 330 "/usr/include/sys/termios.h" 3 4
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
# 331 "/usr/include/sys/termios.h" 2 3 4

extern "C" {
speed_t cfgetispeed(const struct termios *);
speed_t cfgetospeed(const struct termios *);
int cfsetispeed(struct termios *, speed_t);
int cfsetospeed(struct termios *, speed_t);
int tcgetattr(int, struct termios *);
int tcsetattr(int, int, const struct termios *);
int tcdrain(int) __asm("_" "tcdrain" /* nothing */ "$UNIX2003");
int tcflow(int, int);
int tcflush(int, int);
int tcsendbreak(int, int);


void cfmakeraw(struct termios *);
int cfsetspeed(struct termios *, speed_t);

}




/*
 * Include tty ioctl's that aren't just for backwards compatibility
 * with the old tty driver.  These ioctl definitions were previously
 * in <sys/ioctl.h>.
 */
# 1 "/usr/include/sys/ttycom.h" 1 3 4
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
/* Copyright (c) 1997 Apple Computer, Inc. All Rights Reserved */
/*-
 * Copyright (c) 1982, 1986, 1990, 1993, 1994
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
 *      This product includes software developed by the University of
 *      California, Berkeley and its contributors.
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
 *	@(#)ttycom.h	8.1 (Berkeley) 3/28/94
 */
# 359 "/usr/include/sys/termios.h" 2 3 4


/*
 * END OF PROTECTED INCLUDE.
 */



# 1 "/usr/include/sys/ttydefaults.h" 1 3 4
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
/* Copyright (c) 1997 Apple Computer, Inc. All Rights Reserved */
/*-
 * Copyright (c) 1982, 1986, 1993
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
 *      This product includes software developed by the University of
 *      California, Berkeley and its contributors.
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
 *	@(#)ttydefaults.h	8.4 (Berkeley) 1/21/94
 */

/*
 * System wide defaults for terminal state.
 */



/*
 * Defaults on "first" open.
 */






/*
 * Control Character Defaults
 */
# 106 "/usr/include/sys/ttydefaults.h" 3 4
/* compat */




/* PROTECTED INCLUSION ENDS HERE */


/*
 * #define TTYDEFCHARS to include an array of default control characters.
 */
# 368 "/usr/include/sys/termios.h" 2 3 4
# 28 "/usr/include/termios.h" 2 3 4
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
# 29 "/usr/include/termios.h" 2 3 4






extern "C" {
pid_t tcgetsid(int);
}
# 108 "rxvt.h" 2

# 1 "background.h" 1
/*
 * background.h
 */
# 110 "rxvt.h" 2
# 130 "rxvt.h"
/****************************************************************************/

// exception thrown on fatal (per-instance) errors
class rxvt_failure_exception { };

// exception thrown when the command parser runs out of input data
class out_of_input { };

/*
 *****************************************************************************
 * PROTOTYPES
 *****************************************************************************
 */
// main.C

extern bool rxvt_set_locale (const char *locale) ;
extern void rxvt_push_locale (const char *locale) ;
extern void rxvt_pop_locale () ;
void rxvt_init ();

// misc.C
char * rxvt_wcstombs (const wchar_t *str, int len = -1);
wchar_t * rxvt_mbstowcs (const char *str, int len = -1);
char * rxvt_wcstoutf8 (const wchar_t *str, int len = -1);
wchar_t * rxvt_utf8towcs (const char *str, int len = -1);

char * rxvt_basename (const char *str) ;
void rxvt_vlog (const char *fmt, va_list arg_ptr) ;
void rxvt_log (const char *fmt,...) ;
void rxvt_warn (const char *fmt,...) ;
void rxvt_fatal (const char *fmt, ...) __attribute__((noreturn));
void rxvt_exit_failure () __attribute__((noreturn));

char * rxvt_strtrim (char *str) ;
char ** rxvt_splitcommastring (const char *cs) ;
void rxvt_freecommastring (char **cs) ;

void * rxvt_malloc (size_t size);
void * rxvt_calloc (size_t number, size_t size);
void * rxvt_realloc (void *ptr, size_t size);

/////////////////////////////////////////////////////////////////////////////

// temporarily replace the process environment
extern char **environ;
extern char **rxvt_environ; // the original environ pointer

static inline void
set_environ (stringvec *envv)
{



  if (envv)

    environ = (char **)envv->begin ();
}

static inline void
set_environ (char **envv)
{



  if (envv)

    environ = envv;
}

/*
 *****************************************************************************
 * STRUCTURES AND TYPEDEFS
 *****************************************************************************
 */

/*
 * the 'essential' information for reporting Mouse Events
 * pared down from XButtonEvent
 */
struct mouse_event
{
  int clicks;
  Time time; /* milliseconds */
  unsigned int state; /* key or button mask */
  unsigned int button; /* detail */
};
# 242 "rxvt.h"
/*
 *****************************************************************************
 * NORMAL DEFINES
 *****************************************************************************
 */

/* COLORTERM, TERM environment variables */
# 269 "rxvt.h"
enum {
  NO_REFRESH = 0, /* Window not visible at all!        */
  FAST_REFRESH = 1, /* Fully exposed window              */
  SLOW_REFRESH = 2, /* Partially exposed window          */
};







/* special (internal) prefix for font commands */




/* flags for rxvt_scr_gotorc () */
enum {
  C_RELATIVE = 1, /* col movement is relative */
  R_RELATIVE = 2, /* row movement is relative */
  RELATIVE = C_RELATIVE | R_RELATIVE,
};

/* modes for rxvt_scr_insdel_chars (), rxvt_scr_insdel_lines () */
enum {
  INSERT = -1, /* don't change these values */
  DELETE = +1,
  ERASE = +2,
};

/* modes for rxvt_scr_page () - scroll page. used by scrollbar window */
enum page_dirn {
  UP,
  DN,
  NO_DIR,
};

/* arguments for rxvt_scr_change_screen () */
enum {
  PRIMARY = 0,
  SECONDARY,
};






// font styles



// fake styles




// toggle this to force redraw, must be != RS_Careful


// 5 custom bits for extensions




// other flags
# 363 "rxvt.h"
enum {
  C0_NUL = 0x00,
          C0_SOH, C0_STX, C0_ETX, C0_EOT, C0_ENQ, C0_ACK, C0_BEL,
  C0_BS , C0_HT , C0_LF , C0_VT , C0_FF , C0_CR , C0_SO , C0_SI ,
  C0_DLE, C0_DC1, C0_DC2, D0_DC3, C0_DC4, C0_NAK, C0_SYN, C0_ETB,
  C0_CAN, C0_EM , C0_SUB, C0_ESC, C0_IS4, C0_IS3, C0_IS2, C0_IS1,
};


/*
 * XTerm Operating System Commands: ESC ] Ps;Pt (ST|BEL)
 * colour extensions by Christian W. Zuckschwerdt <zany@triq.net>
 */
enum {
  XTerm_name = 0,
  XTerm_iconName = 1,
  XTerm_title = 2,
  XTerm_property = 3, // change X property
  XTerm_Color = 4, // change colors
  XTerm_Color00 = 10, // change fg color
  XTerm_Color01 = 11, // change bg color
  XTerm_Color_cursor = 12, // change actual 'Cursor' color
  XTerm_Color_pointer_fg = 13, // change actual 'Pointer' fg color
  XTerm_Color_pointer_bg = 14, // change actual 'Pointer' bg color
  XTerm_Color05 = 15, // not implemented (tektronix fg)
  XTerm_Color06 = 16, // not implemented (tektronix bg)
  XTerm_Color_RV = 17, // change actual 'Highlight' color
  XTerm_logfile = 46, // not implemented
  XTerm_font = 50,

  XTerm_konsole30 = 30, // reserved for konsole
  XTerm_konsole31 = 31, // reserved for konsole
  XTerm_emacs51 = 51, // reserved for emacs shell
  /*
   * rxvt extensions of XTerm OSCs: ESC ] Ps;Pt (ST|BEL)
   */

  // deprecated
  Rxvt_Color_BD = 18,
  Rxvt_Color_UL = 19,
  Rxvt_restoreFG = 39,
  Rxvt_restoreBG = 49,

  Rxvt_Pixmap = 20, // new bg pixmap
  Rxvt_dumpscreen = 55, // dump scrollback and all of screen

  URxvt_locale = 701, // change locale
  URxvt_version = 702, // request version

  URxvt_Color_IT = 704, // change actual 'Italic' colour
  URxvt_Color_tint = 705, // change actual tint colour
  URxvt_Color_BD = 706, // change actual 'Bold' color
  URxvt_Color_UL = 707, // change actual 'Underline' color
  URxvt_Color_border = 708,

  URxvt_font = 710,
  URxvt_boldFont = 711,
  URxvt_italicFont = 712,
  URxvt_boldItalicFont = 713,

  URxvt_view_up = 720,
  URxvt_view_down = 721,

  URxvt_perl = 777, // for use by perl extensions, starts with "extension-name;"
};

/* Words starting with `Color_' are colours.  Others are counts */
/*
 * The PixColor and rendition colour usage should probably be decoupled
 * on the unnecessary items, e.g. Color_pointer, but won't bother
 * until we need to.  Also, be aware of usage in pixcolor_set
 */

enum colour_list {
  Color_none = -2,
  Color_transparent = -1,
  Color_fg = 0,
  Color_bg,
  minCOLOR, /* 2 */
  Color_Black = minCOLOR,
  Color_Red3,
  Color_Green3,
  Color_Yellow3,
  Color_Blue3,
  Color_Magenta3,
  Color_Cyan3,
  maxCOLOR, /* minCOLOR + 7 */

  Color_AntiqueWhite = maxCOLOR,
  minBrightCOLOR, /* maxCOLOR + 1 */
  Color_Grey25 = minBrightCOLOR,
  Color_Red,
  Color_Green,
  Color_Yellow,
  Color_Blue,
  Color_Magenta,
  Color_Cyan,
  maxBrightCOLOR, /* minBrightCOLOR + 7 */
  Color_White = maxBrightCOLOR,



  minTermCOLOR = Color_White + 1,
  maxTermCOLOR = Color_White + 72,

  Color_cursor,
  Color_cursor2,

  Color_pointer_fg,
  Color_pointer_bg,
  Color_border,

  Color_BD,
  Color_IT,
  Color_UL,
  Color_RV,







  Color_scroll,
# 496 "rxvt.h"
  NRS_COLORS, /* */





  TOTAL_COLORS = NRS_COLORS

};



/*
 * Resource list
 */
enum {


# 1 "rsinc.h" 1
// all resource indices, used by rxvt.h and rxvtperl.xs

  Rs_display_name,
  Rs_term_name,
  Rs_iconName,
  Rs_geometry,
  Rs_reverseVideo,
  Rs_chdir,
  Rs_color,
  Rs_color_ = Rs_color + (TOTAL_COLORS) - 1,
  Rs_font,






  Rs_name,
  Rs_title,




  Rs_loginShell,
  Rs_jumpScroll,
  Rs_skipScroll,
  Rs_scrollBar,
  Rs_scrollBar_right,
  Rs_scrollBar_floating,
  Rs_scrollBar_align,
  Rs_scrollstyle,
  Rs_scrollBar_thickness,
  Rs_scrollTtyOutput,
  Rs_scrollTtyKeypress,
  Rs_scrollWithBuffer,
  Rs_saveLines,
  Rs_utmpInhibit,
  Rs_visualBell,

  Rs_mapAlert,


  Rs_meta8,
# 55 "rsinc.h"
  Rs_print_pipe,
# 90 "rsinc.h"
  Rs_cutchars,
  Rs_modifier,
  Rs_answerbackstring,
  Rs_tripleclickwords,
  Rs_insecure,
  Rs_pointerBlank,
  Rs_pointerBlankDelay,
  Rs_imLocale,
  Rs_imFont,
  Rs_pastableTabs,
# 114 "rsinc.h"
  Rs_iso14755_52,
# 515 "rxvt.h" 2


  NUM_RESOURCES
};

/* DEC private modes */
# 553 "rxvt.h"
// do not change these constants lightly, there are many interdependencies
# 572 "rxvt.h"
/* Motif window hints */




/* bit definitions for MwmHints.functions */






/* bit definitions for MwmHints.decorations */







/* bit definitions for MwmHints.inputMode */






/*
 *****************************************************************************
 * MACRO DEFINES
 *****************************************************************************
 */


// for speed reasons, we assume that all codepoints 32 to 126 are
// single-width.


/* convert pixel dimensions to row/column values.  Everything as int32_t */
# 626 "rxvt.h"
/* how to build & extract colors and attributes */
# 658 "rxvt.h"
typedef callback<void (const char *)> log_callback;
typedef callback<int (int)> getfd_callback;

/****************************************************************************/







struct line_t
{
   text_t *t; // terminal the text
   rend_t *r; // rendition, uses RS_ flags
   tlen_t_ l; // length of each text line
   uint32_t f; // flags

   bool is_longer ()
   {
     return f & 0x0001 /* line is continued on the next row*/;
   }

   void is_longer (int set)
   {
     if (set)
       f |= 0x0001 /* line is continued on the next row*/;
     else
       f &= ~0x0001 /* line is continued on the next row*/;
   }

   void clear ()
   {
     t = 0;
     r = 0;
     l = 0;
     f = 0;
   }

   void touch () // call whenever a line is changed/touched/updated
   {



   }

   void touch (int col)
   {
     max_it (l, col);
     touch ();
   }
};

/****************************************************************************/

// primitive wrapper around mbstate_t to ensure initialisation
struct mbstate
{
  mbstate_t mbs;

  operator mbstate_t *() { return &mbs; }
  void reset () { (memset)(&mbs,0,sizeof (mbs)); }
  mbstate () { reset (); }
};

/****************************************************************************/
# 771 "rxvt.h"
/****************************************************************************/





typedef struct rxvt_term *rxvt_t;

extern rxvt_t rxvt_current_term;




/* ------------------------------------------------------------------------- */
struct overlay_base
{
  int x, y, w, h; // overlay dimensions
  text_t **text;
  rend_t **rend;

  // while tempting to add swap() etc. here, it effetcively only increases code size
};

/* ------------------------------------------------------------------------- */

typedef struct
{
  int row;
  int col;
} row_col_t;

/*
 * terminal limits:
 *
 *  width      : 1 <= width
 *  height     : 1 <= height
 *  ncol       : 1 <= ncol       <= MAX(tlen_t)
 *  nrow       : 1 <= nrow       <= MAX(int)
 *  saveLines  : 0 <= saveLines  <= MAX(int)
 *  term_start : 0 <= term_start < saveLines
 *  total_rows : nrow + saveLines
 *
 *  top_row    : -saveLines <= top_row    <= 0
 *  view_start : top_row    <= view_start <= 0
 *
 *          | most coordinates are stored relative to term_start,
 *  ROW_BUF | which is the first line of the terminal screen
 *  |························= row_buf[0]
 *  |························= row_buf[1]
 *  |························= row_buf[2] etc.
 *  |
 *  +------------+···········= term_start + top_row
 *  | scrollback |
 *  | scrollback +---------+·= term_start + view_start
 *  | scrollback | display |
 *  | scrollback | display |
 *  +------------+·display·+·= term_start
 *  |  terminal  | display |
 *  |  terminal  +---------+
 *  |  terminal  |
 *  |  terminal  |
 *  +------------+···········= term_start + nrow - 1
 *  |
 *  |
 *  END······················= total_rows
 */

struct TermWin_t
{
  int width; /* window width                    [pixels] */
  int height; /* window height                   [pixels] */
  int fwidth; /* font width                      [pixels] */
  int fheight; /* font height                     [pixels] */
  int fbase; /* font ascent (baseline)          [pixels] */
  int ncol; /* window columns              [characters] */
  int nrow; /* window rows                 [characters] */
  int focus; /* window has focus                         */
  int mapped; /* window state mapped?                     */
  int int_bwidth; /* internal border width                    */
  int ext_bwidth; /* external border width                    */
  int lineSpace; /* number of extra pixels between rows      */
  int saveLines; /* number of lines that fit in scrollback   */
  int total_rows; /* total number of rows in this terminal    */
  int term_start; /* term lines start here                    */
  int view_start; /* scrollback view starts here              */
  int top_row; /* topmost row index of scrollback          */
  Window parent[6]; /* parent identifiers - we're parent[0]     */
  Window vt; /* vt100 window                             */
  GC gc; /* GC for drawing                           */
  Pixmap pixmap;
  rxvt_drawable *drawable;
  rxvt_fontset *fontset[4];
};

/*
 * screen accounting:
 * screen_t elements
 *   row:       Cursor row position                   : 0 <= row < nrow
 *   col:       Cursor column position                : 0 <= col < ncol
 *   tscroll:   Scrolling region top row inclusive    : 0 <= row < nrow
 *   bscroll:   Scrolling region bottom row inclusive : 0 <= row < nrow
 *
 * selection_t elements
 *   clicks:    1, 2 or 3 clicks - 4 indicates a special condition of 1 where
 *              nothing is selected
 *   beg:       row/column of beginning of selection  : never past mark
 *   mark:      row/column of initial click           : never past end
 *   end:       row/column of one character past end of selection
 * * Note: top_row <= beg.row <= mark.row <= end.row < nrow
 * * Note: col == -1 ==> we're left of screen
 *
 */
struct screen_t
{
  row_col_t cur; /* cursor position on the screen             */
  int tscroll; /* top of settable scroll region             */
  int bscroll; /* bottom of settable scroll region          */
  unsigned int charset; /* character set number [0..3]               */
  unsigned int flags; /* see below                                 */
  row_col_t s_cur; /* saved cursor position                     */
  unsigned int s_charset; /* saved character set number [0..3]         */
  char s_charset_char;
  rend_t s_rstyle; /* saved rendition style                     */
};

enum selection_op_t
{
  SELECTION_CLEAR = 0, /* nothing selected                          */
  SELECTION_INIT, /* marked a point                            */
  SELECTION_BEGIN, /* started a selection                       */
  SELECTION_CONT, /* continued selection                       */
  SELECTION_DONE /* selection put in CUT_BUFFER0              */
};

struct selection_t
{
  wchar_t *text; /* selected text                             */
  unsigned int len; /* length of selected text                   */
  unsigned int screen; /* screen being used                         */
  unsigned int clicks; /* number of clicks                          */
  selection_op_t op; /* current operation                         */
  bool rect; /* rectangular selection?                    */
  row_col_t beg; /* beginning of selection   <= mark          */
  row_col_t mark; /* point of initial click   <= end           */
  row_col_t end; /* one character past end point              */
};

/* ------------------------------------------------------------------------- */

/* screen_t flags */







/* rxvt_vars.options */
enum {


# 1 "optinc.h" 1
// all resource indices, used by rxvt.h and rxvtperl.xs

 Opt_loginShell = 1,
 Opt_iconic = 2,
 Opt_visualBell = 3,
 Opt_mapAlert = 4,
 Opt_reverseVideo = 5,
 Opt_utmpInhibit = 6,
 Opt_scrollBar = 7,
 Opt_scrollBar_right = 8,
 Opt_scrollBar_floating = 9,
 Opt_meta8 = 10,
 Opt_scrollTtyOutput = 11,
 Opt_scrollTtyKeypress = 12,
 Opt_transparent = 13,
 Opt_tripleclickwords = 14,
 Opt_scrollWithBuffer = 15,
 Opt_jumpScroll = 16,
 Opt_skipScroll = 17,
 Opt_mouseWheelScrollPage = 18,



 Opt_pointerBlank = 0,

 Opt_cursorBlink = 20,
 Opt_secondaryScreen = 21,
 Opt_secondaryScroll = 22,
 Opt_pastableTabs = 23,
 Opt_cursorUnderline = 24,







 Opt_insecure = 0,
 Opt_borderLess = 0,
 Opt_hold = 0,
 Opt_override_redirect = 0,
 Opt_urgentOnBell = 0,




 Opt_skipBuiltinGlyphs = 0,




 Opt_intensityStyles = 0,


 Opt_iso14755_52 = 32,



 Opt_console = 33,



 Opt_buffered = 0,
# 933 "rxvt.h" 2


Opt_count
};

/* ------------------------------------------------------------------------- */

struct rxvt_vars : TermWin_t
{
  scrollBar_t scrollBar;
  uint8_t options[(Opt_count + 7) >> 3];
  XSizeHints szHint;
  rxvt_color *pix_colors;
  Cursor TermWin_cursor; /* cursor for vt window */
  int numlock_state;
  line_t *row_buf; // all lines, scrollback + terminal, circular, followed by temp_buf
  line_t *drawn_buf; // text on screen
  line_t *swap_buf; // lines for swap buffer
  char *tabs; /* per location: 1 == tab-stop               */
  screen_t screen;
  screen_t swap;
  selection_t selection;
  rxvt_color pix_colors_focused[TOTAL_COLORS];



};

struct rxvt_term : zero_initialized, rxvt_vars, rxvt_screen
{

  // special markers with magic addresses
  static const char resval_undef []; // options specifically unset
  static const char resval_on []; // boolean options switched on
  static const char resval_off []; // or off

  log_callback *log_hook; // log error messages through this hook, if != 0
  getfd_callback *getfd_hook; // convert remote to local fd, if != 0



  struct mbstate mbstate; // current input multibyte state

  unsigned char want_refresh:1,
                  current_screen:1, /* primary or secondary              */
                  num_scr_allow:1,
                  bypass_keystate:1,







                  hidden_text:1,




                  enc_utf8:1, /* wether locale uses utf-8 */
                  seen_input:1, /* wether we have seen some program output yet */
                  seen_resize:1, /* wether we had a resize event */
                  parsed_geometry:1;

  unsigned char refresh_type,

                  meta_char, /* Alt-key prefix */

                  selection_wait,
                  selection_type;
/* ---------- */
  bool rvideo_state, rvideo_mode;

  bool rvideo_bell;

  int num_scr; /* screen: number lines scrolled */
  int prev_ncol, /* screen: previous number of columns */
                  prev_nrow; /* screen: previous number of rows */
/* ---------- */
  rend_t rstyle;
/* ---------- */







/* ---------- */
  int csrO, /* Hops - csr offset in thumb/slider to      */
                              /*   give proper Scroll behaviour            */



                  refresh_count,
                  window_vt_x,
                  window_vt_y,
                  mouse_row,
                  mouse_col,



                  allowedxerror;
/* ---------- */
  unsigned int ModLevel3Mask,
                  ModMetaMask,
                  ModNumLockMask;
  int old_width, /* last used width in screen resize          */
                  old_height; /* last used height in screen resize         */
  unsigned long priv_modes,
                  SavedModes;
/* ---------- */
  Atom *xa;
/* ---------- */
  Time selection_time,
                  selection_request_time;
  pid_t cmd_pid; /* process id of child */
  char * incr_buf;
  size_t incr_buf_size, incr_buf_fill;
/* ---------- */
  struct mouse_event MEvent;
  XComposeStatus compose;
  struct termios tio;
  row_col_t oldcursor;
# 1072 "rxvt.h"
  overlay_base ov;

  void scr_swap_overlay () ;
  void scr_overlay_new (int x, int y, int w, int h) ;
  void scr_overlay_off () ;
  void scr_overlay_set (int x, int y,
                        text_t text,
                        rend_t rend = (0 | Color_Black | (Color_Yellow << 7 /* 0 .. maxTermCOLOR*/))) ;
  void scr_overlay_set (int x, int y, const char *s) ;
  void scr_overlay_set (int x, int y, const wchar_t *s) ;


  vector<void *> allocated; // free these memory blocks with free()

  char env_windowid[21]; /* environmental variable WINDOWID */
  char env_colorfgbg[sizeof ("COLORFGBG=default;default;bg") + 1];
  char *env_display; /* environmental variable DISPLAY  */
  char *env_term; /* environmental variable TERM     */

  char *locale;
  char charsets[4];
  char *v_buffer; /* pointer to physical buffer */
  unsigned int v_buflen; /* size of area to write */
  stringvec *argv, *envv; /* if != 0, will be freed at destroy time */
# 1104 "rxvt.h"
  const char *rs[NUM_RESOURCES];
  /* command input buffering */
  char *cmdbuf_ptr, *cmdbuf_endp;
  char cmdbuf_base[2048 /* size of command buffer*/];

  ptytty *pty;

  rxvt_salloc *talloc; // text line allocator
  rxvt_salloc *ralloc; // rend line allocator

  static vector<rxvt_term *> termlist; // a vector of all running rxvt_term's


  // ISO 14755 entry support
  unicode_t iso14755buf;
  void commit_iso14755 ();

  void iso14755_51 (unicode_t ch, rend_t r = (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)), int x = 0, int y = -1);
  void iso14755_54 (int x, int y);



  long vt_emask, vt_emask_perl, vt_emask_xim, vt_emask_mouse;

  void vt_select_input () const
  {
    XSelectInput (dpy, vt, vt_emask | vt_emask_perl | vt_emask_xim | vt_emask_mouse);
  }
# 1147 "rxvt.h"
  void x_cb (XEvent &xev);
  xevent_watcher termwin_ev;
  xevent_watcher vt_ev;
  xevent_watcher scrollbar_ev;

  void child_cb (ev::child &w, int revents); ev::child child_ev;
  void destroy_cb (ev::idle &w, int revents); ev::idle destroy_ev;
  void refresh_check ();
  void flush ();
  void flush_cb (ev::timer &w, int revents); ev::timer flush_ev;
  bool pty_fill ();
  void pty_cb (ev::io &w, int revents); ev::io pty_ev;
  void incr_cb (ev::timer &w, int revents) ; ev::timer incr_ev;





  void text_blink_cb (ev::timer &w, int revents); ev::timer text_blink_ev;


  void bell_cb (ev::timer &w, int revents); ev::timer bell_ev;
# 1185 "rxvt.h"
  void pointer_unblank ();

  void tt_printf (const char *fmt,...);
  void tt_write (const char *data, unsigned int len);
  void pty_write ();

  void init (stringvec *argv, stringvec *envv)
  {
    this->argv = argv;
    init (argv->size (), argv->begin (), envv);
  }

  void make_current () const // make this the "currently active" urxvt instance
  {
    rxvt_current_term = const_cast<rxvt_term *>(this);
    set_environ (envv);
    rxvt_set_locale (locale);
  }
# 1223 "rxvt.h"
  // command.C
  void key_press (XKeyEvent &ev);
  void key_release (XKeyEvent &ev);
  unsigned int cmd_write (const char *str, unsigned int count);

  wchar_t next_char () ;
  wchar_t cmd_getc () ;
  uint32_t next_octet () ;
  uint32_t cmd_get8 () ;

  void cmd_parse ();
  void mouse_report (XButtonEvent &ev);
  void button_press (XButtonEvent &ev);
  void button_release (XButtonEvent &ev);
  void focus_in ();
  void focus_out ();



  void set_urgency (bool enable) { }

  void update_fade_color (unsigned int idx);

  FILE *popen_printer ();
  int pclose_printer (FILE *stream);

  void process_print_pipe ();
  void process_nonprinting (unicode_t ch);
  void process_escape_vt52 (unicode_t ch);
  void process_escape_seq ();
  void process_csi_seq ();
  void process_window_ops (const int *args, unsigned int nargs);
  char *get_to_st (unicode_t &ends_how);
  void process_dcs_seq ();
  void process_osc_seq ();
  void process_color_seq (int report, int color, const char *str, char resp);
  void process_xterm_seq (int op, const char *str, char resp);
  int privcases (int mode, unsigned long bit);
  void process_terminal_mode (int mode, int priv, unsigned int nargs, const int *arg);
  void process_sgr_mode (unsigned int nargs, const int *arg);
  void process_graphics ();
  // init.C
  void init_vars ();
  const char **init_resources (int argc, const char *const *argv);
  void init (int argc, const char *const *argv, stringvec *envv);
  void init_env ();
  void set_locale (const char *locale);
  void init_xlocale ();
  void init_command (const char *const *argv);
  void run_command (const char *const *argv);
  int run_child (const char *const *argv);
  void color_aliases (int idx);
  void create_windows (int argc, const char *const *argv);
  void get_colours ();
  void get_ourmods ();
  // main.C
  void tt_winch ();
  rxvt_term ();
  ~rxvt_term ();
  void destroy ();
  void emergency_cleanup ();
  void recolour_cursor ();
  void resize_all_windows (unsigned int newwidth, unsigned int newheight, int ignoreparent);
  void window_calc (unsigned int newwidth, unsigned int newheight);
  bool set_fonts ();
  void set_string_property (Atom prop, const char *str, int len = -1);
  void set_utf8_property (Atom prop, const char *str, int len = -1);
  void set_title (const char *str);
  void set_icon_name (const char *str);
  void set_window_color (int idx, const char *color);
  void set_colorfgbg ();
  bool set_color (rxvt_color &color, const char *name);
  void alias_color (int dst, int src);
  void set_widthheight (unsigned int newwidth, unsigned int newheight);
  void get_window_origin (int &x, int &y);
  Pixmap get_pixmap_property (int prop_id);

  // screen.C

  void lalloc (line_t &l) const
  {
    l.t = (text_t *)talloc->alloc ();
    l.r = (rend_t *)ralloc->alloc ();
  }
# 1316 "rxvt.h"
  void lresize (line_t &l) const
  {
    if (!l.t)
      return;

    l.t = (text_t *)talloc->alloc (l.t, prev_ncol * sizeof (text_t));
    l.r = (rend_t *)ralloc->alloc (l.r, prev_ncol * sizeof (rend_t));

    l.l = min (l.l, ncol);

    if (ncol > prev_ncol)
      scr_blank_line (l, prev_ncol, ncol - prev_ncol, (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
  }

  int fgcolor_of (rend_t r) const
  {
    int base = (((r) & 0x0000007fUL /* 128 colors*/));

    if (r & 0x00004000UL /* value 1*/



        && ((unsigned int)(base) - (unsigned int)(minCOLOR) <= (unsigned int)(minBrightCOLOR) - (unsigned int)(minCOLOR)))
      base += minBrightCOLOR - minCOLOR;

    return base;
  }

  int bgcolor_of (rend_t r) const
  {
    int base = (((r) & 0x00003f80UL /* 128 colors*/)>>7 /* 0 .. maxTermCOLOR*/);

    if (r & 0x00010000UL /* blink*/



        && ((unsigned int)(base) - (unsigned int)(minCOLOR) <= (unsigned int)(minBrightCOLOR) - (unsigned int)(minCOLOR)))
      base += minBrightCOLOR - minCOLOR;

    return base;
  }

  bool option (uint8_t opt) const
  {
    if (!opt)
      return 0;

    --opt;
    return options[opt >> 3] & (1 << (opt & 7));
  }

  void set_option (uint8_t opt, bool set = true)
  {
    if (!opt)
      return;

    --opt;
    if (set)
      options[opt >> 3] |= (1 << (opt & 7));
    else
      options[opt >> 3] &= ~(1 << (opt & 7));
  }

  void set_privmode (unsigned bit, int set)
  {
    if (set)
      priv_modes |= bit;
    else
      priv_modes &= ~bit;
  }

  // modifies first argument(!)
  void paste (char *data, unsigned int len) ;
  void scr_blank_line (line_t &l, unsigned int col, unsigned int width, rend_t efs) const ;
  void scr_blank_screen_mem (line_t &l, rend_t efs) const ;
  void scr_kill_char (line_t &l, int col) const ;
  int scr_scroll_text (int row1, int row2, int count) ;
  void scr_reset ();
  void scr_release () ;
  void scr_clear (bool really = false) ;
  void scr_refresh () ;
  bool scr_refresh_rend (rend_t mask, rend_t value) ;
  void scr_erase_screen (int mode) ;





  void scr_touch (bool refresh) ;
  void scr_expose (int x, int y, int width, int height, bool refresh) ;
  void scr_recolour () ;
  void scr_remap_chars () ;
  void scr_remap_chars (line_t &l) ;

  enum cursor_mode { SAVE, RESTORE };

  void scr_poweron ();
  void scr_soft_reset () ;
  void scr_cursor (cursor_mode mode) ;
  void scr_do_wrap () ;
  void scr_swap_screen () ;
  void scr_change_screen (int scrn);
  void scr_color (unsigned int color, int fgbg) ;
  void scr_rendition (int set, int style) ;
  void scr_add_lines (const wchar_t *str, int len, int minlines = 0) ;
  void scr_backspace () ;
  void scr_tab (int count, bool ht = false) ;
  void scr_gotorc (int row, int col, int relative) ;
  void scr_index (enum page_dirn direction) ;
  void scr_erase_line (int mode) ;
  void scr_E () ;
  void scr_insdel_lines (int count, int insdel) ;
  void scr_insdel_chars (int count, int insdel) ;
  void scr_scroll_region (int top, int bot) ;
  void scr_cursor_visible (int mode) ;
  void scr_autowrap (int mode) ;
  void scr_relative_origin (int mode) ;
  void scr_insert_mode (int mode) ;
  void scr_set_tab (int mode) ;
  void scr_rvideo_mode (bool on) ;
  void scr_report_position () ;
  void set_font_style () ;
  void scr_charset_choose (int set) ;
  void scr_charset_set (int set, unsigned int ch) ;
  void scr_move_to (int y, int len) ;
  bool scr_page (enum page_dirn direction, int nlines) ;
  bool scr_changeview (int new_view_start) ;
  void scr_bell () ;
  void scr_printscreen (int fullhist) ;
  void scr_xor_rect (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle1, rend_t rstyle2) ;
  void scr_xor_span (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle) ;
  void scr_reverse_selection () ;
  void scr_dump (int fd) ;

  void selection_check (int check_more) ;
  void selection_paste (Window win, Atom prop, bool delete_prop) ;
  void selection_property (Window win, Atom prop) ;
  void selection_request (Time tm, int selnum = 0x01) ;
  int selection_request_other (Atom target, int selnum) ;
  void selection_clear () ;
  void selection_make (Time tm);
  bool selection_grab (Time tm) ;
  void selection_start_colrow (int col, int row) ;
  void selection_delimit_word (enum page_dirn dirn, const row_col_t *mark, row_col_t *ret) ;
  void selection_extend_colrow (int32_t col, int32_t row, int button3, int buttonpress, int clickchange) ;
  void selection_remove_trailing_spaces () ;
  void selection_send (const XSelectionRequestEvent &rq) ;
  void selection_click (int clicks, int x, int y) ;
  void selection_extend (int x, int y, int flag) ;
  void selection_rotate (int x, int y) ;

  // xdefaults.C
  void get_options (int argc, const char *const *argv);
  int parse_keysym (const char *str, const char *arg);
  const char *x_resource (const char *name);
  void extract_resources ();
};
# 28 "misc.C" 2

char *
rxvt_wcstombs (const wchar_t *str, int len)
{
  if (len < 0) len = wcslen (str);

  mbstate mbs;
  char *r = (char *)rxvt_malloc (len * __mb_cur_max + 1);

  char *dst = r;
  while (len--)
    {
      ssize_t l = wcrtomb (dst, *str++, mbs);

      if (l < 0)
        {
          *dst++ = '?';
          wcrtomb (0, 0, mbs); // reset undefined state
        }
      else
        dst += l;
    }

  *dst++ = 0;

  return (char *)rxvt_realloc (r, dst - r);
}

wchar_t *
rxvt_mbstowcs (const char *str, int len)
{
  if (len < 0) len = (strlen)(str);

  wchar_t *r = (wchar_t *)rxvt_malloc ((len + 1) * sizeof (wchar_t));

  if ((ssize_t)mbstowcs (r, str, len + 1) < 0)
    *r = 0;

  return r;
}

char *
rxvt_wcstoutf8 (const wchar_t *str, int len)
{
  if (len < 0) len = wcslen (str);

  char *r = (char *)rxvt_malloc (len * 4 + 1);
  char *p = r;

  while (len--)
    {
      unicode_t w = *str++ & 0x1fffffUL;

      if (w < 0x000080)
        *p++ = w;
      else if (w < 0x000800)
        *p++ = 0xc0 | ( w >> 6),
        *p++ = 0x80 | ( w & 0x3f);
      else if (w < 0x010000)
        *p++ = 0xe0 | ( w >> 12),
        *p++ = 0x80 | ((w >> 6) & 0x3f),
        *p++ = 0x80 | ( w & 0x3f);
      else if (w < 0x110000)
        *p++ = 0xf0 | ( w >> 18),
        *p++ = 0x80 | ((w >> 12) & 0x3f),
        *p++ = 0x80 | ((w >> 6) & 0x3f),
        *p++ = 0x80 | ( w & 0x3f);
      else
        *p++ = '?';
    }

  *p++ = 0;

  return (char *)rxvt_realloc (r, p - r);
}

wchar_t *
rxvt_utf8towcs (const char *str, int len)
{
  if (len < 0) len = (strlen)(str);

  wchar_t *r = (wchar_t *)rxvt_malloc ((len + 1) * sizeof (wchar_t)),
          *p = r;

  unsigned char *s = (unsigned char *)str,
                *e = s + len;

  for (;;)
    {
      len = e - s;

      if (len == 0)
        break;
      else if (s[0] < 0x80)
        *p++ = *s++;
      else if (len >= 2
               && s[0] >= 0xc2 && s[0] <= 0xdf
               && (s[1] & 0xc0) == 0x80)
        {
          *p++ = ((s[0] & 0x1f) << 6)
               | (s[1] & 0x3f);
          s += 2;
        }
      else if (len >= 3
               && ( (s[0] == 0xe0 && s[1] >= 0xa0 && s[1] <= 0xbf)
                   || (s[0] >= 0xe1 && s[0] <= 0xec && s[1] >= 0x80 && s[1] <= 0xbf)
                   || (s[0] == 0xed && s[1] >= 0x80 && s[1] <= 0x9f)
                   || (s[0] >= 0xee && s[0] <= 0xef && s[1] >= 0x80 && s[1] <= 0xbf)
                  )
               && (s[2] & 0xc0) == 0x80)
        {
          *p++ = ((s[0] & 0x0f) << 12)
               | ((s[1] & 0x3f) << 6)
               | (s[2] & 0x3f);
          s += 3;
        }
      else if (len >= 4
               && ( (s[0] == 0xf0 && s[1] >= 0x90 && s[1] <= 0xbf)
                   || (s[0] >= 0xf1 && s[0] <= 0xf3 && s[1] >= 0x80 && s[1] <= 0xbf)
                   || (s[0] == 0xf4 && s[1] >= 0x80 && s[1] <= 0x8f)
                  )
               && (s[2] & 0xc0) == 0x80
               && (s[3] & 0xc0) == 0x80)
        {
          *p++ = ((s[0] & 0x07) << 18)
               | ((s[1] & 0x3f) << 12)
               | ((s[2] & 0x3f) << 6)
               | (s[3] & 0x3f);
          s += 4;
        }
      else
        {
          *p++ = 0xfffd;
          s++;
        }
    }

  *p = 0;

  return r;
}

char *
rxvt_basename (const char *str)
{
  char *base = strrchr (str, '/');

  return (char *) (base ? base + 1 : str);
}

/*
 * Print an error message
 */
void
rxvt_vlog (const char *fmt, va_list arg_ptr)
{
  char msg[1024];

  vsnprintf (msg, sizeof msg, fmt, arg_ptr);

  if (rxvt_current_term && rxvt_current_term->log_hook)
    (*rxvt_current_term->log_hook) (msg);
  else
    write (1 /* standard output file descriptor */, msg, (strlen)(msg));
}

void
rxvt_log (const char *fmt,...)
{
  va_list arg_ptr;

  __builtin_va_start(arg_ptr,fmt);
  rxvt_vlog (fmt, arg_ptr);
  __builtin_va_end(arg_ptr);
}

/*
 * Print an error message
 */
void
rxvt_warn (const char *fmt,...)
{
  va_list arg_ptr;

  rxvt_log ("%s: ", "urxvt");

  __builtin_va_start(arg_ptr,fmt);
  rxvt_vlog (fmt, arg_ptr);
  __builtin_va_end(arg_ptr);
}

void
rxvt_fatal (const char *fmt,...)
{
  va_list arg_ptr;

  rxvt_log ("%s: ", "urxvt");

  __builtin_va_start(arg_ptr,fmt);
  rxvt_vlog (fmt, arg_ptr);
  __builtin_va_end(arg_ptr);

  rxvt_exit_failure ();
}

void
rxvt_exit_failure ()
{
  static class rxvt_failure_exception rxvt_failure_exception;
  throw (rxvt_failure_exception);
}

/*
 * remove leading/trailing space in place.
 */
char *
rxvt_strtrim (char *str)
{
  char *r, *s;

  if (!str || !*str) /* shortcut */
    return str;

  /* skip leading spaces */
  for (s = str; *s && isspace (*s); s++) ;

  /* goto end of string */
  r = s + (strlen)(s) - 1;

  /* dump return and other trailing whitespace */
  while (r > s && isspace (*r))
    r--;

  memmove (str, s, r + 1 - s);
  str[r + 1 - s] = 0;

  return str;
}

/*
 * Split a comma-separated string into an array, stripping leading and
 * trailing spaces from each entry.  Empty strings are properly returned
 */
char **
rxvt_splitcommastring (const char *cs)
{
  int l, n, p;
  const char *s, *t;
  char **ret;

  if ((s = cs) == __null)
    s = "";

  for (n = 1, t = s; *t; t++)
    if (*t == ',')
      n++;

  ret = (char **)malloc ((n + 1) * sizeof (char *));
  ret[n] = __null;

  for (l = 0, t = s; l < n; l++)
    {
      for ( ; *t && *t != ','; t++) ;
      p = t - s;
      ret[l] = (char *)malloc (p + 1);
      (memcpy)(ret[l],s,p);
      ret[l][p] = '\0';
      rxvt_strtrim (ret[l]);
      s = ++t;
    }

  return ret;
}

void
rxvt_freecommastring (char **cs)
{
  for (int i = 0; cs[i]; ++i)
    free (cs[i]);

  free (cs);
}

void *
rxvt_malloc (size_t size)
{
  void *p = malloc (size);

  if (!p)
    rxvt_fatal ("memory allocation failure. aborting.\n");

  return p;
}

void *
rxvt_calloc (size_t number, size_t size)
{
  void *p = calloc (number, size);

  if (!p)
    rxvt_fatal ("memory allocation failure. aborting.\n");

  return p;
}

void *
rxvt_realloc (void *ptr, size_t size)
{
  void *p = realloc (ptr, size);

  if (!p)
    rxvt_fatal ("memory allocation failure. aborting.\n");

  return p;
}
