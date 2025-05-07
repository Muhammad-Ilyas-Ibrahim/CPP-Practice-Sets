#include <iostream>
#include <cstring>
using namespace std;
struct Node
{
	string data;
	Node *next;
};
Node *head = NULL;
int main()
{
	char str[100];
	cout << "Enter string: ";
	cin.getline(str, 100);
	char *point;
	point = strtok(str, ".");
	while (point != NULL)
	{
		Node *temp = new Node();
		temp->data = point;
		temp->next = head;
		head = temp;
		cout << point << endl;
		point = strtok(NULL, ".");
	}
	cout << endl
		 << endl;
	Node *ptr = head;
	while (ptr != NULL)
	{
		cout << ptr->data << endl;
		ptr = ptr->next;
	}
	return 0;
}
