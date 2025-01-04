//Write a program to find out the max number from given array using function
#include<stdio.h>
int main()
{
	int a[100],size,i,max=0;
	
	printf("\n Enter size of array =");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n Enter value in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n Array = ");
	
	for(i=0;i<size;i++)
	{
		printf("\n%d",a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	
	printf("\n Maximum value in array = %d",max);
	
	return 0;
}
