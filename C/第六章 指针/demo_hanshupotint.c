#include <stdio.h>

void printWelcome()
{
	puts("������������ӭʹ��\n");
}
int main()
{
	int a = 10;
	int *pa;
	pa = &a;
	printf("%d\n",*pa);
	void (*p)();//����һ������ָ�����
	p = printWelcome;//ָ����
	printWelcome();
	(*p)();//����
	return 0;
}