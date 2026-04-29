// Program: Runtime Polymorphism Example
// Concept: Function Overriding and Virtual Functions in C++
// Description: Demonstrates runtime polymorphism using base class pointer to call different implementations of area() in derived classes.

#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Calculating area..." << endl;
    }
};

class Circle : public Shape
{
public:
    float radius;

    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
public:
    float length, width;

    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area() override
    {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main()
{
    Shape *s;

    Circle c(5);
    Rectangle r(3, 4);

    s = &c;
    s->area();

    s = &r;
    s->area();

    return 0;
}