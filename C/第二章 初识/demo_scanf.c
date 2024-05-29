#include <stdio.h>

int main()
{
	int data;
	int data2;
	int data3;
	
	/*printf("请输入一个整数：\n");
	scanf("%d",&data);           //指针部分内容
	printf("输入完毕\n");
	printf("你输入的数据是：%d\n",data);
	

	printf("请输入3个数\n");
	scanf("%d%d%d",&data,&data2,&data3);
	printf("你输入的数据是：data=%d,data2=%d,data3=%d\n",data,data2,data3);
	*/
	printf("请输入3个数\n");
	scanf("data=%d,data2=%d,data3=%d",&data,&data2,&data3);
	printf("你输入的数据是：data=%d,data2=%d,data3=%d\n",data,data2,data3);
	return 0;
}