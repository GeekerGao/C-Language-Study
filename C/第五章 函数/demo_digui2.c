#include <stdio.h>
#include <stdlib.h>
 
 
unsigned long int getJieCheng(int num)
{
	long int result;
	if(num >= 17){
		printf("越界\n");
		exit(-1);
	}
	if(num == 1){
		result = 1;
	}else{
		result = getJieCheng(num-1) * num;
	}
	return result;
} 
int main()
{
	int num;
	unsigned long int ret;
	
	puts("请输入要求的阶乘数：");
	scanf("%d",&num);
	ret = getJieCheng(num);
	printf("%d阶乘是：%ld\n",num,ret);
	printf("%d\n",sizeof(long int));
	return 0;
}