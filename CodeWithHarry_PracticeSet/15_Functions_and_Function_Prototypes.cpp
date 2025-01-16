#include <iostream>
using namespace std;

// ====================================================
// Function Prototypes
// ====================================================
// Declare function prototypes to tell the compiler about the functions
// before they are defined.
int add(int a, int b);   // Function to add two numbers
void greet(string name); // Function to greet a user
bool isEven(int number); // Function to check if a number is even

// ====================================================
// Main Function
// ====================================================
int main()
{
    cout << "Functions and Function Prototypes in C++" << endl;
    cout << "========================================" << endl;

    // Call the 'add' function
    int result = add(5, 10);
    cout << "Sum of 5 and 10 is: " << result << endl;

    // Call the 'greet' function
    greet("Ilyas");

    // Call the 'isEven' function
    int number = 7;
    if (isEven(number))
    {
        cout << number << " is even." << endl;
    }
    else
    {
        cout << number << " is odd." << endl;
    }

    cout << "========================================" << endl;
    return 0;
}

// ====================================================
// Function Definitions
// ====================================================

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to greet a user
void greet(string name)
{
    cout << "Hello, " << name << "! Welcome to the program." << endl;
}

// Function to check if a number is even
bool isEven(int number)
{
    return (number % 2 == 0);
}