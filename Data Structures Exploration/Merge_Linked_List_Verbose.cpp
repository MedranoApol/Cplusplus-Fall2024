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
    ListNode* merge = NULL;
        while(list1 != NULL && list2 != NULL){
            if (list1->val < list2->val){
                ListNode* tempPtr = new ListNode;
                tempPtr->val = list1->val;
                tempPtr->next = merge;
                merge = tempPtr;
                list1 = list1->next;
            }else if (list1->val == list2->val){
                for (int i = 0; i<2; i++){
                    ListNode* tempPtr = new ListNode;
                    tempPtr->val = list1->val;
                    tempPtr->next = merge;
                    merge = tempPtr;
                }
                list1 = list1->next;
                list2 = list2->next;
            }else if (list1->val > list2->val){
                ListNode* tempPtr = new ListNode;
                tempPtr->val = list2->val;
                tempPtr->next = merge;
                merge = tempPtr;
                list2 = list2->next;
            }
        }
        while (list1 != NULL){
            ListNode* tempPtr = new ListNode;
            tempPtr->val = list1->val;
            tempPtr->next = merge;
            merge = tempPtr;
            list1 = list1->next;
        }
        while (list2 != NULL){
            ListNode* tempPtr = new ListNode;
            tempPtr->val = list2->val;
            tempPtr->next = merge;
            merge = tempPtr;
            list2 = list2->next;
        }
        ListNode* finalMerge = NULL;
        for (ListNode* iter = merge; iter != NULL; iter = iter->next){
            ListNode* tempPtr = new ListNode;
            tempPtr->val = iter->val;
            tempPtr->next = finalMerge;
            finalMerge = tempPtr;
        }
    return finalMerge;
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
