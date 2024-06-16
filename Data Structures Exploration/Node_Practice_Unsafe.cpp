#include <iostream>
using namespace std;

int size = 0;

struct Node{
	int data;
	Node* link;
};
typedef Node* NodePtr;

void headInsert (NodePtr& head, int theNumber){
	NodePtr tempPtr = new Node;
	tempPtr->data = theNumber;
	tempPtr->link = head;
	head = tempPtr;
	size++;
}

NodePtr searchList(NodePtr here, int locationOfNode, char Nada){
	NodePtr iter;
	int location;
	for (iter = here, location = 1; iter->link != NULL || location <= size; iter = iter->link, location++){
		if (location == size)
			return iter;
	}
	return NULL;
}

NodePtr searchList(NodePtr here, int target){
	while (here->data != target && here->link != NULL)
		here = here->link;
	if (here->data == target)
		return here;
	else 
		return NULL;
}

NodePtr searchList(NodePtr here){
	while (here->link != NULL)
		here = here->link;
	return here;
}

void displayList(NodePtr here){
	NodePtr iter;
	int location = 1;
	for (iter = here; iter->link != NULL; iter = iter->link){
		cout << "location " << location << " data: " << iter->data << "\n";
		location++;
	}
}

void insertNode (NodePtr& afterMe, int theNumber){
	NodePtr tempPtr = new Node;
	tempPtr->data = theNumber;
	tempPtr->link = afterMe->link;
	afterMe->link = tempPtr;
	size++;
}

void deleteNode (NodePtr& afterMe){
	NodePtr discard = afterMe->link;
	afterMe->link = discard->link;
	delete discard;
	size--;
}


int main(){
	int dataValue;
	NodePtr head = new Node;
	cout << "Insert data value at head of node: ";
	cin >> dataValue;
	head->data = dataValue;
	head->link = NULL;
	size++;
	cout << (head->data);
}
