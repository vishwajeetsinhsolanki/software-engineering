//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
	public:
		double add(double a,double b)
		{
			return a+b;
		}
		double sub(double a,double b)
		{
			return a-b;
		}
		double multi(double a,double b)
		{
			return a*b;
		}
		double div(double a,double b)
		{
			if(b==0)
			{
				cout<<"\n Error.";
			}
			return a/b;
		}
};
int main()
{
	calculator c;
	double a,b,ans;
	int choice;
	cout<<"\n 1. Addition.";
	cout<<"\n 2. Subtraction.";
	cout<<"\n 3. Multiplication.";
	cout<<"\n 4.Division.";
	
	cout<<"\n Enter operation = ";
	cin>>choice;
	cout<<"\n Enter first number = ";
	cin>>a;
	cout<<"\n Enter second number = ";
	cin>>b;
	
	switch(choice)
	{
		case 1:
			ans = c.add(a,b);
		break;
		
		case 2:
			ans = c.sub(a,b);
		break;
		
		case 3:
			ans = c.multi(a,b);
		break;
		
		case 4:
			ans = c.div(a,b);
		break;
		
		default : 
			cout<<"\n Error.";
			return 1;		
	}

	
	cout<<"\n Answer = "<<ans;
	
	return 0;
}
