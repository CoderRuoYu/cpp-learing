#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int compare(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//void qsort(void* base, size_t num, size_t size,
//	int (*compar)(const void*, const void*));
void swap1(char* e1, char* e2, size_t num)
{
	for (int i = 0; i < num; i++)
	{
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;
		e1++;
		e2++;
	}
}
void bubble(void* base, size_t num, size_t size, int (*compare)(const void*, const void*))
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (compare((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				swap1((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 1,4,7,8,5,2,3,6,9 };
	int sz_arr = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz_arr, sizeof(arr[0]), compare);
	for (int i = 0; i < sz_arr; i++)printf("%d ", arr[i]);
	printf("\n");
	/*qsort(arr, sz_arr, sizeof(arr[0]),compare);
	for (int i = 0; i < sz_arr; i++)printf("%d ", arr[i]);
	printf("\n");*/
	return 0;
}