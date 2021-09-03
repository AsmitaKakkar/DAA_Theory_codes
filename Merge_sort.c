//INCORRECT ANSWER

#include<stdio.h>
#include<stdlib.h>


void merge(int arr[],int l,int m,int r)
{
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	int i=0,j=0,k=1;
	for(i=0;i<n1;i++)
	{
		L[i]=arr[l+i];
		
	}
	for(j=0;j<n2;j++)
	{
		R[j]=arr[m+1+j];
	}
	
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		arr[k++]=L[i++];
		else
		arr[k++]=R[j++];
	}
	while(i<n1)
	arr[k++]=L[i++];
	while(j<n2)
	arr[k++]=R[j++];
	
}


void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

int main()
{
	int i,j,l,r,n,arr[100];
	printf("Enter limit !!");
	scanf("%d",&n);
	printf("Enter the leftmost and rightmost limit!!\n");
	scanf("%d%d",&l,&r);
	printf("Enter the values in an array!!\n");
	for(i=l;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unsorted array !!\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	mergeSort(arr,l,r);
	printf("Sorted array !!\n");
	for(i=l;i<n;i++)
	{
		printf("%d ",arr[i]);	
	}	
	return 0;
}
