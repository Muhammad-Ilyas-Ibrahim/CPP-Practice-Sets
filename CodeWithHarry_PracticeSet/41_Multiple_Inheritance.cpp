#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void setbase2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The sum is " << base1int + base2int << endl;
    }
};
/*
In this inheritance, the Derived class will look like this:

Data members:
base1int --> protected
base2int --> protected

Member Functions:
set_base1int() --> public
set_base2int() --> public
show() --> public
*/
int main()
{
    Derived obj;
    obj.setbase1int(100);
    obj.setbase2int(500);
    obj.show();
    return 0;
}