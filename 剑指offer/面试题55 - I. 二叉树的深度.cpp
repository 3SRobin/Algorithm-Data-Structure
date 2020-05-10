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
    int maxDepth(TreeNode* root) {
      if(!root) return 0;
      queue<TreeNode*> que;
      int size,MaxD=0;
      que.push(root);
      while(size=que.size())
      {
         while(size--)
         {
            TreeNode* p=que.front();
            que.pop();
            if(p->left) que.push(p->left);
            if(p->right) que.push(p->right);
         }
         MaxD++;
      }
      return MaxD;
    }
};


