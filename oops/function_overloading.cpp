// Problem: Demonstrate function overloading in a class.
// Logic: Create multiple functions with the same name but different parameters.

#include <iostream>
using namespace std;

class Calculator
{
public:
    void add(int x, int y)
    {
        cout << "\nSum of two integers: " << x + y << endl;
    }

    void add(float a, float b)
    {
        cout << "\nSum of two floats: " << a + b << endl;
    }

    void add(int c, int d, int e)
    {
        cout << "\nSum of three integers: " << c + d + e << endl;
    }

};

int main()
{
    Calculator c;

    c.add(12, 13);
    c.add(36.5f, 68.7f);
    c.add(4, 5, 6);

    return 0;
}