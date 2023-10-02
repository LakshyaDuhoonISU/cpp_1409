//c++ program to print a star pattern in an ascending order of a given number of rows
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows you want to print: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=2;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<" * "<<endl;
    }
    return 0;
}