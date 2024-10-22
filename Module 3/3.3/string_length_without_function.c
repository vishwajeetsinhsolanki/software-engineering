//WAP Find out length of string without using inbuilt function
#include<stdio.h>
int main()
{
	int i,length=0;
	char str[100];
	
	printf("\n Enter string =");
	scanf("%s",&str);
	
	for(i=0;str[i] !='\0';i++)
	{
		length++;
	}
	
	printf("\n Length of string = %d",length);
	return 0;
}
