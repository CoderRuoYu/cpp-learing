#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_strcpy(char* det, const char* buf)
{
	char* s1 = det;
	while (*s1++ = *buf++);
	return det;
}
int main()
{
	char buf[] = "abcdef";
	char arr[100] = { 0 };
	char* ret = my_strcpy(arr, buf);
	printf("%s\n", ret);
	return 0;
}