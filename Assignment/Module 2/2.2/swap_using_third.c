//WAP to swap two numbers without using third variable
#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int c;
	
	printf("\n Value of a before swapping = %d",a);
	printf("\n Value of b before swapping = %d",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\n Value of a after swapping = %d",a);
	printf("\n Value of b after swapping = %d",b);
	
	return 0;
}
