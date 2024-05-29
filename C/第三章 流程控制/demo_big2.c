#include <stdio.h>

int main()
{
	int data1;
	int data2;
	int datatmp;//不管怎么输入数据，data1当中存放的就是小数
	
	printf("请输入两个数：\n");
	scanf("%d%d",&data1,&data2);
	
	if(data1 > data2){
		//交换
		printf("=====交换\n");
		datatmp = data1;
		data1 = data2;
		data2 = datatmp;
	}
	
	printf("%d，%d\n",data1,data2);
	
}