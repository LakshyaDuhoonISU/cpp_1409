//c++ program to perform arithmetic operations
#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f; //declaring variables a,b,c,d,e,f
    int g; //declaring variable g for modulus operation
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    c=a+b; //addition
    d=a-b; //subtraction
    e=a*b; //multiplication
    f=a/b; //division
    g=int(a)%int(b); //modulus
    cout<<"Sum is: "<<c<<endl; 
    cout<<"Difference is: "<<d<<endl;
    cout<<"Multiplication is: "<<e<<endl;
    if (a==0.0 || b==0.0) //if a or b is equal to 0 then we have to tell the user that division by zero is not possible
    {
        cout<<"Division not possible"<<endl;
    }
    else
    {
        cout<<"Quotient is: "<<f<<endl;
    }
    cout<<"Remainder is: "<<g<<endl; //as modulus operation can only be performed on int variables, we have to convert the given numbers to integers
    return 0;
}
