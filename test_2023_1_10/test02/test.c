#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char *arr)
{
	char* p = arr;
	while (*arr++ != '\0');
	return arr - p - 1;
}
int my_strlen1(char* arr)
{
	int cn = 0;;
	while (*arr++ != '\0')cn++;
	return cn;
}
int my_strlen2(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + my_strlen2(arr + 1);
	}
	else
		return 0;
}
int main()
{
	char buf[] = "abcdefg";
	printf("%d\n", my_strlen(buf));
	printf("%d\n", my_strlen1(buf));
	printf("%d\n", my_strlen2(buf));
	
	return 0;
}