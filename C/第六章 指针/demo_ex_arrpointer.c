#include <stdio.h>
//name , params, returnValue
void initArray(int *parr, int size)
{
	int i;
	for(i=0;i<size;i++){
		printf("�������%i��Ԫ�ص����ݣ�\n",i+1);
		scanf("%d",parr++);
	}
}
void printArray(int *parr, int size)
{
	int i;
	for(i=0;i<size;i++){
		printf("%d ",*parr++);
	}
}

int main()
{
	int arry[5];
	int size = sizeof(arry)/sizeof(arry[0]);
	
	initArray(arry,size);//ʵ�ʲ�����������׵�ַ�� �����׸�Ԫ�صĵ�ַ
	printArray(&arry[0],size);
	return 0;
}