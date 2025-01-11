#include <iostream>
using namespace std;

int main()
{
    // ====================================================
    // Break Statement Example
    // ====================================================
    cout << "Break Statement Example:" << endl;
    cout << "------------------------" << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            cout << "Breaking the loop at i = 5!" << endl;
            break; // Exit the loop immediately
        }
        cout << "i = " << i << endl;
    }

    cout << "\nLoop ended because of the 'break' statement!" << endl;
    cout << "=============================================" << endl;

    // ====================================================
    // Continue Statement Example
    // ====================================================
    cout << "\nContinue Statement Example:" << endl;
    cout << "---------------------------" << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Skipping even number: " << i << endl;
            continue; // Skip to the next iteration
        }
        cout << "Processing odd number: " << i << endl;
    }

    cout << "\nLoop ended after processing all numbers!" << endl;
    cout << "=============================================" << endl;

    // ====================================================
    // Practical Use Case: Searching for a Number
    // ====================================================
    cout << "\nPractical Use Case: Searching for a Number:" << endl;
    cout << "-------------------------------------------" << endl;

    int numbers[] = {10, 20, 30, 40, 50};
    int searchNumber = 30;
    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == searchNumber)
        {
            found = true;
            cout << "Number " << searchNumber << " found at index " << i << "!" << endl;
            break; // Exit the loop once the number is found
        }
    }

    if (!found)
    {
        cout << "Number " << searchNumber << " not found in the array!" << endl;
    }

    cout << "=============================================" << endl;

    return 0;
}