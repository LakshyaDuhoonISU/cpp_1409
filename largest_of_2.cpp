//c++ program to find the largest number from the 2 numbers given by the user
#include<iostream>
using namespace std;
inline int largestNumber(int x, int y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;
    c=largestNumber(a,b);
    cout<<"Largest number is: "<<c<<endl;
    return 0;
}