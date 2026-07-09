// Problem: Demonstrate file handling in C++.
// Logic: Create a file, write data to it, and read the data back using file streams.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ofstream outFile("student.txt");

    outFile << "Name: Rahul" << endl;
    outFile << "Roll No: 44" << endl;
    outFile << "Marks: 95" << endl;

    outFile.close();

    ifstream inFile("student.txt");

    cout << "Student.txt contents are:\n";

    while(getline(inFile,line))
    {
        cout << "\t" << line << endl;
    }

    inFile.close();

    return 0;
}