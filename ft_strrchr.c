#include "header.h"

char *ft_strrchr(const char *str, int c) {
	char 	*aux = (char *)str;
	size_t 	size = ft_strlen(str);

	while (*aux) aux++;

	while (size--) {
		if (*aux == c) return (aux);
		aux--;
	}
	return (NULL);
}