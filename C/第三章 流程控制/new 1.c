#include <stdio.h>

int main()
{
	int havaMoneyOrNot;
	int handsomeYesOrNot;
	
	puts("����Ǯ���еĻ���1��û�п�0");
	scanf("%d",&havaMoneyOrNot);
	
	puts("��˧��˧�Ļ���1����˧��0");
	scanf("%d",&handsomeYesOrNot);
	
	if(havaMoneyOrNot == 1 && handsomeYesOrNot == 1){
		printf("��������Ҫ�޸��㣬����\n");
	}else{
		
		printf("��û�л�����\n");
	}
	printf("���׽���\n");
	return 0;
}