#include <stdio.h>

float getBigDataFromTwo(float x, float y)
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

int main()
{
	float data1;
	float data2;
	float bigOne;
	//输入两个数
	//提示输入
	puts("请输入两个数：");
	//获取输入
	scanf("%f%f",&data1,&data2);
	//函数调用
	bigOne = getBigDataFromTwo(data1, data2);
	//输出结果
	printf("两个数据是%.2f,%.2f，大数是：%.2f\n",data1,data2,bigOne);
	return 0;
}