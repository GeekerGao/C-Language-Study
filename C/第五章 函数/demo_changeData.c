#include <stdio.h>

void changeData(int data)//��ֵ���ݣ��������ǲ�ͬ���ڴ�ռ�
{
	data = data + 100;
	printf("address: %p,dataInfunc = %d\n",&data,data);
}

int main()
{
	int data = 10;
	changeData(data);
	printf("address: %p,data = %d\n",&data,data);
}