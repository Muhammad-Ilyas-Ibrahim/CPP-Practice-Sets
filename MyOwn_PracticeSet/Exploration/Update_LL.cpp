#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *head = NULL;
void insert(int n)
{
	Node *temp = new Node();
	temp->data = n;
	if (head == NULL)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		Node *ptr = head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		temp->next = NULL;
		ptr->next = temp;
	}
}
void update(int n)
{
	Node *ptr = head;
	while (ptr != NULL)
	{
		if (ptr->data == n)
		{
			cout << "\nFound!\n";
			cout << "Enter new Data: ";
			int num;
			cin >> num;
			ptr->data = num;
			return;
		}
		ptr = ptr->next;
	}

	cout << "\nNot Found!\n";
	system("pause");
}
void display()
{
	Node *ptr = head;
	while (ptr != NULL)
	{
		cout << ptr->data << " | ";
		ptr = ptr->next;
	}
	cout << "\n\n";
}
int main()
{
	insert(4);
	insert(9);
	insert(6);
	insert(1);
	insert(11);
	insert(3);
	update(1);
	display();
	return 0;
}
