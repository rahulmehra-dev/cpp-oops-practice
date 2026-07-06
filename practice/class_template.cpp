// Problem: Demonstrate the use of class templates in C++.
// Logic: Create a generic class that works with different data types.

#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1;
    T num2;

public:
    T add()
    {
        return num1 + num2;
    }

    Calculator(T q, T u)
    {
        num1 = q;
        num2 = u;
    }
};

int main()
{
    Calculator<int> c1(1, 2);
    Calculator<float> c2(2.3f, 3.5f);

    cout << "\nResults of generic additions:\n\n";
    cout << "\t" << c1.add() << endl;
    cout << "\t" << c2.add() << endl;

    return 0;
}