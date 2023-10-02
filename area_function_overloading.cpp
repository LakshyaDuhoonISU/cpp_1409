//c++ program to compute area of circle and triangle by overloading the area function
#include<iostream>
using namespace std;
double area(double r) //function to compute area of triangle using formula, area=pi*r*r
{
    double area=3.14*r*r; //using double data type to compute numbers with decimal points
    return area; //returning the result of area 
}
double area(double b, double h) //function to compute area of triangle using formula, area=0.5*b*h
{
    double area=0.5*b*h; //using double data type to compute numbers with decimal points
    return area; //returning the result of area
}
int main()
{
    double a,b,h,c,r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Enter base of triangle: ";
    cin>>b;
    cout<<"Enter height of triangle: ";
    cin>>h;
    a=area(r); //calling the circle area function and storing the result in variable a
    c=area(b,h); //calling the triangle area function and storing the result in variable c
    cout<<"Area of circle: "<<a<<endl; //printing the result of area of circle on screen
    cout<<"Area of triangle: "<<c<<endl; //printing the result of area of triangle on screen
    return 0;
}