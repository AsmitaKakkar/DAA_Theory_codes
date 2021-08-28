#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[],int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
			
		}
	}

}


int main()
{
	int n,i,arr[100];
	printf("Enter the limit of array!!");
	scanf("%d",&n);
	printf("Enter the values in an array !!");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unsorted array ->\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("Sorted array ->\n");
	bubbleSort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
