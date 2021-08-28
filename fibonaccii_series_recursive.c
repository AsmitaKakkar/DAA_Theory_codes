//***Not working****

//*******recursive method*****

/*#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int fib(int n)
{
	if(n<=1){
		return n;	
	}
	else
	{
		return (fib(n-1)+(n-2));
	}

}
int main()
{
	int n;
	printf("Enter limit !!");
	scanf("%d",&n);
	fib(n);
	
	return 0;
}*/


//***iterative method***
#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
	int a=0,b=1,c=0,i,temp=0;
	if(n==0)
	{
		printf("%d",a);
		return ;
	}
	if(n==1)
	{
		printf("%d",b);
		return ;
	}
	else
	{
		for(i=2;i<n;i++)
		{
			c=a+b;
			temp=a;
			a=b;
			b=c;
			printf("%d",b);
			return ;
		}
	}
}

int main()
{
	int n;
	printf("Enter the number!!");
	scanf("%d",&n);
	fib(n);
	return 0;
}
