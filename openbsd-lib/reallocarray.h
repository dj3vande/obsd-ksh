/*
 * Header file to provide a prototype for reallocarray(), which OpenBSD 
 * declares in <stdlib.h> along with malloc et al.
 */

#ifndef H_REALLOCARRAY
#define H_REALLOCARRAY

#include <stddef.h>
void *reallocarray(void *optr, size_t nmemb, size_t size);

#endif	/* H_REALLOCARRAY */
