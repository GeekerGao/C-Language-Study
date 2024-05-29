#include <stdio.h>

int main()
{
	int zheKou;
	int luCheng;
	int danJia;
	int zhongLiang;
	
	puts("请输入路程");
	scanf("%d",&luCheng);
	
	if(luCheng < 250){
		zheKou = 0;
	}else if(luCheng >= 250 && luCheng < 500){
		zheKou = 2;
	}else if(luCheng >= 500 && luCheng < 1000){
		zheKou = 5;
	}else if(luCheng >= 1000 && luCheng < 2000){
		zheKou = 8;
	}else if(luCheng >= 2000 && luCheng < 3000){
		zheKou = 10;
	}else{
		zheKou = 15;
	}
	
	printf("折扣是：%.2f\n",(float)zheKou/100);
	return 0;
}