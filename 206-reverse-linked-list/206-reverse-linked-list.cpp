/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head){
            return head;
        }
        stack<int>stk;
        ListNode *temp=head;
        while(head!=nullptr){
            stk.push(head->val);
            head=head->next;
        }
        head=temp;
        while(!stk.empty()){
            head->val = stk.top();
            stk.pop();
            head=head->next;
        }
        return temp;
    }
};
