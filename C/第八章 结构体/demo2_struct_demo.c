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
	
	//��ʼ��ѡ����Ϣ
	len = sizeof(xm)/sizeof(xm[0]);
	for(i = 0; i<len; i++){
		p->tickets = 0;
		printf("�������%d��ѡ������֣�\n",i+1);
		scanf("%s",p->name);
		p++;
	}
	p = xm;
	//��Ʊ����
	for(i=0;i<5;i++){
		
		mark = 0;
		printf("��������Ͷ��˭��\n");
		memset(tmpName,'\0',sizeof(tmpName)); //ÿ�����һ��
		scanf("%s",tmpName);//����ѡ�е�ѡ�����֣����һ��ѡƱ����������һ��
		p = xm;
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
	p = xm;
	//�������
	for(i=0;i<len;i++){
		printf("���֣�%s,Ʊ����%d\n",p->name,p->tickets);
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
	printf("%s��%dƱ��ѡ������Ʊ��%d\n",max.name,max.tickets,feiPiao);
}