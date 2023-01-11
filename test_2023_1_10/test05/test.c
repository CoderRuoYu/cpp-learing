#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_strcat(char* s1, char* s2)
{
	char* p = s1;
	while (*s1)
	{
		s1++;
	}
	while (1)
	{
		*s1++ = *s2++;
		if (*s2 == '\0')break;
	}
	return p;

}
int main()
{
	char arr[10] = "abc";
	char* ret = my_strcat(arr, "def");
	printf("%s\n", ret);
	return 0;
}