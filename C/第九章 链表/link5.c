#include <stdio.h>
#include <stdlib.h>

struct Test{
	int data;
	struct Test *next;
};
//遍历链表
void printLink(struct Test *head)
{
	struct Test *p;
	p = head;
	while(p != NULL){
		printf("%d ",p->data);
		p = p->next;
	}
	putchar('\n');
}
//统计链表节点个数
int getLinkTotalNodeNum(struct Test *head)
{
	int cnt = 0;
	struct Test *p = head;
	while(p != NULL){
		cnt++;
		p = p->next;
	}
	return cnt;
}
//后增
int insertFromBehind(struct Test *head,int data,struct Test *new)
{
	struct Test *p = head;
	while(p != NULL){
		if(p->data == data){
			new->next = p->next;
			p->next = new;
			return 1;
		}
		p = p->next;
	}
	return 0;
}
//前增
struct Test *insertFromBefore(struct Test *head,int data,struct Test *new)
{
	struct Test *p = head;
	if(p->data == data){
		new->next = head;
		return new;
	}
	while(p->next != NULL){
		if(p->next->data == data){
			new->next = p->next;
			p->next = new;
			printf("insert ok!\n");
			return head;
		}
		p = p->next;
	}
	printf("no this data %d\n",data);
	return head;
}
//删
struct Test *deleteNode(struct Test *head,int data)
{
	struct Test *p = head;
	if(p->data == data){
		head = head->next;
		free(p);
		return head;
	}
	while(p->next != NULL){
		if(p->next->data == data){
			p->next = p->next->next;
			return head;
		}
		p = p->next;
	}
	return head;
}
//改
int gaiLink(struct Test *head,int data,int newdata)
{
	struct Test *p = head;
	while(p != NULL){
		if(p->data ==data){
			p->data = newdata;
			return 1;
		}
		p = p->next;
	}
	return 0;
}
//查
int searchLink(struct Test *head,int data)
{
	struct Test *p = head;
	while(p != NULL){
		if(p->data ==data){
			return 1;
		}
		p = p->next;
	}
	return 0;
}
//头插法
struct Test* insertFromHead(struct Test* head,struct Test* new)
{
	if(head == NULL){
		head = new;
	}else{
		new->next = head;
		head = new;
	}
	return head;
}
	
struct Test* createLink(struct Test* head)
{
	struct Test* new;

	while(1){
		new = (struct Test*)malloc(sizeof(struct Test));
		printf("input ypur new node data:\n");
		scanf("%d",&(new->data));
		if(new->data == 0){
			printf("0 quit\n");
			free(new);
			return head;
		}
		head = insertFromHead(head,new);
	}	
}
//尾插法
struct Test* insertBehind(struct Test* head,struct Test* new)
{
	struct Test* p = head;
	if(p == NULL){
		head = new;
		return head;
	}
	while(p->next != NULL){
		p = p->next;
	}
	p->next = new;
	
	return head;
}

struct Test* createLink2(struct Test* head)
{
	struct Test* new;

	while(1){
		new = (struct Test*)malloc(sizeof(struct Test));
		printf("input ypur new node data:\n");
		scanf("%d",&(new->data));
		if(new->data == 0){
			printf("0 quit\n");
			free(new);
			return head;
		}
		head = insertBehind(head,new);
	}	
}

int main()
{
	struct Test *head = NULL;
	head = createLink(head);
	printLink(head);
	struct Test t1 = {1000,NULL};
	struct Test t2 = {2000,NULL};
	head = insertFromHead(head,&t1);
	printLink(head);
	head = insertBehind(head,&t2);
	printLink(head);

	return 0;
}
