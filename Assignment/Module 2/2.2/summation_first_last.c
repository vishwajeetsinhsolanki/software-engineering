//Write a program you have to make a summation of first and last Digit.
#include<stdio.h>
int main()
{
	int num,sum,first,last;
	printf("\n Enter number = ");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("\n Error!");
		return 1;
	}
	
	last = num % 10;
	
	while(num>=10)
	{
		num = num / 10;
	}
	
	first = num;
	
	sum = first + last;
	
	printf("\n Summation of first ans last digit = %d",sum);
	return 0;
}
