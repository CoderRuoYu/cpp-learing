#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h> 
#define NAME_MAX 20
#define SEX_MAX 4
#define ADDRESS_MAX 20
#define TEL_MAX 20

#define DEFAULT_SZ 3
#define INC_SZ 2
typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	char address[ADDRESS_MAX];
	int age;
	char tel[TEL_MAX];
}PeoInfo;
typedef struct Contact
{
	PeoInfo* data;
	int maxsize;
	int size;
}Contact;
void Init_Contact(Contact* con);
void Add_Contact(Contact* con);


