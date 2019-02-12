#include "header.h"

size_t ft_strlen(const char *str) {
	if (NULL == str) {
		printf("ft_strlen: str este NULL.\n");
		return (0);
	}
	size_t count;
	const char *ptr;

	ptr = str;
	count = 1;
	while (ptr++) {
		if (*ptr == '\0')return (count);
		count++;
	}
	return (count);
}