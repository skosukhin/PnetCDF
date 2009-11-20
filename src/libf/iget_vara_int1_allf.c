/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface -infile=../lib/pnetcdf.h -deffile=defs
 * DO NOT EDIT
 */
#include "mpinetcdf_impl.h"
#include "mvar.h"


#ifdef F77_NAME_UPPER
#define nfmpi_iget_vara_int1_all_ NFMPI_IGET_VARA_INT1_ALL
#elif defined(F77_NAME_LOWER_2USCORE)
#define nfmpi_iget_vara_int1_all_ nfmpi_iget_vara_int1_all__
#elif !defined(F77_NAME_LOWER_USCORE)
#define nfmpi_iget_vara_int1_all_ nfmpi_iget_vara_int1_all
/* Else leave name alone */
#endif

extern lnc_req *req_head ;
extern lnc_req *req_tail ;

/* Prototypes for the Fortran interfaces */
#include "mpifnetcdf.h"
FORTRAN_API int FORT_CALL nfmpi_iget_vara_int1_all_ ( int *v1, int *v2, MPI_Offset v3[], MPI_Offset v4[], void*v5, MPI_Offset *v6, MPI_Fint *v7 ){
    int ierr;
    int l2 = *v2 - 1;
    MPI_Offset *l3 = 0;
    MPI_Offset *l4 = 0;
    NCMPI_Request l7_req;
    lnc_req *tmp_req = NULL;

    { int ln = ncmpixVardim(*v1,*v2-1);
    if (ln > 0) {
        int li;
        l3 = (MPI_Offset *)malloc( ln * sizeof(MPI_Offset) );
        for (li=0; li<ln; li++) 
            l3[li] = v3[ln-1-li] - 1;
    }
    else if (ln < 0) {
        /* Error return */
        ierr = ln; 
	return ierr;
    }
    }

    { int ln = ncmpixVardim(*v1,*v2-1);
    if (ln > 0) {
        int li;
        l4 = (MPI_Offset *)malloc( ln * sizeof(MPI_Offset) );
        for (li=0; li<ln; li++) 
            l4[li] = v4[ln-1-li];
    }
    else if (ln < 0) {
        /* Error return */
        ierr = ln; 
	return ierr;
    }
    }
    ierr = ncmpi_iget_vara_schar_all( *v1, l2, l3, l4, v5, *v6, &l7_req );
    if (req_head==NULL) {
        req_head=(lnc_req *)malloc(sizeof(lnc_req));
        req_head->next = NULL;
        req_head->reqid = 0;
        req_head->req = l7_req;
        req_tail = req_head;
    } else {
        tmp_req =(lnc_req *)malloc(sizeof(lnc_req));
        tmp_req->next = NULL;
        tmp_req->reqid = req_tail->reqid + 1;
        tmp_req->req = l7_req;
        req_tail->next = tmp_req;
        req_tail = req_tail->next;
   }
        *v7 = req_tail->reqid;

    if (l3) { free(l3); }

    if (l4) { free(l4); }
    return ierr;
}
