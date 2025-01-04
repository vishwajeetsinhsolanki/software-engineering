//WAP to convert years into days and days into years
#include<stdio.h>

int main()
{
	int  choice;
	float day , year;
	
	printf("\n 1. Convert day into year.");
	printf("\n 2. Convert year into day.");
	
	printf("\n Enter choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\ Enter number of days = ");
			scanf("%f",&day);
			year = day / 365.25 ;
			printf("\n Year = %.2f",year);
		break;
		
		case 2:
			printf("\ Enter number of year = ");
			scanf("%f",&year);
			day = year * 365.25 ;
			printf("\n days = %.2f",day);
		break;
		
		default : printf("\n Invalid input.");
	}
	return 0;
}
