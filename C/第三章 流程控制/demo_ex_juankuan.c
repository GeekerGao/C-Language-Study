#include <stdio.h>

int main()
{
	int numOfPerson;
	int totalMoney = 0;
	int money;
	
	numOfPerson=1;
	while(numOfPerson<=1000){
	//for(numOfPerson=1;numOfPerson<=1000;numOfPerson++){
		printf("�����������Ŀ��\n");
		scanf("%d",&money);
		totalMoney = totalMoney+money;
		if(totalMoney >= 100000){
			puts("�ܰ����Ѿ�����10��Ԫ");
			break;
		}
		numOfPerson++;
	}
	
	printf("�ܾ��������%d\n",numOfPerson);
	printf("ÿ���˵�ƽ��������ݣ�%f\n",(float)totalMoney/numOfPerson);
	return 0;
}