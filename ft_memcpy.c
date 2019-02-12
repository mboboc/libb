#include "header.h"
/*
	-size of dest must be greater than the number of bytes to copy
	-memory of src and dest must not overlap => undefined behavior
	-memcpy doesn't check "\0"
	-undefined behavior if you try to access dest/src beyond their length
*/

void *ft_memcpy(void *dest, const void *src, size_t n) {
	if (dest == NULL || src == NULL) {
		printf("ft_memcpy: Src/Dest is NULL.\n");
		return (NULL);
	}
	if (n < 1) {
		printf("ft_memcpy: N can't be negative.\n");
		return (NULL);
	}
	unsigned char *ptr_dest = dest;
	const unsigned char *ptr_src = src;

	while(n--) {
		*ptr_dest++ = *ptr_src++;
	}
	return (dest);
}