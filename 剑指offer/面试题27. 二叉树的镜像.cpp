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
    TreeNode* mirrorTree(TreeNode* root) {
        DFS(root);
        return root;
    }
    void DFS(TreeNode* root)
    {
    	if(!root) return ;
    	swap(root->left,root->right);
    	DFS(root->left);
    	DFS(root->right);
    }
};


