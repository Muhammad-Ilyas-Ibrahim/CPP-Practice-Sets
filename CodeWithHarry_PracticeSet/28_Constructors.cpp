// Characteristics of Contstructors
// 1. It should be declared in public section of class
// 2. They are automatically invoked whenever the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default arguments
// 5. We cannot to refer to their address

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Craeting a Contructor
    // Constructure is a special member function of a class which has the same name as of the class
    // Is is used to initialize the objects of its classes
    // It is automatically invoked wheever an object is craeted
    Complex(); // Constructor Declaration

    void pritNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex() // This is a default Constructor
{
    a = 10;
    b = 5;
}
int main()
{
    Complex c;
    c.pritNumber();
    return 0;
}