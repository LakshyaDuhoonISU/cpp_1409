//c++ program to print a multiplication table of a given number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number you want to see the table of: ";
    cin>>n;
    for (int i=1;i<=10;i++) //printing a multiplication table of a given number till n*10 is reached
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl; //printing the table
    }
    return 0;
}