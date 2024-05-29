#include <stdio.h>

struct Test
{
	int idata;
	char cdata;
};

int main()
{
	int a = 10;
	int *p = &a;
	
	char c = 'c';
	char *pc = &c;
	
	struct Test t1 = {10, 'c'}; //1. 类型 2.名 3.值 4.地址
	struct Test *ps = &t1;
	
	printf("t1的idata=%d\n",t1.idata);//变量名访问，用点运算符
	printf("t1的idata=%d\n",ps->idata);//变量名访问，用"->"运算符
	
	ps->cdata = 'R';
	printf("t1的cdata=%c\n",t1.cdata);//变量名访问，用点运算符
	printf("t1的cdata=%c\n",ps->cdata);//变量名访问，用"->"运算符
	return 0;
}