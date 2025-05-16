#include <iostream>
#include <fstream>

using namespace std;

int ExistOrNot(char *filename)
{
	FILE *file;
	if (file = fopen(filename, "r"))
	{
		fclose(file);
		return 1;
	}
	return 0;
}
string CtoS(char *a, int size)
{
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += a[i];
	}
	return s;
}
string CamelCase(string a)
{
	char arr[a.size()];
	strcpy(arr, a.c_str());
	int n = -1;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (n == -1)
		{
			if (arr[i] >= 97 && arr[i] <= 122)
			{
				arr[i] = arr[i] - 32;
			}
			n++;
		}
		else
		{
			if (arr[i] >= 65 && arr[i] <= 90 || arr[i] >= 97 && arr[i] <= 122)
			{
				if (arr[i] >= 65 && arr[i] <= 90)
				{
					arr[i] = arr[i] + 32;
				}
			}
			else
			{
				n--;
			}
		}
	}
	string final = CtoS(arr, sizeof(arr));
	return final;
}
int main()
{
	string name, number;
	cout << "\n\nEnter a name: ";
	cin.clear();
	fflush(stdin);
	getline(cin, name);
	name = CamelCase(name);
	cout << "\n\nEnter a number: ";
	cin.clear();
	fflush(stdin);
	getline(cin, number);
	ofstream file;
	char fn[] = "Contacts.vcf";
	int nf = ExistOrNot(fn);
	if (nf == 1)
	{
		system("ren Contacts.vcf Contacts.txt");
	}
	file.open("Contacts.txt", ios::app);
	file << "BEGIN:VCARD\n";
	file << "VERSION:2.1\n";
	file << "N:;" << name << ";;;\n";
	file << "FN:" << name << "\n";
	file << "TEL;CELL:+92" << number << "\n";
	file << "END:VCARD\n";
	file.close();
	system("ren Contacts.txt Contacts.vcf");
	system("pause");
	system("cls");
	main();
}
