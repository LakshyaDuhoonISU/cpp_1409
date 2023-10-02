//c++ program to print a number in reverse order
#include<iostream>
using namespace std;
int main() 
{
    int num,rev=0; //declare two variables num and rev and initialise the variable rev with value 0
    cout<<"Enter a number: "; 
    cin>>num; 
    while (num!=0) //repeat the loop until the given num is not empty
    {
       int digit=num%10; //in the variable digit, store the remainder of division of num with 10, which gives the last digit of the given number
       rev=rev*10+digit; //we store the value from digit variable to rev variable
       num=num/10;  //we remove the digit we have stored in the rev variable from the num variable
    }
    cout<<"Reversed number is "<<rev; //print the reversed number
    return 0; //end of main function
}
