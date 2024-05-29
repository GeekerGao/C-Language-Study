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
void revangeArry(int *parr, int size)
{
	int i,j;
	int tmp;
	
	for(i=0;i<size/2;i++){
			j = size-1-i;
			tmp = parr[i];
			parr[i] = parr[j];
			parr[j] = tmp;
	}
	
}

void printArray(int *parr, int size)
{
	int i;
	for(i=0;i<size;i++){
		printf("%d ",*parr++);
	}
	putchar('\n');
}

int main()
{
	int arry[5];
	int size = sizeof(arry)/sizeof(arry[0]);
	
	initArray(arry,size);//实际参数，数组的首地址： 名，首个元素的地址
	printArray(&arry[0],size);
	revangeArry(arry,size);
	printArray(&arry[0],size);
	return 0;
}