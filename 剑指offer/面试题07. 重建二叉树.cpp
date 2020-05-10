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
        int n=preorder.size();
        int* pre=new int[n];
        int* ino=(int*)malloc(sizeof(int)*n);
        for(int i=0;i<preorder.size();i++) pre[i]=preorder[i];
        for(int i=0;i<inorder.size();i++) ino[i]=inorder[i];
        return Create(pre,ino,n);
    }
    TreeNode* Create(int* pre,int* ino,int size)
    {
    	if(size==0) return NULL;
    	int i;
    	TreeNode* root=new TreeNode(*pre);
    	for(i=0;i<size;i++)
    	 if(*pre==ino[i]) break;
    	root->left=Create(pre+1,ino,i);
    	root->right=Create(pre+1+i,ino+i+1,size-i-1);
    	return root;
    }
};


