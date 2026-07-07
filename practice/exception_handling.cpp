// Problem: Demonstrate exception handling in C++.
// Logic: Use try, throw, and catch to handle division by zero.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter 1st number : ";
    cin >> a;
    cout << "Enter 2nd number : ";
    cin >> b;

    try
    {
        if(b == 0)
        {
            throw "Division by zero!";
        }

        cout << "Division of 1st number by 2nd number: " << a / b << endl;
    }

    catch(const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}