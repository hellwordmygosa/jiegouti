#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
//struct S
//{
//	int a;
//	char b[20];
//	double c;
//};
//typedef struct std
//{
//	char name[20];
//	short age;
//	struct S s;
//	char tele[15];
//	char sex[5];
//}stt;
//
//
//int main()
//{
//	struct std s1 = { "张三", 18, {1999,"helloword",3.14},"18888","男"};
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.s.b);
//	printf("%s\n", s1.sex);
//	printf("%2f\n", s1.s.c);
//
//
//	system("pause");
//	return 0;
//}
typedef struct std
{
	char name[20];
	int age;
	char tele[15];
	char sex[8];

}std;

void print1(std tmp)
{
	printf("name=%s\n", tmp.name);
	printf("age=%d\n", tmp.age);
	printf("tele=%s\n", tmp.tele);
	printf("sex=%s\n", tmp.sex);
}
void print2(std* ps)
{
	printf("name--: %s\n", ps->name);
	printf("age---: %d\n", ps->age);
	printf("tele---: %s\n", ps->tele);
	printf("sex----: %s\n", ps->sex);

}
int main()
{
	std s = {"张三",20,"18818886888","男性"};
	print1(s);
	print2(&s);

	system("pause");
	return 0;
}