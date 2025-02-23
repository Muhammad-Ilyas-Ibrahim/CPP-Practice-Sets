#include <iostream>
using namespace std;

int main()
{
    // int n = 10;
    // int *pointer = &n;
    // cout << "The value of n is " << *pointer << endl;

    // int *p1 = new int(44);
    // float *p2 = new float(94.45);

    // cout << "The value of new variable is " << *p1 << endl;
    // cout << "The value of new variable is " << *(p2) << endl;

    int *arr = new int[3];
    arr[0] = 45;
    arr[1] = 55;
    arr[2] = 65;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl; // this will throw garbage value

    return 0;
}