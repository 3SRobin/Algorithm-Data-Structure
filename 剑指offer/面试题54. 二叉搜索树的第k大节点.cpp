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
    int kthLargest(TreeNode* root, int k) {
      int n=0;
      stack<TreeNode*> s;
      while(!s.empty()||root)
      {
         while(root)
         {
            s.push(root);
            root=root->right;
         }
         if(!s.empty())
         {
            TreeNode* p=s.top();
            s.pop();
            if(++n==k) return p->val;
         }
      }
      return 0;
   }
};


