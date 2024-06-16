#include <iostream>
#include <cctype>
int size = 0;

class Node{
public:
	Node();
	void setValue();
	void userInterface();
	void insertHead(Node*& head, int theNumber);
	Node* searchList(Node* here, int locationOfNode, char nada);
	Node* searchList(Node* here, int target);
	Node* searchList(Node* here);
	void insertNode(Node*& afterMe, int theNumber);
	void deleteNode(Node*& afterMe);
	void displayList (Node*& head);
	~Node();
private:
	int data;
	Node* link;
};

char getChar (string line){
	char ans = toupper(line[0]);
	return ans;
}

int main(){
	Node* head = new Node;
	head.setValue();
	head.userInterface();
	return 0;
}
Node::Node() : data(0), link(NULL)
{}
void Node::userInterface(){
	string line;
	do{
		std::cout << "A. Insert Node into Linked List\n"
				  << "B. Delete Node from Linked List\n"
				  << "C. Display Nodes from Linked List\n"
				  << "D. Quit\n";
		std::cout << "Select an Option: ";
		std::cin >> line;
		char ans = getChar(line);
		switch(ans){
			case 'a':
				
			case 'b':
				
			case 'c':
				
			case 'd':
				break;
			default:
				std::cout << "Invalid input. Please retry!\n\n";
				break;
		}
		
	} (ans != 'd');
	
}
void Node::setValue(){
	int value;
	std::cout << "Enter the data value of head of linked list: ";
	std::cin >> value;
	head->data = value;
	size++;
}
void Node::insertHead(Node*& head, int theNumber){
	Node* tempPtr = new Node;
	tempPtr->data = theNumber;
	tempPtr->link = head;
	head = tempPtr;
	size++
}	
Node* Node::searchList(Node* here, int locationOfNode, char nada){
	Node* iter;
	int location;
	for (iter = here, location = 1; iter->link != NULL || location <= size; iter = iter->link, location++){
		if (location == size)
			return iter;
	}
	return NULL;
}
Node* Node::searchList(Node* here, int target){
	while (here->data != target && here->link != NULL)
		here = here->link;
	if (here->data == target)
		return here;
	else 
		return NULL;
}
Node* Node::searchList(Node* head){
	while(here->link != NULL)
		here = here->link
	return here;
}
void Node::insertNode(Node* afterMe, int theNumber){
	Node* tempPtr = new Node;
	tempPtr->data = theNumber;
	tempPtr->link = afterMe->link;
	afterMe->link = tempPtr;
}
void Node::deleteNode(Node* afterMe) {
	Node* discard = afterMe->link;
	afterMe->link = discard->link;
	discard delete;
}
void Node::displayList(Node* afterMe){
	Node* iter;
	int location = 1;
	for (iter = head; iter != NULL; iter = iter->link){
		std::cout << "Node at Location " << location << ": Data = " << (iter->data) << "\n";
		location++;
	}
}
Node::~Node(){
	while(head != NULL){
		Node* temp = head;
		head = head->link;
		delete temp;
	}
}
