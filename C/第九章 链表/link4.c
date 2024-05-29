#include <stdio.h>

struct Test{
	int data;
	struct Test *next;
};
//打印链表
void printLink(struct Test *head)
{
	struct Test *point;
	point = head;
	while(point != NULL){
		printf("%d ",point->data);
		point = point->next;
	}
	putchar('\n');
}

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
//查
int searchLink(struct Test *head,int data)
{
	while(head != NULL){
		if(head->data ==data){
			return 1;
		}
		head = head->next;
	}
	return 0;
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

int main()
{
	struct Test *head = NULL;
	struct Test t1 = {1,NULL};
	struct Test t2 = {2,NULL};
	struct Test t3 = {3,NULL};
	struct Test t4 = {4,NULL};
	struct Test t5 = {5,NULL};
	struct Test new = {100,NULL};
	struct Test new2 = {101,NULL};
	struct Test new3 = {102,NULL};

	t1.next = &t2;
	t2.next = &t3;
	t3.next = &t4;
	t4.next = &t5;

	head = &t1;

	puts("raw data:");
	printLink(head);

	insertFromBehind(head,5,&new);
	puts("after insert behind:");
	printLink(head);

	head = insertFromBefore(head,1,&new2);
	puts("after insert before:");
	printLink(head);

	head = insertFromBefore(head,100,&new3);
	puts("after insert before:");
	printLink(head);

	return 0;
}
