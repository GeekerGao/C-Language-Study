#include <stdio.h>

int main()
{
	int zheKou;
	int luCheng;
	puts("������·��");
	scanf("%d",&luCheng);
	
	switch(luCheng/250){
		case 0:
			zheKou = 0;
			break;
		case 1:
			zheKou = 2;
			break;
		case 2: 
		case 3:
			zheKou = 5;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			zheKou = 8;
			break;
		case 8:
			zheKou = 10;
			break;
		case 9:
		case 10:
		case 11:
			zheKou = 12;
			break;
		default:
			zheKou = 15;
			break;
	}
	printf("�ۿ��ǣ�%.2f\n",(float)zheKou/100);
	return 0;
}