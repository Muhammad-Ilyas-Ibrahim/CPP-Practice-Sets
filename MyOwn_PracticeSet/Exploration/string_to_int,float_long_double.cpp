#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;
int main()
{
l1:
	string num, dec, db;
	cout << "Enter integer number: ";
	getline(cin, num);
	cout << "Enter float number: ";
	getline(cin, dec);
	cout << "Enter long double number: ";
	getline(cin, db);
	int a = stoi(num);
	float b = stof(dec);
	unsigned long long c = stoll(db);
	cout << "Integer Value: " << a << endl;
	cout << "Float Value: " << b << endl;
	cout << "Unsigned Long Value: " << setprecision(12) << c << endl;
	// sstream conversion
	int i;
	float f;
	long double d;
	stringstream(num) >> i;
	stringstream(dec) >> f;
	stringstream(db) >> d;
	cout << "\nNumber: " << i;
	cout << "\nFloat: " << setprecision(4) << f;
	cout << "\nUnsigned Long: " << d;
	return 0;
}
