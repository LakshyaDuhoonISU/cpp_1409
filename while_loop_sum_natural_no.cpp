//c++ program to find sum of n natural numbers using while loop
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=1;
    cout<<"Enter the number to find it's sum: ";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"Sum of "<<n<<" numbers is: "<<sum;
    return 0;
}