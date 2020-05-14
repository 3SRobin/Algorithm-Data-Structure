/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
    	return DFS(root->left,root->right);
    }
    bool DFS(TreeNode* p,TreeNode* q)
    {
    	if(!p&&!q) return true;
    	if(!q||!p) return false;
    	return (p->val==q->val)&&DFS(p->left,q->right)&&DFS(p->right,q->left);
    }
};


