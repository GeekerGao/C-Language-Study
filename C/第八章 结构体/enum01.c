#include <stdio.h>


enum {sun,mon,tus,wed,thi,fri,sat}w1,w2;
int main()
{
	
	w1 = mon;
	w2 = tus;

	printf("w1= %d\n",w1);
	printf("w2= %d\n",w2);
	return 0;
}