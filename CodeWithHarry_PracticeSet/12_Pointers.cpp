#include <iostream>
using namespace std;
int main()
{
  //<---Poniters-->

  int a = 45;
  int *b = &a;
  //--> & stands for (Address of) Operator
  cout << " Address of 'a' is : " << b << endl;
  cout << " Address of 'a' is : " << &a << endl;
  //--> * stands for (value at) dereference operator
  cout << " Value at address 'b' is : " << *b << endl;
  // Storing address of a pointer
  int **c = &b;
  cout << " Address of 'b': " << c << endl;
  cout << " Address of 'b': " << &b << endl;
  // Lets dig out a pointer and get stored value
  cout << " Value of 'a' declared in start: " << **c << endl;
  //  float aa=34.567;
  //  int bb=35;
  //  cout<<sizeof(aa)<<endl;
  // cout<<sizeof(bb)<<endl;
  return 0;
}
