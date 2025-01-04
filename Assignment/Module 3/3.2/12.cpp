/*Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
„« Rectangle: Area * breadth
„« Triangle: . *Area* breadth
„« Circle: Pi * Area *Area
*/
#include<iostream>
using namespace std;
class ar
{
	public :
		void arr(double r)
		{
			cout<<"\nArea of circle is = "<<3.14*(r*r);
		}
		void arr(int l,int b)
		{
			cout<<"\nArea of Rectangle is = "<<l*b;
		}
		void arr(double h,double b)
		{
			cout<<"\nArea of Triangle is = "<<0.5*(b*h);
		}
};
int main()
{
	ar d1;
	d1.arr(5,9);
	ar d2;
	d2.arr(6.7);
	ar d3;
	d3.arr(4.5,6.3);
	return 0;
}
