//c++ program to find sum of n natural numbers using for loop
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a natural number to find it's sum: ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}
