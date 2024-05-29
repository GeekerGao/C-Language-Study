#include <stdio.h>

int main()
{
	int score;
	
	puts("请输入分数：");
	scanf("%d",&score);		//56 34 10 9 6 
	switch(score/10){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("等级为D,不及格，学渣，垃圾\n");
			break;
		case 6:
		case 7:
			printf("等级为C,一般般，混日子吧\n");
			break;
		case 8:
		case 9:
			printf("等级为B,优秀，很棒\n");
			break;
		case 10:
			printf("等级为A,你不是正常人\n");
			break;
		default:
			printf("成绩非法，请重新输入\n");
	}
	puts("done!");
	return 0;
}