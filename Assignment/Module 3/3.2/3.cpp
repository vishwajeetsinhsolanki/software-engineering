//Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;

inline int cube(int n) {return n*n*n;}
inline int multi(int a,int b) {return a*b;}

int main()
{	
	int cans,mans;
	cans=cube(5);
	mans=multi(10,10);
	
	cout<<"\n cube = "<<cans;
	cout<<"\n multiplication = "<<mans;
	
	return 0;
}

