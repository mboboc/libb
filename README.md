MADALINA BOBOC 323CD

The following library is inspired by the indivitual project named LIBFT from
42. There are 4 sections:

1. **Libc Functions:** Some of the standard C functions
2. **Additional functions:**
3. **Bonus functions:** Useful for Linked list manipulation
4. **Personal Functions:** Functions I believe will be uselful later

- **FT_MEMSET:**  void *ft_memset(void *s, int c, size_t n);
  - fill first n bytes of the memory area pointed by s with the constant
		byte c
- **FT_BZERO:** void ft_bzero(void *s, size_t n);
  - sets the first n bytes of the area starting at s to zero (\0)
- **FT_MEMCPY:** void *ft_memcpy(void *dest, const void *src, size_t num)
  - copies n characters from source to destination
- **FT_MEMCCPY:** void *ft_memccpy(void *s1, const void *s2, int c, size_t n);
  - copies characters from source to destination stopping after the first 
  occurrence of c had been copied, or after n bytes have been copied
- **FT_MEMMOVE:** void *ft_memmove(void *dest, const void *src, size_t num);
  - copies n characters from source to destination
  - src and dest can overlap
- **FT_MEMCHR:** void *ft_memchr(const void *src, int value, size_t n);
  - serches whithin the first num bytes of the block of memory pointed by 
  ptr for the first occurrence of value and returns pointer to it
- **FT_MEMCMP:** int ft_memcmp (const void *s1, const void *s2, size_t n);
  - compares first n bytes of s1 to first n bytes of s2; returns 0 if
   equal or the difference if not
- **FT_STRLEN:** size_t ft_strlen(const char *str);
  - returns length of string
- **FT_STRDUP:** char *ft_strdup(const char *str);
  - returns pointer to a null-terminated byte string, which is a dublicate of
  the string provided by str
  - DOESN'T free the memory 
- **FT_STRCPY:** char *ft_strcpy(char * dest, const char *src);
  - copies src in dest, including the terminating null character
- **FT_STRNCPY:** char *ft_strncpy(char *dest, const char *src, size_t n);
  - copies up to n characters from src to dest
  - if length of src is less than that of n, the remainder of dest will be
   padded with null bytes
- **FT_STRCAT:** char *ft_strcat (char *dest, const char *src);
  - appends a copy of the source string to the destination
  - destination and source shall not overlap
- **FT_STRNCAT:** char *ft_strncat (char *dest, const char *src, size_t n)
  - appends the first num characters of src to dest, plus a terminating
   null-character
- **FT_STRLCAT:** size_t ft_strlcat(char *dst, const char *src, size_t size);
  - take full size of the buffer and guarantes NULL-terminate the result
- **FT_STRCHR:** char *ft_strchr(const char *str, int c);
  - returns pointer to first apparition of c; if it doesnt exist, returns NULL
- **FT_STRRCHR:** char *ft_strrchr(const char *str, int c);
  - returns a pointer to the last occurence of character in the C string str
- **FT_STRSTR:** char *strstr(const char *haystack, const char *needle);
  - finds the first occurrence of the substring needle in the string haystack
- **FT_STRNSTR:** char *ft_strnstr(const char *haystack, const char *needle,
size_t n);
  - finds the first occurrence of the substring needle in the string haystack
  - no more than n characters are searched
- **FT_STRCMP:** int ft_strcmp(const char *s1, const char *s2);
  - compares two strings s1 and s2
  - returns the difference s1 - s2
- **FT_STRNCMP:** int ft_strncmp(const char *s1, const char *s2, size_t n);
  - compares first n bytes of strings s1 and s2
  - returns the difference s1 - s2
- **FT_ATOI:** int  ft_atoi(char *str);
  - parses the string str interpreting its content as an integral number,
  which is returned as a value of type int
- **FT_ISALPHA:** int ft_isalpha(int c);
  - checks if c is a letter
- **FT_ISDIGIT:** int ft_isdigit(int c);
  - checks if c is a digit
- **FT_ISALNUM:** int ft_isalnum(int c);
  - checks if c is a digit or a letter
- **FT_ISASCII:** int ft_isascii(int c);
  - checks if c is ASCII
- **FT_ISPRINT:** int ft_isprint(int c);
  - checks if c is printable
- **FT_TOUPPER:** int ft_toupper(int c);
  - turns all lower chars to upper
- **TO_LOWER:** int ft_tolower(int c);
  - turns all upper chars to lower
