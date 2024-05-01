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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp= new ListNode;
        temp=head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(temp->next!=NULL){
            while(temp->val==temp->next->val && temp->next->next){
                temp->next=temp->next->next;
            }
            if(temp->val==temp->next->val){
                break;
            }
            temp=temp->next;
        }
        if(temp->next && temp->val==temp->next->val){
                temp->next=NULL;
            }
        return head;
    }
};