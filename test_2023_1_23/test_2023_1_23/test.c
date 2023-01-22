#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,6,7,8,9,0,2,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = (int*)malloc(sz * sizeof(int));
	return 0;
}