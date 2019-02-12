#include "header.h"

char *ft_strdup(const char *str) {
	char *ret;

	ret = (char *)malloc(ft_strlen(str) + 1);
	if (NULL == ret) {
		printf("ft_strdup: Nu s-a alocat memoria.");
		return (NULL);
	}
	ret = strcpy(ret, str);

	return (ret);
}
