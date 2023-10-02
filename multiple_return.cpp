//c++ program to display relationship between two int variables using multiple return statements
#include<iostream>
using namespace std;
int relationship(int a,int b)
{
    if (a==b)
    {
        return 0;
    }
    else if (a>b)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    c=relationship(a,b);
    if (c==0)
    {
        cout<<"Both numbers are equal"<<endl;
    }
    else if (c==1)
    {
        cout<<"A is greater than B"<<endl;
    }
    else
    {
        cout<<"B is greater than A"<<endl;
    }
}