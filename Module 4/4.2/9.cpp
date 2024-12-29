/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/
#include <iostream>
using namespace std;

class Math
{
	public:
    
    	int add(int a, int b)
		{
        	return a + b;
    	}

    	float add(float a, float b)
		{
       	 return a + b;
    	}

    	int subtract(int a, int b)
		{
    	    return a - b;
    	}

    	float subtract(float a, float b)
		{
     	    return a - b;
    	}

    	int multiply(int a, int b)
		{
    	    return a * b;
    	}


    	float multiply(float a, float b)
		{
    	    return a * b;
    	}

    	float divide(int a, int b) 
		{
    	    return a/b;
    	}


    	float divide(float a, float b)
		{
       	    return a/b;
    	}
};

int main()
{
    Math math;

    int a,b;
    float x,y;
    
    cout << "\nEnter first integers: ";
    cin >> a;
	cout << "\nEnter second integers: ";
    cin >> b;
    
    cout << "\nAddition: " << math.add(a,b);
    cout << "\nSubtraction: " << math.subtract(a,b);
    cout << "\nMultiplication: " << math.multiply(a,b);
    cout << "\nDivision: " << math.divide(a,b);

  	cout << "\nEnter first float: ";
    cin >> x;
	cout << "\nEnter second float: ";
    cin >> y;

    cout << "\nAddition: " << math.add(x,y);
    cout << "\nSubtraction: " << math.subtract(x,y);
    cout << "\nMultiplication: " << math.multiply(x,y);
    cout << "\nDivision: " << math.divide(x,y);

    return 0;
}
