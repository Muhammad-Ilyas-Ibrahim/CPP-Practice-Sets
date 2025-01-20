#include <iostream>
using namespace std;

// ====================================================
// Function Overloading Examples
// ====================================================
// Function overloading allows multiple functions to have the same name
// but different parameters (type, number, or order).

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to add two doubles
double add(double a, double b)
{
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function to concatenate two strings
string add(string a, string b)
{
    return a + b;
}

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Function Overloading in C++" << endl;
    cout << "===========================" << endl;

    // Adding two integers
    cout << "Sum of 5 and 10 (integers): " << add(5, 10) << endl;

    // Adding two doubles
    cout << "Sum of 3.5 and 2.7 (doubles): " << add(3.5, 2.7) << endl;

    // Adding three integers
    cout << "Sum of 5, 10, and 15: " << add(5, 10, 15) << endl;

    // Concatenating two strings
    cout << "Concatenation of 'Hello' and 'World': " << add("Hello", "World") << endl;

    cout << "===========================" << endl;
    return 0;
}