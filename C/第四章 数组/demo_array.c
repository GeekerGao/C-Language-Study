#include <stdio.h>

int main()
{
	//int a[10] = {1,2,3,4,5,6,7,8,9,10};//��ߵ�10��ʾ��С
	int a[10] = {1,2,3};//��ߵ�10��ʾ��С
	int data;
	int array[] = {100,444,55,66,77,88,99,9};
	int size;
	
	int b[10] = {0};
		//����������Ĵ�С������������һ��Ԫ�صĴ�С���ͻ���ܸ���
	size = sizeof(array)/sizeof(array[0]);//sizeof�ؼ��֣��ܼ��������ж�Ӧ���ݵ��ڴ�ռ��С��
	printf("array�ĸ����У�%d\n",size);
	for(data = 0; data < size; data++){
		printf("address: %p, data:%d\n",&array[data],array[data]);
	}

	return 0;
}