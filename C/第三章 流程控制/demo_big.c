#include <stdio.h>

int main()
{
	int data1;
	int data2;
	
	printf("请输入两个数：\n");
	scanf("%d%d",&data1,&data2);
	
	if(data1>data2){
		printf("data大数是%d\n",data1);
		printf("data小数是%d\n",data2);
	}
	if(data1<data2){
		printf("data大数是%d\n",data2);
		printf("data小数是%d\n",data1);
	}
	
}