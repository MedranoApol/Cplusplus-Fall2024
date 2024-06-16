#include <iostream>
#include <cctype>
#include <string>
int size = 0;
struct Node{
	int data;
	Node* link;
};
typedef Node* NodePtr;

class LinkedList{
public:
	LinkedList();
	void userInterface();
	void insertion (NodePtr& head);
	void deletion (NodePtr& head);
	void insertHead(NodePtr& head, int theNumber);
	NodePtr searchList(NodePtr head, int locationOfNode, char nada);
	NodePtr searchList(NodePtr head, int target);
	NodePtr searchList(NodePtr head);
	void insertNode(NodePtr& afterMe, int theNumber);
	void deleteNode(NodePtr& before);
	void displayList (NodePtr& head);
	~LinkedList();
private:
	NodePtr head;
};

char getChar (std::string line){
	char ans = toupper(line[0]);
	return ans;
}

int main(){
	LinkedList myList;
	myList.userInterface();
	return 0;
}
LinkedList::LinkedList() : head(NULL)
{}
void LinkedList::userInterface(){
	std::string line;
	char ans;
	do{
		std::cout << "MAIN MENU:\n"
				<< "A. Insert Node into Linked List\n"
			  	<< "B. Delete Node from Linked List\n"
			  	<< "C. Display Nodes from Linked List\n"
			  	<< "D. Quit\n"
				<< "Select an Option: ";
		std::cin >> line;
		ans = getChar(line);
		switch(ans){
			case 'A':
				insertion(head);
				break;
			case 'B':
				deletion(head);
				break;
			case 'C':
				displayList(head);
				break;
			case 'D':
				break;
			default:
				std::cout << "Invalid input. Please retry!\n\n";
				break;
		}
	} while (ans != 'D');
}
void LinkedList::insertHead(NodePtr& head, int theNumber){
	if (head == NULL){
		head = new Node;
		head->data = theNumber;
		head->link = NULL;
		size++;
	}else{
		NodePtr tempPtr = new Node;
		tempPtr->data = theNumber;
		tempPtr->link = head;
		head = tempPtr;
		size++;
	}
}
NodePtr LinkedList::searchList(NodePtr head, int locationOfNode, char nada){
	if (size-1 <= locationOfNode)
		return NULL;
	NodePtr iter;
	int location;
	for (iter = head, location = 1; iter->link != NULL || location <= size; iter = iter->link, location++){
		if (location == locationOfNode)
			return iter;
	}
	return NULL;
}
NodePtr LinkedList::searchList(NodePtr head, int target){
	NodePtr here = head;
	if (here->data == target)
		return here;
	while (here->link != NULL || here->data != target)
		here = here->link;
	if (here->data == target)
		return here;
	else
		return NULL;	
}
NodePtr LinkedList::searchList(NodePtr head){
	NodePtr here = head;
	while (here->link != NULL)
		here = here->link;
	return here;
}
void LinkedList::insertNode(NodePtr& afterMe, int theNumber){
	NodePtr tempPtr = new Node;
	tempPtr->data = theNumber;
	tempPtr->link = afterMe->link;
	afterMe->link = tempPtr;
	size++;
}
void LinkedList::deleteNode(NodePtr& before){
	if (before == NULL || before->link == NULL)
		return;
	NodePtr discard = before->link;
	before->link = discard->link;
	delete discard;
	size--;
}
void LinkedList::displayList (NodePtr& head){
	if (head == NULL){
		std::cout << "\nEmpty linked list. Try inserting some Nodes.\n"
				  << "Returning to main menu!\n\n";
		return;
	}
	NodePtr iter;
	int location = 1;
	for (iter = head; iter != NULL; iter = iter->link){
		std::cout << "Node at location " << location << ": Data = " << (iter->data) << "\n";
		location++;
	}
	std::cout << "\n";
}
LinkedList::~LinkedList(){
	while (head != NULL){
		NodePtr temp = head;
		head = head->link;
		delete temp;
	}
}
void LinkedList::insertion (NodePtr& head){
	int value;
	if (head == NULL){
		std::cout << "Insert data value for Node: ";
		std::cin >> value;
		insertHead(head, value);
		std::cout << "Node added to head of Linked List.\n\n";
		return;
	}
	std::string line;
	while(true){
		std::cout << "\nINSERTION MENU:\n"
			  << "A. Insert Node at the Head of Linked List\n"
			  << "B. Insert Node at the end of Linked List\n"
			  << "C. Insert Node after target Node\n"
			  << "D. Insert Node after searching by location\n"
			  << "E. Back to Main Menu\n"
			  << "Select an option: ";
		std::cin >> line;
		char ans = getChar(line);
		switch(ans){
			case 'A':{
				std::cout << "Insert data value for Node: ";
				std::cin >> value;
				insertHead(head, value);
				std::cout << "Node added to head of Linked List. Returning to main menu!\n\n";
				return;
				break;
			}case 'B':{
				std::cout << "Insert data value for Node: ";
				std::cin >> value;
				NodePtr afterMe = searchList(head);
				if (afterMe != NULL){
					insertNode(afterMe, value);
					std::cout << "Node added at the end of Linked List. Returning to main menu\n\n";
					return;
				} else {
					std::cout << "Invalid Node. Returning to main menu!\n\n";
					return;
				}
				break;
			}case 'C':{
				std::cout << "Insert target Node's data value: ";
				std::cin >> value;
				NodePtr afterMe = searchList(head, value);
				if (afterMe != NULL){
					std::cout << "Insert data value for Node: ";
					std::cin >> value;
					insertNode(afterMe, value);
					std::cout << "Node added into the Linked List.\n\n";
					return;
				}else{
					std::cout << "Invalid Node. Returning to menu!\n\n";
					return;
				}
				break;
			}case 'D':{
				std::cout << "Insert location of Node that you want to place a Node after: ";
				std::cin >> value;
				NodePtr afterMe = searchList(head, value, 'n');
				if (afterMe != NULL){
					std::cout << "Insert data value for Node: ";
					std::cin >> value;
					insertNode(afterMe, value);
					std::cout << "Node added into the Linked List.\n\n";
					return;
				}else{
					std::cout << "Invalid Node. Returning to menu!\n\n";
					return;
				}
				break;
			}case 'E':{
				return;
				break; 
			}default:{
				std::cout << "Invalid selection. Try again!\n";
				break;
			}
		}
	}	
}
void LinkedList::deletion (NodePtr& head){
	if (head == NULL || head->link == NULL){
		std::cout << "Please insert more Nodes before you can delete any!\n"
			     << "Returning to main menu!\n\n";
		return;
	}
	std::string line;
	int value;
	std::cout << "\nDELETION MENU:\n"
			  << "A. Delete Node after target Node\n"
			  << "B. Delete Node after searching by location\n"
			  << "C. Back to Main Menu\n"
			  << "Select an option: ";
	std::cin >> line;
	while(true){
		char ans = getChar(line);
		switch(ans){
			case 'A':{
				std::cout << "Insert Node's data value before the Node you wish to delete: ";
				std::cin >> value;
				NodePtr before = searchList(head, value);
				if (before != NULL && before->link != NULL){
					deleteNode(before);
					std::cout << "Node has been deleted.\n\n";
					return;
				}else{
					std::cout << "Invalid Node. Returning to menu!\n\n";
					return;
				}
				break;
			}case 'B':{
				std::cout << "Insert location of the Node before the Node you wish to delete: ";
				std::cin >> value;
				NodePtr before = searchList(head, value, 'n');
				if (before != NULL && before->link != NULL){
					deleteNode(before);
					std::cout << "Node has been deleted.\n\n";
					return;
				}else{
					std::cout << "Invalid Node. Returning to menu!\n\n";
					return;
				}
				break;
			}case 'C':{
				return;
				break; 
			}default:{
				std::cout << "Invalid input. Please try again!\n";
			}
		}
	}	
}
