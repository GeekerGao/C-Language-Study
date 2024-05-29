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
		
		{2,"张三",'g',17,99.5,"北京"},
		{3,"李四",'M',18,89.2,"上海"},
		{4,"王五",'f',19,100,"内蒙"}
	};
	struct Student *p;
	p = arr2;
	
	len = sizeof(arr2)/sizeof(arr2[0]);
	
	for(i = 0;i< len;i++){
		printf("学号：%d,年龄：%d, 分数：%lf, 名字：%s, 地址：%s\n",
			p->num,p->age,p->score,p->name,p->addr);
		
		p++;
	}
	p = arr2;
	for(i = 0;i< len;i++){
		printf("学号：%d,年龄：%d, 分数：%lf, 名字：%s, 地址：%s\n",
			p->num,p->age,p->score,p->name,p->addr);
		
		p++;
	}
	
	return 0;
}