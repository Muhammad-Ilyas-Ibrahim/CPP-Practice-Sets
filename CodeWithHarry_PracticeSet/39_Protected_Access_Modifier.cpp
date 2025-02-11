#include <iostream>
using namespace std;

class Base
{
    int a;

protected:
    int b;

public:
    int c;
    void setData(int a1)
    {
        c = a1;
        b = 50;
        a = 100;
    }
    void getData()
    {
        cout << "Value of a is " << a << ", b is  " << b << " and c is " << c << endl;
    }
};

class Derived : public Base
{
    int d;
};
/*
For a protected member:
                            Public Derivation           Private Derivation              Protected Derivation
1. Private members          Not Inherited               Not Inherited                   Not Inherited
2. Protected members        Protected                   Private                         Protected
3. Public members           Public                      Private                         Protected
*/
int main()
{
    Derived obj1;
    obj1.setData(150);
    obj1.getData();

    Base obj2;
    obj2.setData(120);
    obj2.getData();
    return 0;
}