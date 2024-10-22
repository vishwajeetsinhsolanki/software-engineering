//WAP to check if the given year is a leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("\n Enter year = ");
	scanf("%d",&year);
	
	if(( year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("\n Enter year is leapyear ");
	}
	else
	{
		printf("\n Enter year is not leapyear ");
	}
	return 0;
}
