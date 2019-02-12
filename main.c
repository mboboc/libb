#include "header.h"

void test_ft_memchr(void) {
	char *s1 = "";
	char *s2 = "abcdefabcdef";
	char *s3 = "11111111111111111111";

	printf("Testing memchr():\nTest1...");
	if (ft_memchr(s1, 'x', 0) == NULL)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest2...");
	if (ft_memchr(s2, 'y', 0) == NULL)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest3...");
	if ((char *)ft_memchr(s2, 'a', 1) - s2 == 0)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest4...");
	if (ft_memchr(s2, 'd', 2)  == NULL)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest5...");
	if ((char *)ft_memchr(s2, 'd', 12)  - s2 == 3)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest6...");
	if ((char *)ft_memchr(s2, 'f', 12)  - s2 == 5)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest7...");
	if ((char *)ft_memchr(s3, '1', 20)  - s3 == 0)
		printf("passed.");
	else	printf("FAILED.");
	putchar('\n');
}

void test_ft_memcmp(void) {
	char s1[] = "DWgaOtP12df0";
	char s2[] = "DWGAOTP12DF0";

	printf("Testing ft_memcmp():\nTest1...");
	if (ft_memcmp(s1, s2, 12) > 0)
		printf("passed.");
	else	printf("FAILED.");
	putchar('\n');
}

void test_ft_strlen(void) {
	char s1[] = "123456789";
	printf("Testing ft_strlen():\nTest1...");
	if (ft_strlen(s1) == 9)
		printf("passed.");
	else	printf("FAILED.");
	putchar('\n');
}

void test_ft_strcpy(void) {
	char str1[]="Sample string";
	char str2[40];
	char str3[40];

	ft_strcpy (str2,str1);
	ft_strcpy (str3,"copy successful");
	printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
}

void test_ft_strdup(void) {
	char str1[]="Sample string";
	char *c;

	c = ft_strdup(str1);
	printf("%s\n", str1);
	printf("%s\n", c);
}

void test_ft_strncpy(void) {
	char *source = "Techie Delight";
	char dest[20];

	size_t num = 6;

	printf("%s", strncpy(dest, source, num));
}

int main () {
	test_ft_strncpy();
	return(0);
}