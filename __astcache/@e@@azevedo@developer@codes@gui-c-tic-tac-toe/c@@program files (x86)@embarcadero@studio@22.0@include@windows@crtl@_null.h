/*  _null.h

    Definition of NULL.

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1987, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */


/* $Revision: 23293 $ */

#ifndef NULL
#  if defined(__cplusplus) || defined(_Windows)
#    define NULL 0
#  else
#    define NULL ((void *)0)
#  endif
#endif

