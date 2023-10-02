//c++ program to find size of array
#include<iostream>
using namespace std;
int main()
{
    string car[4]={"bmw","audi","ford","mercedes"};
    cout<<sizeof(car)/sizeof(string);
    return 0;
}