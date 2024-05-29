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
		printf("请输入职业：t代表老师，s代表学生\n");
		scanf("%c",&(p[i].zhiYe));
		if(p[i].zhiYe == 's'){
			printf("请输入学生班级：\n");
			scanf("%d",&(p[i].mes.class));
			printf("请输入学生名字：\n");
			scanf("%s",p[i].name);
		}
		else{
			printf("请输入老师的科目：\n");
			scanf("%s",p[i].mes.keMu);
			printf("请输入老师名字：\n");
			scanf("%s",p[i].name);
		}
		getchar();
	}
	for(i=0;i<2;i++){
	
		if(p[i].zhiYe == 's'){
			printf("学生的名字是：%s，班级是%d\n",p[i].name,p[i].mes.class);	
		}
		else{
			printf("老师的名字是：%s，职业是%s\n",p[i].name,p[i].mes.keMu);
		}
	}
	return 0;
}