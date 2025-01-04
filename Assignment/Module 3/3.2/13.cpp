//Write a program to swap the two numbers using friend function without using third variable
#include <iostream>
using namespace std;

class Swapnumber
{
	private:
    	int a, b;

	public:
    	Swapnumber(int x, int y)
		{
        	a = x;
        	b = y;
    	}

    	friend void swap(Swapnumber& obj);

    	void display()
		{
        	cout<<"\n a: "<<a;
			cout<<"\n b: "<<b;
    	}
};

void swap(Swapnumber& obj)
{
    obj.a = obj.a + obj.b;
	obj.b = obj.a - obj.b;
	obj.a = obj.a - obj.b;
}

int main()
{
    int x, y;
    
    cout << "\nEnter x: ";
    cin >> x;
    cout <<"\nEnter y: ";
    cin >>y;

    Swapnumber obj(x, y);

    cout << "\n Before swapping: ";
    obj.display();


    swap(obj);

    cout << "\n After swapping: ";
    obj.display();

    return 0;
}

