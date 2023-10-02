//c+ program to find largest number of array
#include<iostream>
using namespace std;
int main()
{
    int n,arr[10]={},largest=0;
    cout<<"Enter 10 numbers:"<<endl;
    for (int i=0;i<10;i++)
    {
        cin>>n;   
        arr[i]=n;
    }
    for (int i=0;i<10;i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"Largest number is: "<<largest;
    return 0;
}