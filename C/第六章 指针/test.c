#include <stdio.h>

int* getArr()
{
	int a = 10;
	
	
	return &a;
}
int main()
{
	int *arr;
	arr = getArr();
	printf("pos1\n");
	printf("arr=%d\n",*arr);
	printf("pos2\n");
	return 0;
}