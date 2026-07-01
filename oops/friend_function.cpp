// Problem: Demonstrate the use of a friend function in a class.
// Logic: Use a friend function to access private data members of a class.

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "\nFrom display function\n";
        cout << "\n\tStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    friend void showDetails(Student s);
};

void showDetails(Student s)
{
    cout << "\nFrom friend function\n";
    cout << "\n\tStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s1("Rahul", 77);
    s1.display();
    showDetails(s1);
    
    return 0;
}