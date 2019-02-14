#ifndef header
#define header

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void 	*ft_memset(void *s, int c, size_t n);
void 	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dest, const void *src, size_t n);
void 	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void 	*ft_memmove(void *dest, const void *src, size_t num);
void 	*ft_memchr(const void *src, int value, size_t n);
int 	ft_memcmp (const void *s1, const void *s2, size_t n);
size_t 	ft_strlen(const char *str);
char 	*ft_strdup(const char *str);
char 	*ft_strcpy (char * dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat (char *dest, const char *src);
char	*ft_strncat (char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char 	*ft_strchr(const char *str, int c);
#endif
