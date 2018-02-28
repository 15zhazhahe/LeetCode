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
    int dfs(TreeNode* node, int val)
    {
        if(node == nullptr || node->val != val)
            return 0;
        else
            return max(dfs(node->left, val),dfs(node->right, val)) + 1;
    }
    int longestUnivaluePath(TreeNode* root) {
        if(root == nullptr)
            return 0;
        int ans = dfs(root->left, root->val)+dfs(root->right, root->val);
        int res = max(longestUnivaluePath(root->right),longestUnivaluePath(root->left));
        return max(ans, res);
    }
};