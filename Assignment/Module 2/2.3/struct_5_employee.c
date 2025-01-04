//Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age
#include<stdio.h>
struct Employee
{
	int no;
	int age;
	char name[50];
	char address[100];
};
int main()
{
	int i;
	struct Employee e[5];
	
	for(i=1;i<=5;i++)
	{
		printf("\n Enter the details of employee [%d] : ",i);
		printf("\n Enter employee no =");
		scanf("%d",&e[i].no);
		printf("\n Enter employee name =");
		scanf(" %s",&e[i].name);
		printf("\n Enter employee age =");
		scanf("%d",&e[i].age);
		printf("\n Enter employee address =");
		scanf(" %s",&e[i].address);
	}
	
	for(i=1;i<=5;i++)
	{
		printf("\n Details of Employee [%d] :",i);
		printf("\n No = %d",e[i].no);
		printf("\n Name =  %s",e[i].name);
		printf("\n No = %d",e[i].age);
		printf("\n No =  %s",e[i].address);
	}
	
	
	return 0;
}
