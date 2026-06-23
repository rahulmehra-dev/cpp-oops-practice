// Problem: Demonstrate the use of constructors in a class.
// Logic: Use default and parameterized constructors to initialize object data.

#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string name;
    int rollNo;
    float marks;

    public:
    void display()
    {
        cout << "\nStudent Details:\n";
        cout << "\tName: " << name << endl;
        cout << "\tRoll No: " << rollNo <<endl;
        cout << "\tMarks: " << marks << endl;
    }

    Student()
    {
        cout << "\nDefault constructor called.\n";
        name = "Unknown";
        rollNo = 0;
        marks = 0.0;
    }

    Student(string n, int r, float m)
    {
        cout << "\nParameterized constructor called.\n";
        name = n;
        rollNo = r;
        marks = m;
    }
};

int main()
{
    Student s1;
    Student s2("Harsh", 16, 99.9);

    s1.display();
    s2.display();

    return 0;
}