/*Define a class to represent a bank account. Include the following members:

1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance

*/
#include<iostream>
using namespace std;
class bankaccount
{
	private:
		string depositername;
		int accountnumber;
		string accounttype;
		double balance;
		
	public:
		bankaccount(string name,int accnumber,string acctype,double crbalance)
		{
			depositername = name;
			accountnumber = accnumber;
			accounttype = acctype;
			balance = crbalance;
		 }
		
		void deposit(double amount)
		{
			if(amount>0)
			{
				balance = balance + amount;
				cout<<"\n Deposited = "<<amount;
			}
			else
			{
				cout<<"\n Invalid amount.";
			}
		}
		
		void withdraw(double amount)
		{
			if(amount>0 && amount<= balance)
			{
				balance = balance - amount;
				cout<<"\n withdraw = "<<amount;
			}
			else if(amount>balance)
			{
				cout<<"\n Insuficiant balance.";
			}
			else
			{
				cout<<"\n invlaid amount.";
			}
		}
		
		void display()
		{
			cout<<"\n Name : "<<depositername;
			cout<<"\n Balance : "<<balance;
		}
};
int main()
{
	bankaccount account("raj patel",12345,"saving",50000);
	account.display();
	
	account.deposit(10000);
	account.display();
	
	account.withdraw(20000);
	account.display();
	
	account.deposit(-15);
	account.display();
	
	return 0;
}
