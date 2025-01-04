//Write a program of to swap the two values using templates
#include<iostream>
using namespace std;
template <typename T>
void swapping(T &n1,T &n2)
{
	T temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main()
{
	int a=10,b=20;
	cout<<"\n Value of a before swapping = "<<a;
	cout<<"\n Value of b before swapping = "<<b;
	swapping(a,b);
	cout<<"\n Value of a after swapping = "<<a;
	cout<<"\n Value of b after swapping = "<<b;
	
	return 0;
}
