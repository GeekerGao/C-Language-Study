#include <stdio.h>
#include <string.h>

struct XuanMin
{
	char name[32];
	int tickets;
};

int main()
{
	struct XuanMin xm[3];
	struct XuanMin max;
	struct XuanMin *p = xm;
	
	int feiPiao = 0;
	int i;
	int len;
	int j;
	int mark = 0;
	
	int total = 5;
	char tmpName[32];
	
	//初始化选民信息
	len = sizeof(xm)/sizeof(xm[0]);
	for(i = 0; i<len; i++){
		p->tickets = 0;
		printf("请输入第%d个选民的名字：\n",i+1);
		scanf("%s",p->name);
		p++;
	}
	p = xm;
	//唱票环节
	for(i=0;i<5;i++){
		
		mark = 0;
		printf("请输入你投给谁：\n");
		memset(tmpName,'\0',sizeof(tmpName)); //每次清空一下
		scanf("%s",tmpName);//输入选中的选民名字，像拆开一个选票，看到名字一样
		p = xm;
		for(j = 0;j<len; j++){ //拿到名字，对应候选人票数加1
			if(strcmp(tmpName, p->name) == 0){
				p->tickets++;
				mark  = 1;	
			}
			p++;
		}
		if(mark == 0){
			printf("没有此候选人，放弃\n");
			feiPiao++;
		}
		
	}
	p = xm;
	//公布结果
	for(i=0;i<len;i++){
		printf("名字：%s,票数：%d\n",p->name,p->tickets);
		p++;
	}
	max = xm[0];
	p = xm;
	for(i=1;i<len;i++){
		if(max.tickets < p->tickets){
			max = xm[i];
		}
		p++;
	}
	printf("%s以%d票当选！！废票是%d\n",max.name,max.tickets,feiPiao);
}