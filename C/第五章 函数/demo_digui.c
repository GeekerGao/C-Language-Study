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
	printf("��Ҫ֪���ڼ���ѧ�������䣺\n");
	scanf("%d",&num);
	
	age = getAge(num);
	
	printf("��%d��ѧ����������%d\n",num,age);
	return 0;
}