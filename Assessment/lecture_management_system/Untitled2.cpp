#include<iostream>
using namespace std;

class lecturedetails
{
	private:
		string lecturername;
		string subjectname;
		string coursename;
		int numoflecture;
		
	public:
		
		//constructor to initialize data member
		lecturedetails(string lecturer="",string subject="",string course="",int nlecture=0)
		{
			lecturername=lecturer;
			subjectname=subject;
			coursename=course;
			numoflecture=nlecture;	
		}
		
		//function to add lecture details
		void getlecturedetails(string lecturer,string subject,string course,int nlecture)
		{
			lecturername=lecturer;
			subjectname=subject;
			coursename=course;
			numoflecture=nlecture;
		}
		
		//function to display lecture details
		void displaylecturedetails()
		{
			cout<<"\n Lecturer name : "<<lecturername;
			cout<<"\n Subject name : "<<subjectname;
			cout<<"\n Course name : "<<coursename;
			cout<<"\n Number of lectures : "<<numoflecture;
		}	
};

int main()
{
	int i;
	//creating array of lecture details
	lecturedetails l[5];
	
	//assigning values
	l[0].getlecturedetails("raj","maths","science",35);
	l[1].getlecturedetails("patel","history","commerce",20);
	l[2].getlecturedetails("yogin","gujarati","arts",65);
	l[3].getlecturedetails("jay","physics","science",45);
	l[4].getlecturedetails("raj","english","arts",15);
	
	//display all lecture details
	for(i=0;i<=4;i++)
	{
		cout<<"\n Lecture details : "<<(i+1)<<" : \n";
		l[i].displaylecturedetails();
		cout<<"\n";
	}
	return 0;
}
