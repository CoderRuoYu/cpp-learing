#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int test()
{
	int a = 0;
	return a;
}
int main()
{
	int a = 10;
	int &b = a;
	return 0;
}