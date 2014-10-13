/* You are given two linked lists representing two non-negative numbers. The
digits are stored in reverse order and each of their nodes contain a single
digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4) Output: 7 -> 0 -> 8 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void print(ListNode *l){
	ListNode* ptr = l;
	cout<<"ListNode: ";
	while(ptr !=NULL) {
	    cout<<ptr->val<<" ";
	    ptr = ptr->next;
	}
}


class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    	ListNode *ret = new ListNode(0);
    	ListNode *rptr = ret;
    	ListNode *ptr1 = l1;
    	ListNode *ptr2 = l2;

    	int carry = 0;
    	int sumtemp;

    	while(ptr1 != NULL || ptr2 !=NULL || carry) {

    		sumtemp=carry;
    		if(ptr1!=NULL) {
    			sumtemp+=ptr1->val;
    			ptr1 = ptr1->next;
    		}
    		if(ptr2!=NULL) {
    			sumtemp+=ptr2->val;
    			ptr2 = ptr2->next;
    		}
    		
    		carry = sumtemp/10;
    		
    		rptr->val = sumtemp%10;
    		if(ptr1 || ptr2 || carry) {
    			rptr->next = new ListNode(0);
    			rptr = rptr->next;
    		}    		
    	}

    	

    	return ret;
    }
};

int main(){
	ListNode* l1 = new ListNode(9);
	l1->next = new ListNode(8);

	ListNode* l2 = new ListNode(1);

	Solution su;
	
	ListNode* result = su.addTwoNumbers(l1,l2);

	print(result);

}
