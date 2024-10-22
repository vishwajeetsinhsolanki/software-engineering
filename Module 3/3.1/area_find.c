//WAP to find area of circle, rectangle and triangle
#include<stdio.h>
#include<math.h>
int main()
{
	int r,rh,h,l,d,choice;
	
	printf("\n 1. Circle.");
	printf("\n 2. Rectangle.");
	printf("\n 3. Triangle.");
	
	printf("\n Choose to find area = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("\nEnter the value of radius =");
			scanf("%d",&r);
			printf("\nThe area of circle = %.2f.",(float) M_PI * r * r);
		break;
		
		case 2 :
			printf("\nEnter the value of height =");
			scanf("%d",&rh);
			printf("\nEnter the value of width =");
			scanf("%d",&d);
			printf("\nThe area of rectangle = %d .",rh*d);
		break;
		
		case 3 :
			printf("\nEnter the value of base =");
			scanf("%d",&l);
			printf("\nEnter the value of height =");
			scanf("%d",&h);
			printf("\nThe area of triangle = %d .",(l*h)/2);
		break;
		
		default : printf("\n Invalid input!");
			
	}
	
	
	return 0;

}
