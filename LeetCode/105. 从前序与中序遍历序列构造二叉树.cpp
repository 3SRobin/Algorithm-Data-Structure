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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int *pre=(int*)malloc(preorder.size()*sizeof(int));
        int *ioe=(int*)malloc(inorder.size()*sizeof(int));
        for(int i=0;i<inorder.size();i++)
        {
           pre[i]=preorder[i];
           ioe[i]=inorder[i];
        }
        return DFS(pre,ioe,inorder.size());
    }
    TreeNode* DFS(int* pre,int* ioe,int size)
    {
        if(size==0) return NULL;
        int i;
        TreeNode* root=new TreeNode(*pre);
        for(i=0;i<size;i++)
          if(pre[0]==ioe[i]) break;
          root->left=DFS(pre+1,ioe,i);
          root->right=DFS(pre+1+i,ioe+i+1,size-i-1);
        return root;
    }
};


