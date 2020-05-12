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
    TreeNode* pos=NULL;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        DFS(root,p,q);
        return pos;
    }
    bool DFS(TreeNode* root,TreeNode* p,TreeNode* q)
    {
       if(pos||!root) return false;
       bool left=false,right=false;
       left=DFS(root->left,p,q);
       right=DFS(root->right,p,q);
       if((root==p||root==q)&&(left||right)) pos=root;
       if(root==p||root==q) return true;
       if(left&&right) pos=root;
       return left||right;
    }
};


