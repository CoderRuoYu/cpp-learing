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
		printf("����ռ�ɹ�!\n");
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
	con->size++;
}
void Show_Contact(Contact* con)
{
	assert(con);
	if (con->size == 0)
	{
		printf("ͨѶ¼Ϊ�ա�\n");
		return;
	}
	printf("����\t�Ա�\t����\tסַ\t�绰\n");
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
		printf("ͨѶ¼Ϊ�գ��޷�ɾ����\n");
		return;
	}
	printf("��������Ҫɾ���˵�����:");
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
		printf("ͨѶ¼��û������ˡ�\n");
	}
	else
	{
		printf("ɾ���ɹ�!\n");
	}
}
void Search_Contact(Contact* con)
{
	assert(con);
	if (con->size == 0)
	{
		printf("����ͨѶ¼Ϊ��\n");
		return;
	}
	printf("��������Ҫ�����˵�����:");
	char tem[20];
	scanf("%s", tem);
	int flag = 0;
	for (int i = 0; i < con->size; i++)
	{
		if (!strcmp(con->data[i].name, tem))
		{
			flag = 1;
			printf("����\t�Ա�\t����\tסַ\t�绰\n");
			printf("%s\t%s\t%d\t%s\t%s\n", con->data[i].name, con->data[i].sex, con->data[i].age, con->data[i].address, con->data[i].tel);
			break;
		}
	}
	if (!flag)
	{
		printf("����ͨѶ¼��û�������\n");
	}
}
void Modify_Contact(Contact* con)
{
	assert(con);
	if (con->size == 0)
	{
		printf("����ͨѶ¼Ϊ�ա�\n");
		return;
	}
	printf("��������Ҫ�޸��˵�����:");
	char tem[20];
	scanf("%s", tem);
	int flag = 0;
	for (int i = 0; i < con->size; i++)
	{
		if (!strcmp(con->data[i].name, tem))
		{
			flag = 1;
			printf("��������Ҫ�޸���ϵ�˵�����:");
			scanf("%s", con->data[i].name);
			printf("��������Ҫ�޸���ϵ�˵�����:");
			scanf("%d", &(con->data[i].age));
			printf("��������Ҫ�޸���ϵ�˵��Ա�:");
			scanf("%s", con->data[i].sex);
			printf("��������Ҫ�޸���ϵ�˵ĵ�ַ:");
			scanf("%s", con->data[i].address);
			printf("��������Ҫ�޸���ϵ�˵ĵ绰����:");
			scanf("%s", con->data[i].tel);
			break;
		}
	}
	if (!flag)
	{
		printf("����ͨѶ¼��û�������\n");
	}

}
void Sort_Contact(Contact* con)
{

}





