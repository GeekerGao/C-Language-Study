#include <stdio.h>

int getBigDataFromTwo(int x, int y);

int main()
{
	int data1;
	int data2;
	int bigOne;
	//����������
	//��ʾ����
	puts("��������������");
	//��ȡ����
	scanf("%d%d",&data1,&data2);
	//��������
	bigOne = getBigDataFromTwo(data1, data2);
	//������
	printf("����������%d,%d�������ǣ�%d\n",data1,data2,bigOne);
	return 0;
}

int getBigDataFromTwo(int x, int y)
{
	//int z;
	/*
	if(x > y){
		z = x;
	}else{
		z = y;
	}
	*/
	//z = x>y?x:y;
	return x>y?x:y;
	//return z;
}
