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
    TreeNode* convertBST(TreeNode* root) {
       if(!root) return root;
       int size,ans;
       TreeNode* p;
       queue<TreeNode*> que;
       vector<int> vec;
       que.push(root);
       while(!que.empty())
       {
          p=que.front();
          que.pop();
          vec.push_back(p->val);
          if(p->left) que.push(p->left);
          if(p->right) que.push(p->right);
       }
       sort(vec.begin(),vec.end());
       size=vec.size();
       que.push(root);
       while(!que.empty())
       {
          p=que.front();
          que.pop();
          ans=p->val;
          for(int i=size-1;i>=0;i--)
            if(vec[i]>ans) p->val+=vec[i];
            else break;
          if(p->left) que.push(p->left);
          if(p->right) que.push(p->right);
       }
       return root;
    }
};


