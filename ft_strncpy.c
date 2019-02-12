#include "header.h"

char *ft_strncpy(char *dest, const char *src, size_t n) {
	char 	*ret;

	ret = dest;
	while(n--) {
		*dest++ = *src++;
	}
	*dest = '\0'; 

	return (ret);
}