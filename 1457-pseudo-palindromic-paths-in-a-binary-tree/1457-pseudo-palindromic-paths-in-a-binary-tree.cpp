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
    int c=0;
    
    void findpaths(TreeNode* root, int &path)
    {
        if(root!=NULL)
        {
            
            path^=(1<<root->val);
            
            if(root->right==NULL and root->left==NULL)
            {
                if((path&(path-1))==0)
                    c++;
            }
            
            findpaths(root->left,path);
            findpaths(root->right,path);
            
             path^=(1<<root->val); //backtracking step
            
        }
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        int path=0;
        findpaths(root,path);
        
        return c;
        
    }
};