#include "header.h"

void *ft_memchr(const void *src, int value, size_t n) {
	if (n < 1) {
		printf("ft_memchr: N can't be negative.\n");
	}
	const char *ptr;

	ptr = (char *)src;
	for (; n > 0; --n, ++ptr) {
		if (*ptr == value)
			return (void *) ptr;
	}
	return (NULL);
}