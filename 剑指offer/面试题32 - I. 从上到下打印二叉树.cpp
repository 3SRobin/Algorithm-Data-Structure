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
    vector<int> levelOrder(TreeNode* root) {
        if(!root) return {};
        int size=0;
        queue<TreeNode*> que;
        vector<int> vec;
        que.push(root);
        while(size=que.size())
        {
           while(size--)
           {
              TreeNode* p=que.front();
              que.pop();
              vec.push_back(p->val);
              if(p->left) que.push(p->left);
              if(p->right) que.push(p->right);
           }
        }
        return vec;
    }
};


