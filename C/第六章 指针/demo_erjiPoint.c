#include <stdio.h>

int main()
{
	int data = 100;
	int *p = &data;
	printf("data�ĵ�ַ�ǣ�%p\n",&data);
	printf("p����data�ĵ�ַ��%p,������%d\n",p,*p);
	/*������һ��ָ��������ָ������ĵ�ַ������ʹ����ȱ�ݣ��޷�������յ�ַ����
	printf("p�ĵ�ַ�ǣ�%p\n",&p);
	int *pp = &p;
	printf("pp����p�ĵ�ַ��%p\n",pp);
	printf("*pp��%p\n",*pp);*/
	
	int **p2;
	p2 = &p;
	printf("p2����p�ĵ�ַ��%p\n",p2);
	printf("*p2��%p\n",*p2);
	printf("**p2������data:%d\n",**p2);
	
	int ***p3;
	p3 = &p2;
	printf("p3����p2�ĵ�ַ��%p\n",p3);
	printf("*p3��%p2\n",*p3);
	printf("***p3������data:%d\n",***p3);
	return 0;
}