#include <iostream>
#include <fstream>
using namespace std;
int exist(char *filename)
{
	FILE *file;
	if (file = fopen(filename, "r"))
	{
		fclose(file);
		return 1;
	}
	return 0;
}
int main()
{
	int n = exist("Sales.csv");
	ofstream file;
	if (n == 0)
	{
		file.open("Sales.csv", ios::app);
		file << "Customer Name,Food Name,Quantity,Price,Date,Time\n";
		file.close();
	}
	file.open("Sales.csv", ios::app);
	file << "Ilyas" << "," << "Pizza" << left << "," << "1" << "," << "400" << "," << "1/2/2022" << "," << "4:56 PM\n";
	return 0;
}
