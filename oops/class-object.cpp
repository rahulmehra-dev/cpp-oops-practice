// Program: Basic class and object example
// Concept: Class and Object in C++
// Description: Demonstrates creation of class, object, and member function.

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int id;
    string name;

    void display()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;

    s.name = "Rahul";
    s.id = 44;

    s.display();

    return 0;
}