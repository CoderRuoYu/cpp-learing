#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void search(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		int tem = arr[i];
		for (int j = i + 1; j < sz; j++)
		{
			if (tem == arr[j])
			{
				printf("%d ", arr[j]);
			}
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,1,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	search(arr, sz);
	return 0;
}