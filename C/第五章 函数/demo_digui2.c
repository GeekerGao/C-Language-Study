#include <stdio.h>
#include <stdlib.h>
 
 
unsigned long int getJieCheng(int num)
{
	long int result;
	if(num >= 17){
		printf("Խ��\n");
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
	
	puts("������Ҫ��Ľ׳�����");
	scanf("%d",&num);
	ret = getJieCheng(num);
	printf("%d�׳��ǣ�%ld\n",num,ret);
	printf("%d\n",sizeof(long int));
	return 0;
}