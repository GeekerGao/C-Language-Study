#include <stdio.h>

int main()
{
	int havaMoneyOrNot;
	int handsomeYesOrNot;
	int puTianPYesOrNot;
	
	puts("����������𣿲��ǵĻ���1���ǿ�0");
	scanf("%d",&puTianPYesOrNot);
	if( !puTianPYesOrNot){
		printf("��Ů����������\n");
		return -1;
	}
	
	puts("����Ǯ���еĻ���1��û�п�0");
	scanf("%d",&havaMoneyOrNot);
	
	puts("��˧��˧�Ļ���1����˧��0");
	scanf("%d",&handsomeYesOrNot);
	
	if(havaMoneyOrNot == 1 && handsomeYesOrNot == 1){
		printf("��������Ҫ�޸��㣬����\n");
	}
	
	printf("���׽���\n");
	
	
	return 0;
}