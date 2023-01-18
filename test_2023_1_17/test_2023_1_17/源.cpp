#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void* MyMemcpy(void* dest, void* src, size_t num)
{
	void* ret = dest;
	for (int i = 1; i <= num; i++)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	char name[10] = "abc";
	char name1[10] = "edg";
	//memcpy(name + strlen(name), name1, strlen(name1) + 1);
	MyMemcpy(name + strlen(name), name1, strlen(name1) + 1);
	printf("%s", name);
	return 0;
}