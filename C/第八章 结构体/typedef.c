#include <stdio.h>



typedef unsigned int u8;
typedef int u16 ;
typedef int arr[10];

struct Test
{
	int data;
	int data2;
};

typedef struct Test T;

typedef struct
{
	int data1;
	int data;
	
}Demo;

void printInfo(T t)
{
	printf("%d ",t.data);
}
int main()
{
	arr a;
	a[0] = 10;
	printf("%d\n",a[0]);
	
	struct Test t1;
	t1.data = 100;
	printf("%d ",t1.data);
	
	T t2;
	t2.data = 1000;
	printInfo(t2);
	
	Demo d;
	d.data1 = 999;
	printf("%d ",d.data1);
	return 0;
}