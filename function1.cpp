// c++ program to use add function to add user given numbers
#include <iostream>
using namespace std;
inline int add(int x, int y, int r)
{
    int z = x + y + r;
    return z;
}
int main()
{
    int a, b, c, sum;
    cout << "Enter value of a: " << endl;
    cin >> a;
    cout << "Enter value of b: " << endl;
    cin >> b;
    cout << "Enter value of c: " << endl;
    cin >> c;
    sum = add(a, b, c);
    cout << "Sum is: " << sum << endl;
    return 0;
}
