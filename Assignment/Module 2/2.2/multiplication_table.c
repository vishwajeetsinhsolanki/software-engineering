//WAP to print table up to given numbers

#include<stdio.h>
int main()
{
	int num,i,j;
	
	printf("\n Enter number up to which you want to print multiplication table =");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		printf("Multiplication table of %d = \n",i);
		for(j=1;j<=10;j++)
		{
			printf("%d x %d = %d \n",i,j,i*j);
		}
		printf("\n");
	}
	
	return 0;
}
