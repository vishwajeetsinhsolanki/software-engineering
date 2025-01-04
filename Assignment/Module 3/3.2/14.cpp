//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;

class Max
{
    private:
        int num1, num2;

    public:
        Max(int n1, int n2)
		{
            num1 = n1;
            num2 = n2;
        }

        friend int find(Max &obj);
};


int find(Max &obj) 
{
	
	if(obj.num1>obj.num2)
	{
		return obj.num1;
	}
	else
	{
		return obj.num2;
	}
    
}

int main() {
    int n1, n2;

    cout << "Enter first numbers: ";
    cin >> n1;
	cout << "Enter second numbers: ";
    cin >> n2;
    
    Max obj(n1, n2);

    cout << "The maximum number is: " << find(obj);

    return 0;
}

