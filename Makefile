
SOURCE1 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c 
SOURCE2 = ft_memchr.c ft_memcmp.c ft_strlen.c ft_strcpy.c ft_strdup.c
SOURCE3 = ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c
SOURCE4 = ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c
SOURCE5 = ft_atoi.c ft_isalpha.c
all:
	gcc main.c $(SOURCE1) $(SOURCE2) $(SOURCE3) $(SOURCE4)  $(SOURCE5) -Wall
clean:
	rm a.out
