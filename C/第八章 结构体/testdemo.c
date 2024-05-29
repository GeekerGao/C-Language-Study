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
		printf("�������м����˲�ѡ��\n");
		scanf("%d",pn);
		*p = (struct XuanMin*)malloc(*pn*sizeof(struct XuanMin));
	}
	
	for(i=0;i<*pn;i++){
		(*p)->tickets = 0;
		printf("�������%d��ѡ������֣�\n",i+1);
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
		printf("���֣�%s,Ʊ����%d\n",p->name,p->tickets);
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
		printf("��������Ͷ��˭��\n");
		memset(tmpName,'\0',sizeof(tmpName)); //ÿ�����һ��
		scanf("%s",tmpName);//����ѡ�е�ѡ�����֣����һ��ѡƱ����������һ��
		p = pbak;
		for(j = 0;j<len; j++){ //�õ����֣���Ӧ��ѡ��Ʊ����1
			if(strcmp(tmpName, p->name) == 0){
				p->tickets++;
				mark  = 1;	
			}
			p++;
		}
		if(mark == 0){
			printf("û�д˺�ѡ�ˣ�����\n");
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
	printf("��Ʊ���ǣ�%d\n",feip);
	printXms(xm,total);
	
	final = getMax(xm,total);
	printf("%s��%dƱ��ѡ������Ʊ��%d\n",final->name,final->tickets,feip);
	return 0;
}