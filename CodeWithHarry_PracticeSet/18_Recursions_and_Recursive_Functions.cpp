#include <iostream>
using namespace std;

// ====================================================
// Recursive Function to Calculate Factorial
// ====================================================
// Factorial of a number n is defined as:
// n! = n * (n-1) * (n-2) * ... * 1
// Base case: 0! = 1
int factorial(int n)
{
    if (n == 0)
    {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive call
}

// ====================================================
// Recursive Function to Calculate Fibonacci Number
// ====================================================
// Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, ...
// Each number is the sum of the two preceding ones.
// Base cases: fib(0) = 0, fib(1) = 1

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0; // Base case
    }
    if (n == 1)
    {
        return 1; // Base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Recursions & Recursive Functions in C++" << endl;
    cout << "=======================================" << endl;

    // Factorial Example
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    // Fibonacci Example
    int fibNum = 6;
    cout << "Fibonacci number at position " << fibNum << " is: " << fibonacci(fibNum) << endl;

    cout << "=======================================" << endl;
    return 0;
}