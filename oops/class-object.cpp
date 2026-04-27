// Program: Basic class and object example using constructor
// Concept: Class, Object, and Constructor in C++
// Description: Demonstrates initialization using parameterized constructor.

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int id;
    string name;

    // Constructor
    Student(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s(44, "Rahul"); //constructor call

    s.display();

    return 0;
}