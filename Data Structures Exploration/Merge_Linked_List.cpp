#include <iostream>
//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(NULL) {}
	ListNode(int x) : val(x), next(NULL) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
	ListNode* dummy = new ListNode();
    ListNode* temp = dummy;
        
    //when both list1 and list2 isn't empty
    while(list1 && list2){
        if(list1->val < list2->val){
            temp->next = list1;
            list1 = list1->next;
        }else{
            temp->next = list2;
            list2 = list2->next;   
        }
        temp = temp->next;
    }
        
    // we reached at the end of one of the list
    if(list1) temp->next = list1;
    if(list2) temp->next = list2;
        
    return dummy->next;
}


void insert(ListNode*& head, int value){
	ListNode* tempPtr = new ListNode;
	tempPtr->val = value;
	tempPtr->next = head;
	head = tempPtr;
}

int main(){
	ListNode* list1 = new ListNode(4);
	insert(list1, 2);
	insert(list1, 1);
	ListNode* list2 = new ListNode(4);
	insert(list2, 3);
	insert(list2, 1);
	ListNode* mergedList = mergeTwoLists(list1, list2);
	for (ListNode* iter = mergedList; iter != NULL; iter = iter->next)
		std::cout << (iter->val) << " ";
	std::cout << "\n";
	return 0;
}
