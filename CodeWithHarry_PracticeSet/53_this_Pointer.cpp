#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // void setData(int a){
    A &setData(int a)
    {
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "Value of a is " << a << endl;
    }
};

int main()
{

    // this is a keyword which is a pointer which points to the object which invokes the member function

    // A obj1;
    // obj1.setData(56);
    // obj1.getData();

    A obj2;
    obj2.setData(5699).getData();

    return 0;
}