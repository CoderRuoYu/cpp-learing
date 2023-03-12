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
		printf("请输入您要执行操作 :");
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
			printf("成功退出\n");
			break;
		default:
			printf("输入错误，请您重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}
