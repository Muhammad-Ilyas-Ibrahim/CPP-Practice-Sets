#include <iostream>
using namespace std;
string CtoS(char *a, int size)
{
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += a[i];
	}
	return s;
}
int main()
{
	while ("Ilyas")
	{
	ck:
		string a;
		cout << "\n\nEnter name: ";
		getline(cin, a);
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
		cout << "Result: " << final << "\n\n\n";
		goto ck;
		system("pause");
	}
	return 0;
}
