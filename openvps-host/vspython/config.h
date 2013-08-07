/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if dietlibc supports C99 */
/* #undef ENSC_DIETLIBC_C99 */

/* define when <ext2fs/ext2_fs.h> is usable */
#define ENSC_HAVE_EXT2FS_EXT2_FS_H 1

/* define when <linux/ext2_fs.h> is usable */
/* #undef ENSC_HAVE_LINUX_EXT2_FS_H */

/* Define to 1 when the fast syscall(2) invocation does not work */
#define ENSC_SYSCALL_TRADITIONAL 1

/* The number of the vserver syscall */
#define ENSC_SYSCALL__NR_vserver 273

/* Define to 1 if you have the declaration of `MS_MOVE', and to 0 if you
   don't. */
#define HAVE_DECL_MS_MOVE 0

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if the stack is on growing addresses */
/* #undef HAVE_GROWING_STACK */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if the system has the type `nid_t'. */
/* #undef HAVE_NID_T */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vserver' function. */
/* #undef HAVE_VSERVER */

/* Define to 1 if the system has the type `xid_t'. */
/* #undef HAVE_XID_T */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "util-vserver"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "enrico.scholz@informatik.tu-chemnitz.de"

/* Define to the full name of this package. */
#define PACKAGE_NAME "util-vserver"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "util-vserver 0.30.196"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "util-vserver"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.30.196"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* The utmp gid-number */
#define UTMP_GID 22

/* Enable support for compatibility syscall API */
#define VC_ENABLE_API_COMPAT 1

/* Enable support for filesystem compatibility API */
#define VC_ENABLE_API_FSCOMPAT 1

/* Enable support for old, /proc parsing API */
/* #undef VC_ENABLE_API_LEGACY */

/* Enable support for network context API */
#define VC_ENABLE_API_NET 1

/* Enable API for a backward compatible /proc parsing */
#define VC_ENABLE_API_OLDPROC 1

/* Enable API for a backward compatible uts handling */
#define VC_ENABLE_API_OLDUTS 1

/* Enable support for API of vserver 1.1.x */
#define VC_ENABLE_API_V11 1

/* Enable support for API of vserver 1.3.x */
#define VC_ENABLE_API_V13 1

/* Version number of package */
#define VERSION "0.30.196"


#if defined(__pic__) && defined(__i386) && !defined(ENSC_SYSCALL_TRADITIONAL)
#  define ENSC_SYSCALL_TRADITIONAL 1
#endif

#include "compat.h"