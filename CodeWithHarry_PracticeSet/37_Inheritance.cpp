#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int empid, int salary1)
    {
        id = empid;
        salary = salary1;
    }
};

// Derived class
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
// members/methods/etc...
// }

// Note:
// 1. Default visibility mode is Private
// 2. Public Visibility Mode: public members of the base class becomes the public members of the derived class
// 3. Private Visibility Mode: public members of the base class becomes the private members of the derived class
// 4. Private members are never inherited
class programmer : public Employee
{
public:
    int languageCode = 9;
    programmer() {}
    programmer(int inpid)
    {
        id = inpid;
    }
    void getdata()
    {
        cout << id;
    }
};
int main()
{
    Employee shoaib(5, 20000), ali(3, 30000);
    cout << shoaib.salary << endl;
    cout << ali.salary << endl;
    programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getdata();
    return 0;
}