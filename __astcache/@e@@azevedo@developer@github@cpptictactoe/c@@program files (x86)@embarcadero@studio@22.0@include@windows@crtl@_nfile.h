/*  _nfile.h

    Maximum number of open files

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1991, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */


/* $Revision: 33126 $ */

#ifndef ___NFILE_H
#define ___NFILE_H

#if defined(_WIN64)
#define _NFILE_ 512
#else
#define _NFILE_ 50
#endif

#endif
