// Program: Factorial using Recursion
// Concept: Recursion in C++
// Description: Calculates factorial of a number using recursive function.

#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int num, result;

    cout << "Enter a number for factorial finding: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial not possible for negative numbers." << endl;
        return 0;
    }

    result = factorial(num);

    cout << "Factorial is: " << result << endl;

    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}