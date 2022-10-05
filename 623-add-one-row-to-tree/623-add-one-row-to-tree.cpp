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
	int v;
	void dfsAndAdd(TreeNode *root,int level,int depth)
	{
		if(!root or level>depth)
			return;
		if(level==depth-1)
		{
			TreeNode* leftSub=NULL;
			TreeNode* rightSub=NULL;
			TreeNode* lft=new TreeNode(v);
			TreeNode* rt=new TreeNode(v);
			if(root->left)
				leftSub=root->left;
			if(root->right)
				rightSub=root->right;
			root->left=lft;
			root->right=rt;
			lft->left=leftSub;
			rt->right=rightSub;

		}
		dfsAndAdd(root->left,level+1,depth);
		dfsAndAdd(root->right,level+1,depth);

	}

	TreeNode* addOneRow(TreeNode* root, int val, int depth) {
		v=val;
		if(depth==1)
		{
			TreeNode *topNode=new TreeNode(val);
			topNode->left=root;
			root=topNode;
		}
		else{
			dfsAndAdd(root,1,depth);
		}

		return root;
	}
};