#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct Stu
{
	int age;
};
struct Cla
{
	struct Stu a[10];
};
int compare(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int compare1(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int main()
{
	/*int arr[] = { 1,4,7,8,5,2,3,6,9 };
	int sz_arr = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz_arr, sizeof(arr[0]),compare);
	for (int i = 0; i < sz_arr; i++)printf("%d ", arr[i]);
	printf("\n");*/
	struct Cla b;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &b.a[i].age);
	}
	qsort(b.a, sizeof(b.a) / sizeof(b.a[0]), sizeof(b.a[0].age), compare1);
	for (int i = 0; i < 10; i++)printf("%d ", b.a[i].age);
	printf("\n"); 
	return 0;
}