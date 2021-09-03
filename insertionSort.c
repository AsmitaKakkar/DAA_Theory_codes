#include<stdio.h>
#include<stdlib.h>

int insertionSort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<=n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
}

int main()
{
	int i,n,arr[100];
	printf("Enter Limit!!\n");
	scanf("%d",&n);
	printf("Enter the elements in an array !!\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unsorted array !!");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	insertionSort(arr,n);
	printf("Sorted array !!\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}
