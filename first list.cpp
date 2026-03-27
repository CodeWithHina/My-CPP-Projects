#include<iostream>
using namespace std;
class Node {
	public :
		int data;
		Node* next;
		Node(int value) {
			data = value;
			next = NULL;
		}
};

class Linkedlist {
	private :
		Node* head;
	public :
		Linkedlist() {
			head = NULL;
		}
		
	//insert at beginning
	void insertAtBegin(int value) {
	Node* newNode = new Node(value);
	
	newNode->next = head;
	head = newNode;
    }
	// insert at end
	void insertAtEnd(int value) {
	Node* newNode = new Node(value);
	
	if (head == NULL) {
		head = newNode;
		return;
	}
	
	Node* temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
	}
	
	void display() {
		if( head == NULL) {
			cout<<"list is empty\n";
			return;
		}
		Node* temp = head;
		while (temp != NULL) {
			cout<< temp->data <<"->";
			temp = temp->next;
		}
		cout<<"NULL\n";
	}
	
		
};
int main()
{
	Linkedlist list;
	list.insertAtBegin(10);
	list.insertAtBegin(20);
	list.insertAtBegin(30);
	
	list.insertAtEnd(40);
	
	list.display();

}
