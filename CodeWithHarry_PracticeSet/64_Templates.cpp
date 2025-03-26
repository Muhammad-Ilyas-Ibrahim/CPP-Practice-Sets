#include <iostream>
using namespace std;
// Templates are used to use different datatypes with same class

template <class T>
class vector
{

public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    int dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3);
    v1.arr[0] = 1.1;
    v1.arr[1] = 2.1;
    v1.arr[2] = 3.2;

    vector<float> v2(3);
    v2.arr[0] = 4.5;
    v2.arr[1] = 5.1;
    v2.arr[2] = 6.3;

    float product = v1.dotProduct(v2);
    cout << product << endl;
    return 0;
}