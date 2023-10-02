//c++ program to write student details(name,email,phone number)
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name,email;int phone;
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter email: ";
    cin>>email;
    cout<<"Enter phone number: ";
    cin>>phone;
    cout<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Phone Number: "<<phone<<endl;
    return 0;
}