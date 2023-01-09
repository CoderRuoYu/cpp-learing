#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int(*p)[3] = a;
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", (*p)[i]);
	}
	return 0;
}
