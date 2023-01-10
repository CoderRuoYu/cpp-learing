#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strcmp(const char* s1, const char* s2)
{
	while (*s1++ == *s2++);
	

}
int main()
{
	char arr[] = "abcdef";
	char arr1[] = "abcdf";
	my_strcmp(arr, arr1);
	while (0 == 0)
	{
		printf("1");
	}
	return 0;
}