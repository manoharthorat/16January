#include<stdio.h>
#include<stdlib.h>
struct node 
{
	struct node * prev;
	int data;
	struct node * next;
};

int InsertFirst(struct node ** head, struct node ** tail, int no)
{
	struct node * newnode=(struct node *)malloc(sizeof(struct  node));
	newnode->prev=NULL;
	newnode->data=no;
	newnode->next=NULL;
	if(*head==NULL && *tail==NULL )
	{
		*head=newnode;
		*tail=newnode;
		(*tail)->next=*head;
		(*head)->prev=(*tail);
	}
	else
	{

	}

}
int main()
{
	struct node * first=NULL;
	struct ndoe * last=NULL;
	InsertFirst(&first, &last,10);
	InsertFirst(&first, &last,20);
	InsertFirst(&first, &last,30);
	InsertFirst(&first, &last,40);
	Display(first, last);

	return 0;
}
