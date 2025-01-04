/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance)
*/
#include<iostream>
using namespace std;

class Student
{
	private:
		int roll;
		
	public:
		void inputstudentdata()
		{
			cout<<"\n Enter roll no. : ";
			cin>>roll;
		}
		
		void displaystudentdata()
		{
			cout<<"\n Student roll no. :"<<roll;
		}
};

class Test : public Student
{
	protected:
		int m1;
		int m2;
		
	public:
		void inputtestdata()
		{
			inputstudentdata();
			cout<<"\n Enter Fisrt subject marks : ";
			cin>>m1;
			cout<<"\n Enter second subject marks : ";
			cin>>m2;	
		}
		void displaytestdata()
		{
			displaystudentdata();
			cout<<"\n First subject marks : "<<m1;
			cout<<"\n Second subject marks : "<<m2;	
		}	
};

class Result : public Test
{
	public:
		
	int totalmarks()
	{
		return m1 + m2;
	}
	
	void displayresultdata()
	{
		displaytestdata();
		cout<<"\n Total marks : "<<totalmarks();
	}
};

int main()
{
	Result r;

	r.inputtestdata();
	
	cout<<"\n Student data : ";
	
	r.displayresultdata();
	return 0;
}
