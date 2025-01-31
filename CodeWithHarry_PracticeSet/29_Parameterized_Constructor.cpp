#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex();
    Complex(int a1, int b1);
    void pritNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
// Default Constructor
Complex::Complex()
{
    a = 15;
    b = 20;
}
// Parameterized Constructor
Complex::Complex(int a1, int b1)
{
    a = a1;
    b = b1;
}
int main()
{
    Complex n;
    // Deafult Constructor is run br default,now the value of a & b will be 15 & 20 respectively
    n.pritNumber();

    // Implicit call
    Complex c1(100, 200);
    c1.pritNumber();

    // Explicit call
    Complex c2 = Complex(500, 1000);
    c2.pritNumber();
    return 0;
}