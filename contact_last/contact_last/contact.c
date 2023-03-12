#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void Init_Contact(Contact* con)
{
	assert(con != NULL);
	con->size = 0;
	PeoInfo* ptr = (PeoInfo*)calloc(DEFAULT_SZ,sizeof(PeoInfo));
	if (!ptr)
	{
		perror("malloc");
		return;
	}
	con->data = ptr;
	con->maxsize = DEFAULT_SZ;
}
void check_capacity(Contact* con)
{
	assert(con!=NULL);
	if (con->size == con->maxsize)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(con->data, sizeof(PeoInfo) * (con->maxsize + INC_SZ));
		if (!ptr)
		{
			perror("check_capacity::realloc");
			return ;
		}
		con->data = ptr;
		con->maxsize += INC_SZ;
		printf("分配空间成功!\n");
	}
}

void Add_Contact(Contact* con)
{
	assert(con != NULL);
	check_capacity(con);
	printf("请输入您要添加联系人的姓名:");
	scanf("%s", con->data[con->size].name);
	printf("请输入您要添加联系人的年龄:");
	scanf("%d", &(con->data[con->size].age));
	printf("请输入您要添加联系人的性别:");
	scanf("%s", con->data[con->size].sex);
	printf("请输入您要添加联系人的地址:");
	scanf("%s", con->data[con->size].address);
	printf("请输入您要添加联系人的电话号码:");
	scanf("%s", con->data[con->size].tel);
	con->size++;
}
void Show_Contact(Contact* con)
{
	assert(con);
	if (con->size == 0)
	{
		printf("通讯录为空。\n");
		return;
	}
	printf("姓名\t性别\t年龄\t住址\t电话\n");
	for (int i = 0; i < con->size; i++)
	{
		printf("%s\t%s\t%d\t%s\t%s\n", con->data[i].name, con->data[i].sex, con->data[i].age, con->data[i].address, con->data[i].tel);
	}
}
void Del_Contact(Contact* con)
{
	assert(con);
	if (con->size == 0)
	{
		printf("通讯录为空，无法删除。\n");
		return;
	}
	printf("请输入您要删除人的姓名:");
	char tem[20];
	int flag = 0;
	scanf("%s", tem);
	for (int i = 0; i < con->size; i++)
	{
		if (!strcmp(con->data[i].name, tem))
		{
			flag = 1;
			for (int j = i + 1; j < con->size; j++)
			{
				con->data[j - 1] = con->data[j];
			}
			con->size--;
		}
	}
	if (!flag)
	{
		printf("通讯录中没有这个人。\n");
	}
	else
	{
		printf("删除成功!\n");
	}
}
void Search_Contact(Contact* con)
{
	assert(con);
	if (con->size == 0)
	{
		printf("您的通讯录为空\n");
		return;
	}
	printf("请输入您要查找人的姓名:");
	char tem[20];
	scanf("%s", tem);
	int flag = 0;
	for (int i = 0; i < con->size; i++)
	{
		if (!strcmp(con->data[i].name, tem))
		{
			flag = 1;
			printf("姓名\t性别\t年龄\t住址\t电话\n");
			printf("%s\t%s\t%d\t%s\t%s\n", con->data[i].name, con->data[i].sex, con->data[i].age, con->data[i].address, con->data[i].tel);
			break;
		}
	}
	if (!flag)
	{
		printf("您的通讯录中没有这个人\n");
	}
}
void Modify_Contact(Contact* con)
{
	assert(con);
	if (con->size == 0)
	{
		printf("您的通讯录为空。\n");
		return;
	}
	printf("请输入您要修改人的姓名:");
	char tem[20];
	scanf("%s", tem);
	int flag = 0;
	for (int i = 0; i < con->size; i++)
	{
		if (!strcmp(con->data[i].name, tem))
		{
			flag = 1;
			printf("请输入您要修改联系人的姓名:");
			scanf("%s", con->data[i].name);
			printf("请输入您要修改联系人的年龄:");
			scanf("%d", &(con->data[i].age));
			printf("请输入您要修改联系人的性别:");
			scanf("%s", con->data[i].sex);
			printf("请输入您要修改联系人的地址:");
			scanf("%s", con->data[i].address);
			printf("请输入您要修改联系人的电话号码:");
			scanf("%s", con->data[i].tel);
			break;
		}
	}
	if (!flag)
	{
		printf("您的通讯录中没有这个人\n");
	}

}
void Sort_Contact(Contact* con)
{

}





