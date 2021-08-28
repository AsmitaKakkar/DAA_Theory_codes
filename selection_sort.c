#include<stdio.h>
#include<stdlib.h>

void selectionSort(int arr[],int n)
{
	int i,j,min_indx,temp=0;
	for(i=0;i<n-1;i++)
	{
		min_indx=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_indx])
			{
				temp=min_indx;
				min_indx=j;
				
				//swapping
				temp=0;
				temp=arr[min_indx];
				arr[min_indx]=arr[i];
				arr[i]=temp;
				
			}
		}
	}
}
int main()
{
	int n,i,arr[100];
	printf("Enter limit !!");
	scanf("%d",&n);
	printf("Enter the values in an array !!");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unsorted array -> \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("Sorted array -> \n");
	selectionSort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
