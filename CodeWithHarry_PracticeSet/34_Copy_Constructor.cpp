#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // When no Copy Constructor is found, compiler supply its own Copy Constructor
    Number(Number &obj)
    {
        cout << "Copy Constructor called" << endl;
        a = obj.a;
    }
    void print()
    {
        cout << "The number for this object is: " << a << endl;
    }
};
int main()
{
    Number x, y(2), z(45);
    x.print();
    y.print();
    z.print();
    // z1 should exactly resemble z or x or y
    Number x1(x), y1(y), z1(z), z2;
    x1.print();
    y1.print();
    z1.print();
    z2 = z; // Copy Constructor not invoked
    z2.print();

    Number z3 = z; // Copy Constructor invoked
    z3.print();
    return 0;
}