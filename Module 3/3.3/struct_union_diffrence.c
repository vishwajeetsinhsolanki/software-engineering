//WAP to show difference between Structure and Union
#include<stdio.h>
struct Employee
{
	int no;
	char name[50];
	float salary;
};
union Value
{
    int no;
    char name[50];
    float salary;
};
int main()
{
	struct Employee e;
	
	e.no=01;
	strcpy(e.name,"Raj");
	e.salary=70000;
	
	printf("\n Details of Employee :");
	printf("\n No = %d",e.no);
	printf("\n Name =  %s",e.name);
	printf("\n No = %.2f",e.salary);
	
	printf("\n Size of structure = %lu",sizeof(e));
	
	union Value v;
	
	v.no=02;
	
	printf("\n Union after assign no :");
	printf("\n Employee no = %d",v.no);
	printf("\n Size of union = %lu",sizeof(v));
	
	strcpy(v.name,"Jay");
	
	printf("\n Employee name = %s",v.name);
	printf("\n Employee no after assign employee name = %d",v.no);
	
	v.salary=35000;
	
	printf("\n Salary =%2.f",v.salary);
	printf("\n Employee name after assign salary = %s",v.name);
	
	return 0;
}
