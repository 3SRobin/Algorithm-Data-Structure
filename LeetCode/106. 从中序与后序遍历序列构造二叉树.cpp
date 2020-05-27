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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        TreeNode* root;
        int len=inorder.size();
        int* ine=(int*)malloc(sizeof(int)*len);
        int* post=(int*)malloc(sizeof(int)*len);
        for(int i=0;i<len;i++)
        {
           ine[i]=inorder[i];
           post[i]=postorder[i];
        }
        root=Create(ine,post,len);
        return root;
    }
    TreeNode* Create(int* ine,int* post,int num)
    {
       if(num==0) return NULL;
       int pos=0;
       TreeNode* p=new TreeNode(post[num-1]);
       for(;pos<num;pos++)
         if(ine[pos]==post[num-1]) break;
      p->left=Create(ine,post,pos);
      p->right=Create(ine+pos+1,post+pos,num-pos-1);
      return p;
    }
};


