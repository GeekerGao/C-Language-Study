#include <stdio.h>

void changeData(int data[])//����һ������ͬ���ڴ�ռ䣬����������ʵ�Σ����״���ʲô����ַ��
{
	data[0] = data[0] + 100;
	printf("dataInFunc = %d\n",data[0]);
}

int main()
{
	int data[2] = {10,20};
	changeData(data);
	printf("data = %d\n",data[0]);
}