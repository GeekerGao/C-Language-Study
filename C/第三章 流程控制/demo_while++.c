#include <stdio.h>

int main()
{
	int times = 0;
	
	//0 1 2 3 4 5 6 7 8 9 
	while(times < 10){  //只要条件为真，就一直执行，if,只执行一次
					//避免死循环，到一定程度能满足退出条件。除c51单片机代码
		puts("我爱你");
		printf("times = %d\n",times);
		times++;
	
	}
	
	
	return 0;
}