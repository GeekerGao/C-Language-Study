#include <stdio.h>
//name , params, returnValue
void initArray(int *parr, int size)
{
	int i;
	for(i=0;i<size;i++){
		printf("请输入第%i个元素的数据：\n",i+1);
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
	
	initArray(arry,size);//实际参数，数组的首地址： 名，首个元素的地址
	printArray(&arry[0],size);
	return 0;
}