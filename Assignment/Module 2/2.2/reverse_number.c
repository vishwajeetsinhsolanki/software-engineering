//WAP to print number in reverse order
#include<stdio.h>
int main()
{
	int rev=0,num;
	printf("\n Enter number = ");
	scanf("%d",&num);
	
	while(num !=0 )
	{
		int rem = num % 10;
		rev = rev*10 + rem;
		num = num / 10;
	}
	
	printf("\n Reverse number = %d",rev);
	return 0;
}
