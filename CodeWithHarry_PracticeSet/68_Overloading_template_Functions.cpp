#include <iostream>
using namespace std;

template <class uet>
class Ammad
{
public:
    uet data;
    Ammad(uet a)
    {
        data = a;
    }
    void display(void);
};

template <class uet>
void Ammad<uet>::display()
{
    cout << data << endl;
}

void func(int a){
    cout<<"I am a first function "<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"I am a templatised function 1 : "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am a templatised function 2 : "<<a<<endl;
}


int main()
{
    // Ammad<float> h(5.76);
    Ammad<char> h('c');
    cout << h.data << endl;
    h.display();

    func(15); // Exact match takes the highest priority
    func1(45);
    return 0;
}