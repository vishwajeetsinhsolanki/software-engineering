#include<stdio.h>
int main()
{
	int item,totalbill = 0,quantity;
	char moreitem;
	
	up : 
	
		printf("\n 1. Pizza	Price = 180rs/pcs .");
		printf("\n 2. Burger 	Price = 100rs/pcs .");
		printf("\n 3. Dosa	Price = 120rs/pcs .");
		printf("\n 4. Idli	Price = 50rs/pcs .");
		
		printf("\n Enter your choice = ");
		scanf("%d",&item);
		
		switch(item)
		{
			case 1:
				printf("\n You have selected pizza.");
				printf("\n Enter the quantity = ");
				scanf("%d",&quantity);
				totalbill = totalbill + (quantity * 180);
			break;
			case 2:
				printf("\n You have selected burger.");
				printf("\n Enter the quantity = ");
				scanf("%d",&quantity);
				totalbill = totalbill + (quantity * 100);
			break;
			case 3:
				printf("\n You have selected dosa.");
				printf("\n Enter the quantity = ");
				scanf("%d",&quantity);
				totalbill = totalbill + (quantity * 120);
			break;
			case 4:
				printf("\n You have selected idli.");
				printf("\n Enter the quantity = ");
				scanf("%d",&quantity);
				totalbill = totalbill + (quantity * 50);
			break;
			default: printf("\n Invalid input.");
		}
		printf("\n Total bill amount = %d",totalbill);
		
		printf("\n Do you want to place more order? (y/n) :");
		scanf(" %c",&moreitem);	
		
		if(moreitem == 'y')
		{
			goto up;
		}
		else
		{
			printf("\n Total bill amount = %d",totalbill);
		}
		
	
	return 0;
}
