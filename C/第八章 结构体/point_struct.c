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
	
	struct Test t1 = {10, 'c'}; //1. ���� 2.�� 3.ֵ 4.��ַ
	struct Test *ps = &t1;
	
	printf("t1��idata=%d\n",t1.idata);//���������ʣ��õ������
	printf("t1��idata=%d\n",ps->idata);//���������ʣ���"->"�����
	
	ps->cdata = 'R';
	printf("t1��cdata=%c\n",t1.cdata);//���������ʣ��õ������
	printf("t1��cdata=%c\n",ps->cdata);//���������ʣ���"->"�����
	return 0;
}