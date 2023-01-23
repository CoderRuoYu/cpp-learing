#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>;
char* my_strncat(char* dest,const char* src, int num)
{
	char* tem = dest;
	int sz = strlen(dest);
	if (num <= src)
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			*(dest + sz + i) = *src;
			src++;
		}
		*(dest + sz + i + 1) = '\0';
	}
	else
	{
		for (int i = 0; i < sz + 1; i++)
		{
			*(dest + sz + i) = *src;
			src++;
		}
	}
	return tem;
}
int main()
{
	char s1[20] = "xxx";
	char s2[] = "abcdefg";
	int num = 0;
	scanf("%d", &num);
	char *ret = my_strncat(s1, s2, num);
	printf("%s\n", ret);
	return 0;
}