// Program: Single Inheritance Example
// Concept: Inheritance in C++
// Description: Demonstrates base and derived class with constructor chaining.

#include <iostream>
#include <string>

using namespace std;

class Animal
{  
public:
    string name;

    Animal(string n)
    {
        name = n;
    }

    void eat()
    {
        cout << name << " is eating." << endl;
    }
};

class Dog : public Animal
{
public:
    string breed;

    Dog(string n, string b) : Animal(n)
    {
        breed = b;
    }

    void bark()
    {
        cout << name << " is barking! Breed: " << breed << endl;
    }
};

int main()
{
    Dog d("Coco", "Mixed");

    d.eat();
    d.bark();

    return 0;
}