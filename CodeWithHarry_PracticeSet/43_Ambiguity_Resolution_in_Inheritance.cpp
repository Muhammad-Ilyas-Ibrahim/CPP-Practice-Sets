#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kesy ho?" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a = 5;

public:
    void greet()
    {
        // To remove ambiguity we have to specify the class and its member function like given below:
        Base1::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello World!" << endl;
    }
};
class D : public B
{
public:
    // Compiler will automatically overwrite the say member function of class B
    // and ambiguity will resolved automatically here in single inheritance
    void say()
    {
        cout << "Hello Programmers" << endl;
    }
};

int main()
{
    // Base1 obj1;
    // obj1.greet();

    // Base2 obj2;
    // obj2.greet();

    // Derived obj;
    // obj.greet();

    B obj3;
    obj3.say();

    D obj4;
    obj4.say();
    return 0;
}