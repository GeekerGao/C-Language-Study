#include <stdio.h>

int main()
{
	int numOfPerson;
	int totalMoney = 0;
	int money;
	
	numOfPerson=1;
	while(numOfPerson<=1000){
	//for(numOfPerson=1;numOfPerson<=1000;numOfPerson++){
		printf("请输入捐款的数目：\n");
		scanf("%d",&money);
		totalMoney = totalMoney+money;
		if(totalMoney >= 100000){
			puts("很棒，已经到达10万元");
			break;
		}
		numOfPerson++;
	}
	
	printf("总捐款人数是%d\n",numOfPerson);
	printf("每个人的平均捐款数据：%f\n",(float)totalMoney/numOfPerson);
	return 0;
}