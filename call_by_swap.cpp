//c++ program to swap two numbers using call by value, call by reference, call by pointer
#include<iostream>
using namespace std;

void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Swapped numbers: "<<x<<" "<<y<<endl;
}

void swap_pointer(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"Swapped numbers are(pointer): "<<*x<<" "<<*y<<endl;
}

void swap_reference(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Swapped numbers are(reference): "<<x<<" "<<y<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    swap(a,b);
    swap_pointer(&a,&b);
    swap_reference(a,b);
    return 0;
}