/*WAP to take 10 no. Input from user and find out …
1.How many Even numbers are there
2. How many odd numbers are there
3. Sum of even numbers
4. Sum of odd numbers */

#include<stdio.h>
int main()
{
	int a[10],i,sumeven=0,sumodd=0;
	for(i=0;i<=9;i++)
	{
		printf("\n Enter number in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=9;i++)
	{
		printf("\n %d",a[i]);
	}
	printf("\n");
	
	//How many Even numbers are there and Sum of even numbers.
	
	printf("\n Even numbers are =");
	for(i=0;i<=9;i++)
	{
		if(a[i]%2 == 0)
		{
			printf("\n %d",a[i]);
			sumeven= sumeven + a[i];
		}
	}
	printf("\n");
	
	printf("\n Sum of even numbers = %d",sumeven);
	
	printf("\n");
	
	
	//How many odd numbers are there and Sum of odd numbers
	
	printf("\n Odd numbers are =");
	for(i=0;i<=9;i++)
	{
		if(a[i]%2 != 0)
		{
			printf("\n %d",a[i]);
			sumodd= sumodd + a[i];
		}
	}
	printf("\n");
	printf("\n Sum of odd numbers = %d",sumodd);
	
	
	return 0;
}
