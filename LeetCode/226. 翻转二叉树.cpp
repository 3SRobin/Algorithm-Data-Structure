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
    TreeNode* invertTree(TreeNode* root) {
      if(root==NULL) return NULL;
      stack<TreeNode*> s;
      s.push(root);
      while(!s.empty())
      {
         TreeNode* b=s.top();
         s.pop();
         swap(b->right,b->left);
         if(b->left!=NULL) s.push(b->left);
         if(b->right!=NULL) s.push(b->right);
      }
      return root;
    }
};


