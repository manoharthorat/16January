#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Separate(int arr[], int no)
{
	int left=0,right = no-1;
	while(left < right)
	{
		while(arr[left] ==0 )
		{
			left++;
		}
		while(arr[right] ==1 )
		{
			right --;
		}
		if(left < right)
		{
			arr[left]=0;
			arr[right]=1;
			left++;
			right--;
		}
	}
	for(int i=0;i<no;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[]={1,0,0,1,1,0,1,0,1,1,0,0,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	Separate(arr,size);
return 0;
}

/*
int CheckDuplicateMax(int arr[],int no)
{
	int i=0,j=0;
	int count =0,max=0;
	int sec=0;
	for(i=0; i< no; i++)
	{
		count=0;
		for(j=i+1; j<no;j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
			}
		}
		if(max < count)
		{	
			max=count;
		}
	}
	printf("Max = %d ",max);
	return 0;
}

int main()
{
	int arr[]={1,3,5,3,7,3,3,92,4,4,4,6,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	CheckDuplicateMax(arr,size);
return 0;
}
*/
/*
void FirstRepeatedElement(int arr[], int no)
{
	int i=0,j;
	for(i=0;i <no;i++)
	{
		for(j=i+1;j<no;j++)
		{
			if(arr[i] == arr[j])
			{
					printf("First element found %d ",arr[i]);	
					return;
			}
		}
	}
}
int main()
{
	int arr[]={1,3,5,3,7,92,4,4,6,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	FirstRepeatedElement(arr,size);
return 0;
}
*/


/*
void CheckDuplicate(int A[], int no)
{
	int i=0;
	for(i=0;i<no;i++)
	{
		if(A[abs(A[i])] < 0)
		{
			printf("Duplicate = %d ",A[i]);
			return ;
		}
		else
		{
			A[A[i]]=-A[A[i]];
		}
	}
}
int main()
{
	int arr[]={1,1,2,2,3,4,5,6,3,7,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	CheckDuplicate(arr,size);
return 0;
}
*/

/*
int UnsortedLinearSearch(int arr[], int no, int data)
{
	int i=0;
	for(i=0;i<no;i++)
	{
		if(arr[i]==data)
			return i;
	}
	return -1;
}
int main()
{
	int arr[]={1,3,5,7,92,4,6,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	int pos=UnsortedLinearSearch(arr,size,92);
	printf("Position is %d ",pos);
return 0;
}
*/


/*
int SortedLinearSearch(int arr[], int no, int data)
{
	for(int i=0;i<no;i++)	
	{
		if(arr[i]==data)
		{
			return i;
		}
		else if(arr[i] > data)
		{
			return -1;
		}
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	int pos=SortedLinearSearch(arr,size,5);
	printf("Position is %d ",pos);
return 0;
}
*/

/*
int BinarySearchIterative(int arr[],int no, int data)
{
	int low=0;
	int high=no-1;
	int mid=0;
	while(low <= high)
	{
		mid=low + (high-low)/2;
		if(arr[mid]==data)
		{
			return mid;
		}
		else if(arr[mid] < data)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int pos=BinarySearchIterative(arr,size,8);
	printf("Position is %d ",pos);
return 0;
}
*/

/*
int BinarySearchRecursive(int arr[],int low,int high, int data)
{
	int mid=low+(high-low)/2;
	if(arr[mid]==data)
	{
		return mid;
	}
	else if(arr[mid] < data)

}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int pos= BinarySearchRecursive(arr,0,size-1,8);
	printf("Position is %d ",pos);
return 0;
}
*/

/*
void CheckDuplicateBruteForce(int arr[], int n)
{
	int i=0,j=0;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j < n; j++)
		{
			if(arr[i] == arr[j])
			{
				printf(" %d ",arr[i]);
			}
		}
	}
	return ;
}
int main()
{
	int arr[]={1,1,2,2,3,4,5,6,3,7,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	CheckDuplicateBruteForce(arr,size);
return 0;
}
*/
/*
void CheckDuplicateBruteForce(int arr[], int n)
{
	int i=0,j=0;
	for(i=0; i<n; i++)
	{
			if(arr[i] == arr[i+1])
			{
				i++;
			}
			else
			{
				printf(" %d ",arr[i]);
			}
	}
	return ;
}
int main()
{
	int arr[]={1,1,2,2,3,4,5,6,3,7,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	CheckDuplicateBruteForce(arr,size);
return 0;
}
*/
