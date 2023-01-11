#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_strstr(const char* str1, const char* str2)
{
	if (*str2 == '\0')return str1;
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')return p;
		p++;
	}
	return NULL;
}
int main()
{
	char arr[100] = "abbbcdefg";
	char* ret = my_strstr(arr, "bbc");
	printf("%s\n", ret);
	return 0;
}