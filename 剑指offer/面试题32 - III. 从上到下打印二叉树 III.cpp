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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> vec;
        vector<int> v;
        queue<TreeNode*> que;
        int size,ans=0;
        que.push(root);
        while(size=que.size())
        {
           v.clear();
           while(size--)
           {
              TreeNode* p=que.front();
              que.pop();
              v.push_back(p->val);
              if(p->left) que.push(p->left);
              if(p->right) que.push(p->right);
           }
           ans++;
           if(ans%2==0) reverse(v.begin(),v.end());
           vec.push_back(v);
       }
       return vec;
    }
};


