// Problem: Demonstrate the use of a destructor in a class.
// Logic: Use constructor and destructor to show object creation and destruction.

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    Student(string n, int r)
    {
        cout << "\nConstructor called.\n";
        name = n;
        rollNo = r;
    }

    ~Student()
    {
        cout << "\nDestructor called.\n";
    }

    void display()
    {
        cout << "\nStudent Details:\n";
        cout << "\tName: " << name << endl;
        cout << "\tRoll No: " << rollNo <<endl;
    }
};

int main()
{
    Student s1("Rahul", 44);
    s1.display();

    return 0;
}