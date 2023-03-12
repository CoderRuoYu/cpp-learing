#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//.add    2. del * *****\n");
//printf("******  3. search 4. modify   ******\n");
//printf("******  5. show   6. sort     ******\n");
//printf("******  0. exit    


enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
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
		case ADD:
			Add_Contact(&con);
			break;
		case DEL:
			Del_Contact(&con);
			break;
		case SEARCH:
			Search_Contact(&con);
			break;
		case MODIFY:
			Modify_Contact(&con);
			break;
		case SHOW:
			Show_Contact(&con);
			break;
		case SORT:

			break;
		case EXIT:
			printf("�ɹ��˳�\n");
			break;
		default:
			printf("�������������������!\n");
			break;
		}
	} while (input);
	return 0;
}