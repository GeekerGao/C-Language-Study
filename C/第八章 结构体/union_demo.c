#include <stdio.h>

struct Person
{
	char name[32];
	int age;
	char zhiYe;
	char addr[32];
	union {
		int class;
		char keMu[12];
	}mes;
};

int main()
{
	struct Person p[2];
	int i;
	for(i=0;i<2;i++){
		printf("������ְҵ��t������ʦ��s����ѧ��\n");
		scanf("%c",&(p[i].zhiYe));
		if(p[i].zhiYe == 's'){
			printf("������ѧ���༶��\n");
			scanf("%d",&(p[i].mes.class));
			printf("������ѧ�����֣�\n");
			scanf("%s",p[i].name);
		}
		else{
			printf("��������ʦ�Ŀ�Ŀ��\n");
			scanf("%s",p[i].mes.keMu);
			printf("��������ʦ���֣�\n");
			scanf("%s",p[i].name);
		}
		getchar();
	}
	for(i=0;i<2;i++){
	
		if(p[i].zhiYe == 's'){
			printf("ѧ���������ǣ�%s���༶��%d\n",p[i].name,p[i].mes.class);	
		}
		else{
			printf("��ʦ�������ǣ�%s��ְҵ��%s\n",p[i].name,p[i].mes.keMu);
		}
	}
	return 0;
}