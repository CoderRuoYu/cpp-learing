#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strcmp(const char* s1, const char* s2)
{
	while (*s1++ == *s2++ && *s1 != '\0' && *s2 != '\0');
	return *s1 - *s2;
}
int main()
{
	char arr[] = "abcdf";
	char arr1[] = "abcdf";
	int ret = my_strcmp(arr, arr1);
	if (ret == 0)
	{
		printf("相等\n");
	}
	else if (ret > 0)
	{
		printf("第一个字符串大\n");
	}
	else
		printf("第二个字符串大\n");

	return 0;
}