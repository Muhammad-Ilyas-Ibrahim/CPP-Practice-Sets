#include <iostream>
using namespace std;
/*
                            Instead of doing this I will use templates

int funcAverage(int a, int b)
{
    float avg = (a + b)/2;
    return avg;
}
int funcAverage(int a, float b)
{
    float avg = (a + b)/2;
    return avg;
}
int funcAverage(float a, float b)
{
    float avg = (a + b)/2;
    return avg;
}
*/

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
template <class T>
void mySwap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAverage(5, 2);
    // printf("The average of these numbers is %f",a); // we can also do it in this way
    printf("The average of these numbers is %.3f", a); // It is will setprecision to 3
    // cout<<"The average of these numbers is "<a<<endl;

    int x = 5, y = 20;
    cout<<"\nValue of x is "<<x<<endl<<"Value of y is "<<y<<endl<<endl;
    mySwap(x, y);
    cout<<"Value of x is "<<x<<endl<<"Value of y is "<<y<<endl;

    // We can also do it with floats OR doubles
    double x1 = 5.659, y1 = 20.111; 
    cout<<"\n\nValue of x is "<<x1<<endl<<"Value of y is "<<y1<<endl<<endl;
    mySwap(x1, y1);
    cout<<"Value of x is "<<x1<<endl<<"Value of y is "<<y1<<endl;
    return 0;
}