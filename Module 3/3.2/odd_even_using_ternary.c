//WAP to find number is even or odd using ternary operator 
#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter vlaue = ");
	scanf("%d",&a);
	
	b = ( a % 2 == 0) ? printf("\n %d is even.",a) : printf("\n %d is odd.",a);
	
	return 0;
}
