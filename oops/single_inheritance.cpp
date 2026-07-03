// Problem: Demonstrate single inheritance in C++.
// Logic: Create a derived class that inherits data and functions from a base class.

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
     Person(string n, int a)
     {
        name = n;
        age = a;
     }

     void displayPerson()
     {
        cout << "\nPerson Details:\n";
        cout << "\tName: " << name << endl;
        cout << "\tAge: " << age <<endl;
     }
};

class Student : public Person
{
private:
    int rollNo;

public:
    Student(string n, int a, int r) : Person(n, a)
    {
        rollNo = r;
    }

    void displayStudent()
    {
        cout << "\nStudent Details:\n";
        cout << "\tRoll number: " << rollNo <<endl;
    }
};

int main()
{
    Student s1("Rahul", 19, 79);

    s1.displayPerson();
    s1.displayStudent();

    return 0;
}