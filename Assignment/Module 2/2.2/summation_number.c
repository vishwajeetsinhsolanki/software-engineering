//c program make a summation of given number
#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	
	printf("\n Enter positive number = ");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("\n Error.");
		return 1;
	}
	
	while(num>0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf("\n Summation of number is = %d",sum);
	return 0;
}
