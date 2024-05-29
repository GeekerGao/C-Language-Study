#include <stdio.h>

struct TestT
{
	int idata;
	char cdata;
	int ddata;
};


union TestU
{
	int idata;
	char cdata;
	int ddata;
};

int main()
{
	struct TestT t1;
	union  TestU u1;
	
	printf("�ṹ��t1�Ĵ�С�ǣ�%d\n",sizeof(t1));
	printf("������u1�Ĵ�С�ǣ�%d\n",sizeof(u1));
	
	t1.idata = 10;
	t1.cdata = 'a';
	t1.ddata = 20;
	
	printf("idata:%p,%d\n",&t1.idata,t1.idata);
	printf("cdata:%p,%d\n",&t1.cdata,t1.cdata);
	printf("ddata:%p,%d\n",&t1.ddata,t1.ddata);
	
	u1.idata = 10;
	u1.ddata = 20;
	u1.cdata = 'a';
	printf("idata = %d\n",u1.idata);
	printf("idata:%p\n",&u1.idata);
	printf("cdata:%p\n",&u1.cdata);
	printf("ddata:%p\n",&u1.ddata);
	
	return 0;
}