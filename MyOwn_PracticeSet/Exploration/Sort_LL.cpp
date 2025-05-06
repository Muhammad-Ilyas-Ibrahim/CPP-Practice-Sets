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
		ptr->next = temp;
	}
}
void swap(Node *ptr, Node *ptr2)
{
	Node *temp = new Node();
	temp->data = ptr->data;
	ptr->data = ptr2->data;
	ptr2->data = temp->data;
	delete temp;
}
void sort()
{
	Node *ptr = head;
	while (ptr != NULL)
	{
		Node *ptr2 = head;
		while (ptr2 != NULL)
		{
			if (ptr->data < ptr2->data)
			{ // Just hange the sign to > then it will be in decending order
				swap(ptr, ptr2);
			}
			ptr2 = ptr2->next;
		}
		ptr = ptr->next;
	}
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
	insert(1);
	insert(2);
	insert(5);
	insert(3);
	display();
	sort();
	display();
	system("pause");
	return 0;
}
