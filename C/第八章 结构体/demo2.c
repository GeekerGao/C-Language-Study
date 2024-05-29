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
	struct Student stu2 = {2,"张三",'g',17,99.5,"北京"};
	
	a = 10;
	stu1.num = 1;//点运算符来访问结构体中的成员变量（域）
	stu1.age = 10;
	stu1.score = 98.5;
	strcpy(stu1.name,"chenlichen");
	strcpy(stu1.addr,"福州");
	
	if(stu1.score < stu2.score){
		printf("成绩比较好的是：\n");
		printf("学号：%d,年龄：%d, 分数：%lf, 名字：%s, 地址：%s\n",
			stu2.num,stu2.age,stu2.score,stu2.name,stu2.addr);
		
	}else{
		printf("成绩比较好的是：\n");
		printf("学号：%d,年龄：%d, 分数：%lf, 名字：%s, 地址：%s\n",
			stu1.num,stu1.age,stu1.score,stu1.name,stu1.addr);
		
	}
			
	
	return 0;
}