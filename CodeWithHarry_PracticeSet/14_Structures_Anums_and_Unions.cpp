#include <iostream>
using namespace std;
// Structures
typedef struct worker
{
	int id;
	string name;
	float salary;
} ck;
// Unions
// Unions are use for Memory Management
union money
{
	int rice;
	char car;
	float pounds;
};
int main()
{
	//******Structures*******
	// ck rana;
	// cout<<" Enter ID of worker: ";
	// cin>>rana.id;
	// cout<<" Enter name of worker: ";
	// cin>>rana.name;
	// cout<<" Enter salary of worker: ";
	// cin>>rana.salary;
	// system("cls");
	// cout<<"\t\t\t\t ID\t Name\t Salary"<<endl;
	// cout<<"\t\t\t\t "<<rana.id<<"\t "<<rana.name<<"\t "<<rana.salary;
	//*****Unions*****
	//	union money m1;
	//	m1.rice=34<<endl;
	//	cout<<m1.rice;
	//	m1.car='c'<<endl;
	//	cout<<m1.car;

	//******Enums******
	enum meal
	{
		Breakfast,
		Lunch,
		Dinner
	};
	// meal became a datatype like int
	// meal m1=Breakfast
	cout << Breakfast;
	cout << Lunch;
	cout << Dinner;
	return 0;
}
