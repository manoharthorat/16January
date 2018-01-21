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

int InsertLast(struct node ** head, struct node ** tail, int no)
{
	struct node * newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode ==NULL)	
	{
		return 0;
	}
	newnode->data=no;
	newnode->next=NULL;
	if(*head ==NULL && *tail==NULL)
	{
		*head=newnode;
		*tail=newnode;
		(*tail)->next=newnode;
	}
	else
	{
		(*tail)->next=newnode;
		newnode->next=(*head);
		*tail=newnode;
	}

}
int CountNodes(struct node * head, struct node * tail)
{
	int count=0;
	do
	{
		count ++;
		head = head->next;
	}while(head!=tail->next);
	
	return count;
}

int InsertAtPosition(struct node ** head, struct node ** tail, int pos, int no )
{
	struct node * newnode= (struct node *)malloc(sizeof(struct node ));
	newnode->data=no;
	newnode->next=NULL;

	struct node * temp = *head;
	if(newnode == NULL)
	{
		return 0;
	}
	if(pos==0)
	{
		return  0;
	}
	else if(pos ==1)
	{
		InsertFirst(head, tail, no);
	}
	else if(pos==(CountNodes(*head, *tail)+1))
	{
		InsertLast(head, tail, no);
	}
	else if(pos > (CountNodes(*head, *tail)))
	{
		return 0;
	}
	else
	{
		for(int i=1;i<pos-1;i++)
		{
			temp =temp->next;
		}
		newnode -> next=temp->next;
		temp ->next= newnode;
	}			
			
}

int SearchFirstOccurance(struct node * head, struct node * tail, int no)
{
	int pos=0;
	do{	
		pos++;
		if(head->data==no)
		{
			return pos;
		}
		head=head->next;
	}while(head!=tail->next);
	
}
int SearchAllOccurance(struct node * head, struct node * tail, int no)
{
	int count=0;
	do{	
		if(head->data==no)
		{
			count++;
		}
		head=head->next;
	}while(head!=tail->next);
	return count;
}
int DeleteFirst(struct node ** head, struct node ** tail)
{
	struct node * temp=*head;
	if(*head==NULL && *tail==NULL)
	{
		return 0;
	}
	else
	{
		*head=temp->next;
		(*tail)->next=*head;
		free(temp);
	}
}

int DeleteLast(struct node ** head, struct node ** tail)
{
	struct node * temp1=*head;
	struct node * temp2=*head;
	do
	{
		temp2=temp1;		
		temp1=temp1->next;
	
	}while(temp1->next!=(*tail)->next);
	*tail=temp2;
	temp2->next=*head;

}

int ReverseList(struct node ** head, struct node ** tail)
{
	struct node * prev=NULL;
	struct node * curr=*head;
	struct node * next=NULL;
	do
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}while(head!=tail);
	(*head)=prev;
	
}
int main()
{
	struct node * first=NULL;
	struct node * last =NULL;
	InsertFirst(&first, &last, 10);
	InsertFirst(&first, &last, 20);
	InsertFirst(&first, &last, 30);
	InsertFirst(&first, &last, 40);
	InsertFirst(&first, &last, 20);
	InsertFirst(&first, &last, 50);
	InsertFirst(&first, &last, 20);
	InsertFirst(&first, &last, 60);
	InsertFirst(&first, &last, 20);
	InsertFirst(&first, &last, 70);
	InsertLast(&first, &last, 80);
	Display(first, last);
	printf("Count is %d ",CountNodes(first, last));
	InsertAtPosition(&first, &last,4,55);
	printf("\n");
	Display(first,last);
	printf("\nSearch first %d \n",SearchFirstOccurance(first,last,40));
	printf("Search All Occurances %d \n",SearchAllOccurance(first,last,20));
	DeleteFirst(&first, &last);
	printf("\n");
	Display(first,last);
	DeleteLast(&first, &last);
	printf("\n");
	Display(first,last);
	//ReverseList(&first,&last);
		printf("\n");
	Display(first,last);
	
	

	return 0;
}
