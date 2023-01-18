#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void* MyMemmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	if (dest < src)
	{
		for (int i = 0; i < num; i++)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		src = (char*)src + num - 1;
		dest = (char*)dest + num - 1;
		for (int i = 0; i < num; i++)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest - 1;
			src = (char*)src - 1;
		}
	}
	return ret;
}
int main()
{
	char s1[10] = "xxxxxxxx";
	char s2[10] = "123";
	memmove(s1, s2, strlen(s2));
	printf("%s", s1);
	return 0;
}