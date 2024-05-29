#include <stdio.h>

int main()
{
	int data = 100;
	int *p = &data;
	printf("data的地址是：%p\n",&data);
	printf("p保存data的地址：%p,内容是%d\n",p,*p);
	/*可以用一级指针变量存放指针变量的地址，但是使用有缺陷，无法获得最终地址内容
	printf("p的地址是：%p\n",&p);
	int *pp = &p;
	printf("pp保存p的地址：%p\n",pp);
	printf("*pp是%p\n",*pp);*/
	
	int **p2;
	p2 = &p;
	printf("p2保存p的地址：%p\n",p2);
	printf("*p2是%p\n",*p2);
	printf("**p2来访问data:%d\n",**p2);
	
	int ***p3;
	p3 = &p2;
	printf("p3保存p2的地址：%p\n",p3);
	printf("*p3是%p2\n",*p3);
	printf("***p3来访问data:%d\n",***p3);
	return 0;
}