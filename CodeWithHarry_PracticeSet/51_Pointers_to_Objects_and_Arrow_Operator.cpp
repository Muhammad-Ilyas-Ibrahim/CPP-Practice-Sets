#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void getData(void)
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // Complex *ptr = new Complex;
    // (*ptr).setData(45,100);
    // (ptr)->setData(45,100);  // arrow operator is used to dereferance a pointer as we use * for dereferancing a pointer
    // (*ptr).getData();

    // Dynamic Array of objects
    Complex *ptr1 = new Complex[3];
    ptr1->setData(12, 16);
    ptr1->getData();

    ptr1++;
    (ptr1)->setData(300, 400);
    (ptr1)->getData();

    ptr1++; // Pointer incremented
    ptr1->setData(900, 1001);
    ptr1->getData();

    ptr1--; // Pointer decremented
    ptr1->getData();

    ptr1++;
    ptr1->getData();
    return 0;
}