#include <iostream>
using namespace std;
template<class T1, class T2>
class myClass{
public:
    T1 data1;
    T2 data2;
    myClass(T1 d1, T2 d2){
        data1 = d1;
        data2 = d2;
    }
    void display(){
        cout<<"Data1: "<<this->data1<<endl<<"Data2: "<<this->data2<<endl;
    }
};

int main(){
    myClass <int,char> obj1(10,65); //65 is ASCII Value of A
    obj1.display(); 
    return 0;
}