#include <iostream>
using namespace std;
string CtoS(char *a, int size)
{
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s = s + a[i];
	}
	return s;
}

int main()
{
	string a;
	cout << "Enter a name: ";
	getline(cin, a);
	char arr[a.size()];
	strcpy(arr, a.c_str());
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			arr[i] = arr[i] - 32;
		}
	}
	a = CtoS(arr, sizeof(arr));
	cout << "Result: " << a << endl;
	return 0;
}
