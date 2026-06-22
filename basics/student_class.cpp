// Problem: Create a Student class and display student details.
// Logic: Use a class with data members and member functions for input and display.

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
    void input()
    {
        cout << "\tEnter name: ";
        cin >> name;

        cout << "\tEnter roll number: ";
        cin >> rollNo;

        cout << "\tEnter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details:\n";
        cout << "\tName: " << name << endl;
        cout << "\tRoll No: " << rollNo <<endl;
        cout << "\tMarks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}