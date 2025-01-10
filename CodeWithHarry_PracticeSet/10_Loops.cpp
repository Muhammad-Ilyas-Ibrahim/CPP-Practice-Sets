#include <iostream>
using namespace std;
int main()
{
    //		****** Loops in C++ ******
    // There are 3 types of Loops in C++
    // 1. For Loop
    // 2. While Loop
    // 3. Do While Loop

    //	*** For Loop ***
    int a = 0;
    cout << "Value of a:" << a << endl;
    cout << "Enter a number: ";
    cin >> a;
    for (int i = 0; i <= 10; i++)
    {
        cout << "2 x " << i << " = " << i * 2 << endl;
    }
    return 0;
}