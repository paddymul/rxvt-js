# 1 "background.C"
# 1 "/Users/patrickmullen/temp/downloads/rxvt/urxvt-my-conf/src//"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "background.C"
# 1 "background.C_exp.C"
# 1 "/Users/patrickmullen/temp/downloads/rxvt/urxvt-my-conf/src//"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "background.C_exp.C"
# 1 "background.C"
# 1 "/Users/patrickmullen/temp/downloads/rxvt/urxvt-my-conf/src//"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "background.C"
# 24 "background.C"


# 1 "../config.h" 1
# 25 "background.C" 2


# 1 "rxvt.h" 1





# 1 "/usr/include/c++/4.0.0/cstdio" 1 3
# 47 "/usr/include/c++/4.0.0/cstdio" 3
# 48 "/usr/include/c++/4.0.0/cstdio" 3



# 1 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 1 3
# 35 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 3


# 1 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/os_defines.h" 1 3
# 36 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 2 3
# 64 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 3
namespace __gnu_debug_def { }

namespace __gnu_debug
{
  using namespace __gnu_debug_def;
}
# 50 "/usr/include/c++/4.0.0/cstdio" 2 3


# 1 "/usr/include/c++/4.0.0/cstddef" 1 3
# 46 "/usr/include/c++/4.0.0/cstddef" 3
# 47 "/usr/include/c++/4.0.0/cstddef" 3



# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 214 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 49 "/usr/include/c++/4.0.0/cstddef" 2 3

namespace std
{
  using ::ptrdiff_t;
  using ::size_t;
}
# 51 "/usr/include/c++/4.0.0/cstdio" 2 3



# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4


# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4


# 1 "/usr/include/sys/_types.h" 1 3 4
# 32 "/usr/include/sys/_types.h" 3 4


# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 2 3 4


# 1 "/usr/include/machine/_types.h" 1 3 4
# 34 "/usr/include/machine/_types.h" 3 4


# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
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
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef int __darwin_ptrdiff_t;





typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 35 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
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
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;



typedef __uint32_t __darwin_ino_t;

typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
# 28 "/usr/include/_types.h" 2 3 4

typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;



typedef unsigned long __darwin_wctype_t;
# 65 "/usr/include/stdio.h" 2 3 4





typedef __darwin_va_list va_list;




typedef __darwin_off_t off_t;
# 87 "/usr/include/stdio.h" 3 4
typedef __darwin_off_t fpos_t;
# 98 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 132 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;

extern "C" {

extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;



}
# 248 "/usr/include/stdio.h" 3 4
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
int fprintf(FILE * , const char * , ...) ;
int fputc(int, FILE *);
int fputs(const char * , FILE * ) __asm("_" "fputs" "$UNIX2003");
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
     FILE * ) __asm("_" "freopen" "$UNIX2003");
int fscanf(FILE * , const char * , ...) ;
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) __asm("_" "fwrite" "$UNIX2003");
int getc(FILE *);
int getchar(void);
char *gets(char *);

extern const int sys_nerr;
extern const char *const sys_errlist[];

void perror(const char *);
int printf(const char * , ...) ;
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * , ...) ;
void setbuf(FILE * , char * );
int setvbuf(FILE * , char * , int, size_t);
int sprintf(char * , const char * , ...) ;
int sscanf(const char * , const char * , ...) ;
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * , const char * , va_list) ;
int vprintf(const char * , va_list) ;
int vsprintf(char * , const char * , va_list) ;

int asprintf(char **, const char *, ...) ;
int vasprintf(char **, const char *, va_list) ;

}







extern "C" {
char *ctermid(char *);

char *ctermid_r(char *);

FILE *fdopen(int, const char *);

char *fgetln(FILE *, size_t *);

int fileno(FILE *);
void flockfile(FILE *);

const char
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

int snprintf(char * , size_t, const char * , ...) ;
char *tempnam(const char *, const char *) __asm("_" "tempnam" "$UNIX2003");
int vfscanf(FILE * , const char * , va_list) ;
int vscanf(const char * , va_list) ;
int vsnprintf(char * , size_t, const char * , va_list) ;
int vsscanf(const char * , const char * , va_list) ;

FILE *zopen(const char *, const char *, int);

}





extern "C" {
FILE *funopen(const void *,
  int (*)(void *, char *, int),
  int (*)(void *, const char *, int),
  fpos_t (*)(void *, fpos_t, int),
  int (*)(void *));
}
# 371 "/usr/include/stdio.h" 3 4
extern "C" {
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) ;
int __swbuf(int, FILE *);
}







static inline int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 53 "/usr/include/c++/4.0.0/cstdio" 2 3
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
# 46 "/usr/include/c++/4.0.0/cctype" 3
# 47 "/usr/include/c++/4.0.0/cctype" 3




# 1 "/usr/include/ctype.h" 1 3 4
# 69 "/usr/include/ctype.h" 3 4


# 1 "/usr/include/runetype.h" 1 3 4
# 53 "/usr/include/runetype.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;




typedef __darwin_rune_t rune_t;
# 70 "/usr/include/runetype.h" 3 4
typedef __darwin_wint_t wint_t;
# 81 "/usr/include/runetype.h" 3 4
typedef struct {
 __darwin_rune_t __min;
 __darwin_rune_t __max;
 __darwin_rune_t __map;
 __uint32_t *__types;
} _RuneEntry;

typedef struct {
 int __nranges;
 _RuneEntry *__ranges;
} _RuneRange;

typedef struct {
 char __name[14];
 __uint32_t __mask;
} _RuneCharClass;

typedef struct {
 char __magic[8];
 char __encoding[32];

 __darwin_rune_t (*__sgetrune)(const char *, __darwin_size_t, char const **);
 int (*__sputrune)(__darwin_rune_t, char *, __darwin_size_t, char **);
 __darwin_rune_t __invalid_rune;

 __uint32_t __runetype[(1 <<8 )];
 __darwin_rune_t __maplower[(1 <<8 )];
 __darwin_rune_t __mapupper[(1 <<8 )];






 _RuneRange __runetype_ext;
 _RuneRange __maplower_ext;
 _RuneRange __mapupper_ext;

 void *__variable;
 int __variable_len;




 int __ncharclasses;
 _RuneCharClass *__charclasses;
} _RuneLocale;



extern "C" {
extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;
}
# 70 "/usr/include/ctype.h" 2 3 4
# 145 "/usr/include/ctype.h" 3 4
extern "C" {
unsigned long ___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t ___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t ___toupper(__darwin_ct_rune_t);
}

static inline int
isascii(int _c)
{
 return ((_c & ~0x7F) == 0);
}
# 164 "/usr/include/ctype.h" 3 4
extern "C" {
int __maskrune(__darwin_ct_rune_t, unsigned long);
}


static inline int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
  : !!__maskrune(_c, _f));

}

static inline __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (_c < 0 || _c >= (1 <<8 )) ? 0 :
  !!(_DefaultRuneLocale.__runetype[_c] & _f);

}
# 204 "/usr/include/ctype.h" 3 4
extern "C" {
__darwin_ct_rune_t __toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t __tolower(__darwin_ct_rune_t);
}


static inline int
__wcwidth(__darwin_ct_rune_t _c)
{
 unsigned int _x;

 if (_c == 0)
  return (0);
 _x = (unsigned int)__maskrune(_c, 0xe0000000L|0x00040000L);
 if ((_x & 0xe0000000L) != 0)
  return ((_x & 0xe0000000L) >> 30);
 return ((_x & 0x00040000L) != 0 ? 1 : -1);
}






static inline int
isalnum(int _c)
{
 return (__istype(_c, 0x00000100L|0x00000400L));
}

static inline int
isalpha(int _c)
{
 return (__istype(_c, 0x00000100L));
}

static inline int
isblank(int _c)
{
 return (__istype(_c, 0x00020000L));
}

static inline int
iscntrl(int _c)
{
 return (__istype(_c, 0x00000200L));
}


static inline int
isdigit(int _c)
{
 return (__isctype(_c, 0x00000400L));
}

static inline int
isgraph(int _c)
{
 return (__istype(_c, 0x00000800L));
}

static inline int
islower(int _c)
{
 return (__istype(_c, 0x00001000L));
}

static inline int
isprint(int _c)
{
 return (__istype(_c, 0x00040000L));
}

static inline int
ispunct(int _c)
{
 return (__istype(_c, 0x00002000L));
}

static inline int
isspace(int _c)
{
 return (__istype(_c, 0x00004000L));
}

static inline int
isupper(int _c)
{
 return (__istype(_c, 0x00008000L));
}


static inline int
isxdigit(int _c)
{
 return (__isctype(_c, 0x00010000L));
}

static inline int
toascii(int _c)
{
 return (_c & 0x7F);
}

static inline int
tolower(int _c)
{
        return (__tolower(_c));
}

static inline int
toupper(int _c)
{
        return (__toupper(_c));
}


static inline int
digittoint(int _c)
{
 return (__maskrune(_c, 0x0F));
}

static inline int
ishexnumber(int _c)
{
 return (__istype(_c, 0x00010000L));
}

static inline int
isideogram(int _c)
{
 return (__istype(_c, 0x00080000L));
}

static inline int
isnumber(int _c)
{
 return (__istype(_c, 0x00000400L));
}

static inline int
isphonogram(int _c)
{
 return (__istype(_c, 0x00200000L));
}

static inline int
isrune(int _c)
{
 return (__istype(_c, 0xFFFFFFF0L));
}

static inline int
isspecial(int _c)
{
 return (__istype(_c, 0x00100000L));
}
# 50 "/usr/include/c++/4.0.0/cctype" 2 3
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
# 46 "/usr/include/c++/4.0.0/cerrno" 3
# 47 "/usr/include/c++/4.0.0/cerrno" 3



# 1 "/usr/include/errno.h" 1 3 4
# 23 "/usr/include/errno.h" 3 4


# 1 "/usr/include/sys/errno.h" 1 3 4
# 73 "/usr/include/sys/errno.h" 3 4
extern "C" {
extern int * __error(void);

}
# 24 "/usr/include/errno.h" 2 3 4
# 49 "/usr/include/c++/4.0.0/cerrno" 2 3
# 7 "rxvt.h" 2


# 1 "/usr/include/c++/4.0.0/cstdarg" 1 3
# 46 "/usr/include/c++/4.0.0/cstdarg" 3
# 47 "/usr/include/c++/4.0.0/cstdarg" 3



# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 49 "/usr/include/c++/4.0.0/cstdarg" 2 3






namespace std
{
  using ::va_list;
}
# 8 "rxvt.h" 2


# 1 "/usr/include/c++/4.0.0/cstdlib" 1 3
# 47 "/usr/include/c++/4.0.0/cstdlib" 3
# 48 "/usr/include/c++/4.0.0/cstdlib" 3
# 57 "/usr/include/c++/4.0.0/cstdlib" 3


# 1 "/usr/include/stdlib.h" 1 3 4
# 61 "/usr/include/stdlib.h" 3 4


# 1 "/usr/include/available.h" 1 3 4
# 62 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






typedef __darwin_pid_t pid_t;




typedef __darwin_id_t id_t;
# 116 "/usr/include/sys/wait.h" 3 4


# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4


# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 3 4

# 1 "/usr/include/machine/signal.h" 1 3 4
# 34 "/usr/include/machine/signal.h" 3 4


# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 55 "/usr/include/i386/signal.h" 3 4


# 1 "/usr/include/i386/_structs.h" 1 3 4
# 56 "/usr/include/i386/signal.h" 2 3 4
# 35 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 154 "/usr/include/sys/signal.h" 3 4


# 1 "/usr/include/sys/_structs.h" 1 3 4
# 57 "/usr/include/sys/_structs.h" 3 4


# 1 "/usr/include/machine/_structs.h" 1 3 4
# 31 "/usr/include/machine/_structs.h" 3 4


# 1 "/usr/include/i386/_structs.h" 1 3 4
# 38 "/usr/include/i386/_structs.h" 3 4


# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
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
# 89 "/usr/include/mach/i386/_structs.h" 3 4
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






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
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
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
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
# 358 "/usr/include/mach/i386/_structs.h" 3 4
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
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
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
# 75 "/usr/include/sys/_structs.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
# 128 "/usr/include/sys/_structs.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext32 *uc_mcontext;



};
# 218 "/usr/include/sys/_structs.h" 3 4
typedef struct __darwin_sigaltstack stack_t;
# 227 "/usr/include/sys/_structs.h" 3 4
typedef struct __darwin_ucontext ucontext_t;
# 155 "/usr/include/sys/signal.h" 2 3 4
# 163 "/usr/include/sys/signal.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;




typedef __darwin_sigset_t sigset_t;
# 178 "/usr/include/sys/signal.h" 3 4
typedef __darwin_uid_t uid_t;


union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 292 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 354 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 371 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 390 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 412 "/usr/include/sys/signal.h" 3 4
extern "C" {
void (*signal(int, void (*)(int)))(int);
}
# 117 "/usr/include/sys/wait.h" 2 3 4


# 1 "/usr/include/sys/resource.h" 1 3 4
# 76 "/usr/include/sys/resource.h" 3 4


# 1 "/usr/include/sys/_structs.h" 1 3 4
# 100 "/usr/include/sys/_structs.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 77 "/usr/include/sys/resource.h" 2 3 4
# 88 "/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 142 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 153 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 213 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
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
# 193 "/usr/include/sys/wait.h" 3 4


# 1 "/usr/include/machine/endian.h" 1 3 4
# 37 "/usr/include/machine/endian.h" 3 4


# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4


# 1 "/usr/include/sys/_endian.h" 1 3 4
# 124 "/usr/include/sys/_endian.h" 3 4


# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4


# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
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







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 254 "/usr/include/sys/wait.h" 3 4
extern "C" {
pid_t wait(int *) __asm("_" "wait" "$UNIX2003");
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" "$UNIX2003");

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" "$UNIX2003");


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);

}
# 66 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/alloca.h" 1 3 4
# 35 "/usr/include/alloca.h" 3 4
extern "C" {
void *alloca(size_t);
}
# 68 "/usr/include/stdlib.h" 2 3 4
# 97 "/usr/include/stdlib.h" 3 4
typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
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
  strtold(const char *, char **) ;

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" "$UNIX2003");
size_t wcstombs(char * , const wchar_t * , size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *, int *);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *, int *);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



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
# 256 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 37 "/usr/include/machine/types.h" 3 4


# 1 "/usr/include/i386/types.h" 1 3 4
# 78 "/usr/include/i386/types.h" 3 4
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




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;





typedef u_int64_t syscall_arg_t;
# 38 "/usr/include/machine/types.h" 2 3 4
# 255 "/usr/include/stdlib.h" 2 3 4


typedef __darwin_dev_t dev_t;




typedef __darwin_mode_t mode_t;



u_int32_t
  arc4random(void);
void arc4random_addrandom(unsigned char *dat, int datlen);
void arc4random_stir(void);


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

extern char *suboptarg;
void *valloc(size_t);






}
# 58 "/usr/include/c++/4.0.0/cstdlib" 2 3
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
# 40 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdint.h" 3 4
typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long long uint64_t;



typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 97 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdint.h" 3 4
typedef long long int intmax_t;
# 106 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stdint.h" 3 4
typedef long long unsigned int uintmax_t;
# 11 "rxvt.h" 2



# 1 "/usr/include/sys/types.h" 1 3 4
# 84 "/usr/include/sys/types.h" 3 4
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;

typedef unsigned long u_long;


typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;






typedef u_int32_t fixpt_t;


typedef __darwin_blkcnt_t blkcnt_t;




typedef __darwin_blksize_t blksize_t;




typedef __darwin_gid_t gid_t;





typedef __uint32_t in_addr_t;




typedef __uint16_t in_port_t;



typedef __darwin_ino_t ino_t;





typedef __darwin_ino64_t ino64_t;






typedef __int32_t key_t;
# 157 "/usr/include/sys/types.h" 3 4
typedef __uint16_t nlink_t;
# 176 "/usr/include/sys/types.h" 3 4
typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 197 "/usr/include/sys/types.h" 3 4
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
# 260 "/usr/include/sys/types.h" 3 4


# 1 "/usr/include/sys/_structs.h" 1 3 4
# 183 "/usr/include/sys/_structs.h" 3 4
extern "C" {
typedef struct fd_set {
 __int32_t fds_bits[(((1024) + (((sizeof(__int32_t) * 8)) - 1)) / ((sizeof(__int32_t) * 8)))];
} fd_set;
}


static inline int
__darwin_fd_isset(int _n, struct fd_set *_p)
{
 return (_p->fds_bits[_n/(sizeof(__int32_t) * 8)] & (1<<(_n % (sizeof(__int32_t) * 8))));
}
# 261 "/usr/include/sys/types.h" 2 3 4




typedef __int32_t fd_mask;
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





typedef __darwin_fsblkcnt_t fsblkcnt_t;




typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 13 "rxvt.h" 2


# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4


# 1 "/usr/include/sys/unistd.h" 1 3 4
# 138 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 73 "/usr/include/unistd.h" 2 3 4
# 133 "/usr/include/unistd.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 414 "/usr/include/unistd.h" 3 4
extern "C" {

void _exit(int) __attribute__((__noreturn__));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);
int close(int) __asm("_" "close" "$UNIX2003");
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
int fsync(int) __asm("_" "fsync" "$UNIX2003");
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
char *getwd(char *);
int isatty(int);
int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" "$UNIX2003");
int link(const char *, const char *);
int lockf(int, int, off_t) __asm("_" "lockf" "$UNIX2003");
off_t lseek(int, off_t, int);
int nice(int) __asm("_" "nice" "$UNIX2003");
long pathconf(const char *, int);
int pause(void) __asm("_" "pause" "$UNIX2003");
int pipe(int [2]);
ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" "$UNIX2003");
ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" "$UNIX2003");
ssize_t read(int, void *, size_t) __asm("_" "read" "$UNIX2003");
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
  sleep(unsigned int) __asm("_" "sleep" "$UNIX2003");
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
int usleep(useconds_t) __asm("_" "usleep" "$UNIX2003");
pid_t vfork(void);
ssize_t write(int, const void *, size_t) __asm("_" "write" "$UNIX2003");

extern char *optarg;
extern int optind, opterr, optopt;




# 1 "/usr/include/sys/select.h" 1 3 4
# 78 "/usr/include/sys/select.h" 3 4


# 1 "/usr/include/sys/_structs.h" 1 3 4
# 88 "/usr/include/sys/_structs.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 79 "/usr/include/sys/select.h" 2 3 4
# 134 "/usr/include/sys/select.h" 3 4
extern "C" {


int pselect(int, fd_set * , fd_set * ,
  fd_set * , const struct timespec * ,
  const sigset_t * )






  __asm("_" "pselect" "$UNIX2003")


  ;




# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * , fd_set * ,
  fd_set * , struct timeval * )






  __asm("_" "select" "$UNIX2003")


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

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);
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
# 47 "/usr/include/c++/4.0.0/cstring" 3
# 48 "/usr/include/c++/4.0.0/cstring" 3





# 1 "/usr/include/string.h" 1 3 4
# 80 "/usr/include/string.h" 3 4
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
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__));
void __eprintf(const char *, const char *, unsigned, const char *) __attribute__((__noreturn__));
}
# 16 "rxvt.h" 2



# 1 "/usr/include/sys/ioctl.h" 1 3 4
# 72 "/usr/include/sys/ioctl.h" 3 4


# 1 "/usr/include/sys/ttycom.h" 1 3 4
# 72 "/usr/include/sys/ttycom.h" 3 4


# 1 "/usr/include/sys/ioccom.h" 1 3 4
# 73 "/usr/include/sys/ttycom.h" 2 3 4
# 83 "/usr/include/sys/ttycom.h" 3 4
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 73 "/usr/include/sys/ioctl.h" 2 3 4






struct ttysize {
 unsigned short ts_lines;
 unsigned short ts_cols;
 unsigned short ts_xxx;
 unsigned short ts_yyy;
};







# 1 "/usr/include/sys/filio.h" 1 3 4
# 91 "/usr/include/sys/ioctl.h" 2 3 4


# 1 "/usr/include/sys/sockio.h" 1 3 4
# 92 "/usr/include/sys/ioctl.h" 2 3 4




extern "C" {
int ioctl(int, unsigned long, ...);
}
# 18 "rxvt.h" 2
# 26 "rxvt.h"
# 1 "/usr/include/c++/4.0.0/cwchar" 1 3
# 47 "/usr/include/c++/4.0.0/cwchar" 3
# 48 "/usr/include/c++/4.0.0/cwchar" 3





# 1 "/usr/include/c++/4.0.0/ctime" 1 3
# 47 "/usr/include/c++/4.0.0/ctime" 3
# 48 "/usr/include/c++/4.0.0/ctime" 3





# 1 "/usr/include/time.h" 1 3 4
# 69 "/usr/include/time.h" 3 4


# 1 "/usr/include/_structs.h" 1 3 4
# 24 "/usr/include/_structs.h" 3 4


# 1 "/usr/include/sys/_structs.h" 1 3 4
# 25 "/usr/include/_structs.h" 2 3 4
# 70 "/usr/include/time.h" 2 3 4
# 90 "/usr/include/time.h" 3 4
struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
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



char *asctime_r(const struct tm * , char * );
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * , struct tm * );
struct tm *localtime_r(const time_t * , struct tm * );


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep" "$UNIX2003");

}
# 52 "/usr/include/c++/4.0.0/ctime" 2 3
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
# 83 "/usr/include/wchar.h" 3 4
typedef __darwin_mbstate_t mbstate_t;
# 114 "/usr/include/wchar.h" 3 4


# 1 "/usr/include/_wctype.h" 1 3 4
# 52 "/usr/include/_wctype.h" 3 4
typedef __darwin_wctype_t wctype_t;
# 71 "/usr/include/_wctype.h" 3 4
static inline int
iswalnum(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L|0x00000400L));
}

static inline int
iswalpha(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L));
}

static inline int
iswcntrl(wint_t _wc)
{
 return (__istype(_wc, 0x00000200L));
}

static inline int
iswctype(wint_t _wc, wctype_t _charclass)
{
 return (__istype(_wc, _charclass));
}

static inline int
iswdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00000400L));
}

static inline int
iswgraph(wint_t _wc)
{
 return (__istype(_wc, 0x00000800L));
}

static inline int
iswlower(wint_t _wc)
{
 return (__istype(_wc, 0x00001000L));
}

static inline int
iswprint(wint_t _wc)
{
 return (__istype(_wc, 0x00040000L));
}

static inline int
iswpunct(wint_t _wc)
{
 return (__istype(_wc, 0x00002000L));
}

static inline int
iswspace(wint_t _wc)
{
 return (__istype(_wc, 0x00004000L));
}

static inline int
iswupper(wint_t _wc)
{
 return (__istype(_wc, 0x00008000L));
}

static inline int
iswxdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00010000L));
}

static inline wint_t
towlower(wint_t _wc)
{
        return (__tolower(_wc));
}

static inline wint_t
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
int fwprintf(FILE * , const wchar_t * , ...) ;
int fwscanf(FILE * , const wchar_t * , ...) ;
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
     ...) ;
int swscanf(const wchar_t * , const wchar_t * , ...) ;
wint_t ungetwc(wint_t, FILE *);
int vfwprintf(FILE * , const wchar_t * ,
     __darwin_va_list) ;
int vswprintf(wchar_t * , size_t, const wchar_t * ,
     __darwin_va_list) ;
int vwprintf(const wchar_t * , __darwin_va_list) ;
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
int wprintf(const wchar_t * , ...) ;
int wscanf(const wchar_t * , ...) ;


int vfwscanf(FILE * , const wchar_t * ,
     __darwin_va_list) ;
int vswscanf(const wchar_t * , const wchar_t * ,
     __darwin_va_list) ;
int vwscanf(const wchar_t * , __darwin_va_list) ;
float wcstof(const wchar_t * , wchar_t ** );
long double
 wcstold(const wchar_t * , wchar_t ** ) ;

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






}
# 55 "/usr/include/c++/4.0.0/cwchar" 2 3
# 69 "/usr/include/c++/4.0.0/cwchar" 3
namespace std
{
  using ::mbstate_t;
}
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
# 60 "/usr/X11/include/X11/Xlib.h"


# 1 "/usr/X11/include/X11/X.h" 1
# 71 "/usr/X11/include/X11/X.h"
typedef unsigned long XID;



typedef unsigned long Mask;



typedef unsigned long Atom;

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
# 61 "/usr/X11/include/X11/Xlib.h" 2




# 1 "/usr/X11/include/X11/Xfuncproto.h" 1
# 64 "/usr/X11/include/X11/Xlib.h" 2


# 1 "/usr/X11/include/X11/Xosdefs.h" 1
# 65 "/usr/X11/include/X11/Xlib.h" 2
# 75 "/usr/X11/include/X11/Xlib.h"


# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 1 3 4
# 76 "/usr/X11/include/X11/Xlib.h" 2
# 93 "/usr/X11/include/X11/Xlib.h"
extern int
_Xmblen(




    char *str,
    int len

    );





typedef char *XPointer;
# 180 "/usr/X11/include/X11/Xlib.h"
typedef struct _XExtData {
 int number;
 struct _XExtData *next;
 int (*free_private)(
 struct _XExtData *extension
 );
 XPointer private_data;
} XExtData;




typedef struct {
 int extension;
 int major_opcode;
 int first_event;
 int first_error;
} XExtCodes;





typedef struct {
    int depth;
    int bits_per_pixel;
    int scanline_pad;
} XPixmapFormatValues;





typedef struct {
 int function;
 unsigned long plane_mask;
 unsigned long foreground;
 unsigned long background;
 int line_width;
 int line_style;
 int cap_style;

 int join_style;
 int fill_style;

 int fill_rule;
 int arc_mode;
 Pixmap tile;
 Pixmap stipple;
 int ts_x_origin;
 int ts_y_origin;
        Font font;
 int subwindow_mode;
 int graphics_exposures;
 int clip_x_origin;
 int clip_y_origin;
 Pixmap clip_mask;
 int dash_offset;
 char dashes;
} XGCValues;






typedef struct _XGC

{
    XExtData *ext_data;
    GContext gid;

}

*GC;




typedef struct {
 XExtData *ext_data;
 VisualID visualid;

 int c_class;



 unsigned long red_mask, green_mask, blue_mask;
 int bits_per_rgb;
 int map_entries;
} Visual;




typedef struct {
 int depth;
 int nvisuals;
 Visual *visuals;
} Depth;







struct _XDisplay;

typedef struct {
 XExtData *ext_data;
 struct _XDisplay *display;
 Window root;
 int width, height;
 int mwidth, mheight;
 int ndepths;
 Depth *depths;
 int root_depth;
 Visual *root_visual;
 GC default_gc;
 Colormap cmap;
 unsigned long white_pixel;
 unsigned long black_pixel;
 int max_maps, min_maps;
 int backing_store;
 int save_unders;
 long root_input_mask;
} Screen;




typedef struct {
 XExtData *ext_data;
 int depth;
 int bits_per_pixel;
 int scanline_pad;
} ScreenFormat;




typedef struct {
    Pixmap background_pixmap;
    unsigned long background_pixel;
    Pixmap border_pixmap;
    unsigned long border_pixel;
    int bit_gravity;
    int win_gravity;
    int backing_store;
    unsigned long backing_planes;
    unsigned long backing_pixel;
    int save_under;
    long event_mask;
    long do_not_propagate_mask;
    int override_redirect;
    Colormap colormap;
    Cursor cursor;
} XSetWindowAttributes;

typedef struct {
    int x, y;
    int width, height;
    int border_width;
    int depth;
    Visual *visual;
    Window root;

    int c_class;



    int bit_gravity;
    int win_gravity;
    int backing_store;
    unsigned long backing_planes;
    unsigned long backing_pixel;
    int save_under;
    Colormap colormap;
    int map_installed;
    int map_state;
    long all_event_masks;
    long your_event_mask;
    long do_not_propagate_mask;
    int override_redirect;
    Screen *screen;
} XWindowAttributes;






typedef struct {
 int family;
 int length;
 char *address;
} XHostAddress;




typedef struct {
 int typelength;
 int valuelength;
 char *type;
 char *value;
} XServerInterpretedAddress;




typedef struct _XImage {
    int width, height;
    int xoffset;
    int format;
    char *data;
    int byte_order;
    int bitmap_unit;
    int bitmap_bit_order;
    int bitmap_pad;
    int depth;
    int bytes_per_line;
    int bits_per_pixel;
    unsigned long red_mask;
    unsigned long green_mask;
    unsigned long blue_mask;
    XPointer obdata;
    struct funcs {
 struct _XImage *(*create_image)(
  struct _XDisplay* ,
  Visual* ,
  unsigned int ,
  int ,
  int ,
  char* ,
  unsigned int ,
  unsigned int ,
  int ,
  int );
 int (*destroy_image) (struct _XImage *);
 unsigned long (*get_pixel) (struct _XImage *, int, int);
 int (*put_pixel) (struct _XImage *, int, int, unsigned long);
 struct _XImage *(*sub_image)(struct _XImage *, int, int, unsigned int, unsigned int);
 int (*add_pixel) (struct _XImage *, long);
 } f;
} XImage;




typedef struct {
    int x, y;
    int width, height;
    int border_width;
    Window sibling;
    int stack_mode;
} XWindowChanges;




typedef struct {
 unsigned long pixel;
 unsigned short red, green, blue;
 char flags;
 char pad;
} XColor;






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




typedef struct {
        int key_click_percent;
        int bell_percent;
        int bell_pitch;
        int bell_duration;
        int led;
        int led_mode;
        int key;
        int auto_repeat_mode;
} XKeyboardControl;



typedef struct {
        int key_click_percent;
 int bell_percent;
 unsigned int bell_pitch, bell_duration;
 unsigned long led_mask;
 int global_auto_repeat;
 char auto_repeats[32];
} XKeyboardState;



typedef struct {
        Time time;
 short x, y;
} XTimeCoord;



typedef struct {
  int max_keypermod;
  KeyCode *modifiermap;
} XModifierKeymap;
# 522 "/usr/X11/include/X11/Xlib.h"
struct _XPrivate;
struct _XrmHashBucketRec;

typedef struct

_XDisplay

{
 XExtData *ext_data;
 struct _XPrivate *private1;
 int fd;
 int private2;
 int proto_major_version;
 int proto_minor_version;
 char *vendor;
        XID private3;
 XID private4;
 XID private5;
 int private6;
 XID (*resource_alloc)(
  struct _XDisplay*
 );
 int byte_order;
 int bitmap_unit;
 int bitmap_pad;
 int bitmap_bit_order;
 int nformats;
 ScreenFormat *pixmap_format;
 int private8;
 int release;
 struct _XPrivate *private9, *private10;
 int qlen;
 unsigned long last_request_read;
 unsigned long request;
 XPointer private11;
 XPointer private12;
 XPointer private13;
 XPointer private14;
 unsigned max_request_size;
 struct _XrmHashBucketRec *db;
 int (*private15)(
  struct _XDisplay*
  );
 char *display_name;
 int default_screen;
 int nscreens;
 Screen *screens;
 unsigned long motion_buffer;
 unsigned long private16;
 int min_keycode;
 int max_keycode;
 XPointer private17;
 XPointer private18;
 int private19;
 char *xdefaults;

}

Display,

*_XPrivDisplay;






typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Window root;
 Window subwindow;
 Time time;
 int x, y;
 int x_root, y_root;
 unsigned int state;
 unsigned int keycode;
 int same_screen;
} XKeyEvent;
typedef XKeyEvent XKeyPressedEvent;
typedef XKeyEvent XKeyReleasedEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Window root;
 Window subwindow;
 Time time;
 int x, y;
 int x_root, y_root;
 unsigned int state;
 unsigned int button;
 int same_screen;
} XButtonEvent;
typedef XButtonEvent XButtonPressedEvent;
typedef XButtonEvent XButtonReleasedEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Window root;
 Window subwindow;
 Time time;
 int x, y;
 int x_root, y_root;
 unsigned int state;
 char is_hint;
 int same_screen;
} XMotionEvent;
typedef XMotionEvent XPointerMovedEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Window root;
 Window subwindow;
 Time time;
 int x, y;
 int x_root, y_root;
 int mode;
 int detail;




 int same_screen;
 int focus;
 unsigned int state;
} XCrossingEvent;
typedef XCrossingEvent XEnterWindowEvent;
typedef XCrossingEvent XLeaveWindowEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 int mode;

 int detail;





} XFocusChangeEvent;
typedef XFocusChangeEvent XFocusInEvent;
typedef XFocusChangeEvent XFocusOutEvent;


typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 char key_vector[32];
} XKeymapEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 int x, y;
 int width, height;
 int count;
} XExposeEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Drawable drawable;
 int x, y;
 int width, height;
 int count;
 int major_code;
 int minor_code;
} XGraphicsExposeEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Drawable drawable;
 int major_code;
 int minor_code;
} XNoExposeEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 int state;
} XVisibilityEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window parent;
 Window window;
 int x, y;
 int width, height;
 int border_width;
 int override_redirect;
} XCreateWindowEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
} XDestroyWindowEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 int from_configure;
} XUnmapEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 int override_redirect;
} XMapEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window parent;
 Window window;
} XMapRequestEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 Window parent;
 int x, y;
 int override_redirect;
} XReparentEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
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
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 int x, y;
} XGravityEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 int width, height;
} XResizeRequestEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window parent;
 Window window;
 int x, y;
 int width, height;
 int border_width;
 Window above;
 int detail;
 unsigned long value_mask;
} XConfigureRequestEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 int place;
} XCirculateEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window parent;
 Window window;
 int place;
} XCirculateRequestEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Atom atom;
 Time time;
 int state;
} XPropertyEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Atom selection;
 Time time;
} XSelectionClearEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window owner;
 Window requestor;
 Atom selection;
 Atom target;
 Atom property;
 Time time;
} XSelectionRequestEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window requestor;
 Atom selection;
 Atom target;
 Atom property;
 Time time;
} XSelectionEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Colormap colormap;

 int c_new;



 int state;
} XColormapEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
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
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 int request;

 int first_keycode;
 int count;
} XMappingEvent;

typedef struct {
 int type;
 Display *display;
 XID resourceid;
 unsigned long serial;
 unsigned char error_code;
 unsigned char request_code;
 unsigned char minor_code;
} XErrorEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
} XAnyEvent;





typedef union _XEvent {
        int type;
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







typedef struct {
    short lbearing;
    short rbearing;
    short width;
    short ascent;
    short descent;
    unsigned short attributes;
} XCharStruct;





typedef struct {
    Atom name;
    unsigned long card32;
} XFontProp;

typedef struct {
    XExtData *ext_data;
    Font fid;
    unsigned direction;
    unsigned min_char_or_byte2;
    unsigned max_char_or_byte2;
    unsigned min_byte1;
    unsigned max_byte1;
    int all_chars_exist;
    unsigned default_char;
    int n_properties;
    XFontProp *properties;
    XCharStruct min_bounds;
    XCharStruct max_bounds;
    XCharStruct *per_char;
    int ascent;
    int descent;
} XFontStruct;




typedef struct {
    char *chars;
    int nchars;
    int delta;
    Font font;
} XTextItem;

typedef struct {
    unsigned char byte1;
    unsigned char byte2;
} XChar2b;

typedef struct {
    XChar2b *chars;
    int nchars;
    int delta;
    Font font;
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
    XOrientation *orientation;
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
    int caret;
    int chg_first;
    int chg_length;
    XIMText *text;
} XIMPreeditDrawCallbackStruct;

typedef enum {
    XIMIsInvisible,
    XIMIsPrimary,
    XIMIsSecondary
} XIMCaretStyle;

typedef struct _XIMPreeditCaretCallbackStruct {
    int position;
    XIMCaretDirection direction;
    XIMCaretStyle style;
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

extern "C" {





extern int _Xdebug;

extern XFontStruct *XLoadQueryFont(
    Display* ,
    const char*
);

extern XFontStruct *XQueryFont(
    Display* ,
    XID
);


extern XTimeCoord *XGetMotionEvents(
    Display* ,
    Window ,
    Time ,
    Time ,
    int*
);

extern XModifierKeymap *XDeleteModifiermapEntry(
    XModifierKeymap* ,

    unsigned int ,



    int
);

extern XModifierKeymap *XGetModifierMapping(
    Display*
);

extern XModifierKeymap *XInsertModifiermapEntry(
    XModifierKeymap* ,

    unsigned int ,



    int
);

extern XModifierKeymap *XNewModifiermap(
    int
);

extern XImage *XCreateImage(
    Display* ,
    Visual* ,
    unsigned int ,
    int ,
    int ,
    char* ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);
extern int XInitImage(
    XImage*
);
extern XImage *XGetImage(
    Display* ,
    Drawable ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    int
);
extern XImage *XGetSubImage(
    Display* ,
    Drawable ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    int ,
    XImage* ,
    int ,
    int
);




extern Display *XOpenDisplay(
    const char*
);

extern void XrmInitialize(
    void
);

extern char *XFetchBytes(
    Display* ,
    int*
);
extern char *XFetchBuffer(
    Display* ,
    int* ,
    int
);
extern char *XGetAtomName(
    Display* ,
    Atom
);
extern int XGetAtomNames(
    Display* ,
    Atom* ,
    int ,
    char**
);
extern char *XGetDefault(
    Display* ,
    const char* ,
    const char*
);
extern char *XDisplayName(
    const char*
);
extern char *XKeysymToString(
    KeySym
);

extern int (*XSynchronize(
    Display* ,
    int
))(
    Display*
);
extern int (*XSetAfterFunction(
    Display* ,
    int (*) (
      Display*
            )
))(
    Display*
);
extern Atom XInternAtom(
    Display* ,
    const char* ,
    int
);
extern int XInternAtoms(
    Display* ,
    char** ,
    int ,
    int ,
    Atom*
);
extern Colormap XCopyColormapAndFree(
    Display* ,
    Colormap
);
extern Colormap XCreateColormap(
    Display* ,
    Window ,
    Visual* ,
    int
);
extern Cursor XCreatePixmapCursor(
    Display* ,
    Pixmap ,
    Pixmap ,
    XColor* ,
    XColor* ,
    unsigned int ,
    unsigned int
);
extern Cursor XCreateGlyphCursor(
    Display* ,
    Font ,
    Font ,
    unsigned int ,
    unsigned int ,
    XColor const * ,
    XColor const *
);
extern Cursor XCreateFontCursor(
    Display* ,
    unsigned int
);
extern Font XLoadFont(
    Display* ,
    const char*
);
extern GC XCreateGC(
    Display* ,
    Drawable ,
    unsigned long ,
    XGCValues*
);
extern GContext XGContextFromGC(
    GC
);
extern void XFlushGC(
    Display* ,
    GC
);
extern Pixmap XCreatePixmap(
    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int
);
extern Pixmap XCreateBitmapFromData(
    Display* ,
    Drawable ,
    const char* ,
    unsigned int ,
    unsigned int
);
extern Pixmap XCreatePixmapFromBitmapData(
    Display* ,
    Drawable ,
    char* ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    unsigned long ,
    unsigned int
);
extern Window XCreateSimpleWindow(
    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    unsigned long
);
extern Window XGetSelectionOwner(
    Display* ,
    Atom
);
extern Window XCreateWindow(
    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned int ,
    int ,
    unsigned int ,
    Visual* ,
    unsigned long ,
    XSetWindowAttributes*
);
extern Colormap *XListInstalledColormaps(
    Display* ,
    Window ,
    int*
);
extern char **XListFonts(
    Display* ,
    const char* ,
    int ,
    int*
);
extern char **XListFontsWithInfo(
    Display* ,
    const char* ,
    int ,
    int* ,
    XFontStruct**
);
extern char **XGetFontPath(
    Display* ,
    int*
);
extern char **XListExtensions(
    Display* ,
    int*
);
extern Atom *XListProperties(
    Display* ,
    Window ,
    int*
);
extern XHostAddress *XListHosts(
    Display* ,
    int* ,
    int*
);
extern KeySym XKeycodeToKeysym(
    Display* ,

    unsigned int ,



    int
);
extern KeySym XLookupKeysym(
    XKeyEvent* ,
    int
);
extern KeySym *XGetKeyboardMapping(
    Display* ,

    unsigned int ,



    int ,
    int*
);
extern KeySym XStringToKeysym(
    const char*
);
extern long XMaxRequestSize(
    Display*
);
extern long XExtendedMaxRequestSize(
    Display*
);
extern char *XResourceManagerString(
    Display*
);
extern char *XScreenResourceString(
 Screen*
);
extern unsigned long XDisplayMotionBufferSize(
    Display*
);
extern VisualID XVisualIDFromVisual(
    Visual*
);



extern int XInitThreads(
    void
);

extern void XLockDisplay(
    Display*
);

extern void XUnlockDisplay(
    Display*
);



extern XExtCodes *XInitExtension(
    Display* ,
    const char*
);

extern XExtCodes *XAddExtension(
    Display*
);
extern XExtData *XFindOnExtensionList(
    XExtData** ,
    int
);
extern XExtData **XEHeadOfExtensionList(
    XEDataObject
);


extern Window XRootWindow(
    Display* ,
    int
);
extern Window XDefaultRootWindow(
    Display*
);
extern Window XRootWindowOfScreen(
    Screen*
);
extern Visual *XDefaultVisual(
    Display* ,
    int
);
extern Visual *XDefaultVisualOfScreen(
    Screen*
);
extern GC XDefaultGC(
    Display* ,
    int
);
extern GC XDefaultGCOfScreen(
    Screen*
);
extern unsigned long XBlackPixel(
    Display* ,
    int
);
extern unsigned long XWhitePixel(
    Display* ,
    int
);
extern unsigned long XAllPlanes(
    void
);
extern unsigned long XBlackPixelOfScreen(
    Screen*
);
extern unsigned long XWhitePixelOfScreen(
    Screen*
);
extern unsigned long XNextRequest(
    Display*
);
extern unsigned long XLastKnownRequestProcessed(
    Display*
);
extern char *XServerVendor(
    Display*
);
extern char *XDisplayString(
    Display*
);
extern Colormap XDefaultColormap(
    Display* ,
    int
);
extern Colormap XDefaultColormapOfScreen(
    Screen*
);
extern Display *XDisplayOfScreen(
    Screen*
);
extern Screen *XScreenOfDisplay(
    Display* ,
    int
);
extern Screen *XDefaultScreenOfDisplay(
    Display*
);
extern long XEventMaskOfScreen(
    Screen*
);

extern int XScreenNumberOfScreen(
    Screen*
);

typedef int (*XErrorHandler) (
    Display* ,
    XErrorEvent*
);

extern XErrorHandler XSetErrorHandler (
    XErrorHandler
);


typedef int (*XIOErrorHandler) (
    Display*
);

extern XIOErrorHandler XSetIOErrorHandler (
    XIOErrorHandler
);


extern XPixmapFormatValues *XListPixmapFormats(
    Display* ,
    int*
);
extern int *XListDepths(
    Display* ,
    int ,
    int*
);



extern int XReconfigureWMWindow(
    Display* ,
    Window ,
    int ,
    unsigned int ,
    XWindowChanges*
);

extern int XGetWMProtocols(
    Display* ,
    Window ,
    Atom** ,
    int*
);
extern int XSetWMProtocols(
    Display* ,
    Window ,
    Atom* ,
    int
);
extern int XIconifyWindow(
    Display* ,
    Window ,
    int
);
extern int XWithdrawWindow(
    Display* ,
    Window ,
    int
);
extern int XGetCommand(
    Display* ,
    Window ,
    char*** ,
    int*
);
extern int XGetWMColormapWindows(
    Display* ,
    Window ,
    Window** ,
    int*
);
extern int XSetWMColormapWindows(
    Display* ,
    Window ,
    Window* ,
    int
);
extern void XFreeStringList(
    char**
);
extern int XSetTransientForHint(
    Display* ,
    Window ,
    Window
);



extern int XActivateScreenSaver(
    Display*
);

extern int XAddHost(
    Display* ,
    XHostAddress*
);

extern int XAddHosts(
    Display* ,
    XHostAddress* ,
    int
);

extern int XAddToExtensionList(
    struct _XExtData** ,
    XExtData*
);

extern int XAddToSaveSet(
    Display* ,
    Window
);

extern int XAllocColor(
    Display* ,
    Colormap ,
    XColor*
);

extern int XAllocColorCells(
    Display* ,
    Colormap ,
    int ,
    unsigned long* ,
    unsigned int ,
    unsigned long* ,
    unsigned int
);

extern int XAllocColorPlanes(
    Display* ,
    Colormap ,
    int ,
    unsigned long* ,
    int ,
    int ,
    int ,
    int ,
    unsigned long* ,
    unsigned long* ,
    unsigned long*
);

extern int XAllocNamedColor(
    Display* ,
    Colormap ,
    const char* ,
    XColor* ,
    XColor*
);

extern int XAllowEvents(
    Display* ,
    int ,
    Time
);

extern int XAutoRepeatOff(
    Display*
);

extern int XAutoRepeatOn(
    Display*
);

extern int XBell(
    Display* ,
    int
);

extern int XBitmapBitOrder(
    Display*
);

extern int XBitmapPad(
    Display*
);

extern int XBitmapUnit(
    Display*
);

extern int XCellsOfScreen(
    Screen*
);

extern int XChangeActivePointerGrab(
    Display* ,
    unsigned int ,
    Cursor ,
    Time
);

extern int XChangeGC(
    Display* ,
    GC ,
    unsigned long ,
    XGCValues*
);

extern int XChangeKeyboardControl(
    Display* ,
    unsigned long ,
    XKeyboardControl*
);

extern int XChangeKeyboardMapping(
    Display* ,
    int ,
    int ,
    KeySym* ,
    int
);

extern int XChangePointerControl(
    Display* ,
    int ,
    int ,
    int ,
    int ,
    int
);

extern int XChangeProperty(
    Display* ,
    Window ,
    Atom ,
    Atom ,
    int ,
    int ,
    const unsigned char* ,
    int
);

extern int XChangeSaveSet(
    Display* ,
    Window ,
    int
);

extern int XChangeWindowAttributes(
    Display* ,
    Window ,
    unsigned long ,
    XSetWindowAttributes*
);

extern int XCheckIfEvent(
    Display* ,
    XEvent* ,
    int (*) (
        Display* ,
               XEvent* ,
               XPointer
             ) ,
    XPointer
);

extern int XCheckMaskEvent(
    Display* ,
    long ,
    XEvent*
);

extern int XCheckTypedEvent(
    Display* ,
    int ,
    XEvent*
);

extern int XCheckTypedWindowEvent(
    Display* ,
    Window ,
    int ,
    XEvent*
);

extern int XCheckWindowEvent(
    Display* ,
    Window ,
    long ,
    XEvent*
);

extern int XCirculateSubwindows(
    Display* ,
    Window ,
    int
);

extern int XCirculateSubwindowsDown(
    Display* ,
    Window
);

extern int XCirculateSubwindowsUp(
    Display* ,
    Window
);

extern int XClearArea(
    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int
);

extern int XClearWindow(
    Display* ,
    Window
);

extern int XCloseDisplay(
    Display*
);

extern int XConfigureWindow(
    Display* ,
    Window ,
    unsigned int ,
    XWindowChanges*
);

extern int XConnectionNumber(
    Display*
);

extern int XConvertSelection(
    Display* ,
    Atom ,
    Atom ,
    Atom ,
    Window ,
    Time
);

extern int XCopyArea(
    Display* ,
    Drawable ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);

extern int XCopyGC(
    Display* ,
    GC ,
    unsigned long ,
    GC
);

extern int XCopyPlane(
    Display* ,
    Drawable ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int ,
    unsigned long
);

extern int XDefaultDepth(
    Display* ,
    int
);

extern int XDefaultDepthOfScreen(
    Screen*
);

extern int XDefaultScreen(
    Display*
);

extern int XDefineCursor(
    Display* ,
    Window ,
    Cursor
);

extern int XDeleteProperty(
    Display* ,
    Window ,
    Atom
);

extern int XDestroyWindow(
    Display* ,
    Window
);

extern int XDestroySubwindows(
    Display* ,
    Window
);

extern int XDoesBackingStore(
    Screen*
);

extern int XDoesSaveUnders(
    Screen*
);

extern int XDisableAccessControl(
    Display*
);


extern int XDisplayCells(
    Display* ,
    int
);

extern int XDisplayHeight(
    Display* ,
    int
);

extern int XDisplayHeightMM(
    Display* ,
    int
);

extern int XDisplayKeycodes(
    Display* ,
    int* ,
    int*
);

extern int XDisplayPlanes(
    Display* ,
    int
);

extern int XDisplayWidth(
    Display* ,
    int
);

extern int XDisplayWidthMM(
    Display* ,
    int
);

extern int XDrawArc(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);

extern int XDrawArcs(
    Display* ,
    Drawable ,
    GC ,
    XArc* ,
    int
);

extern int XDrawImageString(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern int XDrawImageString16(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const XChar2b* ,
    int
);

extern int XDrawLine(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    int ,
    int
);

extern int XDrawLines(
    Display* ,
    Drawable ,
    GC ,
    XPoint* ,
    int ,
    int
);

extern int XDrawPoint(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int
);

extern int XDrawPoints(
    Display* ,
    Drawable ,
    GC ,
    XPoint* ,
    int ,
    int
);

extern int XDrawRectangle(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int
);

extern int XDrawRectangles(
    Display* ,
    Drawable ,
    GC ,
    XRectangle* ,
    int
);

extern int XDrawSegments(
    Display* ,
    Drawable ,
    GC ,
    XSegment* ,
    int
);

extern int XDrawString(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern int XDrawString16(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const XChar2b* ,
    int
);

extern int XDrawText(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XTextItem* ,
    int
);

extern int XDrawText16(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XTextItem16* ,
    int
);

extern int XEnableAccessControl(
    Display*
);

extern int XEventsQueued(
    Display* ,
    int
);

extern int XFetchName(
    Display* ,
    Window ,
    char**
);

extern int XFillArc(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);

extern int XFillArcs(
    Display* ,
    Drawable ,
    GC ,
    XArc* ,
    int
);

extern int XFillPolygon(
    Display* ,
    Drawable ,
    GC ,
    XPoint* ,
    int ,
    int ,
    int
);

extern int XFillRectangle(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int
);

extern int XFillRectangles(
    Display* ,
    Drawable ,
    GC ,
    XRectangle* ,
    int
);

extern int XFlush(
    Display*
);

extern int XForceScreenSaver(
    Display* ,
    int
);

extern int XFree(
    void*
);

extern int XFreeColormap(
    Display* ,
    Colormap
);

extern int XFreeColors(
    Display* ,
    Colormap ,
    unsigned long* ,
    int ,
    unsigned long
);

extern int XFreeCursor(
    Display* ,
    Cursor
);

extern int XFreeExtensionList(
    char**
);

extern int XFreeFont(
    Display* ,
    XFontStruct*
);

extern int XFreeFontInfo(
    char** ,
    XFontStruct* ,
    int
);

extern int XFreeFontNames(
    char**
);

extern int XFreeFontPath(
    char**
);

extern int XFreeGC(
    Display* ,
    GC
);

extern int XFreeModifiermap(
    XModifierKeymap*
);

extern int XFreePixmap(
    Display* ,
    Pixmap
);

extern int XGeometry(
    Display* ,
    int ,
    const char* ,
    const char* ,
    unsigned int ,
    unsigned int ,
    unsigned int ,
    int ,
    int ,
    int* ,
    int* ,
    int* ,
    int*
);

extern int XGetErrorDatabaseText(
    Display* ,
    const char* ,
    const char* ,
    const char* ,
    char* ,
    int
);

extern int XGetErrorText(
    Display* ,
    int ,
    char* ,
    int
);

extern int XGetFontProperty(
    XFontStruct* ,
    Atom ,
    unsigned long*
);

extern int XGetGCValues(
    Display* ,
    GC ,
    unsigned long ,
    XGCValues*
);

extern int XGetGeometry(
    Display* ,
    Drawable ,
    Window* ,
    int* ,
    int* ,
    unsigned int* ,
    unsigned int* ,
    unsigned int* ,
    unsigned int*
);

extern int XGetIconName(
    Display* ,
    Window ,
    char**
);

extern int XGetInputFocus(
    Display* ,
    Window* ,
    int*
);

extern int XGetKeyboardControl(
    Display* ,
    XKeyboardState*
);

extern int XGetPointerControl(
    Display* ,
    int* ,
    int* ,
    int*
);

extern int XGetPointerMapping(
    Display* ,
    unsigned char* ,
    int
);

extern int XGetScreenSaver(
    Display* ,
    int* ,
    int* ,
    int* ,
    int*
);

extern int XGetTransientForHint(
    Display* ,
    Window ,
    Window*
);

extern int XGetWindowProperty(
    Display* ,
    Window ,
    Atom ,
    long ,
    long ,
    int ,
    Atom ,
    Atom* ,
    int* ,
    unsigned long* ,
    unsigned long* ,
    unsigned char**
);

extern int XGetWindowAttributes(
    Display* ,
    Window ,
    XWindowAttributes*
);

extern int XGrabButton(
    Display* ,
    unsigned int ,
    unsigned int ,
    Window ,
    int ,
    unsigned int ,
    int ,
    int ,
    Window ,
    Cursor
);

extern int XGrabKey(
    Display* ,
    int ,
    unsigned int ,
    Window ,
    int ,
    int ,
    int
);

extern int XGrabKeyboard(
    Display* ,
    Window ,
    int ,
    int ,
    int ,
    Time
);

extern int XGrabPointer(
    Display* ,
    Window ,
    int ,
    unsigned int ,
    int ,
    int ,
    Window ,
    Cursor ,
    Time
);

extern int XGrabServer(
    Display*
);

extern int XHeightMMOfScreen(
    Screen*
);

extern int XHeightOfScreen(
    Screen*
);

extern int XIfEvent(
    Display* ,
    XEvent* ,
    int (*) (
        Display* ,
               XEvent* ,
               XPointer
             ) ,
    XPointer
);

extern int XImageByteOrder(
    Display*
);

extern int XInstallColormap(
    Display* ,
    Colormap
);

extern KeyCode XKeysymToKeycode(
    Display* ,
    KeySym
);

extern int XKillClient(
    Display* ,
    XID
);

extern int XLookupColor(
    Display* ,
    Colormap ,
    const char* ,
    XColor* ,
    XColor*
);

extern int XLowerWindow(
    Display* ,
    Window
);

extern int XMapRaised(
    Display* ,
    Window
);

extern int XMapSubwindows(
    Display* ,
    Window
);

extern int XMapWindow(
    Display* ,
    Window
);

extern int XMaskEvent(
    Display* ,
    long ,
    XEvent*
);

extern int XMaxCmapsOfScreen(
    Screen*
);

extern int XMinCmapsOfScreen(
    Screen*
);

extern int XMoveResizeWindow(
    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int
);

extern int XMoveWindow(
    Display* ,
    Window ,
    int ,
    int
);

extern int XNextEvent(
    Display* ,
    XEvent*
);

extern int XNoOp(
    Display*
);

extern int XParseColor(
    Display* ,
    Colormap ,
    const char* ,
    XColor*
);

extern int XParseGeometry(
    const char* ,
    int* ,
    int* ,
    unsigned int* ,
    unsigned int*
);

extern int XPeekEvent(
    Display* ,
    XEvent*
);

extern int XPeekIfEvent(
    Display* ,
    XEvent* ,
    int (*) (
        Display* ,
               XEvent* ,
               XPointer
             ) ,
    XPointer
);

extern int XPending(
    Display*
);

extern int XPlanesOfScreen(
    Screen*
);

extern int XProtocolRevision(
    Display*
);

extern int XProtocolVersion(
    Display*
);


extern int XPutBackEvent(
    Display* ,
    XEvent*
);

extern int XPutImage(
    Display* ,
    Drawable ,
    GC ,
    XImage* ,
    int ,
    int ,
    int ,
    int ,
    unsigned int ,
    unsigned int
);

extern int XQLength(
    Display*
);

extern int XQueryBestCursor(
    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*
);

extern int XQueryBestSize(
    Display* ,
    int ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*
);

extern int XQueryBestStipple(
    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*
);

extern int XQueryBestTile(
    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*
);

extern int XQueryColor(
    Display* ,
    Colormap ,
    XColor*
);

extern int XQueryColors(
    Display* ,
    Colormap ,
    XColor* ,
    int
);

extern int XQueryExtension(
    Display* ,
    const char* ,
    int* ,
    int* ,
    int*
);

extern int XQueryKeymap(
    Display* ,
    char [32]
);

extern int XQueryPointer(
    Display* ,
    Window ,
    Window* ,
    Window* ,
    int* ,
    int* ,
    int* ,
    int* ,
    unsigned int*
);

extern int XQueryTextExtents(
    Display* ,
    XID ,
    const char* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*
);

extern int XQueryTextExtents16(
    Display* ,
    XID ,
    const XChar2b* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*
);

extern int XQueryTree(
    Display* ,
    Window ,
    Window* ,
    Window* ,
    Window** ,
    unsigned int*
);

extern int XRaiseWindow(
    Display* ,
    Window
);

extern int XReadBitmapFile(
    Display* ,
    Drawable ,
    const char* ,
    unsigned int* ,
    unsigned int* ,
    Pixmap* ,
    int* ,
    int*
);

extern int XReadBitmapFileData(
    const char* ,
    unsigned int* ,
    unsigned int* ,
    unsigned char** ,
    int* ,
    int*
);

extern int XRebindKeysym(
    Display* ,
    KeySym ,
    KeySym* ,
    int ,
    const unsigned char* ,
    int
);

extern int XRecolorCursor(
    Display* ,
    Cursor ,
    XColor* ,
    XColor*
);

extern int XRefreshKeyboardMapping(
    XMappingEvent*
);

extern int XRemoveFromSaveSet(
    Display* ,
    Window
);

extern int XRemoveHost(
    Display* ,
    XHostAddress*
);

extern int XRemoveHosts(
    Display* ,
    XHostAddress* ,
    int
);

extern int XReparentWindow(
    Display* ,
    Window ,
    Window ,
    int ,
    int
);

extern int XResetScreenSaver(
    Display*
);

extern int XResizeWindow(
    Display* ,
    Window ,
    unsigned int ,
    unsigned int
);

extern int XRestackWindows(
    Display* ,
    Window* ,
    int
);

extern int XRotateBuffers(
    Display* ,
    int
);

extern int XRotateWindowProperties(
    Display* ,
    Window ,
    Atom* ,
    int ,
    int
);

extern int XScreenCount(
    Display*
);

extern int XSelectInput(
    Display* ,
    Window ,
    long
);

extern int XSendEvent(
    Display* ,
    Window ,
    int ,
    long ,
    XEvent*
);

extern int XSetAccessControl(
    Display* ,
    int
);

extern int XSetArcMode(
    Display* ,
    GC ,
    int
);

extern int XSetBackground(
    Display* ,
    GC ,
    unsigned long
);

extern int XSetClipMask(
    Display* ,
    GC ,
    Pixmap
);

extern int XSetClipOrigin(
    Display* ,
    GC ,
    int ,
    int
);

extern int XSetClipRectangles(
    Display* ,
    GC ,
    int ,
    int ,
    XRectangle* ,
    int ,
    int
);

extern int XSetCloseDownMode(
    Display* ,
    int
);

extern int XSetCommand(
    Display* ,
    Window ,
    char** ,
    int
);

extern int XSetDashes(
    Display* ,
    GC ,
    int ,
    const char* ,
    int
);

extern int XSetFillRule(
    Display* ,
    GC ,
    int
);

extern int XSetFillStyle(
    Display* ,
    GC ,
    int
);

extern int XSetFont(
    Display* ,
    GC ,
    Font
);

extern int XSetFontPath(
    Display* ,
    char** ,
    int
);

extern int XSetForeground(
    Display* ,
    GC ,
    unsigned long
);

extern int XSetFunction(
    Display* ,
    GC ,
    int
);

extern int XSetGraphicsExposures(
    Display* ,
    GC ,
    int
);

extern int XSetIconName(
    Display* ,
    Window ,
    const char*
);

extern int XSetInputFocus(
    Display* ,
    Window ,
    int ,
    Time
);

extern int XSetLineAttributes(
    Display* ,
    GC ,
    unsigned int ,
    int ,
    int ,
    int
);

extern int XSetModifierMapping(
    Display* ,
    XModifierKeymap*
);

extern int XSetPlaneMask(
    Display* ,
    GC ,
    unsigned long
);

extern int XSetPointerMapping(
    Display* ,
    const unsigned char* ,
    int
);

extern int XSetScreenSaver(
    Display* ,
    int ,
    int ,
    int ,
    int
);

extern int XSetSelectionOwner(
    Display* ,
    Atom ,
    Window ,
    Time
);

extern int XSetState(
    Display* ,
    GC ,
    unsigned long ,
    unsigned long ,
    int ,
    unsigned long
);

extern int XSetStipple(
    Display* ,
    GC ,
    Pixmap
);

extern int XSetSubwindowMode(
    Display* ,
    GC ,
    int
);

extern int XSetTSOrigin(
    Display* ,
    GC ,
    int ,
    int
);

extern int XSetTile(
    Display* ,
    GC ,
    Pixmap
);

extern int XSetWindowBackground(
    Display* ,
    Window ,
    unsigned long
);

extern int XSetWindowBackgroundPixmap(
    Display* ,
    Window ,
    Pixmap
);

extern int XSetWindowBorder(
    Display* ,
    Window ,
    unsigned long
);

extern int XSetWindowBorderPixmap(
    Display* ,
    Window ,
    Pixmap
);

extern int XSetWindowBorderWidth(
    Display* ,
    Window ,
    unsigned int
);

extern int XSetWindowColormap(
    Display* ,
    Window ,
    Colormap
);

extern int XStoreBuffer(
    Display* ,
    const char* ,
    int ,
    int
);

extern int XStoreBytes(
    Display* ,
    const char* ,
    int
);

extern int XStoreColor(
    Display* ,
    Colormap ,
    XColor*
);

extern int XStoreColors(
    Display* ,
    Colormap ,
    XColor* ,
    int
);

extern int XStoreName(
    Display* ,
    Window ,
    const char*
);

extern int XStoreNamedColor(
    Display* ,
    Colormap ,
    const char* ,
    unsigned long ,
    int
);

extern int XSync(
    Display* ,
    int
);

extern int XTextExtents(
    XFontStruct* ,
    const char* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*
);

extern int XTextExtents16(
    XFontStruct* ,
    const XChar2b* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*
);

extern int XTextWidth(
    XFontStruct* ,
    const char* ,
    int
);

extern int XTextWidth16(
    XFontStruct* ,
    const XChar2b* ,
    int
);

extern int XTranslateCoordinates(
    Display* ,
    Window ,
    Window ,
    int ,
    int ,
    int* ,
    int* ,
    Window*
);

extern int XUndefineCursor(
    Display* ,
    Window
);

extern int XUngrabButton(
    Display* ,
    unsigned int ,
    unsigned int ,
    Window
);

extern int XUngrabKey(
    Display* ,
    int ,
    unsigned int ,
    Window
);

extern int XUngrabKeyboard(
    Display* ,
    Time
);

extern int XUngrabPointer(
    Display* ,
    Time
);

extern int XUngrabServer(
    Display*
);

extern int XUninstallColormap(
    Display* ,
    Colormap
);

extern int XUnloadFont(
    Display* ,
    Font
);

extern int XUnmapSubwindows(
    Display* ,
    Window
);

extern int XUnmapWindow(
    Display* ,
    Window
);

extern int XVendorRelease(
    Display*
);

extern int XWarpPointer(
    Display* ,
    Window ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);

extern int XWidthMMOfScreen(
    Screen*
);

extern int XWidthOfScreen(
    Screen*
);

extern int XWindowEvent(
    Display* ,
    Window ,
    long ,
    XEvent*
);

extern int XWriteBitmapFile(
    Display* ,
    const char* ,
    Pixmap ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);

extern int XSupportsLocale (void);

extern char *XSetLocaleModifiers(
    const char*
);

extern XOM XOpenOM(
    Display* ,
    struct _XrmHashBucketRec* ,
    const char* ,
    const char*
);

extern int XCloseOM(
    XOM
);

extern char *XSetOMValues(
    XOM ,
    ...
) __attribute__ ((__sentinel__(0)));

extern char *XGetOMValues(
    XOM ,
    ...
) __attribute__ ((__sentinel__(0)));

extern Display *XDisplayOfOM(
    XOM
);

extern char *XLocaleOfOM(
    XOM
);

extern XOC XCreateOC(
    XOM ,
    ...
) __attribute__ ((__sentinel__(0)));

extern void XDestroyOC(
    XOC
);

extern XOM XOMOfOC(
    XOC
);

extern char *XSetOCValues(
    XOC ,
    ...
) __attribute__ ((__sentinel__(0)));

extern char *XGetOCValues(
    XOC ,
    ...
) __attribute__ ((__sentinel__(0)));

extern XFontSet XCreateFontSet(
    Display* ,
    const char* ,
    char*** ,
    int* ,
    char**
);

extern void XFreeFontSet(
    Display* ,
    XFontSet
);

extern int XFontsOfFontSet(
    XFontSet ,
    XFontStruct*** ,
    char***
);

extern char *XBaseFontNameListOfFontSet(
    XFontSet
);

extern char *XLocaleOfFontSet(
    XFontSet
);

extern int XContextDependentDrawing(
    XFontSet
);

extern int XDirectionalDependentDrawing(
    XFontSet
);

extern int XContextualDrawing(
    XFontSet
);

extern XFontSetExtents *XExtentsOfFontSet(
    XFontSet
);

extern int XmbTextEscapement(
    XFontSet ,
    const char* ,
    int
);

extern int XwcTextEscapement(
    XFontSet ,
    const wchar_t* ,
    int
);

extern int Xutf8TextEscapement(
    XFontSet ,
    const char* ,
    int
);

extern int XmbTextExtents(
    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle*
);

extern int XwcTextExtents(
    XFontSet ,
    const wchar_t* ,
    int ,
    XRectangle* ,
    XRectangle*
);

extern int Xutf8TextExtents(
    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle*
);

extern int XmbTextPerCharExtents(
    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle* ,
    int ,
    int* ,
    XRectangle* ,
    XRectangle*
);

extern int XwcTextPerCharExtents(
    XFontSet ,
    const wchar_t* ,
    int ,
    XRectangle* ,
    XRectangle* ,
    int ,
    int* ,
    XRectangle* ,
    XRectangle*
);

extern int Xutf8TextPerCharExtents(
    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle* ,
    int ,
    int* ,
    XRectangle* ,
    XRectangle*
);

extern void XmbDrawText(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XmbTextItem* ,
    int
);

extern void XwcDrawText(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XwcTextItem* ,
    int
);

extern void Xutf8DrawText(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XmbTextItem* ,
    int
);

extern void XmbDrawString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern void XwcDrawString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const wchar_t* ,
    int
);

extern void Xutf8DrawString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern void XmbDrawImageString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern void XwcDrawImageString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const wchar_t* ,
    int
);

extern void Xutf8DrawImageString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern XIM XOpenIM(
    Display* ,
    struct _XrmHashBucketRec* ,
    char* ,
    char*
);

extern int XCloseIM(
    XIM
);

extern char *XGetIMValues(
    XIM , ...
) __attribute__ ((__sentinel__(0)));

extern char *XSetIMValues(
    XIM , ...
) __attribute__ ((__sentinel__(0)));

extern Display *XDisplayOfIM(
    XIM
);

extern char *XLocaleOfIM(
    XIM
);

extern XIC XCreateIC(
    XIM , ...
) __attribute__ ((__sentinel__(0)));

extern void XDestroyIC(
    XIC
);

extern void XSetICFocus(
    XIC
);

extern void XUnsetICFocus(
    XIC
);

extern wchar_t *XwcResetIC(
    XIC
);

extern char *XmbResetIC(
    XIC
);

extern char *Xutf8ResetIC(
    XIC
);

extern char *XSetICValues(
    XIC , ...
) __attribute__ ((__sentinel__(0)));

extern char *XGetICValues(
    XIC , ...
) __attribute__ ((__sentinel__(0)));

extern XIM XIMOfIC(
    XIC
);

extern int XFilterEvent(
    XEvent* ,
    Window
);

extern int XmbLookupString(
    XIC ,
    XKeyPressedEvent* ,
    char* ,
    int ,
    KeySym* ,
    int*
);

extern int XwcLookupString(
    XIC ,
    XKeyPressedEvent* ,
    wchar_t* ,
    int ,
    KeySym* ,
    int*
);

extern int Xutf8LookupString(
    XIC ,
    XKeyPressedEvent* ,
    char* ,
    int ,
    KeySym* ,
    int*
);

extern XVaNestedList XVaCreateNestedList(
    int , ...
) __attribute__ ((__sentinel__(0)));



extern int XRegisterIMInstantiateCallback(
    Display* ,
    struct _XrmHashBucketRec* ,
    char* ,
    char* ,
    XIDProc ,
    XPointer
);

extern int XUnregisterIMInstantiateCallback(
    Display* ,
    struct _XrmHashBucketRec* ,
    char* ,
    char* ,
    XIDProc ,
    XPointer
);

typedef void (*XConnectionWatchProc)(
    Display* ,
    XPointer ,
    int ,
    int ,
    XPointer*
);


extern int XInternalConnectionNumbers(
    Display* ,
    int** ,
    int*
);

extern void XProcessInternalConnection(
    Display* ,
    int
);

extern int XAddConnectionWatch(
    Display* ,
    XConnectionWatchProc ,
    XPointer
);

extern void XRemoveConnectionWatch(
    Display* ,
    XConnectionWatchProc ,
    XPointer
);

extern void XSetAuthorization(
    char * ,
    int ,
    char * ,
    int
);

extern int _Xmbtowc(
    wchar_t * ,




    char * ,
    int

);

extern int _Xwctomb(
    char * ,
    wchar_t
);

}
# 35 "rxvt.h" 2


# 1 "/usr/X11/include/X11/Xutil.h" 1
# 56 "/usr/X11/include/X11/Xutil.h"


# 1 "/usr/X11/include/X11/keysym.h" 1
# 75 "/usr/X11/include/X11/keysym.h"


# 1 "/usr/X11/include/X11/keysymdef.h" 1
# 76 "/usr/X11/include/X11/keysym.h" 2
# 57 "/usr/X11/include/X11/Xutil.h" 2
# 75 "/usr/X11/include/X11/Xutil.h"
typedef struct {
     long flags;
 int x, y;
 int width, height;
 int min_width, min_height;
 int max_width, max_height;
     int width_inc, height_inc;
 struct {
  int x;
  int y;
 } min_aspect, max_aspect;
 int base_width, base_height;
 int win_gravity;
} XSizeHints;
# 113 "/usr/X11/include/X11/Xutil.h"
typedef struct {
 long flags;
 int input;

 int initial_state;
 Pixmap icon_pixmap;
 Window icon_window;
 int icon_x, icon_y;
 Pixmap icon_mask;
 XID window_group;

} XWMHints;
# 157 "/usr/X11/include/X11/Xutil.h"
typedef struct {
    unsigned char *value;
    Atom encoding;
    int format;
    unsigned long nitems;
} XTextProperty;





typedef enum {
    XStringStyle,
    XCompoundTextStyle,
    XTextStyle,
    XStdICCTextStyle,

    XUTF8StringStyle
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
# 225 "/usr/X11/include/X11/Xutil.h"
typedef struct _XComposeStatus {
    XPointer compose_ptr;
    int chars_matched;
} XComposeStatus;
# 267 "/usr/X11/include/X11/Xutil.h"
typedef struct _XRegion *Region;
# 281 "/usr/X11/include/X11/Xutil.h"
typedef struct {
  Visual *visual;
  VisualID visualid;
  int screen;
  int depth;

  int c_class;



  unsigned long red_mask;
  unsigned long green_mask;
  unsigned long blue_mask;
  int colormap_size;
  int bits_per_rgb;
} XVisualInfo;
# 314 "/usr/X11/include/X11/Xutil.h"
typedef struct {
 Colormap colormap;
 unsigned long red_max;
 unsigned long red_mult;
 unsigned long green_max;
 unsigned long green_mult;
 unsigned long blue_max;
 unsigned long blue_mult;
 unsigned long base_pixel;
 VisualID visualid;
 XID killid;
} XStandardColormap;
# 351 "/usr/X11/include/X11/Xutil.h"
typedef int XContext;




extern "C" {



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
    Region ,
    XRectangle*
);

extern Region XCreateRegion(
    void
);

extern const char *XDefaultString (void);

extern int XDeleteContext(
    Display* ,
    XID ,
    XContext
);

extern int XDestroyRegion(
    Region
);

extern int XEmptyRegion(
    Region
);

extern int XEqualRegion(
    Region ,
    Region
);

extern int XFindContext(
    Display* ,
    XID ,
    XContext ,
    XPointer*
);

extern int XGetClassHint(
    Display* ,
    Window ,
    XClassHint*
);

extern int XGetIconSizes(
    Display* ,
    Window ,
    XIconSize** ,
    int*
);

extern int XGetNormalHints(
    Display* ,
    Window ,
    XSizeHints*
);

extern int XGetRGBColormaps(
    Display* ,
    Window ,
    XStandardColormap** ,
    int* ,
    Atom
);

extern int XGetSizeHints(
    Display* ,
    Window ,
    XSizeHints* ,
    Atom
);

extern int XGetStandardColormap(
    Display* ,
    Window ,
    XStandardColormap* ,
    Atom
);

extern int XGetTextProperty(
    Display* ,
    Window ,
    XTextProperty* ,
    Atom
);

extern XVisualInfo *XGetVisualInfo(
    Display* ,
    long ,
    XVisualInfo* ,
    int*
);

extern int XGetWMClientMachine(
    Display* ,
    Window ,
    XTextProperty*
);

extern XWMHints *XGetWMHints(
    Display* ,
    Window
);

extern int XGetWMIconName(
    Display* ,
    Window ,
    XTextProperty*
);

extern int XGetWMName(
    Display* ,
    Window ,
    XTextProperty*
);

extern int XGetWMNormalHints(
    Display* ,
    Window ,
    XSizeHints* ,
    long*
);

extern int XGetWMSizeHints(
    Display* ,
    Window ,
    XSizeHints* ,
    long* ,
    Atom
);

extern int XGetZoomHints(
    Display* ,
    Window ,
    XSizeHints*
);

extern int XIntersectRegion(
    Region ,
    Region ,
    Region
);

extern void XConvertCase(
    KeySym ,
    KeySym* ,
    KeySym*
);

extern int XLookupString(
    XKeyEvent* ,
    char* ,
    int ,
    KeySym* ,
    XComposeStatus*
);

extern int XMatchVisualInfo(
    Display* ,
    int ,
    int ,
    int ,
    XVisualInfo*
);

extern int XOffsetRegion(
    Region ,
    int ,
    int
);

extern int XPointInRegion(
    Region ,
    int ,
    int
);

extern Region XPolygonRegion(
    XPoint* ,
    int ,
    int
);

extern int XRectInRegion(
    Region ,
    int ,
    int ,
    unsigned int ,
    unsigned int
);

extern int XSaveContext(
    Display* ,
    XID ,
    XContext ,
    const char*
);

extern int XSetClassHint(
    Display* ,
    Window ,
    XClassHint*
);

extern int XSetIconSizes(
    Display* ,
    Window ,
    XIconSize* ,
    int
);

extern int XSetNormalHints(
    Display* ,
    Window ,
    XSizeHints*
);

extern void XSetRGBColormaps(
    Display* ,
    Window ,
    XStandardColormap* ,
    int ,
    Atom
);

extern int XSetSizeHints(
    Display* ,
    Window ,
    XSizeHints* ,
    Atom
);

extern int XSetStandardProperties(
    Display* ,
    Window ,
    const char* ,
    const char* ,
    Pixmap ,
    char** ,
    int ,
    XSizeHints*
);

extern void XSetTextProperty(
    Display* ,
    Window ,
    XTextProperty* ,
    Atom
);

extern void XSetWMClientMachine(
    Display* ,
    Window ,
    XTextProperty*
);

extern int XSetWMHints(
    Display* ,
    Window ,
    XWMHints*
);

extern void XSetWMIconName(
    Display* ,
    Window ,
    XTextProperty*
);

extern void XSetWMName(
    Display* ,
    Window ,
    XTextProperty*
);

extern void XSetWMNormalHints(
    Display* ,
    Window ,
    XSizeHints*
);

extern void XSetWMProperties(
    Display* ,
    Window ,
    XTextProperty* ,
    XTextProperty* ,
    char** ,
    int ,
    XSizeHints* ,
    XWMHints* ,
    XClassHint*
);

extern void XmbSetWMProperties(
    Display* ,
    Window ,
    const char* ,
    const char* ,
    char** ,
    int ,
    XSizeHints* ,
    XWMHints* ,
    XClassHint*
);

extern void Xutf8SetWMProperties(
    Display* ,
    Window ,
    const char* ,
    const char* ,
    char** ,
    int ,
    XSizeHints* ,
    XWMHints* ,
    XClassHint*
);

extern void XSetWMSizeHints(
    Display* ,
    Window ,
    XSizeHints* ,
    Atom
);

extern int XSetRegion(
    Display* ,
    GC ,
    Region
);

extern void XSetStandardColormap(
    Display* ,
    Window ,
    XStandardColormap* ,
    Atom
);

extern int XSetZoomHints(
    Display* ,
    Window ,
    XSizeHints*
);

extern int XShrinkRegion(
    Region ,
    int ,
    int
);

extern int XStringListToTextProperty(
    char** ,
    int ,
    XTextProperty*
);

extern int XSubtractRegion(
    Region ,
    Region ,
    Region
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
    XTextProperty* ,
    char*** ,
    int*
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
    XRectangle* ,
    Region ,
    Region
);

extern int XUnionRegion(
    Region ,
    Region ,
    Region
);

extern int XWMGeometry(
    Display* ,
    int ,
    const char* ,
    const char* ,
    unsigned int ,
    XSizeHints* ,
    int* ,
    int* ,
    int* ,
    int* ,
    int*
);

extern int XXorRegion(
    Region ,
    Region ,
    Region
);

}
# 36 "rxvt.h" 2


# 1 "/usr/X11/include/X11/Xresource.h" 1
# 68 "/usr/X11/include/X11/Xresource.h"
extern "C" {







extern char *Xpermalloc(
    unsigned int
);







typedef int XrmQuark, *XrmQuarkList;


typedef char *XrmString;



extern XrmQuark XrmStringToQuark(
    const char*
);

extern XrmQuark XrmPermStringToQuark(
    const char*
);


extern XrmString XrmQuarkToString(
    XrmQuark
);

extern XrmQuark XrmUniqueQuark(
    void
);
# 119 "/usr/X11/include/X11/Xresource.h"
typedef enum {XrmBindTightly, XrmBindLoosely} XrmBinding, *XrmBindingList;

extern void XrmStringToQuarkList(
    const char* ,
    XrmQuarkList
);

extern void XrmStringToBindingQuarkList(
    const char* ,
    XrmBindingList ,
    XrmQuarkList
);







typedef XrmQuark XrmName;
typedef XrmQuarkList XrmNameList;




typedef XrmQuark XrmClass;
typedef XrmQuarkList XrmClassList;
# 158 "/usr/X11/include/X11/Xresource.h"
typedef XrmQuark XrmRepresentation;



typedef struct {
    unsigned int size;
    XPointer addr;
} XrmValue, *XrmValuePtr;
# 174 "/usr/X11/include/X11/Xresource.h"
typedef struct _XrmHashBucketRec *XrmHashBucket;
typedef XrmHashBucket *XrmHashTable;
typedef XrmHashTable XrmSearchList[];
typedef struct _XrmHashBucketRec *XrmDatabase;


extern void XrmDestroyDatabase(
    XrmDatabase
);

extern void XrmQPutResource(
    XrmDatabase* ,
    XrmBindingList ,
    XrmQuarkList ,
    XrmRepresentation ,
    XrmValue*
);

extern void XrmPutResource(
    XrmDatabase* ,
    const char* ,
    const char* ,
    XrmValue*
);

extern void XrmQPutStringResource(
    XrmDatabase* ,
    XrmBindingList ,
    XrmQuarkList ,
    const char*
);

extern void XrmPutStringResource(
    XrmDatabase* ,
    const char* ,
    const char*
);

extern void XrmPutLineResource(
    XrmDatabase* ,
    const char*
);

extern int XrmQGetResource(
    XrmDatabase ,
    XrmNameList ,
    XrmClassList ,
    XrmRepresentation* ,
    XrmValue*
);

extern int XrmGetResource(
    XrmDatabase ,
    const char* ,
    const char* ,
    char** ,
    XrmValue*
);

extern int XrmQGetSearchList(
    XrmDatabase ,
    XrmNameList ,
    XrmClassList ,
    XrmSearchList ,
    int
);

extern int XrmQGetSearchResource(
    XrmSearchList ,
    XrmName ,
    XrmClass ,
    XrmRepresentation* ,
    XrmValue*
);
# 257 "/usr/X11/include/X11/Xresource.h"
extern void XrmSetDatabase(
    Display* ,
    XrmDatabase
);

extern XrmDatabase XrmGetDatabase(
    Display*
);



extern XrmDatabase XrmGetFileDatabase(
    const char*
);

extern int XrmCombineFileDatabase(
    const char* ,
    XrmDatabase* ,
    int
);

extern XrmDatabase XrmGetStringDatabase(
    const char*
);

extern void XrmPutFileDatabase(
    XrmDatabase ,
    const char*
);

extern void XrmMergeDatabases(
    XrmDatabase ,
    XrmDatabase*
);

extern void XrmCombineDatabase(
    XrmDatabase ,
    XrmDatabase* ,
    int
);




extern int XrmEnumerateDatabase(
    XrmDatabase ,
    XrmNameList ,
    XrmClassList ,
    int ,
    int (*)(
      XrmDatabase* ,
      XrmBindingList ,
      XrmQuarkList ,
      XrmRepresentation* ,
      XrmValue* ,
      XPointer
      ) ,
    XPointer
);

extern const char *XrmLocaleOfDatabase(
    XrmDatabase
);
# 328 "/usr/X11/include/X11/Xresource.h"
typedef enum {
    XrmoptionNoArg,
    XrmoptionIsArg,
    XrmoptionStickyArg,
    XrmoptionSepArg,
    XrmoptionResArg,
    XrmoptionSkipArg,
    XrmoptionSkipLine,
    XrmoptionSkipNArgs

} XrmOptionKind;

typedef struct {
    char *option;
    char *specifier;
    XrmOptionKind argKind;
    XPointer value;
} XrmOptionDescRec, *XrmOptionDescList;


extern void XrmParseCommand(
    XrmDatabase* ,
    XrmOptionDescList ,
    int ,
    const char* ,
    int* ,
    char**
);

}
# 37 "rxvt.h" 2
}




typedef uint16_t text_t;

typedef uint32_t rend_t;
typedef int32_t tlen_t;
typedef int32_t tlen_t_;



# 1 "feature.h" 1
# 49 "rxvt.h" 2
# 70 "rxvt.h"


# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/limits.h" 1 3 4
# 9 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/syslimits.h" 1 3 4
# 8 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/limits.h" 2 3 4




# 1 "/usr/include/limits.h" 1 3 4
# 64 "/usr/include/limits.h" 3 4


# 1 "/usr/include/machine/limits.h" 1 3 4
# 9 "/usr/include/machine/limits.h" 3 4

# 1 "/usr/include/i386/limits.h" 1 3 4
# 40 "/usr/include/i386/limits.h" 3 4


# 1 "/usr/include/i386/_limits.h" 1 3 4
# 41 "/usr/include/i386/limits.h" 2 3 4
# 9 "/usr/include/machine/limits.h" 2 3 4
# 65 "/usr/include/limits.h" 2 3 4


# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 66 "/usr/include/limits.h" 2 3 4
# 11 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/limits.h" 2 3 4
# 71 "rxvt.h" 2



# 1 "/usr/X11/include/X11/cursorfont.h" 1
# 73 "rxvt.h" 2


# 1 "/usr/X11/include/X11/keysym.h" 1
# 75 "/usr/X11/include/X11/keysym.h"


# 1 "/usr/X11/include/X11/keysymdef.h" 1
# 76 "/usr/X11/include/X11/keysym.h" 2
# 74 "rxvt.h" 2


# 1 "/usr/X11/include/X11/keysymdef.h" 1
# 75 "rxvt.h" 2


# 1 "/usr/X11/include/X11/Xatom.h" 1
# 76 "rxvt.h" 2



# 1 "encoding.h" 1





# 1 "/usr/include/inttypes.h" 1 3 4
# 265 "/usr/include/inttypes.h" 3 4
extern "C" {


  extern intmax_t imaxabs(intmax_t j);


  typedef struct {
        intmax_t quot;
        intmax_t rem;
  } imaxdiv_t;

  extern imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom);


  extern intmax_t strtoimax(const char * nptr, char ** endptr, int base);
  extern uintmax_t strtoumax(const char * nptr, char ** endptr, int base);
# 290 "/usr/include/inttypes.h" 3 4
  extern intmax_t wcstoimax(const wchar_t * nptr, wchar_t ** endptr, int base);
  extern uintmax_t wcstoumax(const wchar_t * nptr, wchar_t ** endptr, int base);






}
# 5 "encoding.h" 2

typedef uint32_t unicode_t;


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

  CS_UNICODE_16,
  CS_UNICODE,

  NUM_CODESETS
};

codeset codeset_from_name (const char *name);

enum {
  ZERO_WIDTH_CHAR = 0x200b,
  REPLACEMENT_CHAR = 0xfffd,
  NOCHAR = 0xffff,
};

struct rxvt_codeset_conv
{
  uint32_t (*from_unicode) (unicode_t unicode);



};

extern const rxvt_codeset_conv rxvt_codeset[NUM_CODESETS];

extern unicode_t rxvt_compose (unicode_t c1, unicode_t c2);




struct unicode
{
  static bool is_space (unicode_t c);
};
# 78 "rxvt.h" 2


# 1 "rxvtutil.h" 1






using namespace std;
# 43 "rxvtutil.h"
extern class byteorder {
  static unsigned int e;
public:
  byteorder ();

  static bool big_endian () { return e == 0x11223344; };
  static bool network () { return e == 0x11223344; };
  static bool little_endian () { return e == 0x44332211; };
  static bool vax () { return e == 0x44332211; };
} byteorder;


template<typename T, typename U> static inline T min (T a, U b) { return a < (T)b ? a : (T)b; }
template<typename T, typename U> static inline void min_it (T &a, U b) { a = a < (T)b ? a : (T)b; }
template<typename T, typename U> static inline T max (T a, U b) { return a > (T)b ? a : (T)b; }
template<typename T, typename U> static inline void max_it (T &a, U b) { a = a > (T)b ? a : (T)b; }

template<typename T, typename U, typename V> static inline T clamp (T v, U a, V b) { return v < (T)a ? a : v >(T)b ? b : v; }
template<typename T, typename U, typename V> static inline void clamp_it (T &v, U a, V b) { v = v < (T)a ? a : v >(T)b ? b : v; }

template<typename T, typename U> static inline void swap (T& a, U& b) { T t=a; a=(T)b; b=(U)t; }

template<typename T> static inline T squared_diff (T a, T b) { return (a-b)*(a-b); }


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


void *rxvt_temp_buf (int len);

template<typename T>
static inline T *
rxvt_temp_buf (int len)
{
  return (T *)rxvt_temp_buf (len * sizeof (T));
}



static inline int ctz (unsigned int x) { return __builtin_ctz (x); }
static inline int popcount (unsigned int x) { return __builtin_popcount (x); }
# 116 "rxvtutil.h"
struct zero_initialized
{
  void *operator new (size_t s);
  void operator delete (void *p, size_t s);
};






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

        return _buf[0];
    }
    T &front ()
    {

        return _buf[0];
    }
    const T &back () const
    {

        return _buf[_last-1];
    }
    T &back ()
    {

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

        --_last;
    }
    const T &operator[] (size_type idx) const
    {

        return _buf[idx];
    }
    T &operator[] (size_type idx)
    {

        return _buf[idx];
    }
    iterator insert (iterator pos, const T &t)
    {

        long at = pos - begin ();
        reserve (pos, 1);
        pos = begin ()+at;
        *pos = t;
        ++_last;
        return pos;
    }
    iterator insert (iterator pos, const_iterator first, const_iterator last)
    {

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
# 9 "rxvtfont.h"


# 1 "/usr/include/inttypes.h" 1 3 4
# 10 "rxvtfont.h" 2






# 1 "rxvttoolkit.h" 1
# 32 "rxvttoolkit.h"


# 1 "ev_cpp.h" 1
# 16 "ev_cpp.h"


# 1 "./../libev/ev++.h" 1
# 46 "./../libev/ev++.h"


# 1 "./../libev/ev.h" 1
# 44 "./../libev/ev.h"
extern "C" {


typedef double ev_tstamp;
# 86 "./../libev/ev.h"


# 1 "/usr/include/signal.h" 1 3 4
# 71 "/usr/include/signal.h" 3 4
extern const char *const sys_signame[32];
extern const char *const sys_siglist[32];


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
int sigpause(int) __asm("_" "sigpause" "$UNIX2003");
int sigpending(sigset_t *);
int sigprocmask(int, const sigset_t * , sigset_t * );
int sigrelse(int);
void (*sigset(int, void (*)(int)))(int);
int sigsuspend(const sigset_t *) __asm("_" "sigsuspend" "$UNIX2003");
int sigwait(const sigset_t * , int * ) __asm("_" "sigwait" "$UNIX2003");

void psignal(unsigned int, const char *);
int sigblock(int);
int sigsetmask(int);
int sigvec(int, struct sigvec *, struct sigvec *);

}




static inline int
__sigbits(int __signo)
{
    return __signo > 32 ? 0 : (1 << (__signo - 1));
}
# 87 "./../libev/ev.h" 2
# 201 "./../libev/ev.h"
typedef struct ev_watcher
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_watcher *w, int revents);
} ev_watcher;


typedef struct ev_watcher_list
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_watcher_list *w, int revents); struct ev_watcher_list *next;
} ev_watcher_list;


typedef struct ev_watcher_time
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_watcher_time *w, int revents); ev_tstamp at;
} ev_watcher_time;



typedef struct ev_io
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_io *w, int revents); struct ev_watcher_list *next;

  int fd;
  int events;
} ev_io;



typedef struct ev_timer
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_timer *w, int revents); ev_tstamp at;

  ev_tstamp repeat;
} ev_timer;



typedef struct ev_periodic
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_periodic *w, int revents); ev_tstamp at;

  ev_tstamp offset;
  ev_tstamp interval;
  ev_tstamp (*reschedule_cb)(struct ev_periodic *w, ev_tstamp now);
} ev_periodic;



typedef struct ev_signal
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_signal *w, int revents); struct ev_watcher_list *next;

  int signum;
} ev_signal;




typedef struct ev_child
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_child *w, int revents); struct ev_watcher_list *next;

  int flags;
  int pid;
  int rpid;
  int rstatus;
} ev_child;
# 297 "./../libev/ev.h"
typedef struct ev_idle
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_idle *w, int revents);
} ev_idle;





typedef struct ev_prepare
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_prepare *w, int revents);
} ev_prepare;



typedef struct ev_check
{
  int active; int pending; int priority; void *data; void (*cb)( struct ev_check *w, int revents);
} ev_check;
# 358 "./../libev/ev.h"
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
# 402 "./../libev/ev.h"
int ev_version_major (void);
int ev_version_minor (void);

unsigned int ev_supported_backends (void);
unsigned int ev_recommended_backends (void);
unsigned int ev_embeddable_backends (void);

ev_tstamp ev_time (void);
void ev_sleep (ev_tstamp delay);







void ev_set_allocator (void *(*cb)(void *ptr, long size));





void ev_set_syserr_cb (void (*cb)(const char *msg));
# 463 "./../libev/ev.h"
int ev_default_loop (unsigned int flags);

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

void ev_default_destroy (void);




void ev_default_fork (void);

unsigned int ev_backend (void);
unsigned int ev_loop_count (void);
# 504 "./../libev/ev.h"
void ev_loop ( int flags);
void ev_unloop ( int how);

void ev_set_io_collect_interval ( ev_tstamp interval);
void ev_set_timeout_collect_interval ( ev_tstamp interval);






void ev_ref (void);
void ev_unref (void);



void ev_once ( int fd, int events, ev_tstamp timeout, void (*cb)(int revents, void *arg), void *arg);
# 577 "./../libev/ev.h"
void ev_feed_event ( void *w, int revents);
void ev_feed_fd_event ( int fd, int revents);
void ev_feed_signal_event ( int signum);
void ev_invoke ( void *w, int revents);
int ev_clear_pending ( void *w);

void ev_io_start ( ev_io *w);
void ev_io_stop ( ev_io *w);

void ev_timer_start ( ev_timer *w);
void ev_timer_stop ( ev_timer *w);

void ev_timer_again ( ev_timer *w);
# 598 "./../libev/ev.h"
void ev_signal_start ( ev_signal *w);
void ev_signal_stop ( ev_signal *w);


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
    UNDEF = -1,
    NONE = 0x00,
    READ = 0x01,
    WRITE = 0x02,
    TIMEOUT = 0x00000100,
    PERIODIC = 0x00000200,
    SIGNAL = 0x00000400,
    CHILD = 0x00000800,
    STAT = 0x00001000,
    IDLE = 0x00002000,
    CHECK = 0x00008000,
    PREPARE = 0x00004000,
    FORK = 0x00020000,
    ASYNC = 0x00040000,
    EMBED = 0x00010000,

    ERROR = 0x80000000,
  };

  enum
  {
    AUTO = 0x00000000U,
    NOENV = 0x01000000U,
    FORKCHECK = 0x02000000U,

    SELECT = 0x00000001U,
    POLL = 0x00000002U,
    EPOLL = 0x00000004U,
    KQUEUE = 0x00000008U,
    DEVPOLL = 0x00000010U,
    PORT = 0x00000020U
  };

  enum
  {
    NONBLOCK = 1,
    ONESHOT = 2
  };

  enum how_t
  {
    ONE = 1,
    ALL = 2
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


    void once (int fd, int events, tstamp timeout, void (*cb)(int, void *), void *arg = 0) throw ()
    {
      ev_once ( fd, events, timeout, cb, arg);
    }


    template<class K, void (K::*method)(int)>
    void once (int fd, int events, tstamp timeout, K *object) throw ()
    {
      once (fd, events, timeout, method_thunk<K, method>, object);
    }


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
      do { ((ev_watcher *)(void *)(this))->active = ((ev_watcher *)(void *)(this))->pending = ((ev_watcher *)(void *)(this))->priority = 0; ((this))->cb = (0); } while (0);
    }

    void set_ (const void *data, void (*cb)( ev_watcher *w, int revents)) throw ()
    {
      this->data = (void *)data;
      (static_cast<ev_watcher *>(this))->cb = (cb);
    }


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


    template<class K, void (K::*method)(watcher &w, int)>
    void set (K *object) throw ()
    {
      set_ (object, method_thunk<K, method>);
    }


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

    void operator ()(int events = -1)
    {
      return
        (static_cast<ev_watcher *>(this))->cb
          (static_cast<ev_watcher *>(this), events);
    }

    bool is_active () const throw ()
    {
      return (0 + ((ev_watcher *)(void *)(static_cast<const ev_watcher *>(this)))->active);
    }

    bool is_pending () const throw ()
    {
      return (0 + ((ev_watcher *)(void *)(static_cast<const ev_watcher *>(this)))->pending);
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
# 597 "./../libev/ev++.h"
  struct io : base<ev_io, io> { void start () throw () { ev_io_start ( static_cast<ev_io *>(this)); } void stop () throw () { ev_io_stop ( static_cast<ev_io *>(this)); } io () throw () { } ~io () throw () { stop (); } using base<ev_io, io>::set; private: io (const io &o); io &operator =(const io &o); public:
    void set (int fd, int events) throw ()
    {
      int active = is_active ();
      if (active) stop ();
      do { (static_cast<ev_io *>(this))->fd = (fd); (static_cast<ev_io *>(this))->events = (events) | 0x80; } while (0);
      if (active) start ();
    }

    void set (int events) throw ()
    {
      int active = is_active ();
      if (active) stop ();
      do { (static_cast<ev_io *>(this))->fd = (fd); (static_cast<ev_io *>(this))->events = (events) | 0x80; } while (0);
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
# 31 "callback.h"
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
      if (((*this)[pos] = w))
        w->active = pos + 1;
  }
};

struct rxvt_watcher
{
  int active;

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
# 236 "rxvttoolkit.h"
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

  rxvt_term *term;
  void set_term (rxvt_term *term) { this->term = term; }

  char *name;
  codeset cs;
  bool loaded;


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



# 1 "scrollbar.h" 1





struct rxvt_term;
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
  char state;
  char init;
  unsigned int beg;
  unsigned int end;
  unsigned int top;
  unsigned int bot;
  unsigned int style;
  unsigned int width;
  int shadow;
  int last_bot;
  int last_top;
  int last_state;
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

  void update_data ();


  int show_next (int);

  int show_rxvt (int);

  int show_xterm (int);

  int show_plain (int);

  void init_next ();
};
# 82 "rxvt.h" 2


# 1 "ev_cpp.h" 1
# 83 "rxvt.h" 2


# 1 "salloc.h" 1







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
# 11 "libptytty.h"
struct ptytty {
  int pty;
  int tty;

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
  static ptytty *create ();

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
# 87 "rxvt.h" 2
# 107 "rxvt.h"


# 1 "/usr/include/termios.h" 1 3 4
# 27 "/usr/include/termios.h" 3 4


# 1 "/usr/include/sys/termios.h" 1 3 4
# 265 "/usr/include/sys/termios.h" 3 4
typedef unsigned long tcflag_t;
typedef unsigned char cc_t;
typedef unsigned long speed_t;

struct termios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_cc[20];
 speed_t c_ispeed;
 speed_t c_ospeed;
};
# 332 "/usr/include/sys/termios.h" 3 4
extern "C" {
speed_t cfgetispeed(const struct termios *);
speed_t cfgetospeed(const struct termios *);
int cfsetispeed(struct termios *, speed_t);
int cfsetospeed(struct termios *, speed_t);
int tcgetattr(int, struct termios *);
int tcsetattr(int, int, const struct termios *);
int tcdrain(int) __asm("_" "tcdrain" "$UNIX2003");
int tcflow(int, int);
int tcflush(int, int);
int tcsendbreak(int, int);


void cfmakeraw(struct termios *);
int cfsetspeed(struct termios *, speed_t);

}
# 367 "/usr/include/sys/termios.h" 3 4


# 1 "/usr/include/sys/ttydefaults.h" 1 3 4
# 368 "/usr/include/sys/termios.h" 2 3 4
# 28 "/usr/include/termios.h" 2 3 4







extern "C" {
pid_t tcgetsid(int);
}
# 108 "rxvt.h" 2



# 1 "background.h" 1
# 110 "rxvt.h" 2
# 133 "rxvt.h"
class rxvt_failure_exception { };


class out_of_input { };
# 145 "rxvt.h"
extern bool rxvt_set_locale (const char *locale) ;
extern void rxvt_push_locale (const char *locale) ;
extern void rxvt_pop_locale () ;
void rxvt_init ();


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




extern char **environ;
extern char **rxvt_environ;

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
# 209 "rxvt.h"
struct mouse_event
{
  int clicks;
  Time time;
  unsigned int state;
  unsigned int button;
};
# 269 "rxvt.h"
enum {
  NO_REFRESH = 0,
  FAST_REFRESH = 1,
  SLOW_REFRESH = 2,
};
# 287 "rxvt.h"
enum {
  C_RELATIVE = 1,
  R_RELATIVE = 2,
  RELATIVE = C_RELATIVE | R_RELATIVE,
};


enum {
  INSERT = -1,
  DELETE = +1,
  ERASE = +2,
};


enum page_dirn {
  UP,
  DN,
  NO_DIR,
};


enum {
  PRIMARY = 0,
  SECONDARY,
};
# 363 "rxvt.h"
enum {
  C0_NUL = 0x00,
          C0_SOH, C0_STX, C0_ETX, C0_EOT, C0_ENQ, C0_ACK, C0_BEL,
  C0_BS , C0_HT , C0_LF , C0_VT , C0_FF , C0_CR , C0_SO , C0_SI ,
  C0_DLE, C0_DC1, C0_DC2, D0_DC3, C0_DC4, C0_NAK, C0_SYN, C0_ETB,
  C0_CAN, C0_EM , C0_SUB, C0_ESC, C0_IS4, C0_IS3, C0_IS2, C0_IS1,
};






enum {
  XTerm_name = 0,
  XTerm_iconName = 1,
  XTerm_title = 2,
  XTerm_property = 3,
  XTerm_Color = 4,
  XTerm_Color00 = 10,
  XTerm_Color01 = 11,
  XTerm_Color_cursor = 12,
  XTerm_Color_pointer_fg = 13,
  XTerm_Color_pointer_bg = 14,
  XTerm_Color05 = 15,
  XTerm_Color06 = 16,
  XTerm_Color_RV = 17,
  XTerm_logfile = 46,
  XTerm_font = 50,

  XTerm_konsole30 = 30,
  XTerm_konsole31 = 31,
  XTerm_emacs51 = 51,





  Rxvt_Color_BD = 18,
  Rxvt_Color_UL = 19,
  Rxvt_restoreFG = 39,
  Rxvt_restoreBG = 49,

  Rxvt_Pixmap = 20,
  Rxvt_dumpscreen = 55,

  URxvt_locale = 701,
  URxvt_version = 702,

  URxvt_Color_IT = 704,
  URxvt_Color_tint = 705,
  URxvt_Color_BD = 706,
  URxvt_Color_UL = 707,
  URxvt_Color_border = 708,

  URxvt_font = 710,
  URxvt_boldFont = 711,
  URxvt_italicFont = 712,
  URxvt_boldItalicFont = 713,

  URxvt_view_up = 720,
  URxvt_view_down = 721,

  URxvt_perl = 777,
};
# 436 "rxvt.h"
enum colour_list {
  Color_none = -2,
  Color_transparent = -1,
  Color_fg = 0,
  Color_bg,
  minCOLOR,
  Color_Black = minCOLOR,
  Color_Red3,
  Color_Green3,
  Color_Yellow3,
  Color_Blue3,
  Color_Magenta3,
  Color_Cyan3,
  maxCOLOR,

  Color_AntiqueWhite = maxCOLOR,
  minBrightCOLOR,
  Color_Grey25 = minBrightCOLOR,
  Color_Red,
  Color_Green,
  Color_Yellow,
  Color_Blue,
  Color_Magenta,
  Color_Cyan,
  maxBrightCOLOR,
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
  NRS_COLORS,





  TOTAL_COLORS = NRS_COLORS

};






enum {




# 1 "rsinc.h" 1


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
# 658 "rxvt.h"
typedef callback<void (const char *)> log_callback;
typedef callback<int (int)> getfd_callback;
# 669 "rxvt.h"
struct line_t
{
   text_t *t;
   rend_t *r;
   tlen_t_ l;
   uint32_t f;

   bool is_longer ()
   {
     return f & 0x0001;
   }

   void is_longer (int set)
   {
     if (set)
       f |= 0x0001;
     else
       f &= ~0x0001;
   }

   void clear ()
   {
     t = 0;
     r = 0;
     l = 0;
     f = 0;
   }

   void touch ()
   {



   }

   void touch (int col)
   {
     max_it (l, col);
     touch ();
   }
};




struct mbstate
{
  mbstate_t mbs;

  operator mbstate_t *() { return &mbs; }
  void reset () { (memset)(&mbs,0,sizeof (mbs)); }
  mbstate () { reset (); }
};
# 777 "rxvt.h"
typedef struct rxvt_term *rxvt_t;

extern rxvt_t rxvt_current_term;





struct overlay_base
{
  int x, y, w, h;
  text_t **text;
  rend_t **rend;


};



typedef struct
{
  int row;
  int col;
} row_col_t;
# 838 "rxvt.h"
struct TermWin_t
{
  int width;
  int height;
  int fwidth;
  int fheight;
  int fbase;
  int ncol;
  int nrow;
  int focus;
  int mapped;
  int int_bwidth;
  int ext_bwidth;
  int lineSpace;
  int saveLines;
  int total_rows;
  int term_start;
  int view_start;
  int top_row;
  Window parent[6];
  Window vt;
  GC gc;
  Pixmap pixmap;
  rxvt_drawable *drawable;
  rxvt_fontset *fontset[4];
};
# 883 "rxvt.h"
struct screen_t
{
  row_col_t cur;
  int tscroll;
  int bscroll;
  unsigned int charset;
  unsigned int flags;
  row_col_t s_cur;
  unsigned int s_charset;
  char s_charset_char;
  rend_t s_rstyle;
};

enum selection_op_t
{
  SELECTION_CLEAR = 0,
  SELECTION_INIT,
  SELECTION_BEGIN,
  SELECTION_CONT,
  SELECTION_DONE
};

struct selection_t
{
  wchar_t *text;
  unsigned int len;
  unsigned int screen;
  unsigned int clicks;
  selection_op_t op;
  bool rect;
  row_col_t beg;
  row_col_t mark;
  row_col_t end;
};
# 929 "rxvt.h"
enum {




# 1 "optinc.h" 1


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



struct rxvt_vars : TermWin_t
{
  scrollBar_t scrollBar;
  uint8_t options[(Opt_count + 7) >> 3];
  XSizeHints szHint;
  rxvt_color *pix_colors;
  Cursor TermWin_cursor;
  int numlock_state;
  line_t *row_buf;
  line_t *drawn_buf;
  line_t *swap_buf;
  char *tabs;
  screen_t screen;
  screen_t swap;
  selection_t selection;
  rxvt_color pix_colors_focused[TOTAL_COLORS];



};

struct rxvt_term : zero_initialized, rxvt_vars, rxvt_screen
{


  static const char resval_undef [];
  static const char resval_on [];
  static const char resval_off [];

  log_callback *log_hook;
  getfd_callback *getfd_hook;



  struct mbstate mbstate;

  unsigned char want_refresh:1,
                  current_screen:1,
                  num_scr_allow:1,
                  bypass_keystate:1,







                  hidden_text:1,




                  enc_utf8:1,
                  seen_input:1,
                  seen_resize:1,
                  parsed_geometry:1;

  unsigned char refresh_type,

                  meta_char,

                  selection_wait,
                  selection_type;

  bool rvideo_state, rvideo_mode;

  bool rvideo_bell;

  int num_scr;
  int prev_ncol,
                  prev_nrow;

  rend_t rstyle;
# 1022 "rxvt.h"
  int csrO,




                  refresh_count,
                  window_vt_x,
                  window_vt_y,
                  mouse_row,
                  mouse_col,



                  allowedxerror;

  unsigned int ModLevel3Mask,
                  ModMetaMask,
                  ModNumLockMask;
  int old_width,
                  old_height;
  unsigned long priv_modes,
                  SavedModes;

  Atom *xa;

  Time selection_time,
                  selection_request_time;
  pid_t cmd_pid;
  char * incr_buf;
  size_t incr_buf_size, incr_buf_fill;

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
                        rend_t rend = (0 | Color_Black | (Color_Yellow << 7))) ;
  void scr_overlay_set (int x, int y, const char *s) ;
  void scr_overlay_set (int x, int y, const wchar_t *s) ;


  vector<void *> allocated;

  char env_windowid[21];
  char env_colorfgbg[sizeof ("COLORFGBG=default;default;bg") + 1];
  char *env_display;
  char *env_term;

  char *locale;
  char charsets[4];
  char *v_buffer;
  unsigned int v_buflen;
  stringvec *argv, *envv;
# 1104 "rxvt.h"
  const char *rs[NUM_RESOURCES];

  char *cmdbuf_ptr, *cmdbuf_endp;
  char cmdbuf_base[2048];

  ptytty *pty;

  rxvt_salloc *talloc;
  rxvt_salloc *ralloc;

  static vector<rxvt_term *> termlist;



  unicode_t iso14755buf;
  void commit_iso14755 ();

  void iso14755_51 (unicode_t ch, rend_t r = (0 | Color_fg | (Color_bg << 7)), int x = 0, int y = -1);
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

  void make_current () const
  {
    rxvt_current_term = const_cast<rxvt_term *>(this);
    set_environ (envv);
    rxvt_set_locale (locale);
  }
# 1224 "rxvt.h"
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
      scr_blank_line (l, prev_ncol, ncol - prev_ncol, (0 | Color_fg | (Color_bg << 7)));
  }

  int fgcolor_of (rend_t r) const
  {
    int base = (((r) & 0x0000007fUL));

    if (r & 0x00004000UL



        && ((unsigned int)(base) - (unsigned int)(minCOLOR) <= (unsigned int)(minBrightCOLOR) - (unsigned int)(minCOLOR)))
      base += minBrightCOLOR - minCOLOR;

    return base;
  }

  int bgcolor_of (rend_t r) const
  {
    int base = (((r) & 0x00003f80UL)>>7);

    if (r & 0x00010000UL



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


  void get_options (int argc, const char *const *argv);
  int parse_keysym (const char *str, const char *arg);
  const char *x_resource (const char *name);
  void extract_resources ();
};
# 26 "background.C" 2
