/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) 
    {
        if(!root) return;
        stack<TreeNode*> store;
        store.push(root);
        while(!store.empty()){
            TreeNode* node = store.top();
            store.pop();
            if(node->right) store.push(node->right);
            if(node->left) store.push(node->left);
            if(!store.empty()) node->right = store.top();
            node->left = nullptr;
        }
    }
};