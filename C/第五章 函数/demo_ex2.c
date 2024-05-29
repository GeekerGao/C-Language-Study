#include <stdio.h>

int getBigDataFromTwo(int x, int y);

int main()
{
	int data1;
	int data2;
	int bigOne;
	//输入两个数
	//提示输入
	puts("请输入两个数：");
	//获取输入
	scanf("%d%d",&data1,&data2);
	//函数调用
	bigOne = getBigDataFromTwo(data1, data2);
	//输出结果
	printf("两个数据是%d,%d，大数是：%d\n",data1,data2,bigOne);
	return 0;
}

int getBigDataFromTwo(int x, int y)
{
	//int z;
	/*
	if(x > y){
		z = x;
	}else{
		z = y;
	}
	*/
	//z = x>y?x:y;
	return x>y?x:y;
	//return z;
}
