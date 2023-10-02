//c++ program to find the factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int num,factorial;
    cout<<"Enter a value to find its factorial: ";
    cin>>num;
    if (num<=0)
    cout<<"Enter a valid value!";
    else
    {
        for (int i=1;i<=num;i++)
        {
            factorial=factorial*i;
        }
        cout<<"The factorial of "<<num<<" is "<<factorial;
    }
    return 0;
}