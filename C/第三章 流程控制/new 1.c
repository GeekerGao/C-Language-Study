#include <stdio.h>

int main()
{
	int havaMoneyOrNot;
	int handsomeYesOrNot;
	
	puts("你有钱吗？有的话扣1，没有扣0");
	scanf("%d",&havaMoneyOrNot);
	
	puts("你帅吗？帅的话扣1，不帅扣0");
	scanf("%d",&handsomeYesOrNot);
	
	if(havaMoneyOrNot == 1 && handsomeYesOrNot == 1){
		printf("哇塞，我要嫁给你，大叔\n");
	}else{
		
		printf("你没有机会了\n");
	}
	printf("相亲结束\n");
	return 0;
}