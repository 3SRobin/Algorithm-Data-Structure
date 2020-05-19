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
    int rob(TreeNode* root) {
        auto p=DFS(root);
        return max(p.first,p.second);
    }
    pair<int,int> DFS(TreeNode* pos)
    {
    	if(!pos) return {0,0};
    	auto left=DFS(pos->left);
    	auto right=DFS(pos->right);
    	int A=pos->val+left.second+right.second;
    	int B=max(left.first,left.second)+max(right.first,right.second);
    	return {A,B};
    }
};


