//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
int main()
{
	int i,j,k,size,choice;
	int a[100][100],b[100][100],ans[100][100];
	
	printf("\n Enter the size of array =");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\n Enter element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\n Enter element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n Array a = \n");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Array b = \n");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n 1. Addition.");
	printf("\n 2. Subtraction.");
	printf("\n 3. Multiplication.");
	printf("\n Enter choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\n Addition of array = \n");
			
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case 2:
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] - b[i][j];
				}
			}
			printf("\n Subtraction of array = \n");
			
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case 3:
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j]=0;
					for(k=0;k<size;k++)
					{
						ans[i][j] = ans[i][j] + (a[i][k] * b[k][j]);
					}
				}
			}
			printf("\n Multiplication of array = \n");
			
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d",ans[i][j]);
				}
				printf("\n");
			}
		break;
		default : printf("\n Invlaid input!");	
	}
	return 0;
}
