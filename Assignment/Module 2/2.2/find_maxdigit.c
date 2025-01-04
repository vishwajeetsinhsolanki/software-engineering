//Write a program to find out the max from given number
#include<stdio.h>
int main()
{
	int num,maxdigit = 0,rem;
	printf("\n Enter number = ");
	scanf("%d",&num);
	
	while(num != 0)
	{
		rem = num % 10;
		if(rem > maxdigit)
		{
			maxdigit = rem;
		}
		num = num / 10;
	}
	printf("\n Maximum digit is = %d ",maxdigit);
	return 0;
}
