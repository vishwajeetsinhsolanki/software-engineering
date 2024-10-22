//WAP to show Monday to Sunday using switch case
#include<stdio.h>
int main()
{
	int day;
	printf("1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saurday\n7.Sunday.");
	printf("\n Enter number between 1 to 7 to get day of week = ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("\n Monday.");
		break;
		case 2:
			printf("\n Tuesday.");
		break;
		case 3:
			printf("\n Wednesday.");
		break;
		case 4:
			printf("\n Thursday.");
		break;
		case 5:
			printf("\n Friday.");
		break;
		case 6:
			printf("\n Saturday.");
		break;
		case 7:
			printf("\n Sunday.");
		break;
		default : printf("\n Invalid input.");
	}
	return 0;
}
