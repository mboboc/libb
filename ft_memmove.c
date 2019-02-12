#include "header.h"
/*
	-uses a buffer for copying
	-allows destination and source to overlap
	-memcpy doesn't check "\0"
	-undefined behavior if you try to access dest/src beyond their length
*/

void *ft_memmove(void *dest, const void *src, size_t n) {
	char		*buffer;
	size_t		i;
	char		*ptr_dest;
	const char 	*ptr_src;
	char 		*ptr_buffer;

	buffer = (char *)malloc(sizeof(char) * n);
	i = n;
	ptr_dest = dest;
	ptr_src = src;
	ptr_buffer = buffer;
	while(i--) {
		*ptr_buffer++ = *ptr_src++;
	}

	while(n--) {
		*ptr_dest++ = *buffer++;
	}

	return (dest);
}