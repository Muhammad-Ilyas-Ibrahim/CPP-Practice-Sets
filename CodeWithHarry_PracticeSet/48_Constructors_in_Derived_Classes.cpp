#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
    Order of execution of Constructor -->  first A() and then B()
};

Case2:
class A: public B, public C{
    Order of execution of Constructor -->  first B() and then C() and then A()
};

Case3:
class A: public B, virtual public C{
    Order of execution of Constructor -->  first C() and then B() and then A()
    Because C is inherited as Virtual class so its Constructor will be invoked first
};
*/
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class Constructor is called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class Constructor is called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class Constructor called" << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    Derived obj(20, 30, 40, 50);
    obj.printDataBase1();
    obj.printDataBase2();
    obj.printDataDerived();
    return 0;
}