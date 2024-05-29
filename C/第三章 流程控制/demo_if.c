#include <stdio.h>

int main()
{
	int money;
	printf("请问你有多少钱？\n");
	scanf("%d",&money);
	//如果超过100元，富翁
	if(money > 100)
	{
		printf("有钱淫\n");
	}
	puts("谈话结束");
	printf("测试结果：%d\n",money>100);
	
	return 0;
}