#include <stdio.h>

/* 
	author: chenlichen
	date: 2021.7.21
	funDescription:
	printfDemo
*/

int main()
{
	int a_data = 3; //c c++ java 一个分号代表一个语句结束
	float f_data = 2.3;
	char c_data = '#';
	
	int data = 10;
	int chushu = 3;
	float result;
	
	result = (float)data/chushu; //强制转换，把整数给小数
	
	printf("随便你输出什么东西，在cmd终端可以看到\n");
	printf("听课的都是棒棒的\n");
	
	printf("a=%d\n",a_data);   //占位符,是以%开头，注释是程序员看到，编译预处理的时候，会被清除
						//sdfsdfsdf
	a_data = 100;  //0000 0000 0000 0000 0000 0000   0110 0100
	printf("修改后:a=%d\n",a_data);
	printf("16进制输出a=0x%x\n",a_data);
	printf("有一个小数f=%f\n",f_data);
	printf("有一个字符c = %c\n",c_data);
	printf("a_data的地址是%p\n",&a_data);
	
	printf("result = %f\n",result);
	printf("result2 = %f\n",(float)data/chushu);
	
	return 0;
}