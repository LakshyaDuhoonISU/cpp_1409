//c++ program to store marks of 10 people in an array and display them
#include<iostream>
using namespace std;
int main()
{
    int n,avg,sum,marks[10]={};
    for (int i=0;i<10;i++)
    {
        cout<<"Enter marks of roll no "<<i+1<<": ";
        cin>>n;
        marks[i]=n;
    }
    cout<<endl;
    for (int i=0;i<10;i++)
    {
        cout<<"Marks of roll no "<<i+1<<": "<<marks[i]<<endl;
        sum=sum+marks[i];
    }
    avg=sum/10;
    cout<<"Average marks: "<<avg<<endl;
    return 0;
}