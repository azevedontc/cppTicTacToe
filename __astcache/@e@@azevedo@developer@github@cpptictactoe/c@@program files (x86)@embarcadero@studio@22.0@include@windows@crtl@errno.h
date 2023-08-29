/*  errno.h

    Defines the system error variable errno and the error
    numbers set by system calls. Errors which exist in Unix(tm)
    but not MSDOS have value -1.

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1987, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */

/* $Revision: 37786 $ */

#ifndef __ERRNO_H
#define __ERRNO_H

#include <_stddef.h>

#ifdef __cplusplus
namespace std {
extern "C" {
#endif /* __cplusplus */

#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn -nak
#endif

#endif  /* !RC_INVOKED */

/*  Dos Error Codes */

#define EZERO      0    /* Error 0                          */
#define EINVFNC    1    /* Invalid function number          */
#define ENOFILE    2    /* File not found                   */
#define ENOPATH    3    /* Path not found                   */
#define ECONTR     7    /* Memory blocks destroyed          */
#define EINVMEM    9    /* Invalid memory block address     */
#define EINVENV   10    /* Invalid environment              */
#define EINVFMT   11    /* Invalid format                   */
#define EINVACC   12    /* Invalid access code              */
#define EINVDAT   13    /* Invalid data                     */
#define EINVDRV   15    /* Invalid drive specified          */
#define ECURDIR   16    /* Attempt to remove CurDir         */
#define ENOTSAM   17    /* Not same device                  */
#define ENMFILE   18    /* No more files                    */

#define ENOENT     2    /* No such file or directory        */
#define EMFILE     4    /* Too many open files              */
#define EACCES     5    /* Permission denied                */
#define EBADF      6    /* Bad file number                  */
#define ENOMEM     8    /* Not enough core                  */
#define EFAULT    14    /* Unknown error                    */
#define ENODEV    15    /* No such device                   */
#define EINVAL    19    /* Invalid argument                 */
#define E2BIG     20    /* Arg list too long                */
#define ENOEXEC   21    /* Exec format error                */
#define EXDEV     22    /* Cross-device link                */
#define ENFILE    23    /* Too many open files              */
#define ECHILD    24    /* No child process                 */
#define ENOTTY    25    /* UNIX - not MSDOS                 */
#define ETXTBSY   26    /* UNIX - not MSDOS                 */
#define EFBIG     27    /* UNIX - not MSDOS                 */
#define ENOSPC    28    /* No space left on device          */
#define ESPIPE    29    /* Illegal seek                     */
#define EROFS     30    /* Read-only file system            */
#define EMLINK    31    /* UNIX - not MSDOS                 */
#define EPIPE     32    /* Broken pipe                      */
#define EDOM      33    /* Math argument                    */
#define ERANGE    34    /* Result too large                 */
#define EEXIST    35    /* File already exists              */
#define EDEADLOCK 36    /* Locking violation                */
#define EPERM     37    /* Operation not permitted          */
#define ESRCH     38    /* UNIX - not MSDOS                 */
#define EINTR     39    /* Interrupted function call        */
#define EIO       40    /* Input/output error               */
#define ENXIO     41    /* No such device or address        */
#define EAGAIN    42    /* Resource temporarily unavailable */
#define ENOTBLK   43    /* UNIX - not MSDOS                 */
#define EBUSY     44    /* Resource busy                    */
#define ENOTDIR   45    /* UNIX - not MSDOS                 */
#define EISDIR    46    /* UNIX - not MSDOS                 */
#define EUCLEAN   47    /* UNIX - not MSDOS                 */
#define ENAMETOOLONG 48 /* Filename too long                */
#define ENOTEMPTY 49    /* Directory not empty              */
#define EILSEQ    88    /* Illegal multibyte sequence       */

#if defined(__CODEGEARC__) && defined(__clang__)
  /* values from Dinkumware */

#ifndef E2BIG
 #define E2BIG	1000
#endif /* E2BIG */

#ifndef EACCES
 #define EACCES	1001
#endif /* EACCES */

#ifndef EADDRINUSE
 #define EADDRINUSE	1002
#endif /* EADDRINUSE */

#ifndef EADDRNOTAVAIL
 #define EADDRNOTAVAIL	1003
#endif /* EADDRNOTAVAIL */

#ifndef EAFNOSUPPORT
 #define EAFNOSUPPORT	1004
#endif /* EAFNOSUPPORT */

#ifndef EAGAIN
 #define EAGAIN	1005
#endif /* EAGAIN */

#ifndef EALREADY
 #define EALREADY	1006
#endif /* EALREADY */

#ifndef EBADF
 #define EBADF	1007
#endif /* EBADF */

#ifndef EBADMSG
 #define EBADMSG	1008
#endif /* EBADMSG */

#ifndef EBUSY
 #define EBUSY	1009
#endif /* EBUSY */

#ifndef ECANCELED
 #define ECANCELED	1019
#endif /* ECANCELED */

#ifndef ECHILD
 #define ECHILD	1011
#endif /* ECHILD */

#ifndef ECONNABORTED
 #define ECONNABORTED	1012
#endif /* ECONNABORTED */

#ifndef ECONNREFUSED
 #define ECONNREFUSED	1013
#endif /* ECONNREFUSED */

#ifndef ECONNRESET
 #define ECONNRESET	1014
#endif /* ECONNRESET */

#ifndef EDEADLK
 #define EDEADLK	1015
#endif /* EDEADLK */

#ifndef EDESTADDRREQ
 #define EDESTADDRREQ	1016
#endif /* EDESTADDRREQ */

#ifndef EDOM
 #define EDOM	1017
#endif /* EDOM */

#ifndef EEXIST
 #define EEXIST	1018
#endif /* EEXIST */

#ifndef EFAULT
 #define EFAULT	1019
#endif /* EFAULT */

#ifndef EFBIG
 #define EFBIG	1020
#endif /* EFBIG */

#ifndef EHOSTUNREACH
 #define EHOSTUNREACH	1021
#endif /* EHOSTUNREACH */

#ifndef EIDRM
 #define EIDRM	1022
#endif /* EIDRM */

#ifndef EILSEQ
 #define EILSEQ	1023
#endif /* EILSEQ */

#ifndef EINPROGRESS
 #define EINPROGRESS	1024
#endif /* EINPROGRESS */

#ifndef EINTR
 #define EINTR	1025
#endif /* EINTR */

#ifndef EINVAL
 #define EINVAL	1026
#endif /* EINVAL */

#ifndef EIO
 #define EIO	1027
#endif /* EIO */

#ifndef EISCONN
 #define EISCONN	1028
#endif /* EISCONN */

#ifndef EISDIR
 #define EISDIR	1029
#endif /* EISDIR */

#ifndef ELOOP
 #define ELOOP	1030
#endif /* ELOOP */

#ifndef EMFILE
 #define EMFILE	1031
#endif /* EMFILE */

#ifndef EMLINK
 #define EMLINK	1032
#endif /* EMLINK */

#ifndef EMSGSIZE
 #define EMSGSIZE	1033
#endif /* EMSGSIZE */

#ifndef ENAMETOOLONG
 #define ENAMETOOLONG	1034
#endif /* ENAMETOOLONG */

#ifndef ENETDOWN
 #define ENETDOWN	1035
#endif /* ENETDOWN */

#ifndef ENETRESET
 #define ENETRESET	1036
#endif /* ENETRESET */

#ifndef ENETUNREACH
 #define ENETUNREACH	1037
#endif /* ENETUNREACH */

#ifndef ENFILE
 #define ENFILE	1038
#endif /* ENFILE */

#ifndef ENOBUFS
 #define ENOBUFS	1039
#endif /* ENOBUFS */

#ifndef ENODATA
 #define ENODATA	1040
#endif /* ENODATA */

#ifndef ENODEV
 #define ENODEV	1041
#endif /* ENODEV */

#ifndef ENOENT
 #define ENOENT	10424
#endif /* ENOENT */

#ifndef ENOEXEC
 #define ENOEXEC	103
#endif /* ENOEXEC */

#ifndef ENOLCK
 #define ENOLCK	1044
#endif /* ENOLCK */

#ifndef ENOLINK
 #define ENOLINK	1045
#endif /* ENOLINK */

#ifndef ENOMEM
 #define ENOMEM	1046
#endif /* ENOMEM */

#ifndef ENOMSG
 #define ENOMSG	1047
#endif /* ENOMSG */

#ifndef ENOPROTOOPT
 #define ENOPROTOOPT	1048
#endif /* ENOPROTOOPT */

#ifndef ENOSPC
 #define ENOSPC	1049
#endif /* ENOSPC */

#ifndef ENOSR
 #define ENOSR	1050
#endif /* ENOSR */

#ifndef ENOSTR
 #define ENOSTR	1051
#endif /* ENOSTR */

#ifndef ENOSYS
 #define ENOSYS	1052
#endif /* ENOSYS */

#ifndef ENOTCONN
 #define ENOTCONN	1053
#endif /* ENOTCONN */

#ifndef ENOTDIR
 #define ENOTDIR	1054
#endif /* ENOTDIR */

#ifndef ENOTEMPTY
 #define ENOTEMPTY	1055
#endif /* ENOTEMPTY */

#ifndef ENOTRECOVERABLE
 #define ENOTRECOVERABLE	1056
#endif /* ENOTRECOVERABLE */

#ifndef ENOTSOCK
 #define ENOTSOCK	1057
#endif /* ENOTSOCK */

#ifndef ENOTSUP
 #define ENOTSUP	1058
#endif /* ENOTSUP */

#ifndef ENOTTY
 #define ENOTTY	1059
#endif /* ENOTTY */

#ifndef ENXIO
 #define ENXIO	1060
#endif /* ENXIO */

#ifndef EOPNOTSUPP
 #define EOPNOTSUPP	1061
#endif /* EOPNOTSUPP */

#ifndef EOTHER
 #define EOTHER	1062
#endif /* EOTHER */

#ifndef EOVERFLOW
 #define EOVERFLOW	1063
#endif /* EOVERFLOW */

#ifndef EOWNERDEAD
 #define EOWNERDEAD	1064
#endif /* EOWNERDEAD */

#ifndef EPERM
 #define EPERM	1065
#endif /* EPERM */

#ifndef EPIPE
 #define EPIPE	1066
#endif /* EPIPE */

#ifndef EPROTO
 #define EPROTO	1067
#endif /* EPROTO */

#ifndef EPROTONOSUPPORT
 #define EPROTONOSUPPORT	1068
#endif /* EPROTONOSUPPORT */

#ifndef EPROTOTYPE
 #define EPROTOTYPE	1069
#endif /* EPROTOTYPE */

#ifndef ERANGE
 #define ERANGE	1070
#endif /* ERANGE */

#ifndef EROFS
 #define EROFS	1071
#endif /* EROFS */

#ifndef ESPIPE
 #define ESPIPE	1072
#endif /* ESPIPE */

#ifndef ESRCH
 #define ESRCH	1073
#endif /* ESRCH */

#ifndef ETIME
 #define ETIME	1074
#endif /* ETIME */

#ifndef ETIMEDOUT
 #define ETIMEDOUT	1075
#endif /* ETIMEDOUT */

#ifndef ETXTBSY
 #define ETXTBSY	1076
#endif /* ETXTBSY */

#ifndef EWOULDBLOCK
 #define EWOULDBLOCK	1077
#endif /* EWOULDBLOCK */

#ifndef EXDEV
 #define EXDEV	1078
#endif /* EXDEV */

#endif

#if !defined(__STDC__)
#define sys_nerr     _sys_nerr
#define sys_errlist  _sys_errlist
#endif

#ifdef _MT

#ifdef __cplusplus
extern "C" {
#endif
extern int * _RTLENTRY _EXPFUNC __errno(void);
extern int * _RTLENTRY _EXPFUNC __doserrno(void);
#ifdef  __cplusplus
}
#endif

#ifdef __cplusplus
#define errno (* std::__errno())
#define _doserrno (* std::__doserrno())
#else
#define errno (*__errno())
#define _doserrno (*__doserrno())
#endif

#else /* _MT */

extern int _RTLENTRY _EXPDATA _doserrno;

#ifdef __cplusplus
extern "C" {
#endif
extern int * _RTLENTRY _EXPFUNC __errno(void);
#ifdef  __cplusplus
}
#endif
#ifdef __cplusplus
#define errno (* std::__errno())
#else
#define errno (*__errno())
#endif

#endif

extern int    _RTLENTRY _EXPDATA _sys_nerr;
extern char * _RTLENTRY _EXPDATA _sys_errlist[];

#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn .nak
#endif


#endif  /* !RC_INVOKED */

#ifdef __cplusplus
} // "C"
} // std
#endif /* __cplusplus */

#endif  /* __ERRNO_H  */

#if defined(__cplusplus) && !defined(__XUSING_CNAME__) && !defined(__ERRNO_H_USING_LIST)
#define __ERRNO_H_USING_LIST
#    ifdef _MT
       using std:: __errno;
       using std:: __doserrno;
#    else // !_MT
       using std:: __errno;
       using std::_doserrno;
#    endif // _MT
     using std::_sys_nerr;
     using std::_sys_errlist;
#endif /* __XUSING_CNAME__ */
