#include <stdio.h>

int main()
{
	char a = 'a';
	char b = 'b';
	
	char A = 'A';
	char B = 'B';
	
	printf("%c,%c,%c,%c\n",a,b,A,B);
	printf("a=%d,b=%d,A=%d,B=%d\n",a,b,A,B);
	
	puts("请输入一个大写字母\n");
	scanf("%c",&a);
	b = a+32;
	printf("你输入的字母对应的小写字母是 %c\n",a+32);
	printf("你输入的字母对应的小写字母是 %c\n",b);
	printf("测试");
	getchar();//吸收回车符，来源于15行。当你分多次连续scanf获得字符的时候，要注意回车符
	putchar(getchar()+32);
	return 0;
}