#include <stdio.h>

int main()
{
	int data1 = 10; 
	int data2 = 6;
	float data4;
	
	int data3;
	
	printf("�㿴�����������ĵ�һ��������С��C����������\n");
	printf("������ԭʼ����%d,%d\n",data1, data2);
	data3 = data1 + data2;
	
	printf("��ô�������ĺ���%d\n",data3);
	data3 = data1 - data2;
	
	printf("��ô�������Ĳ���%d\n",data3);
	
	data3 = data1 * data2;
	
	printf("��ô�������Ļ���%d\n",data3);
	
	data4 = (float)data1 / data2;
	
	printf("��ô�������������%f\n",data4);
	
}