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
#define nfmpi_get_att_double_ NFMPI_GET_ATT_DOUBLE
#elif defined(F77_NAME_LOWER_2USCORE)
#define nfmpi_get_att_double_ nfmpi_get_att_double__
#elif !defined(F77_NAME_LOWER_USCORE)
#define nfmpi_get_att_double_ nfmpi_get_att_double
/* Else leave name alone */
#endif

FORTRAN_API void FORT_CALL nfmpi_get_att_double_ ( int *v1, int *v2, char *v3 FORT_MIXED_LEN(d3), double*v4, MPI_Fint *ierr FORT_END_LEN(d3) ){
    *ierr = ncmpi_get_att_double( *v1, *v2, v3, v4 );
}
