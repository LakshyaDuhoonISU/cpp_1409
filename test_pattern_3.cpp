//c++ program to print an increasing and decreasing star triangle
#include<iostream>
using namespace std;
int main()
{
    for (int i=0;i<8;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=7;i>0;i--)
    {
        for (int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}