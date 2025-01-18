#include <iostream>
using namespace std;

// ====================================================
// Inline Function Example
// ====================================================
// Inline functions are used to reduce the overhead of function calls
// for small, frequently used functions.
// The compiler replaces the function call with the function's code.
inline int square(int x)
{
    return x * x;
}

// ====================================================
// Default Arguments Example
// ====================================================
// Default arguments allow a function to be called with fewer arguments
// than it is defined to accept.
int multiply(int a, int b = 2)
{
    return a * b;
}

// ====================================================
// Constant Arguments Example
// ====================================================
// Constant arguments ensure that the function does not modify the value
// of the argument passed to it.
void printValue(const int value)
{
    // value = 10; // This would cause a compilation error
    cout << "The value is: " << value << endl;
}

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Inline Functions, Default Arguments & Constant Arguments in C++" << endl;
    cout << "===============================================================" << endl;

    // Inline Function Example
    int num = 5;
    cout << "Square of " << num << " is: " << square(num) << endl;

    // Default Arguments Example
    cout << "Multiply 5 by default (2): " << multiply(5) << endl;
    cout << "Multiply 5 by 3: " << multiply(5, 3) << endl;

    // Constant Arguments Example
    int value = 7;
    printValue(value);

    cout << "===============================================================" << endl;
    return 0;
}