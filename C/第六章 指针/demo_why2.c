#include <stdio.h>

int main()
{
	int a = 10;
	printf("address of a is 0x%p\n",&a);
	volatile unsigned int *p = (volatile unsigned int *)0x000000000061FE33;
	
	printf("p = 0x%p\n",p);
	return 0;
}