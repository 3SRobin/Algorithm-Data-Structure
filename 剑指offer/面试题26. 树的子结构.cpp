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
    bool update;
    bool isSubStructure(TreeNode* A, TreeNode* B) {
       update=false;
       if(!B) return update;
       DFS(A,B);
       return update;
    }
    void DFS(TreeNode* A,TreeNode* B)
    {
       if(!A) return ; 
       if(A->val==B->val)
       update=cmp(A,B);
       else
       {
          DFS(A->left,B);
          DFS(A->right,B);
       }
    }
    bool cmp(TreeNode* A,TreeNode* B)
    {
       if(!B) return true;
       if(!A) return false;
       if(A->val!=B->val) return false;
       return cmp(A->left,B->left)&&cmp(A->right,B->right);
    }
};


