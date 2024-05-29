#include <stdio.h>


int main()
{
	int scores[3][4]={
		{55,66,77,88},
		{66,55,99,100},
		{11,22,33,59},
	};//int (*p)[4];
	int (*p2)[4] = scores;
	
	int **p; 
	p = scores;  //会出问题！
	printf("scores:%p\n",scores);
	printf("p=%p\n",p);
	printf("*p=%p\n",*p);//*p是一个野指针，不是我们认为的会编程列地址
	printf("*score=%p\n",*scores);//*p是一个野指针，不是我们认为的会编程列地址
	
	**p = 100;
	printf("done\n");
	
	int **p3 = &p2;//能用
	**p3 = 100;//能改的动，但是一般不这么进行
	printf("%d\n",scores[0][0]);
	return 0;
}