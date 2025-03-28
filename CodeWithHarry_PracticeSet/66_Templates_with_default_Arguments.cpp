#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float>
class Ammad
{
public:
    T1 a;
    T2 b;
    Ammad(T1 a, T2 b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<"Data1: "<<a<<endl<<"Data2: "<<b<<endl;
    }
};
int main()
{
    //We can do it then the default datatypes will be used
    Ammad <> obj1(45,99.99);
    obj1.display();

    // Also we can change Datatypes
    Ammad <int,char> obj2(555,73);
    obj2.display();
    return 0;
}