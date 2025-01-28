#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2); // Can be decalered anywhere in the class
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    //  friend functions are used to access private members of class
    //  This is for Object Functions (non member functions)
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
// Properties of the friend funtions
// 1. Not in the scope of class
// 2. Since it is not in the scope of the class so it can not called by the object of the class.  c1.sumComplex() will be Invalid
// 3. Can be invoked without the help of any object
// 4. Usually contains the arguments as objects
// 5. Can be declared inside the public or private section of the class
// 6. It cannot access the members directly by their name ,it needs an object to use them
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(3, 4);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}