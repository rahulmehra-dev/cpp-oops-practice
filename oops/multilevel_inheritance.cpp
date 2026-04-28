// Program: Multilevel Inheritance Example
// Concept: Multilevel Inheritance in C++
// Description: Demonstrates inheritance across multiple levels (Vehicle → Car → SportsCar) with constructor chaining.

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    string brand;

    Vehicle(string b)
    {
        brand = b;
    }

    void showBrand()
    {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle
{
public:
    int doors;

    Car(string b, int d) : Vehicle(b)
    {
        doors = d;
    }

    void showDoors()
    {
        cout << "Doors: " << doors << endl;
    }

};

class SportsCar : public Car
{
public:
    int topSpeed;

    SportsCar(string b, int d, int s) : Car(b, d)
    {
        topSpeed = s;
    }

    void showSpeed()
    {
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
    }
};

int main()
{
    SportsCar sc("Lamborghini", 2, 999);

    sc.showBrand();
    sc.showDoors();
    sc.showSpeed();

    return 0;
}