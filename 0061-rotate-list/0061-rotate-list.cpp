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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp= new ListNode;
        int len=1;
        temp = head;
        if(head==NULL || head->next == NULL)
            return head;
        while(temp->next !=NULL){
            temp=temp->next;
            len++;
        }
        if(k>=len){
            k%=len;
        }
        k=len-k;
        temp->next=head;
        for(int i=0;i<k-1;i++){
            head=head->next;
        }
        temp=head->next;
        head->next=NULL;
        
        cout<<k;
        return temp;
    }
};