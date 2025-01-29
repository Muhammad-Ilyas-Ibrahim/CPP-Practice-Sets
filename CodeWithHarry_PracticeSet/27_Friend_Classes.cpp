#include <iostream>
using namespace std;

// Forward declaration
class Complex; // without this
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
    // We have not defined the Complex class yet thats why we did not make objects for arguments
};

class Complex
{
    int a, b;
    // friend int Calculator::sumRealComplex(Complex o1,Complex o2);
    // friend int Calculator::sumCompComplex(Complex o1,Complex o2);
    // If we have many functions we want to make friend then instead of making every function friend
    // We will make the class friend such as:
    friend class Calculator;
    // Now the every function of Calculator class is able to access private members of Complex class
public:
    void setNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void pritNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
// If we define the sumRealComplex function in Calculator class then it will throw error
// Because we want to access 'a' member of Complex class
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex n1, n2;
    n1.setNumber(5, 10);
    n1.pritNumber();

    n2.setNumber(10, 20);
    n2.pritNumber();

    Calculator calc;
    int res = calc.sumRealComplex(n1, n2);
    cout << "The sum of the real part of n1 and n2 objects is " << res << endl;
    int res1 = calc.sumCompComplex(n1, n2);
    cout << "The sum of the complex part of n1 and n2 objects is " << res1 << endl;
    return 0;
}