#include <stdio.h>

int main()
{
	char data;
	char data2;
	char data3;
	int dataInt;
	float dataFloat;
	
	/*
	printf("请输入3个字符\n");
	scanf("%c%c%c",&data,&data2,&data3);
	printf("你输入的数据是：data=%c,data2=%c,data3=%c\n",data,data2,data3);
	*/
	printf("请以此输入整数，字符和小数\n");
	scanf("%d%c%f",&dataInt,&data,&dataFloat);
	printf("你输入的数据是 dataInt=%d,data=%c,dataFloat=%f\n",dataInt,data,dataFloat);
			
	return 0;
}