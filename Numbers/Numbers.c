#include<stdio.h>

/*
//Fibonacci
void Fibonacci(int no)
{
	int no1=1;
	int no2=0;
	int no3=0;
	int i=0;
	for(i=1;i<=no;i++)
	{
		printf("%d ",no3);
		no2=no3;
		no3=no1;
		no1=no2+no3;
	}
}
int main()
{
	int no=5;
	Fibonacci(no);
	return 0;
}
*/
/*
//Strong number
int fact1(int);
void Strong(int no)
{
	int digit=0;
	int ans=0;
	int no1=no;
	while(no!=0)
	{
		digit=no%10;
		ans=ans+fact1(digit);
		no= no/10;
	}
	if(ans==no1)
	{
		printf("strong");
	}
	else
	{
		printf("not strong");
	}
}
int fact1(int no)
{	
	int ans=1;
	while(no !=0)
	{
		ans=ans*no;
		no--;
	}
	return ans;
}
int main()
{
	int no=145;
	Strong(no);
	return 0;
}
*/

/*
//Armstrong
int pow1(int no,int mul);

void Armstrong(int no)
{
	int dig=0;
	int count=0;
	int sum=0;
	int no1=no;
	int no2=no;
	int i=0;
		while(no!=0)
		{
			dig=no%10;
			no=no/10;
			count++;	
		}
		while(no1!=0)
		{
			dig=no1%10;
			sum=sum+pow1(dig,count);
			no1=no1/10;
		}
		if(no2==sum)
		{
			printf("Armstrong %d ",no2);
		}
		else
		{
			printf("not arm");
		}
	
}
int pow1(int no,int mul)
{
	int ans=1;
	while(mul!=0)
	{
		ans=no*ans;
		mul--;
	}
	return ans;

}
int main()
{
	int no=153;
	Armstrong(no);
	return 0;
}
*/
/*
void Prime(int no)
{
	int i=0;
	int count=0;	

	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("primte");
	}
	else
	{
		printf("not prime");
	}
}
int main()
{
	int no=6;
	Prime(no);
	return 0;
}
*/
/*
void Perfect()
{
	int i=0,temp=0;
	int sum=0;
	int div=1;
	for(i=1; i<=50; i++)
	{	
		div=1;
		sum=0;
		while(div < i)
		{
			if(i%div==0)
			{
				sum=sum+div;
			}
			div++;
		}
		if(i==sum)
		{
			printf("%d ",i);
		}
	}
}
int main()
{
	int start=0;
	int end=10;
	Perfect();
return 0;
}
*/

/*
//Write a program to check given number is perfect number or not
void Perfect(int no)
{
	int i=0;
	int sum=0;
	int no1=no;
	for(i=1;i<no;i++)
	{
		if(no % i==0)
		{
			sum = sum+i;
		}
	}
	if(no1==sum)
	{
		printf("Perfect");
	}
	else
	{
		printf("Not perfect");
	}
}
int main()
{
	int no=7;
	Perfect(no);
	return 0;
}
*/

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
