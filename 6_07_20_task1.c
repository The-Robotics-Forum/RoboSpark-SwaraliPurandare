#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void push(struct node **headref,int data)
{
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=data;
	new->next=*headref;
	*headref=new;

}
void insertAfter(struct node *node,int data)
{
	if(node==NULL)
	{
		printf("Previous node is null\n");
		return;
	}
	struct node *new=(struct node *)malloc (sizeof(struct node));
	new->data=data;
	new->next=node->next;
	node->next=new;
}
void append(struct node **head,int data)
{
	struct node *new=(struct node *)malloc(sizeof(struct node));
	struct node *last=*head;
	new->data=data;
	new->next=NULL;
	if(*head==NULL)
	{
		*head=new;
		return;
	}
	else
	{
		while(last->next != NULL)
		{
			last=last->next;
		}
	}
	last->next=new;
}
void print(struct node *head)
{
	while(head !=NULL)
	{
		printf("%d->",head->data);
		head=head->next;
	}
}
int main()
{
	struct node *head=NULL;
	push(&head,1);
	push(&head,4);
	insertAfter(head->next,5);
	append(&head,8);
	printf("Printing Linked List:\n");
	print(head);
	printf("NULL");

}
