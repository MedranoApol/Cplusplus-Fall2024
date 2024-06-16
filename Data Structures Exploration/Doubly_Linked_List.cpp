#include <iostream>
#include <string>

int size = 0;

struct Node{
	int location;
	std::string data;
	Node* before;
	Node* next;
};
typedef Node* NodePtr;

int main(){
	NodePtr head = new Node;
	head->location = 1;
	head->data = "Natali";
	head->before = NULL;
	head->next = NULL;
	NodePtr tempPtr = new Node;
	tempPtr->location = 2;
	tempPtr->data = "Mom";
	tempPtr->before = NULL; 
	tempPtr->next = head;
	head->before = tempPtr;
	head = tempPtr;
	std::cout << (head->location) << (head->data) << "\n";
	head = head->next;
	std::cout << (head->location) << (head->data) << "\n";
	delete tempPtr;
	delete head;
	return 0;
}
