//WAP to find simple interest 
#include<stdio.h>
int main()
{
	double p,r,n,si;
	
	printf("\n Enter principal amount = ");
	scanf("%lf",&p);
	printf("\n Enter rate of interest = ");
	scanf("%lf",&r);
	printf("\n Enter time period in year = ");
	scanf("%lf",&n);
	
	si = (p*r*n)/100;
	
	printf("\n Simple interest = %.2f",(float)si);
	
	return 0;
}
