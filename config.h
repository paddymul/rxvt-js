/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if you want to have sexy-looking background pixmaps. Needs
   libAfterImage */
/* #undef BG_IMAGE_FROM_FILE */

/* clone device filename */
#define CLONE_DEVICE "/dev/ptmx"

/* Define if you want 8 bit control sequences */
/* #undef EIGHT_BIT_CONTROLS */

/* Define if you want to automatically compose combining characters */
#define ENABLE_COMBINING 1

/* Define if you want handling for rarely used but handy features */
#define ENABLE_FRILLS 1

/* Define if you can embed a perl interpreter */
/* #undef ENABLE_PERL */

/* Define if you want bold and italic support */
#define ENABLE_STYLES 1

/* Define if you want your background to use the parent window background */
#define ENABLE_TRANSPARENCY 1

/* Define if you want european extended codesets */
#define ENCODING_EU 1

/* Define if you want japanese codesets */
#define ENCODING_JP 1

/* Define if you want extended japanese codesets */
#define ENCODING_JP_EXT 1

/* Define if you want korean codesets */
#define ENCODING_KR 1

/* Define if you want vietnamese codesets */
#define ENCODING_VN 1

/* Define if you want chinese codesets */
#define ENCODING_ZH 1

/* Define if you want extended chinese codesets */
#define ENCODING_ZH_EXT 1

/* Define if you want to use libAfterImage for image processing */
/* #undef HAVE_AFTERIMAGE */

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the <cwchar> header file. */
#define HAVE_CWCHAR 1

/* Define to 1 if you have /dev/ptym/clone */
/* #undef HAVE_DEV_CLONE */

/* Define to 1 if you have /dev/ptc */
/* #undef HAVE_DEV_PTC */

/* Define to 1 if you have /dev/ptmx */
#define HAVE_DEV_PTMX 1

/* Define to 1 if you have the `epoll_ctl' function. */
#define HAVE_EPOLL_CTL 1

/* Define to 1 if you have the `eventfd' function. */
#define HAVE_EVENTFD 1

/* Define to 1 if you have the `getpt' function. */
#define HAVE_GETPT 1

/* Define to 1 if you have the `inotify_init' function. */
#define HAVE_INOTIFY_INIT 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isastream' function. */
#define HAVE_ISASTREAM 1

/* Define to 1 if you have the `kqueue' function. */
/* #undef HAVE_KQUEUE */

/* Define to 1 if you have the <lastlog.h> header file. */
#define HAVE_LASTLOG_H 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the <libutil.h> header file. */
#define HAVE_LIBUTIL_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `nanosleep' function. */
/* #undef HAVE_NANOSLEEP */

/* Define if nl_langinfo(CODESET) works */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if you have the `openpty' function. */
/* #undef HAVE_OPENPTY */

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the `port_create' function. */
/* #undef HAVE_PORT_CREATE */

/* Define to 1 if you have the <port.h> header file. */
/* #undef HAVE_PORT_H */

/* Define to 1 if you have the `posix_openpt' function. */
#define HAVE_POSIX_OPENPT 1

/* Define to 1 if you have the <pty.h> header file. */
#define HAVE_PTY_H 1

/* Define to 1 if you have the `revoke' function. */
/* #undef HAVE_REVOKE */

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define if plain old setlocale works */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define to 1 if you have the `setreuid' function. */
#define HAVE_SETREUID 1

/* Define to 1 if you have the `setuid' function. */
#define HAVE_SETUID 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <stropts.h> header file. */
#define HAVE_STROPTS_H 1

/* Define if utmp.h or lastlog.h has struct lastlog */
#define HAVE_STRUCT_LASTLOG 1

/* Define if utmpx.h or lastlog.h has struct lastlogx */
/* #undef HAVE_STRUCT_LASTLOGX */

/* Define if utmp.h has struct utmp */
#define HAVE_STRUCT_UTMP 1

/* Define if utmpx.h has struct utmpx */
#define HAVE_STRUCT_UTMPX 1

/* Define to 1 if you have the <sys/byteorder.h> header file. */
/* #undef HAVE_SYS_BYTEORDER_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
#define HAVE_SYS_EPOLL_H 1

/* Define to 1 if you have the <sys/eventfd.h> header file. */
#define HAVE_SYS_EVENTFD_H 1

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/inotify.h> header file. */
#define HAVE_SYS_INOTIFY_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/queue.h> header file. */
#define HAVE_SYS_QUEUE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/stropts.h> header file. */
#define HAVE_SYS_STROPTS_H 1

/* Define to 1 if you have the <sys/strredir.h> header file. */
/* #undef HAVE_SYS_STRREDIR_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if sys/socket.h defines the necessary macros/functions for file
   handle passing */
#define HAVE_UNIX_FDPASS 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if you have the `updlastlogx' function. */
/* #undef HAVE_UPDLASTLOGX */

/* Define to 1 if you have the `updwtmp' function. */
#define HAVE_UPDWTMP 1

/* Define to 1 if you have the `updwtmpx' function. */
#define HAVE_UPDWTMPX 1

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define if struct utmpx contains ut_host */
#define HAVE_UTMPX_HOST 1

/* Define if struct utmpx contains ut_session */
#define HAVE_UTMPX_SESSION 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define if struct utmp contains ut_host */
#define HAVE_UTMP_HOST 1

/* Define if struct utmp contains ut_pid */
#define HAVE_UTMP_PID 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the <X11/Xft/Xft.h> header file. */
#define HAVE_X11_XFT_XFT_H 1

/* Define if you have XPointer typedef */
#define HAVE_XPOINTER 1

/* Define if setlocale (defined to Xsetlocale) works */
/* #undef HAVE_XSETLOCALE */

/* Define to 1 if you have the `_getpty' function. */
/* #undef HAVE__GETPTY */

/* Define if you want ISO 14755 extended support */
#define ISO_14755 1

/* Define location of lastlogx */
/* #undef LASTLOGX_FILE */

/* Define location of lastlog */
#define LASTLOG_FILE "/var/log/lastlog"

/* Define if you want to have lastlog support when utmp/utmpx is enabled */
#define LASTLOG_SUPPORT 1

/* Define to have CTRL cause wheel events to accelerate scrolling. Release
   CTRL to halt scrolling */
#define MOUSE_SLIP_WHEELING 1

/* Define to use wheel events (button4 and button5) to scroll */
#define MOUSE_WHEEL 1

/* Support NeXT style scrollbars */
#define NEXT_SCROLLBAR 1

/* Define if you don't want support for the backspace key */
/* #undef NO_BACKSPACE_KEY */

/* Define if you don't want support for the (non-keypad) delete key */
/* #undef NO_DELETE_KEY */

/* Define if you don't want any resources read */
/* #undef NO_RESOURCES */

/* Define for continual scrolling when you keep the scrollbar button pressed
   */
/* #undef NO_SCROLLBAR_BUTTON_CONTINUAL_SCROLLING */

/* Disable the secondary screen. Many programs use the secondary screen as
   their workplace */
/* #undef NO_SECONDARY_SCREEN */

/* Define if you want faded colors when focus is lost */
#define OFF_FOCUS_FADING 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Support plain style scrollbars */
#define PLAIN_SCROLLBAR 1

/* Define if you want hide the pointer while typing */
#define POINTER_BLANK 1

/* Resource class */
#define RESCLASS "URxvt"

/* Fallback resource class */
#define RESFALLBACK "Rxvt"

/* Default resource name */
#define RESNAME "urxvt"

/* Binary base name */
#define RXVTNAME "urxvt"

/* Support Rxvt original style scrollbars */
#define RXVT_SCROLLBAR 1

/* Set TERMINFO value to the value given by configure */
/* #undef RXVT_TERMINFO */

/* Define to allow scrolling when the selection moves to the top or bottom of
   the screen */
#define SELECTION_SCROLLING 1

/* Define to use "smart" resize behavior */
/* #undef SMART_RESIZE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Set TERM to the value given by configure */
/* #undef TERMENV */

/* Define if you want blinking text support */
#define TEXT_BLINK 1

/* "" */
/* #undef TTY_GID_SUPPORT */

/* Define if you want to represent unicode characters outside plane 0 */
/* #undef UNICODE_3 */

/* "" */
#define UNIX98_PTY 1

/* Define if you want to have XIM (X Input Method) protocol support - required
   for multibyte characters input */
#define USE_XIM 1

/* Define location of utmpx */
#define UTMPX_FILE "/var/run/utmp"

/* Define location of utmp */
#define UTMP_FILE "/var/run/utmp"

/* Define if you want to have utmp/utmpx support */
#define UTMP_SUPPORT 1

/* Define location of wtmpx */
#define WTMPX_FILE "/var/log/wtmp"

/* Define location of wtmp */
#define WTMP_FILE "/var/log/wtmp"

/* Define if you want to have wtmp support when utmp/utmpx is enabled */
#define WTMP_SUPPORT 1

/* Define to enable xft support */
#define XFT 1

/* Define if your XIMCallback specifies XIC as first type. */
/* #undef XIMCB_PROTO_BROKEN */

/* Define ONLY iff Xlib.h supports it */
#define XLIB_ILLEGAL_ACCESS 1

/* Support Xterm style scrollbars */
#define XTERM_SCROLLBAR 1

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Define to 1 if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
/* # undef _ALL_SOURCE */
#endif

/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif

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
