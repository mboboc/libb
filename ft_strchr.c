#include "header.h"

char *ft_strchr(const char *str, int c) {
	char *aux = (char *)str;

	while (*aux != c) {
		if (*aux == '\0') return (NULL);
		aux++;
	}
	return (aux);
}