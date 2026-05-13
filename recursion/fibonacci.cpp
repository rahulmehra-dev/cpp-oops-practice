// Program: Fibonacci using Recursion
// Concept: Recursion in C++
// Description: Prints first n terms of fibonacci series using recursive function.

#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Fibonacci series not possible for negative numbers." << endl;
        return 0;
    }

    cout << "Fibonacci series:"<<endl;

    for (i = 0; i < num; i++)
    {
        cout << fib(i) << endl;
    }

    cout << endl;

    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    if (n == 1)
    {
        return 1;
    }

    return fib(n - 2) + fib(n - 1);
}