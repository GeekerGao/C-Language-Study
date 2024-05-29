#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct XuanMin
{
	char name[32];
	int tickets;
};


void initXms(struct XuanMin **p,int *pn)
{
	
	int i;
	if(*p == NULL){
		printf("请输入有几个人参选：\n");
		scanf("%d",pn);
		*p = (struct XuanMin*)malloc(*pn*sizeof(struct XuanMin));
	}
	
	for(i=0;i<*pn;i++){
		(*p)->tickets = 0;
		printf("请输入第%d个选民的名字：\n",i+1);
		scanf("%s",(*p)->name);
		(*p)++;
	}
	(*p) = (*p)-*pn;
//	return p-*pn;
}

void printXms(struct XuanMin *p,int len)
{
	int i;
	for(i=0;i<len;i++){
		printf("名字：%s,票数：%d\n",p->name,p->tickets);
		p++;
	}
}

int doVot(struct XuanMin *p, int len)
{
	int i;
	int j;
	int feiPiao = 0;
	int mark;
	char tmpName[32];
	struct XuanMin *pbak = p;
	
	for(i=0;i<5;i++){
		
		mark = 0;
		printf("请输入你投给谁：\n");
		memset(tmpName,'\0',sizeof(tmpName)); //每次清空一下
		scanf("%s",tmpName);//输入选中的选民名字，像拆开一个选票，看到名字一样
		p = pbak;
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
	
	return feiPiao;
}

struct XuanMin* getMax(struct XuanMin *p, int len)
{
	struct XuanMin* max;
	int i;
	
	max = p;
	
	for(i=0;i<len;i++){
		if(max->tickets < p->tickets){
			max = p;
		}
		p++;
	}
	
	return max;
}

int main()
{
	struct XuanMin *xm = NULL;
	struct XuanMin *final;
	
	int total = 0;
	
	initXms(&xm,&total);
	
	printXms(xm,total);
	
	int feip = doVot(xm,total);
	printf("废票数是：%d\n",feip);
	printXms(xm,total);
	
	final = getMax(xm,total);
	printf("%s以%d票当选！！废票是%d\n",final->name,final->tickets,feip);
	return 0;
}