//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include<stdio.h>
#define MAX_SIZE 100
void sortAscending(int arr[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[j]>arr[i])
			{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] =temp;
			}
		}
	}
}

void sortDescending(int arr[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[j]<arr[i])
			{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] =temp;
			}
		}
	}
}

int main()
{
	int arr1[100],arr2[100],size,choice,i,j;
	
	printf("\Enter the size of array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n Enter number in array1 arr1[%d] =",i);
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("\n Enter number in array2 arr2[%d] =",i);
		scanf("%d",&arr2[i]);
	}
	
	printf("\n Choose shorting order =");
	printf("\n1. Ascending.");
	printf("\n2. Descending.");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			sortAscending(arr1,size);
			sortAscending(arr2,size);
		break;
		case 2:
			sortDescending(arr1,size);
			sortDescending(arr2,size);
		break;
		default : printf("\n Invlaid input.");
	}
	
	printf("\n First array =");
	for(i=0;i<size;i++)
	{
		printf("\n %d ",arr1[i]);
	}
	printf("\n  Second array =");
	for(i=0;i<size;i++)
	{
		printf("\n %d ",arr2[i]);
	}
	return 0;
}




