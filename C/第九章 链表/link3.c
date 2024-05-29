#include <stdio.h>

struct Test{
	int data;
	struct Test *next;
};

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
//²é
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

//ºóÔö
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

int main()
{
	struct Test t1 = {1,NULL};
	struct Test t2 = {2,NULL};
	struct Test t3 = {3,NULL};
	struct Test t4 = {4,NULL};
	struct Test t5 = {5,NULL};

	t1.next = &t2;
	t2.next = &t3;
	t3.next = &t4;
	t4.next = &t5;

	struct Test new = {100,&new};

	printLink(&t1);
	puts("after insert behind:");
	insertFromBehind(&t1,5,&new);
	printLink(&t1);

	return 0;
}
