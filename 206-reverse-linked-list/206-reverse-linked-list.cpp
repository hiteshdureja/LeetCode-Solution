/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */ //
    
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head==NULL||head->next==NULL) // when linked list has 0 or 1 element
        {
            return head;
        }
        ListNode* newhead=reverseList(head->next);//recursion se naya head aa gya jo last element hoga
        head->next->next=head;//
        head->next=NULL;
        
        return newhead;
    }
};
