#include <iostream>
using namespace std;
int main()
{
	string pass, en, de;
	cout << "Enter Password: ";
	getline(cin, pass);
	for (int i = 0; i < pass.size(); i++)
	{
		char cod = pass[i] + 11;
		en.push_back(cod);
	}
	cout << "Encrypted: " << en << endl;
	for (int i = 0; i < en.size(); i++)
	{
		char cod = en[i] - 11; // You can do any mathematical operation with ASCII values
		de.push_back(cod);
	}
	cout << "Decrypted: " << de << endl;
	// we can also do double encryption like this
	string den, dde;
	for (int i = 0; i < pass.size(); i++)
	{
		char cod = pass[i] + 11;
		cod = cod * 3;
		den.push_back(cod);
	}
	cout << "Encrypted: " << den << endl;
	for (int i = 0; i < den.size(); i++)
	{
		char cod = den[i] / 3;
		cod = cod - 11;
		dde.push_back(cod);
	}
	cout << "Decrypted: " << dde << endl;
	return 0;
}
