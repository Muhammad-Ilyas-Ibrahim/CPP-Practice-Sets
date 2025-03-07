#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var1;
    void display()
    {
        cout << "Displaying Base Class variable: " << var1 << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var2;
    void display()
    {
        cout << "Displaying Derived Class variable: " << var2 << endl;
        cout << "Displaying Base Class variable in Derived Class: " << var1 << endl;
    }
};
int main()
{
    BaseClass *base_class_poniter;
    BaseClass obj1;
    DerivedClass obj2;
    base_class_poniter = &obj2; // Pointing base class pointer to derived class
    base_class_poniter->var1 = 45;
    // base_class_poniter ->var2 = 145; // Will throw an error because we can't access Derived Class
    // members directly by base class pointer
    // Base Class pointer will point to Base Class members
    base_class_poniter->display();

    base_class_poniter->var1 = 1455;
    base_class_poniter->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj2;
    derived_class_pointer->var2 = 788;
    derived_class_pointer->display();

    return 0;
}