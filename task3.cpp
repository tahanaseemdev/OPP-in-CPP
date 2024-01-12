/*Write a C++program to create an abstract class Bird with abstract methods fly() and makeSound().
Create subclasses Eagle and Hawk that extend the Bird class and implement the respective methods to
describe how each bird flies and makes a sound.*/
#include <iostream>
using namespace std;
class bird
{
public:
    virtual void fly() = 0;
    virtual void makeSound() = 0;
};
class eagle : public bird
{
public:
    void fly() override
    {
        cout << "Eagle flies in the sky.\n";
    }

    void makeSound() override
    {
        cout << "Eagle makes a screeching sound.\n";
    }
};
class hawk : public bird
{
public:
    void fly() override
    {
        cout << "Hawk flies in the air.\n";
    }

    void makeSound() override
    {
        cout << "Hawk makes a piercing cry.\n";
    }
};

int main()
{
    bird *b;
    eagle e;
    hawk h;
    b = &e;
    b->fly();
    b->makeSound();
    b = &h;
    b->fly();
    b->makeSound();
    return 0;
}
