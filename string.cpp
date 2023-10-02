//c++ program to perform string operations
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first,last,fullname;
    first="Lakshya ";
    last="Duhoon";
    fullname=first.append(last);
    cout<<fullname<<endl;
    return 0;
}