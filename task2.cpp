/* Write a C++ program to create a base class Shape with methods draw() and calculateArea().
Create two subclasses Circle and Cylinder. Override the draw() method in each subclass to draw the respective shape.
In addition, override the calculateArea() method in the Cylinder subclass to calculate and return
the total surface area of the cylinder.*/
#include <iostream>
using namespace std;
class shape
{
public:
    float area, radius,height;
    void draw()
    {
        cout << "Drawing a shape\n";
    }
    void calculateArea()
    {
        area = 0;
    }
};
class circle : public shape
{
public:
    void draw()
    {
        cout << "Drawing a Circle\n";
    }
    float calculateArea()
    {
        cout<<"Enter radius: ";
        cin>>radius;
        area = 3.14159 * radius * radius;
        return area;
    }
};
class cylinder : public shape
{
public:
    float height;
    void draw()
    {
        cout << "Drawing a Cylinder\n";
    }
    float calculateArea()
    {
        cout<<"Enter radius: ";
        cin>>radius;
        cout<<"Enter height: ";
        cin>>height;
        area = 2 * 3.14159 * radius * height + 2 * 3.14159 * radius * radius;
        return area;
    }
};
int main(){
    shape s;
    circle c;
    cylinder cy;
    while (true)
    {
        string choice;
    cout << "Enter your choice (circle or cylinder): ";
    cin >> choice;
        if(choice =="circle"){
            c.draw();
            cout<<"Area: "<<c.calculateArea()<<"\n";
            break;
        }else if(choice=="cylinder"){
            cy.draw();
            cout<<"Area: "<<cy.calculateArea()<<"\n";
            break;
        }
        else{
            cout<<"Invalid choice\n";
        }
    }
    
    return 0;
}