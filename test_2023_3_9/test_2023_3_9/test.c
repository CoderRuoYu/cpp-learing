#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define add_to_sum(name,value) sum##name+=value
int main()
{
	int sum5 = 0;
	add_to_sum(5, 10);
	printf("%d", sum5);
	return 0;
}