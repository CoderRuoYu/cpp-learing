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
		printf("���\n");
	}
	else if (ret > 0)
	{
		printf("��һ���ַ�����\n");
	}
	else
		printf("�ڶ����ַ�����\n");

	return 0;
}