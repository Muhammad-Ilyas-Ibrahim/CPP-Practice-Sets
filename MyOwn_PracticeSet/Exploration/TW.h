#include <iostream>
#include <windows.h>
#include <cstring>
#include <string.h>
#include <sstream>
#include <sys/stat.h>
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
bool IsPathExist(const string &dir)
{
	struct stat buffer;
	return (stat(dir.c_str(), &buffer) == 0);
}
void color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
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
void Upper(string &up)
{
	int i = 0;
	while (up[i] != '\0')
	{
		if (up[i] >= 97 && up[i] <= 122)
		{
			up[i] = up[i] - 32;
		}
		i++;
	}
}
void Lower(string &low)
{
	int i = 0;
	while (low[i] != '\0')
	{
		if (low[i] >= 65 && low[i] <= 90)
		{
			low[i] = low[i] + 32;
		}
		i++;
	}
}
void CamelCase(string &a)
{
	int n = -1, i = 0;
	while (a[i] != '\0')
	{
		if (n == -1)
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] = a[i] - 32;
			}
			n++;
		}
		else
		{
			if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
			{
				if (a[i] >= 65 && a[i] <= 90)
				{
					a[i] = a[i] + 32;
				}
			}
			else
			{
				n--;
			}
		}
		i++;
	}
}

void Camel(string &camel)
{
	int i = 0;
	while (camel[i] != '\0')
	{
		if (i == 0 && camel[i] >= 97 && camel[i] <= 122)
		{
			camel[i] -= 32;
		}
		else if (camel[i] >= 65 && camel[i] <= 90)
		{
			camel[i] += 32;
		}

		else
		{
		}
		i++;
	}
}
int StoI(string n)
{
	int numb;
	stringstream(n) >> numb;
	return numb;
}
