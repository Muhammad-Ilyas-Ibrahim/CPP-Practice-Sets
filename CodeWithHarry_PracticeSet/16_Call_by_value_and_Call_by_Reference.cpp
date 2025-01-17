#include <iostream>
using namespace std;

// Call by Value
void swap(int *a, int *b)
{
	int *temp = a;
	a = b;
	b = temp;
}

// Call by Reference
// void swap(int &a,int &b){
//	int *temp=a;
//	a=b;
//	b=temp;
// }

// Will not Work
// void swap(int a,int b){
//	int *temp=a;
//	a=b;
//	b=temp;
// }

int main()
{
	int a = 4, b = 5;
	cout << "Value of a is " << a << " and Value of b is " << b << endl;
	swap(a, b);
	cout << "Value of a is " << a << " and Value of b is " << b << endl;
	return 0;
}
