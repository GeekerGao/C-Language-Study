#include <stdio.h>

int main()
{
	int data;
	char cdata;
	printf("请输入一个数：\n");

	scanf("%d",&data);
	
	switch(data){
		case 1:
		case 2:
		case 4:
		case 5:
		case 3:
			puts("满足了条件1,2,3,4,5的情况");
			break;
	
		case 8:
			puts("满足了条件5的情况");
			break;
		default:
			puts("其他非列表中的情况");	
	}
	
		
	printf("请输入一个字符：\n");

	getchar();
	scanf("%c",&cdata);
	
	switch(cdata){
		case 'a':
			puts("满足了条件a的情况");
			break;
		case 'b':
			puts("满足了条件b的情况");
			break;
		default:
			puts("其他非列表中的情况");	
	}
	
	return 0;
}