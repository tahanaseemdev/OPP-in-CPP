/*Write a c++program to create a class called Student with private instance variables
student_id, student_name, and grades. Provide public getter and setter methods to access and modify
the student_id and student_name variables. However, provide a method called addGrade() that allows
adding a grade to the grades variable while performing additional validation.*/
#include <iostream>
using namespace std;
class Student
{
private:
    int student_id, grades;
    string student_name;

public:
    int getStudentid()
    {
        return student_id;
    }
    void setStudentid(int id)
    {
        student_id = id;
    }
    string getStudentname()
    {
        return student_name;
    }
    void setStudentname(string name)
    {
        student_name = name;
    }
    int addGrade()
    {
        return grades;
    }
    void setGrade(int grade)
    {
        grades= grade;
    }
};
int main()
{
    Student s;
    s.setStudentid(123);
    s.setStudentname("John");
    s.setGrade(90);
    cout << "Student ID: " << s.getStudentid() << "\n";
    cout << "Student Name: " << s.getStudentname() << "\n";
    cout << "Student Grade: " << s.addGrade() << "\n";
    return 0;
}
