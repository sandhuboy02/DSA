#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = NULL;
	}
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

class Linkedlist {
	Node* head;

public:
	
	Linkedlist() { head = NULL; }
	void insertNode(int);
};
void Linkedlist::insertNode(int data)
{
	
	Node* newNode = new Node(data);

	
	if (head == NULL) {
		head = newNode;
		return;
	}

	
	Node* temp = head;
	while (temp->next != NULL) {

		
		temp = temp->next;
	}
	temp->next = newNode;
}

int main()
{
	Linkedlist list;

	// Inserting nodes
	list.insertNode(1);
	list.insertNode(2);
	list.insertNode(3);
	list.insertNode(4);

	cout << "Elements of the list are: ";
    return 0;
}