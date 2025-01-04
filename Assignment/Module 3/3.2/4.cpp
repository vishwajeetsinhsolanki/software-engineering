//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class calculator
{
	private:
		double a;
		double b;
		
	public:
		calculator(double n1,double n2)
		{
			a=n1;
			b=n2;	
		}
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
	double a,b;
	
	calculator c(a,b);
	
	cout<<"\n Enter first number = ";
	cin>>a;
	cout<<"\n Enter second number = ";
	cin>>b;
	
	cout<<"\n 1. Addition."<<c.add(a,b);
	cout<<"\n 2. Subtraction."<<c.sub(a,b);
	cout<<"\n 3. Multiplication."<<c.multi(a,b);
	cout<<"\n 4.Division."<<c.div(a,b);
	return 0;
}
