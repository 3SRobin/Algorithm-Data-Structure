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
      int Max=0;
      if(root==NULL) return Max;
      queue<TreeNode*> que;
      que.push(root);
      while(!que.empty())
      {
         int size=que.size();
         for(int i=0;i<size;i++)
         {
            TreeNode* b=que.front();
            que.pop();
            if(b->left!=NULL) que.push(b->left);
            if(b->right!=NULL) que.push(b->right);
         }
         Max++;
      }
      return Max;
    }
};


