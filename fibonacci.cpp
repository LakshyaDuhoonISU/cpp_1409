//c++ program to print a fibonacci sequence upto the given number
#include <iostream>
using namespace std;
int main() 
{
    int n,next,first=0,second=1;
    cout << "Enter the number of Fibonacci terms to generate: ";
    cin >> n;
    if (n < 1) 
    {
        cout << "Please enter a positive number." << endl;
    }
    else {
    cout << "Fibonacci Sequence up to " << n << " terms: ";
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << first;
        else if (i == 2)
            cout << ", " << second;
        else 
        {
            next = first + second;
            cout << ", " << next;
            first = second;
            second = next;
        }
    }
    }
    cout << endl;
    return 0;
}
