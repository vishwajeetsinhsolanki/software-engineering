//Write a program of structure employee that provides the following information -print and display empno, empname, address and age.
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
	struct Employee e;
	
	printf("\n Enter the details of employee : ");
	printf("\n Enter employee no =");
	scanf("%d",&e.no);
	printf("\n Enter employee name =");
	scanf(" %s",&e.name);
	printf("\n Enter employee age =");
	scanf("%d",&e.age);
	printf("\n Enter employee address =");
	scanf(" %s",&e.address);
	
	printf("\n Details of Employee :");
	printf("\n No = %d",e.no);
	printf("\n Name =  %s",e.name);
	printf("\n No = %d",e.age);
	printf("\n No =  %s",e.address);
	
	return 0;
}
