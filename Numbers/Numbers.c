#include<stdio.h>
/*
void minimum(int arr[], int no)
{
	int i=0;
	int min=arr[0];
	for(i=1;i<no;i++)
	{
		if(arr[i] < min)
		{	
				min=arr[i];
		}
	}
	printf("\nMin is = %d ",sec);
}
int main()
{
	int arr[]={4,6,5,2,8,9,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	minimum(arr,size);

return 0;
}
*/
/*
void second_maximum(int arr[], int no)
{
	int i=0;
	int max=0;
	int sec=0;
	for(i=0;i<no;i++)
	{
		if(arr[i] < arr[i+1])
		{	
			sec=max;
			max=arr[i+1];
		}
	}
	printf("\nMax is = %d ",sec);
}
int main()
{
	int arr[]={4,6,5,2,8,9,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	second_maximum(arr,size);

return 0;
}
*/
/*
// program which accept N numbers from user and print maximum number from that numbers.
void maximum(int arr[], int no)
{
	int i=0;
	int max=0;
	for(i=0;i<no;i++)
	{
		if(arr[i] < arr[i+1])
		{
			max=arr[i+1];
		}
	}
	printf("\nMax is = %d ",max);
}
int main()
{
	int arr[]={4,6,5,2,8,9,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	maximum(arr,size);

return 0;
}
*/
/*
//Write a program which accept N numbers from user and print addition of that
void AddNumbers(int arr[], int no)
{
	int i=0;
	int add=0;
	for(i=0;i<no;i++)
	{
		add=add+arr[i];
	}
	printf("\n Addtion is = %d ",add);
}
int main()
{
	int no=0;
	int * arr;
	printf("How may numbers do you wnts to enter \n");
	scanf("%d",&no);
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<no;i++)
	{
		printf("%d ",arr[i]);
	}
	
	AddNumbers(arr,no);
	return 0;
}
*/
/*
// program which accept N and print first 5 multiples of N.
void Multiple(int no)
{
	int i=0;
	for(i=1;i<=10;i++)
	{
		printf("%d ",i*no);
	}
}

int main()
{
	int no=0;
	printf("Enter the number \n");
	scanf("%d",&no);
	Multiple(no);
	return 0;
}
*/
/*
void even(int no)
{
	int i=0;
	for(i=0;i<no;i++)
	{
		if(i % 2==0)
		{
			printf("%d ",i);
		}
	}
}
int main()
{
	int no=0;
	printf("Enter the number \n");
	scanf("%d",&no);
	even(no);
	return 0;
}
*/
/*
void odd(int no)
{
	int i=0;
	for(i=0;i<no;i++)
	{
		if(i % 2!=0)
		{
			printf("%d ",i);
		}
	}
}
int main()
{
	int no=0;
	printf("Enter the number \n");
	scanf("%d",&no);
	odd(no);
	return 0;
}
*/
/*
void PrintLine(int no)
{
	int i=0;
	for(i=-no;i<=no;i++)
	{
		printf("%d ",i);
	}
}
int main()
{
	int no=0;
	printf("Enter the number \n");
	scanf("%d",&no);
	PrintLine(no);
	return 0;
}
*/
