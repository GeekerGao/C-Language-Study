#include <stdio.h>
#include <stdlib.h>

int getMax(int data1, int data2)
{
	return data1>data2 ? data1:data2;
}

int getMin(int data1, int data2)
{
	return data1<data2 ? data1:data2;
}

int getSum(int data1, int data2)
{
	return data1+data2;
}

int dataHandler(int data1, int data2, int (*pfunc)(int, int ))
{
	int ret;
	ret = (*pfunc)(data1,data2);
	return ret;
}
int main()
{	
	int a = 10;
	int b = 20;
	int cmd;
	int ret;
	
	int (*pfunc)(int , int );
	
	printf("请输入1(取大值),2(取小值),或者3(求和)\n");
	scanf("%d",&cmd);
	switch(cmd){
		case 1:
			pfunc = getMax;
		break;
		case 2:
			pfunc = getMin;
		break;
		case 3:
			pfunc = getSum;
		break;
		default:
			printf("输入错误！@输入1(取大值),2(取小值),或者3(求和)\n");
		//	exit(-1);
		break;
	}
	ret = dataHandler(a,b,pfunc);
	printf("ret = %d\n",ret);
	return 0;
}