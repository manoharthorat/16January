#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node * next;
};

int InsertFirst(struct node ** head, struct node ** tail, int no)
{
	struct node * newnode=(struct node *)malloc(sizeof(struct node ));
	if(newnode==NULL)
	{	
		return 0;
	}
	newnode->data=no;
	newnode->next=NULL;
	if(*head==NULL && *tail==NULL)
	{
		*head=newnode;
		*tail=newnode;
		(*tail)->next=*head;
	}
	else
	{
		newnode->next=*head;
		*head=newnode;
		(*tail)->next=newnode;

	}
}
void Display(struct node * head, struct node * tail)
{
	do
	{
		printf("%d ",head->data);
		head= head->next;
	}while(head!=tail->next);

}
int main()
{
	struct node * first=NULL;
	struct node * last =NULL;
	InsertFirst(&first, &last, 10);
	InsertFirst(&first, &last, 20);
	InsertFirst(&first, &last, 30);
	InsertFirst(&first, &last, 40);
	InsertFirst(&first, &last, 50);
	InsertFirst(&first, &last, 60);
	InsertFirst(&first, &last, 70);
	Display(first, last);

	return 0;
}
