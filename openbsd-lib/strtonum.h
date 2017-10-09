/*
 * Header file to provide a prototype for strtonum(), which OpenBSD 
 * declares in <stdlib.h> along with strtonum et al.
 */

#ifndef H_STRTONUM
#define H_STRTONUM

long long strtonum(const char *numstr, long long minval, long long maxval, const char **errstrp)

#endif	/* H_STRTONUM */
