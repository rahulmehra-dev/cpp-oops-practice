// Problem: Demonstrate the use of function templates in C++.
// Logic: Create a generic function that works with different data types.

#include <iostream>
using namespace std;
template <class T>

T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "\nAddition using Function Template:\n\n";
    cout << "\tFor integers: " << add(1, 2) << endl;
    cout << "\tFor floats: " << add(1.2f, 3.4f) << endl;
    cout << "\tFor doubles: " << add(2.3, 3.2) << endl;

    return 0;
}