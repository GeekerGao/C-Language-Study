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
	struct Student max;
	
	a = 10;
	stu1.num = 1;//������������ʽṹ���еĳ�Ա��������
	stu1.age = 10;
	stu1.score = 99.589;
	strcpy(stu1.name,"chenlichen");
	strcpy(stu1.addr,"����");
	
	max = stu1;
	
	if(stu1.score < stu2.score){
		max = stu2;
	}
	printf("�ɼ��ȽϺõ��ǣ�\n");
	printf("ѧ�ţ�%d,���䣺%d, ������%lf, ���֣�%s, ��ַ��%s\n",
			max.num,max.age,max.score,max.name,max.addr);

	return 0;
}