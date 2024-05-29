#include <stdio.h>

//数据和值
int test(int x)//形式参数，需要包含变量类型，变量名（） 生命周期：栈空间，
				//被调用的时候才为形式参数申请内存，调用结束，内存有被系统释放
				//局部变量的有效作用空间（作用域）要记得
{
	int y;
	printf("test的x内存地址是%p,数值是%d\n",&x,x);
	return y; 
}
//变量四要素： 名 类型 值 地址
int main()
{
	int x;
	int y;

	
	
	puts("请输入一个数：");
	scanf("%d",&x);
	printf("main的x内存地址是%p,数值是%d\n",&x,x);
	y = test(x);//实际参数
	//printf("x=%d，y=%d\n",x,y);
	return 0;
}