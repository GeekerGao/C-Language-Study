#include <stdio.h>
#include <string.h>

struct Student
{
    int num;
    char name[32];
    char sex;
    int age;
    double score;
    char addr[32];
};


int main()
{
	int i;
	int len;
	struct Student arr2[3] = {
		
		{2,"����",'g',17,99.5,"����"},
		{3,"����",'M',18,89.2,"�Ϻ�"},
		{4,"����",'f',19,100,"����"}
	};
	struct Student *p;
	p = arr2;
	
	len = sizeof(arr2)/sizeof(arr2[0]);
	
	for(i = 0;i< len;i++){
		printf("ѧ�ţ�%d,���䣺%d, ������%lf, ���֣�%s, ��ַ��%s\n",
			p->num,p->age,p->score,p->name,p->addr);
		
		p++;
	}
	p = arr2;
	for(i = 0;i< len;i++){
		printf("ѧ�ţ�%d,���䣺%d, ������%lf, ���֣�%s, ��ַ��%s\n",
			p->num,p->age,p->score,p->name,p->addr);
		
		p++;
	}
	
	return 0;
}