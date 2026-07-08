// Problem: Demonstrate file handling in C++.
// Logic: Create a file and write data to it using an output file stream.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile("student.txt");

    outFile << "Name: Rahul" << endl;
    outFile << "Roll No: 44" << endl;
    outFile << "Marks: 95" << endl;

    outFile.close();

    return 0;
}