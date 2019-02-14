#include "header.h"

size_t ft_strlcat(char *dst, const char *src, size_t size) {
	char *ptr_dst = dst;
	const char *ptr_src = src;
	size_t n = size;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *ptr_dst != '\0')
		ptr_dst++;
	dlen = ptr_dst - dst;
	n = size - dlen;

	if (n == 0)
		return(dlen + strlen(ptr_src));
	while (*ptr_src != '\0') {
		if (n != 1) {
			*ptr_dst++ = *ptr_src;
			n--;
		}
		ptr_src++;
	}
	*ptr_dst = '\0';

	return(dlen + (ptr_src - src));	/* count does not include NUL */
}