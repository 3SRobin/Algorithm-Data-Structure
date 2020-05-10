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
    vector<vector<int>> vec;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(!root) return {};
        DFS(root,sum,0,{});
        return vec;
    }
    void DFS(TreeNode* root,int sum,int ans,vector<int> v)
    {
       if(!root) 
       {
          if(ans==sum) vec.push_back(v);
          return ;
       }
       v.push_back(root->val);
       if(!root->left&&!root->right)
          DFS(root->left,sum,ans+root->val,v);
       else
       {
          if(root->left) DFS(root->left,sum,ans+root->val,v);
          if(root->right) DFS(root->right,sum,ans+root->val,v);
       }
    }
};


