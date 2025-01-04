//Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)
#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,choice;
	
	printf("\n 1. Addition.");
	printf("\n 2. Subtraction.");
	printf("\n 3. Multiplication.");
	printf("\n 4. Division.");
	printf("\n 5. Modulo.");
	
	printf("\n Enter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("\nEnter the value of num1 =");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 =");
			scanf("%d",&num2);
			printf("\nThe Addition of %d and %d is %d .",num1,num2,num1+num2);
		break;
		
		case 2 :
			printf("\nEnter the value of num1 =");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 =");
			scanf("%d",&num2);
			printf("\nThe Subtraction of %d and %d is %d .",num1,num2,num1-num2);
		break;
		
		case 3 :
			printf("\nEnter the value of num1 =");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 =");
			scanf("%d",&num2);
			printf("\nThe Multiplication of %d and %d is %d .",num1,num2,num1*num2);
		break;
		
		case 4 :
			printf("\nEnter the value of num1 =");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 =");
			scanf("%d",&num2);
			printf("\nThe Division of %d and %d is %.2f .",num1,num2,(float)num1/(float)num2);
		break;
		
		case 5 :
			printf("\nEnter the value of num1 =");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 =");
			scanf("%d",&num2);
			printf("\nThe Modulo of %d and %d is %d .",num1,num2,num1%num2);
		break;
		
		default : printf("\n Invalid input!");
			
	}
	
	
	return 0;

}
