//c++ program to generate a factorial of a  given number using do while loop
#include <iostream>
using namespace std;

int main() {
    int number,factorial = 1;  // Initialising factorial number with a value of 1 and declaring an int variable named number

    // Input the number from the user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the input is valid (non-negative or zero)
    if (number <= 0) 
    {
        cout << "Factorial is not defined." << endl;
    } 
    else 
    {
        // Calculate the factorial using a do-while loop
        do 
        {
            factorial = factorial*number;
            number--;
        } while (number > 0);

        // Display the factorial
        cout << "Factorial is: " << factorial << endl;
    }

    return 0;
}
