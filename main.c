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

void test_ft_strcat() {
	char str[80];
	strcpy (str,"these ");
	ft_strcat(str,"strings ");
	ft_strcat(str,"are ");
	ft_strcat(str,"concatenated.");
	puts (str); 
}

void test_ft_strncat() {
	char str1[20];
  	char str2[20];
  	strcpy (str1,"To be ");
  	strcpy (str2,"or not to be");
  	ft_strncat (str1, str2, 6);
  	puts (str1);
}

void test_ft_strlcat() {

}

void test_ft_strchr() {
	const char str[] = "http://www.tutorialspoint.com";
   	const char ch = '.';
   	char *ret;

   	ret = ft_strchr(str, ch);

   	printf("String after |%c| is - |%s|\n", ch, ret);
}

void test_ft_strrchr() {
	char str[] = "This is a sample string";
	char *pch;
	pch = ft_strrchr(str,'s');
	printf ("Last occurence of 's' found at %ld \n", pch-str + 1);
	 
}

void test_ft_strstr() {
	const char haystack[20] = "Tutorialsbunaghytrsf";
   	const char needle[10] = "buna";
   	char *ret;

   	ret = ft_strstr(haystack, needle);


   	printf("The string is: %s\n", haystack);
   	printf("The substring is: %s\n", ret);
}

void test_ft_strnstr() {
	const char haystack[20] = "Tutorialsbunaghytrsf";
   	const char needle[10] = "buna";
   	char *ret;

   	ret = ft_strnstr(haystack, needle, 5);


   	printf("The string is: %s\n", haystack);
   	printf("The substring is: %s\n", ret);
}

void test_ft_strcmp() {
	char str1[15];
   	char str2[15];
   	int ret;

   	strcpy(str1, "abcdef");
   	strcpy(str2, "ABCDEF");

   	ret = ft_strcmp(str1, str2);

   	if(ret < 0) {
      printf("str1 is less than str2");
   	} else if(ret > 0) {
      printf("str2 is less than str1");
   	} else {
      printf("str1 is equal to str2");
   }
}

void test_ft_strncmp() {
	char str1[15];
   	char str2[15];
   	int ret;

   	strcpy(str1, "abcdef");
   	strcpy(str2, "abcCDEF");

   	ret = ft_strncmp(str1, str2, 3);

   	if(ret < 0) {
      printf("str1 is less than str2");
   	} else if(ret > 0) {
      printf("str2 is less than str1");
   	} else {
      printf("str1 is equal to str2");
   }
}


int main () {
	int c = 42;
	ft_isalpha(c);
	return(0);
}