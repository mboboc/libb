#include "header.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n) {
	const char *aux_haystack = haystack;
	const char *aux_needle = needle;
	const char *ret;
	size_t size_needle = ft_strlen(needle);

	while(n--) {
		if (*aux_haystack == *needle) {
			ret = aux_haystack;
			size_needle = ft_strlen(needle);
			while(*aux_needle == *aux_haystack) {
				if (size_needle == 1) return (char *)ret;
				aux_needle++;
				aux_haystack++;
				size_needle--;
			}
			aux_needle = needle;
		}
		aux_haystack++;
	}
	return (NULL);
}