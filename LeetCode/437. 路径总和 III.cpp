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
   int res;
   vector<int> path;
   int pathSum(TreeNode* root, int sum) {
       res=0;
       DFS(root,sum);
       return res;
   }
   void DFS(TreeNode* p,int sum)
   {
      if(!p) return ;
      path.push_back(p->val);
      int temp=0;
      for(int i=path.size()-1;i>=0;i--)
      {
         temp+=path[i];
         if(temp==sum) res++;
      } 
      DFS(p->left,sum);
      DFS(p->right,sum);
      path.pop_back();
   }
};


