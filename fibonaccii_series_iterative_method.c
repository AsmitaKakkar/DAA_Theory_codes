#include<stdio.h>
#include<stdlib.h>

int fib (int n)
{
	int i,a=0,b=1,temp=0,c;
	if(n==0)
	{
		printf("%d",a);
		return 0;
	}
	if(n==1)
	{
		printf("%d",b);
		return 0;
	}
	for(i=2;i<=n;i++)
	{
		c=a+b;
		temp=a;
		a=b;
		b=c;
		printf("%d",b);
		
		return 0;
	}
}
int main()
{
	int n;
	printf("Enter the number of digits!!");
	scanf("%d",&n);	
	fib(n);
	
	return 0;
}
