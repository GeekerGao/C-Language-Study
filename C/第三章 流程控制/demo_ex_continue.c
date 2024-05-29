#include <stdio.h>

int main()
{
	int data;
	data = 10;
	/*
	printf("ret = %d\n",10%3);
	printf("ret = %d\n",11%3);
	printf("ret = %d\n",12%3);
	*/
	for(data = 100; data <= 200; data++){
		if(data %3 == 0){
			continue;
		}
		printf("%d  ",data);
	}
	
	return 0;
}