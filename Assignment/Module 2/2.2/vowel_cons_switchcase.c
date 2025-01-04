//WAP to show Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
	int choice;
	
	printf("\n 1. Vowels.");
	printf("\n 2. Consonant.");
	
	printf("\n choose any one option to see =");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\n a,e,i,o,u ");
		break;
		case 2:
			printf("\n b,c,d,f,g,h,j,k,l,m,n,p,q,r,s,t,v,w,x,y,z");
		break;
		
		default : printf("\n Invalid input.");
	}
	return 0;
}
