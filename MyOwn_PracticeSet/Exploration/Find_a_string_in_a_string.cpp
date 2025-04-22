// CPP program to demonstrate working of string
// find to search a string
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "Muhammad Abdullah Faislabadi";
	string str1 = "abdullah";

	size_t found = str.find(str1);
	if (found != string::npos)
	{
		cout << "Found!" << endl;
		cout << "First occurrence is " << found << endl;
	}
	else
	{
		cout << "Not found!" << endl;
	}

	return 0;
}
