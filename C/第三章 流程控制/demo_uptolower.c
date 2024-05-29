#include <stdio.h>

int main()
{
	char cdata;
	
	//1. 输入一个字符
		//提示输入
	printf("请输入一个字符\n");
		//获取输入
	scanf("%c",&cdata);
	//2. 判断这个字符是不是小写字母
		//2.1 如果是小写字母
	if( cdata >= 97 && cdata <= 122 ){
		//直接输出
		printf("%c",cdata);
	}else if( cdata >= 65 && cdata <=90){//否则  流程图 方图
				
		//转换成小写字母再输出
		printf("%c",cdata+32);
	}else{
		printf("请输入正确的字符\n");
	}
	//3. 程序结束
	printf("\ndone!\n");
	return 0;
}