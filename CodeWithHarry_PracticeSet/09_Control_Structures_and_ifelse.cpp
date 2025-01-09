#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//		******* Control Structures *******
	// Three types of control structures
	// 1: Sequence Structures   2: Selection Structures   3: Loop Structures

	// Selection Control Structure: if-else elseif ladder
	// int age;
	// cout<<" Enter your age: ";cin>>age;
	// if (age<18)
	//{
	//	cout<<" You are kid"<<endl;
	// }
	// else if(age==18)
	//{
	//	cout<<" You are an adult"<<endl;
	// }
	// else
	//{
	//	cout<<" You are Experienced"<<endl;
	// }

	//   	******** Selection Control Structure: switch case statements ********
	int age;
	cout << " Enter the age:";
	cin >> age;
	switch (age)
	{
	case 18:
		cout << " You are a Kid" << endl;
		// if we don't enter break; then all cases will print
		break;
	case 22:
		cout << " You are 18" << endl;
		break;
	default:
		cout << " No special cases" << endl;
	}

	return 0;
}
