#include <stdio.h>

void initArry(int arry[], int len)
{
	int i;
	for(i = 0;i<len; i++){
		printf("请输入第%d个学生的成绩：\n",i+1);
		scanf("%d",&arry[i]);
	}
	puts("done");
}

void printArry(int arry[],int len)
{
	int i;
	printf("总人数%d个\n",len);
	for(i = 0;i<len; i++){
		printf("%d ",arry[i]);
	}
	puts("\n done\n");
}

float getAverage(int arry[], int len)
{
	int i;
	float aver = 0.0;
	int sum = 0;//总分这个变量一定手动初始化为0，默认值可能是一个大数会影响结果

	for(i = 0;i<len; i++){
		sum += arry[i];
	}
	aver = (float)sum/len;
	return aver;
}

int main()
{
	int classOne[5];
	int classTwo[10];
	float averOfClassOne;
	float averOfClassTwo;
	
	int lenOfClassOne = sizeof(classOne)/sizeof(classOne[0]);
	int lenOfClassTwo = sizeof(classTwo)/sizeof(classTwo[0]);
	
	initArry(classOne,lenOfClassOne);
	initArry(classTwo,lenOfClassTwo);//API  application Interface
	
	printArry(classOne,lenOfClassOne);
	printArry(classTwo,lenOfClassTwo);
	
	averOfClassOne = getAverage(classOne,lenOfClassOne);
	averOfClassTwo = getAverage(classTwo,lenOfClassTwo);
	
	printf("一班的平均分：%f\n",averOfClassOne);
	printf("二班的平均分：%f\n",averOfClassTwo);
	return 0;
}