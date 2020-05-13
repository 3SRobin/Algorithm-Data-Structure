/*   迭代   */
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
        if (!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> que;
        int size, i = 0;
        que.push(root);
        while (size = que.size())
        {
            res.push_back({});
            while (size--)
            {
                auto p = que.front();
                que.pop();
                res[i].push_back(p->val);
                if (p->left) que.push(p->left);
                if (p->right) que.push(p->right);
            }
            i++;
        }
        return res;
    }
};


/*   递归   */
class Solution {
public:
    vector<vector<int>> vec;
    vector<vector<int>> levelOrder(TreeNode* root) {
        DFS(root,1);
        return vec;
    }
    void DFS(TreeNode* root,int level)
    {
       if(!root) return ;
       if(level>vec.size()) vec.push_back({root->val});
       else vec[level-1].push_back(root->val);
       DFS(root->left,level+1);
       DFS(root->right,level+1);
    }
};


