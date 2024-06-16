#include <iostream>
#include <vector>
//Merge k Sorted Lists
//definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(NULL) {}
	ListNode(int x) : val(x), next(NULL) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeKLists(std::vector<ListNode*>& lists) {
    std::vector<int> arr;
        for (int i=0; i<lists.size(); i++){
            ListNode* temp = lists[i];
            while (temp != NULL){
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }
        for (int i=0; i<arr.size(); i++){
            for (int j=i+1; j<arr.size(); j++){
                if (arr[i] < arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }       
            }
        }
        ListNode* head = NULL;
        for (int i=0; i<arr.size(); i++){
            ListNode* newNode = new ListNode;
            newNode->val = arr[i];
            newNode->next = head;
            head = newNode;
        }
	return head;
}

void insert(ListNode*& head, int value){
	ListNode* tempPtr = new ListNode;
	tempPtr->val = value;
	tempPtr->next = head;
	head = tempPtr;
}

int main(){
	std::vector<ListNode*> lists;
	ListNode* listsZero = new ListNode(5);
	insert(listsZero, 4);
	insert(listsZero, 1);
	lists.push_back(listsZero);
	ListNode* listsOne = new ListNode(4);
	insert(listsOne, 3);
	insert(listsOne, 1);
	lists.push_back(listsOne);
	ListNode* listsTwo = new ListNode(6);
	insert(listsTwo, 2);
	lists.push_back(listsTwo);
	ListNode* mergedLists = mergeKLists(lists);
	for (ListNode* iter = mergedLists; iter != NULL; iter = iter->next)
		std::cout << (iter->val) << " ";
	std::cout << "\n";
	return 0;
}
