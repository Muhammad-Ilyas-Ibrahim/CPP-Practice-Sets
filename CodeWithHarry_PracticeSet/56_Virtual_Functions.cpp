#include <iostream>
using namespace std;
// This is Run Time Polymorphism
class BaseClass
{
public:
    int base_var = 5;
    virtual void display()
    {
        cout << "Displaying Base Class variable: " << base_var << endl;
    }
};
// virtual keyword just tell the class that if the pointer is pointing to the object of derived class then run
// its function and this is called Run Time Polymorphism.

class DerivedClass : public BaseClass
{
public:
    int derived_var = 10;
    void display()
    {
        cout << "Displaying Derived Class variable: " << derived_var << endl;
        cout << "Displaying Base Class variable in Derived Class: " << base_var << endl;
    }
};
int main()
{
    BaseClass *base_class_poniter;
    BaseClass base_obj;
    DerivedClass derived_obj;
    base_class_poniter = &derived_obj; // Pointing base class pointer to derived class object
    base_class_poniter->display();
    return 0;
}