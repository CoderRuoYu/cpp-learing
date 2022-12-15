#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
using namespace std;
namespace N1
{
	int a = 2;
	int b = 2;
	namespace N1
	{
		int a = 45;
		int y = 11;
	}
}

int main()
{
	
	cout <<N1::a<< endl;
	return 0;
}