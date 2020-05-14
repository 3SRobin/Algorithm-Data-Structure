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
    bool update = true;
    bool isValidBST(TreeNode* root) {
        DFS(root, LONG_MIN, LONG_MAX);
        return update;
    }
    void DFS(TreeNode* root, long left, long right)
    {
        if (!root || !update) return;
        if (root->val <= left || root->val >= right) update = false;
        DFS(root->left, left, root->val);
        DFS(root->right, root->val, right);
    }
};


