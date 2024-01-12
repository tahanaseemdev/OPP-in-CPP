/*Write a C++ program to implement a class called Circle that has private member variables for radius.
Include member functions to calculate the circle's area and circumference.*/
#include <iostream>
#include <math.h>
using namespace std;
class circle
{
    double radius, area, circumference;
    double calculate(double radius)
    {
        area = M_PI * radius * radius;
        circumference = 2 * M_PI * radius;
        return area, circumference;
    }

public:
    double publicMemberFunction(double radius)
    {
        calculate(radius);              
    }
    double getArea(){
        return area;
    }
    double getCircumference(){
        return circumference;
    }
};
int main()
{
    double radius;
    circle obj;
    cout << "Enter radius ";
    cin >> radius;
    obj.publicMemberFunction(radius);
    cout << "Area is " << obj.getArea() << "\n";
    cout << "Circumference is " << obj.getCircumference();
}