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
    int ans, mi;
    void dfs(TreeNode* node)
    {
        if(node == nullptr)
            return ;
        if(mi < node->val && node->val < ans)
            ans = node->val;
        dfs(node->left);
        dfs(node->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        ans = INT_MAX;
        mi = root->val;
        dfs(root);
        return ans == INT_MAX? -1 : ans;
    }
};