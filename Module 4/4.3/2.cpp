//Write a program of to sort the array using templates.
#include<iostream>
using namespace std;
template <typename T,int size>
void sorting(T (&arr)[size])
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int a[5]={5,65,2,45,23},i;
    cout<<"\nBefore sorting := ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    sorting(a);
    cout<<"\nAfter sorting := ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
