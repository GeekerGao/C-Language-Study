#include <stdio.h>

int inCData(int data)
{
	return ++data;
}
void printWelcome()
{
	puts("������������ӭʹ��\n");
}
int main()
{
	void (*p)();//����һ������ָ�����
	int (*p2)(int data);
	
	p = printWelcome;//ָ����
	p2 = inCData;

	(*p)();//����
	printf("p2���ԣ�%d\n",(*p2)(10));
	return 0;
}