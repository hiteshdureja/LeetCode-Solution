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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return NULL;
        }
        int n= lists.size();
        vector<int> A;
        for(int i=0; i<n; i++){
            while(lists[i]!= NULL){
                A.push_back(lists[i]->val);
                lists[i]= lists[i]->next;
            }
        }
        if(A.empty()){
            return NULL;
        }
        int n2= A.size();
        sort(A.begin(), A.end());
        ListNode *B, *C, *D;
        C= new struct ListNode;
        C->val= A[0];
        C->next= NULL;
        B= C;
        for(int i=1; i<n2; i++){
            D= new struct ListNode;
            D->val= A[i];
            D->next= NULL;
            C->next= D;
            C= C->next;
        }
        return B;
    }
};