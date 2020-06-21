#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
void push(struct Node** h,int d)    //adding elements at the start of the list
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=d;
	newnode->next=*h;
	(*h)=newnode;
}
void inst(struct Node* prevnode,int d)    //for adding elements after a given previous node
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	if(prevnode==NULL)
	{
		printf("Given node does not exist");
		return ;
	}
	newnode->data=d;
	newnode->next=prevnode->next;
	prevnode->next=newnode;
}
void ad(struct Node** h,int d)     //for adding element at the end of the list
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	struct Node* last=*h;
	newnode->data=d;
	newnode->next=NULL;
	if(*h==NULL)
	{
		(*h)=newnode;
		return ;
	}
	while(last->next!=NULL)
	last=last->next;
	last->next=newnode;
	return;
}
void prnt(struct Node* h)
{
	struct Node* c=h;
	while(c!=NULL)
	{
		printf("%d  ",c->data);
		c=c->next;
	}
}
int main()
{
	struct Node* head=NULL;
	ad(&head,9);
	ad(&head,10);
	push(&head,7);
	inst(head->next->next,8);
	printf("\n Created linked list is\n");
	prnt(head);
}
