// Program: Access Specifiers Example
// Concept: public, private, protected in C++
// Description: Demonstrates how different access levels work in class and inheritance.

#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
    int marks;    // cannot access directly

    protected:
    int age;      // accessible in derived class

    public:
    string name;  // accessible everywhere

    // Setter for private variables
    void setMarks(int m)
    {
        marks = m;
    }

    // Getter for private variables
    void getMarks()
    {
        cout << "Marks: " << marks << endl;
    }
};

class Result : public Student
{
    public:
        void setAge(int a)
        {
            age = a; // protected accessible here
        }

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            getMarks();
        }
};

int main()
{
    Result r;

    r.name = "Rahul";    // public
    r.setMarks(100);     // private via function
    r.setAge(18);        // protected via derived

    r.display();


    return 0;
}