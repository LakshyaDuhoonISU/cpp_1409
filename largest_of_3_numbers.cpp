//c++ program to find the largest number of three numbers
#include<iostream>
using namespace std;
int main() //start of main function
{
    int a,b,c; //declaring three functions a,b,c
    cout<<"Enter three numbers: "; //ask the user to enter three numbers
    cin>>a>>b>>c; //give the values to variables a,b,c
    if (a>b && a>c) //if loop to check the different conditions
    cout<<"Largest number is: "<<a; //if a is the largest number then print it is the largest number
    else 
    {
        if (a<b && b>c) //if b is the largest number then print that it is the largest number
        cout<<"Largest number is: "<<b;
    else
        cout<<"Largest number is: "<<c; //if c is the largest number then print that it is the largest number
    }
    return 0; //end of main function
}
