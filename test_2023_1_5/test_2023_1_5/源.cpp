#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 0)
	{
		cout << "��˴洢" << endl;
	}
	else if (*p == 1)
	{
		cout << "С�˴���" << endl;
	}
	return 0;
}
