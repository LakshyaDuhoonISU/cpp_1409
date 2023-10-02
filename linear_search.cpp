//c++ program to perform a linear search for a given number and print the results
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,a,b;bool check;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>a;
        arr[i]=a;
    }
    cout<<"Enter number to search for: ";
    cin>>b;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==b)
        {
            cout<<"Element "<<b<<" found at index "<<i<<endl;
            check=true;
        }
    }
    if (check==false)
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}