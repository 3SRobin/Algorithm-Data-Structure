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
    vector<int> inorderTraversal(TreeNode* root) {
       if(!root) return {};
       TreeNode* p;
       stack<TreeNode*> s;
       vector<int> vec;
       while(root||!s.empty())
       {
          while(root)
          {
             s.push(root);
             root=root->left;
          }
          if(!s.empty())
          {
             p=s.top();
             s.pop();
             vec.push_back(p->val);
             root=p->right;
          }
       }
       return vec;
    }
};


