#include <stdio.h>

//��Ҫ�أ� ����ֵ�������б�����
int add(int data1, int data2, int data3)//����ԭ��
{
	int ret;
	
	ret = data1 + data2 + data3;
	
	return ret;
}

int main()
{
	int x;
	int y;
	int z;
	int fret;
	//int ret;
	
	puts("������һ������");
	scanf("%d",&x);
	puts("��������һ������");
	scanf("%d",&y);
	puts("��������һ������");
	scanf("%d",&z);
	fret = add(x,y,z)+100;
	printf("%d+%d+%d=%d\n",x,y,z,add(x,y,z));
	printf("FRET=%d\n",fret);
	return 0;
}