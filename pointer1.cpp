//c++ program to show value and address of a variable using pointer
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int *a=&n;
    cout<<"Value of n: "<<*a<<endl;
    cout<<"Address of n: "<<a<<endl;
    *a=7;
    cout<<"New value of n: "<<*a<<endl<<n<<endl<<"Address of n: "<<a<<endl;
    return 0;
}