#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//.add    2. del * *****\n");
//printf("******  3. search 4. modify   ******\n");
//printf("******  5. show   6. sort     ******\n");
//printf("******  0. exit    


enum Option
{
	exit=0,
	add,
	del,
	search,
	modify,
	show,
	sort
};
void menu()
{
	printf("******1.add*********2.del*****\n");
	printf("******3.search******4.modify**\n");

	printf("******5.show********6.sort****\n");
	printf("******0.exit******************\n");

}
int main()
{
	int input = 0;
	Contact con;
	Init_Contact(&con);
	do
	{
		menu();
		printf("��������Ҫִ�в��� :");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			Add_Contact(&con);
			break;
		case del:
			break;
		case search:
			break;
		case modify:
			break;
		case show:
			break;
		case sort:
			break;
		case exit:
			printf("�ɹ��˳�\n");
			break;
		default:
			printf("�������������������!\n");
			break;
		}
	} while (input);
	return 0;
}
