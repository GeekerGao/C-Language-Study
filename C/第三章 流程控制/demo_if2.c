#include <stdio.h>

int main()
{
	int atHomeYesOrNot;
	puts("你在吗，1在家，0不在家");
	scanf("%d",&atHomeYesOrNot);
	if(atHomeYesOrNot == 1){ //==才是判断，一个等号，编译能过，但是。。，
							//if（）括号的内容终究会被转换成0,1，是1（true）才会执行大括号中的代码语句。
		puts("扑到你");	
		puts("xx");
	}
	
	return 0;
}