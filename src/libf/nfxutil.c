
#include "nc.h"
int ncxVardim( int ncid, int varid ) 
{
  NC_var *varp;
  NC     *ncp;

  NC_check_id(ncid, &ncp);
  varp = NC_lookupvar(ncp, varid);
  return varp->ndims;
}
