#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
	char ch;
	string user, pass = "";
	cout << "\n\nUsername: ";
	cin >> user;
	cout << "\nPassword: ";
	do
	{
		ch = getch();
		if (ch == 13 || ch == 10)
		{ // 10 for android
			break;
		}
		else if (ch == 8 || ch == 127)
		{ // 127 for android
			cout << '\b';
			cout << " ";
			cout << '\b';
			pass.pop_back();
		}
		else
		{
			pass.push_back(ch);
			cout << '*';
		}
	} while (ch != 13);
	if (user == "admin" && pass == "1234")
	{
		cout << "\nLogged In!" << endl;
	}
	else
	{
		cout << "\nTry again!\n\n";
	}
	pass.clear();
	main();
}