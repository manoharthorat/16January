#include<stdio.h>
#include<string.h>

int selectionsort(int arr[], int no)
{
	int i=0,j=0;
	int imin=0;
	int temp;
	for(i=0;i<no;i++)
	{
		//Consider first element as a minimum element 
		imin=i;
		for(j=i+1;j<no;j++)
		{
			//Find the smallest elemts index from the array
			if(arr[j] < arr[imin])
			{
				imin=j;
			}
		}
		//Swap the elemtns
		temp=arr[i];
		arr[i]=arr[imin];
		arr[imin]=temp;
	}
	return 0;
}
int main()
{
	int arr[]={3,6,2,5,1,9,4};
	int size = sizeof(arr)/sizeof(arr[0]);

	selectionsort(arr,size);
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}
