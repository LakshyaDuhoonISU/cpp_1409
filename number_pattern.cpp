//c++ program to generate a number pattern of a given length in descending order
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for (int i=n;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
