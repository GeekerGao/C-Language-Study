#include <stdio.h>

typedef struct
{
	int num;
	char name[32];
	char sex;
}Person,*pPerson;

void printInfo(Person p)
{
	printf("%d∫≈Ω„Ω„:%s %c\n",p.num,p.name,p.sex);
}

void printInfo3(Person *p)
{
	printf("%d∫≈Ω„Ω„:%s %c\n",p->num,p->name,p->sex);
}
void printInfo2(pPerson pp)
{
	printf("%d∫≈Ω„Ω„:%s %c\n",pp->num,pp->name,pp->sex);
}

int main()
{
	Person p1 = {1,"¿Ú¿Ú",'g'};
	Person p2 = {2,"√¿√¿",'g'};
	printInfo(p1);
	printInfo(p2);
	
	pPerson pp1 = &p1;
	pPerson pp2 = &p2;
	printInfo2(pp1);
	printInfo2(pp2);
	
	Person *pp3 = &p1;
	Person *pp4 = &p2;
	printInfo3(pp3);
	printInfo3(pp4);
	return 0;
}