/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface -infile=../lib/pnetcdf.h -deffile=defs
 * DO NOT EDIT
 */
#include "mpinetcdf_impl.h"


#ifdef F77_NAME_UPPER
#define nfmpi_get_vars_ NFMPI_GET_VARS
#elif defined(F77_NAME_LOWER_2USCORE)
#define nfmpi_get_vars_ nfmpi_get_vars__
#elif !defined(F77_NAME_LOWER_USCORE)
#define nfmpi_get_vars_ nfmpi_get_vars
/* Else leave name alone */
#endif

FORTRAN_API void FORT_CALL nfmpi_get_vars_ ( int *v1, int *v2, int v3[], int v4[], int v5[], void*v6, int *v7, MPI_Fint *v8, MPI_Fint *ierr ){
    *ierr = ncmpi_get_vars( *v1, *v2, v3, v4, v5, v6, *v7, *v8 );
}
