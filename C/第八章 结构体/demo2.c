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
	int a;
	
	struct Student stu1;
	struct Student stu2 = {2,"����",'g',17,99.5,"����"};
	
	a = 10;
	stu1.num = 1;//������������ʽṹ���еĳ�Ա��������
	stu1.age = 10;
	stu1.score = 98.5;
	strcpy(stu1.name,"chenlichen");
	strcpy(stu1.addr,"����");
	
	if(stu1.score < stu2.score){
		printf("�ɼ��ȽϺõ��ǣ�\n");
		printf("ѧ�ţ�%d,���䣺%d, ������%lf, ���֣�%s, ��ַ��%s\n",
			stu2.num,stu2.age,stu2.score,stu2.name,stu2.addr);
		
	}else{
		printf("�ɼ��ȽϺõ��ǣ�\n");
		printf("ѧ�ţ�%d,���䣺%d, ������%lf, ���֣�%s, ��ַ��%s\n",
			stu1.num,stu1.age,stu1.score,stu1.name,stu1.addr);
		
	}
			
	
	return 0;
}