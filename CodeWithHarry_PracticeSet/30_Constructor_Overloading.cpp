#include <iostream>
using namespace std;
class Complex
{
    int x, y;

public:
    Complex(void);
    Complex(int a1);
    Complex(int a1, int b1);
    void pritNumber()
    {
        cout << "Your coordinates are (" << x << " , " << y << ")" << endl;
    }
};

// Default Constructor which takes no arguments
Complex::Complex(void)
{
    x = 0;
    y = 0;
}

// Parameterized Constructor which takes 1 arguments
Complex::Complex(int a1)
{
    x = a1;
    y = 0;
}

// Parameterized Constructor which takes 2 arguments
// Tip: We can also give a default value to b1 then we don't need above Constructor
Complex::Complex(int a1, int b1)
{
    x = a1;
    y = b1;
}
int main()
{
    // Default Constructor will automatically set the values to 0
    Complex n1;
    n1.pritNumber();

    // Calling the Constructor which takes 1 argument
    Complex n2(100);
    n2.pritNumber();

    // Calling the Constructor which takes 2 arguments
    Complex n3(100, 200);
    n3.pritNumber();

    // In next video we will learn <Constructors with default arguments>.
    // I already know that So I will not make the new file for that video

    return 0;
}