//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],temp[100];

	printf("\n Enter string value =");
	gets(str);
	
	printf("\n Original string  = %s",str);
	
	strcpy(temp,str);
	strrev(str);


    if (strcmp(temp,str)==0)
        printf("\n String is palindrome");
    else
        printf("\n String is not palindrome");
        
	return 0;
}
