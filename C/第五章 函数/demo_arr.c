#include <stdio.h>

void printData(int data)
{
	printf("%d\n",data);
}

void printArr(int arry[], int len)//形参中不存在数组的概念，即便中括号约定了数组的大小，也无效.
							//传递是一个地址，是数组的首地址
{
	int i;
	//printf("printArr: arry的大小是：%d\n",sizeof(arry));//在os用8个字节来表示一个地址
	for(i=0;i<len;i++){
		printf("%d ",arry[i]);
	}
	putchar('\n');
}
int main()
{
	int len;
	int arry[5] = {3,4,5,6,7};
	len = sizeof(arry)/sizeof(arry[0]);
	printf("main: arry的大小是：%d\n",sizeof(arry));
	printArr(&arry[0],len);//第一个元素的地址也是数组的首地址
	printArr(arry,len);//数组名代表整个数组的首地址
	return 0;
}