#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
char* my_strncpy(char* dest,const char* src, size_t num)
{
	int sz1 = strlen(dest);
	int sz2 = strlen(src);
	if (sz1 < num)
	{
		return NULL;
	}
	char* tem = dest;
	for (int i = 0; i < num; i++)
	{
		if (sz2 >= num)
		{
			*dest++ = *src++;
		}
		else
		{
			if (i < sz2)
			{
				*dest++ = *src++;
			}
			else
			{
				*dest++ = '\0';
			}
		}
	}
	return tem;
}
int main()
{
	char s1[] = "xxxxxx";
	char s2[] = "abc";
	int n = 0;
	scanf("%d", &n);
	char *tem = my_strncpy(s1, s2, n);
	printf("%s\n", tem);
	return 0;
}