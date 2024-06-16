#include <iostream>
#include <string>
#include <cctype>
//doubly-linked list
struct Node{
	int data;
	std::string name;
	Node* before;
	Node* after;
};
typedef Node* NodePtr;

NodePtr head = NULL;
NodePtr tail = NULL;

void headInsert (int value, std::string text){
	// front node is created first
	if (head == NULL && tail == NULL || head == NULL && tail->before == head){
		head = new Node;
		head->data = value;
		head->name = text;
		head->before = NULL;
		head->after = tail;	
	}else if (head == NULL && tail != NULL || head == NULL && tail->before != head){
		head = new Node;
		head->data = value;
		head->name = text;
		head->before = NULL;
		NodePtr iter = tail;
		while (iter->before != head)
			iter = iter->before;
		head->after = iter;
		iter = NULL;
		delete iter;	
	}else{ // node 
		NodePtr tempPtr = new Node;
		tempPtr->data = value;
		tempPtr->name = text;
		tempPtr->before = NULL;
		tempPtr->after = head;
		head->before = tempPtr;
		head = tempPtr;
		tempPtr = NULL;
		delete tempPtr;
	}
}
void tailInsert (int value, std::string text){
	// front node is created first
	if (tail == NULL && head == NULL || tail == NULL && head->after == tail){
		tail = new Node;
		tail->data = value;
		tail->name = text;
		tail->before = head;
		tail->after = NULL;	
	}else if (back == NULL && front != NULL || back == NULL && front->after != back){
		tail = new Node;
		tail->data = value;
		tail->name = text;
		tail->before = NULL;
		NodePtr iter = head;
		while (iter->after != tail)
			iter = iter->after;
		tail->before = iter;
		iter = NULL;
		delete iter;	
	}else{ // node 
		NodePtr tempPtr = new Node;
		tempPtr->data = value;
		tempPtr->name = text;
		tempPtr->before = tail;
		tempPtr->after = NULL;
		tail->after = tempPtr;
		tail = tempPtr;
		tempPtr = NULL;
		delete tempPtr;
	}
}
void nodeInsert (NodePtr here, int value, string text){
	char ans;
	do{
		std::cout << "Select an option:\n"
		 << "A. Before Node\n"
		 << "B. After Node\n"
		 << "C. Quit\n";
		std::cin >> ans;
		ans = toupper(ans);
		switch(ans){
			case 'A':{
				if (here->before == NULL)
					headInsert();
				else{
					NodePtr prev = here->before;
					NodePtr tempPtr = new Node;
					tempPtr->data = value;
					tempPtr->name = text;
					tempPtr->after = here;
					tempPtr->before = prev;
					tempPtr = NULL;
					delete tempPtr;
				}
				std::cout << "Node added. Returning to main menu.\n";
				return;
				break;
			}case 'B':{
				if (here->after == NULL)
					tailInsert();
				else{
					NodePtr next = here->after;
					NodePtr tempPtr = new Node;
					tempPtr->data = value;
					tempPtr->name = text;
					tempPtr->after = next;
					tempPtr->before = here;
					tempPtr = NULL;
					delete tempPtr;
				}
				std::cout << "Node added. Returning to main menu.\n";
				return;
				break;
			}case 'C':{
				break;
			}default:{
				std::cout << "Invalid input. Please try again.\n";
				break;
			}
		}
	} while (ans != 'C');
}
void nodeDeletion (NodePtr discard){
	if (discard->before == NULL && discard->after != tail){
		head = head->after;
	}else if (discard->after == NULL && discard->before != head){
		tail
	}else{
		NodePtr prev = discard->before;
		NodePtr next = discard->after;
		prev->after = next;
		next->before = prev;
		delete discard;
	}
}


int main(){

}	
