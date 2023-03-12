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
		printf("����ռ�ɹ�!");
	}
}

void Add_Contact(Contact* con)
{
	assert(con != NULL);
	check_capacity(con);
	printf("��������Ҫ�����ϵ�˵�����:");
	scanf("%s", con->data[con->size].name);
	printf("��������Ҫ�����ϵ�˵�����:");
	scanf("%d", &(con->data[con->size].age));
	printf("��������Ҫ�����ϵ�˵��Ա�:");
	scanf("%s", con->data[con->size].sex);
	printf("��������Ҫ�����ϵ�˵ĵ�ַ:");
	scanf("%s", con->data[con->size].address);
	printf("��������Ҫ�����ϵ�˵ĵ绰����:");
	scanf("%s", con->data[con->size].tel);
}


