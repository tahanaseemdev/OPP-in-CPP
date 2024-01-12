/*Write a C++ that creates a class hierarchy for employees of a company.
The base class should be Employee, with subclasses Manager, Developer, and Programmer.
Each subclass should have properties such as name, address, salary, and job title.
Implement methods for calculating bonuses, generating performance reports, and managing projects*/
#include <iostream>
using namespace std;
class Employee
{
public:
    string name, jobTitle, address;
    int salary, bonus, yearsWorking, hoursWorking, projects;
    bool performance;

    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter number of years working: ";
        cin >> yearsWorking;
        if (yearsWorking > 5)
        {
            bonus = 1000;
        }
        else
        {
            bonus = 0;
        }
        cout << "Enter number of hours working: ";
        cin >> hoursWorking;
        if (hoursWorking > 40)
        {
            performance = true;
        }
        else
        {
            performance = false;
        }
        cout << "Enter number of projects: ";
        cin >> projects;
    }
    void showdata()
    {
        cout << "Name: " << name << "\n";
        cout << "Job title: " << jobTitle << "\n";
        cout << "Address: " << address << "\n";
        cout << "Salary: " << salary << "\n";
        cout << "Bonus: " << bonus << "\n";
        cout << "Salary with bonus: " << salary + bonus << "\n";
        if (performance == true)
        {
            cout << "Performance: Good\n";
        }
        else
        {
            cout << "Performance: Bad\n";
        }
        cout << "Projects: " << projects << "\n";
    }
};

class Manager : public Employee
{
public:
    void getdata()
    {
        Employee::getdata();
        if (projects < 10)
        {
            salary -= 1000;
        }
    }
    void showdata()
    {
        Employee::showdata();
    }
};
class Developer : public Employee
{
public:
    void getdata()
    {
        Employee::getdata();
        if (projects < 5)
        {
            salary -= 1000;
        }
    }
    void showdata()
    {
        Employee::showdata();
    }
};
class Programmer : public Employee
{
public:
    void getdata()
    {
        Employee::getdata();
        if (projects < 8)
        {
            salary -= 1000;
        }
    }
    void showdata()
    {
        Employee::showdata();
    }
};
int main()
{
    while (true)
    {
        string employee;
        cout << "Enter the type of employee (Manager, Developer, or Programmer): ";
        cin >> employee;
        if (employee == "Manager")
        {
            Manager m;
            m.getdata();
            m.showdata();
            break;
        }
        else if (employee == "Developer")
        {
            Developer d;
            d.getdata();
            d.showdata();
            break;
        }
        else if (employee == "Programmer")
        {
            Programmer p;
            p.getdata();
            p.showdata();
            break;
        }
        else
        {
            cout << "Invalid employee type! Please try again.\n";
        }
    }
    return 0;
}