#include <stdio.h>

int main()
{
	int score;
	
	puts("�����������");
	scanf("%d",&score);		//56 34 10 9 6 
	switch(score/10){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("�ȼ�ΪD,������ѧ��������\n");
			break;
		case 6:
		case 7:
			printf("�ȼ�ΪC,һ��㣬�����Ӱ�\n");
			break;
		case 8:
		case 9:
			printf("�ȼ�ΪB,���㣬�ܰ�\n");
			break;
		case 10:
			printf("�ȼ�ΪA,�㲻��������\n");
			break;
		default:
			printf("�ɼ��Ƿ�������������\n");
	}
	puts("done!");
	return 0;
}