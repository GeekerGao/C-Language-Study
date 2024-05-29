#include <stdio.h>

int main()
{
	int times;
	times = 10;
	
	while(times){  //只要条件为真，就一直执行，if,只执行一次
					//避免死循环，到一定程度能满足退出条件。除c51单片机代码
		puts("我爱你");
		//times = times - 1;
		times--;
	}
	
	
	return 0;
}