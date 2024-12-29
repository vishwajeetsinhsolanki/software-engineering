/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/
#include<iostream>
using namespace std;

class Person
{
	private:
		string name;
		int age;
		
	public:
		void inputPersonData()
		{
			cout<<"\n Enter person name :";
			cin>>name;
			cout<<"\n Enter person age : ";
			cin>>age;
		}
		
		void displayPersonData()
		{
			cout<<"\n Person name : "<<name;
			cout<<"\n Person age : "<<age;
		}
};

class Student : public Person
{
	private:
		float percentage;
		
	public:
		void inputStudentData()
		{
			inputPersonData();
			cout<<"\n Enter Percentage : ";
			cin>>percentage;	
		}
		
		void displayStudentData()
		{
			displayPersonData();
			cout<<"\n Student Percentage : "<<"%"<<percentage;	
		}
};

class Teacher : public Person
{
	private:
		double salary;
		
	public:
		void inputTeacherData()
		{
			inputPersonData();
			cout<<"\n Enter salary : ";
			cin>>salary;	
		}
		
		void displayTeacherData()
		{
			displayPersonData();
			cout<<"\n Teacher Salary : "<<salary;	
		}
};

int main()
{
	Student student;
	Teacher teacher;
	
	cout<<"\n Enter student details : ";
	student.inputStudentData();
	
	cout<<"\n Enter teacher details : ";
	teacher.inputTeacherData();
	
	cout<<"\n Student Details : ";
	student.displayStudentData();
	
	cout<<"\n Teacher Details : ";
	teacher.displayTeacherData();
	
	return 0;
}
