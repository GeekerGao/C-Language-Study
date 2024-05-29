#include <stdio.h>

int getAge(int currPersonNum)
{
	int age;
	if(currPersonNum == 1){
		age = 10;
	}else{
		age = getAge(currPersonNum - 1) + 2;
	}
	
	return age;
}

int main()
{
	int age;
	int num;
	printf("你要知道第几个学生的年龄：\n");
	scanf("%d",&num);
	
	age = getAge(num);
	
	printf("第%d个学生的年龄是%d\n",num,age);
	return 0;
}