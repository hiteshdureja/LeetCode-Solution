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
    ListNode* doubleIt(ListNode* head) {
        stack<ListNode*> st;

        while (head) {
            head->val = head->val * 2;
            st.push(head);
            head = head->next;
        }  
        int carry = 0;
        ListNode* node = NULL;
        while (!st.empty()) {
            node = st.top();
            st.pop();
            node->val = node->val + carry;
            if (node->val > 9) {
                carry = 1;
                node->val = node->val % 10;
            } else {
                carry = 0;
            }
            if (!head) {
                head = node;
                head->next = NULL;
            } else {
                node->next = head;
                head = node;
            }
        }
        
        if (carry) {
            ListNode* newNode = new ListNode;
            newNode->val = 1;
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};