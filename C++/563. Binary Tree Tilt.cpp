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
    int ans;
    int dfs(TreeNode* node)
    {
        if(node == nullptr)
            return 0;
        int l = dfs(node->left);
        int r = dfs(node->right);
        ans += abs(l-r);
        return l + r + node->val;
    }
    int findTilt(TreeNode* root) {
        ans = 0;
        dfs(root);
        return ans;
    }
};