/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include<iostream>

using namespace std;

class Cricketer
{
	private:
    	string name;

	public:
    	void inputCricketerData()
		{
        	cout<<"\nEnter Cricketer Name: ";
        	cin>>name;
    	}

    	void displayCricketerData()
		{
        	cout << "\nCricketer Name: "<<name;
    	}
};

class Batsman : public Cricketer
{
	private:
    	int totalRuns;
    	int innings;
    	int bestPerformance;

	public:
    	void inputData()
		{
			inputCricketerData();
        	cout <<"\nEnter Total Runs: ";
        	cin >>totalRuns;
        	cout <<"\nEnter Innings Played: ";
        	cin >>innings;
        	cout <<"\nEnter Best Performance: ";
        	cin >>bestPerformance;
    	}
    	
    	double calculateAverageRuns()
		{
        	if (innings == 0)
        	{
        		return 0;
			}
			else
			{
				return (float)totalRuns/innings;
			}
    	}

    	void displayData()
		{
        	displayCricketerData();
        	cout<<"\nTotal Runs: "<<totalRuns;
        	cout<<"\nAverage Runs: "<<calculateAverageRuns();
        	cout<<"\nBest Performance: "<<bestPerformance;
    	}
};

int main()
{
    Batsman batsman;
    batsman.inputData();
    batsman.displayData();
    
    return 0;
}
