  
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
    bool update=true;
    bool verifyPostorder(vector<int>& postorder) {
      int* post=(int*)malloc(sizeof(int)*postorder.size());
      for(int i=0;i<postorder.size();i++)
        post[i]=postorder[i];
      DFS(post,postorder.size(),LONG_MIN,LONG_MAX);
      return update;
    }
    void DFS(int* post,int size,long left,long right)
    {
        if(size==0) return ;
        if(!update) return ;
        if(post[size-1]<=left||post[size-1]>=right)
        {
           update=false;
           return ;
        }
        int n=0;
        for(;n<size-1;n++)
        if(post[n]>=post[size-1]) break;
        DFS(post,n,left,post[size-1]);
        DFS(post+n,size-n-1,post[size-1],right);
    }
};


