#include <stdio.h>

void printWelcome()
{
	printf("========================\n");
	printf("��ӭ�����ҵĳ���baby\n");
	printf("========================\n");
}
//���ݺ�ֵ
int getDataFromX(int x)//��ʽ��������Ҫ�����������ͣ�����������
{
	int y;
	y = x-1;
	
	return y; 
}

int main()
{
	int x;
	int y;
	
	printWelcome();
	puts("������һ������");
	scanf("%d",&x);
	y = getDataFromX(x);
	y = getDataFromX(x+1);
	y = getDataFromX(100);
	printf("x=%d��y=%d\n",x,y);
	return 0;
}