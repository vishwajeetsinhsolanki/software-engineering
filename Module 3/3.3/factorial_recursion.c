//WAP to find factorial using recursion 
#include<stdio.h>
int fact(int n)
{
	if(n>=1)
	
		return n * fact(n-1);
	
	else
	
		return 1;
	
}

int main()
{
	int n;
	
	printf("\n Enter number = ");
	scanf("%d",&n);
	
	printf("\n Factorial of %d = %d", n , fact(n) );
	
	return 0;
}





