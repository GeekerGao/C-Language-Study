#include <stdio.h>

int main()
{
	int a;
	int b;
	
	printf("请输入a,b两个数：\n");
	scanf("%d%d",&a,&b);
	
	if( a==1 && b==0){
		printf("逻辑与成功\n");
	}
	
	if( a==1 || b==0){
		printf("逻辑或成功\n");
	}
	
	if( !a ){
		printf("逻辑非\n");
	}
	
	return 0;
}