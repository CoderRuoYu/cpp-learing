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
		PeoInfo* ptr = (PeoInfo*)realloc(con, sizeof(PeoInfo) * (con->maxsize + INC_SZ));
		if (!ptr)
		{
			perror("check_capacity::realloc");
			return ;
		}
		con->data = ptr;
		con->maxsize += INC_SZ;
		printf("分配空间成功!");
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
}


