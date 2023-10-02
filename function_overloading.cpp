//c++ program to show function overloading
#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"Function 1 is called"<<endl;
    cout<<"Addition is: "<<a+b<<endl<<endl;
}
void add(int a,int b,int c)
{
    cout<<"Function 2 is called"<<endl;
    cout<<"Addition is: "<<a+b+c<<endl<<endl;
}
void add(float a,int b,int c)
{ 
    cout<<"Function 3 is called"<<endl;
    cout<<"Addition is: "<<a+b+c<<endl<<endl;
}
int main()
{
    int a,b,c;float d;
    cout<<"Enter value of a: "<<endl;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;
    cout<<"Enter value of c: "<<endl;
    cin>>c;
    cout<<"Enter value of d: "<<endl;
    cin>>d;
    add(a,b); //Function 1 is called
    add(a,b,c); //Function 2 is called
    add(d,b,c); //Function 3 is called
    return 0;
}

/* 1)wap to compute area of triangle and circle by overloading area function
2)wap to swap two numbers using call by value, reference, pointers */