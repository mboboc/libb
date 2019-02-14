#include "header.h"

char *ft_strcat (char *dest, const char *src) {
	char *ret = dest;

	while (*dest) dest ++;
	while ((*dest++ = *src++))
		;
	return (ret);
}