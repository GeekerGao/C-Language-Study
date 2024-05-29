#include <stdio.h>

struct Data{
	int data;
	struct Data *pnext;
};

void printLink(struct Data *phead)
{
	struct Data *tmp = phead;
	while(tmp != NULL){
		printf("%d ",tmp->data);
		tmp = tmp->pnext;
	}
}
struct Data* addLink(struct Data* head, struct Data *new)
{
	struct Data *tmp;
	if(head == NULL){
		return new;
	}
	new->pnext = head;
	head = new;
	
	return head;
}
int main()
{
	
	struct Data d1 = {1,NULL};
	struct Data d2 = {2,NULL};
	struct Data d3 = {3,NULL};
	struct Data *head;
	head = addLink(head, &d1);
	head = addLink(head, &d2);
	head = addLink(head, &d3);
	
	printLink(head);
	return 0;
}