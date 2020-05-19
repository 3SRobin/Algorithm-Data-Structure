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
	int maxlen=0;
    int diameterOfBinaryTree(TreeNode* root) {
       DFS(root);
       return maxlen;
    }
    int DFS(TreeNode* root)
    {
       if(!root) return 0;
       int left=DFS(root->left);
       int right=DFS(root->right);
       if(left+right>maxlen) maxlen=left+right;
       return left>right?left+1:right+1;
    }
};


