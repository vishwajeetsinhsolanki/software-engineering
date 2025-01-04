//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
	int t,n1=0,n2=1,n3,i;
	
	printf("\n Enter term =");
	scanf("%d",&t);
	
	printf("\n Fibonacci series = %d %d",n1,n2);
	
	for(i=1;i<=t-1;i++)
	{
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}
}
