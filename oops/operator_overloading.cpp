// Problem: Demonstrate operator overloading in a class.
// Logic: Overload the '+' operator to add two objects.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    void display()
    {
        cout << "\n\tReal part: " << real << endl;
        cout << "\n\tImaginary part: " << imag << endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp(0, 0);

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }
};

int main()
{
    Complex c1(1, 2);
    Complex c2(2, 3);

    Complex c3 = c1 + c2;

    cout <<"\nReal and imaginary parts for following objects: \n";
    cout <<"\nFor c1: \n\n";
    c1.display();
    cout <<"\nFor c2: \n\n";
    c2.display();
    cout <<"\nFor c3: \n\n";
    c3.display();
    
    return 0;
}