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
    int dfs(TreeNode* node)
    {
        if(node == nullptr)
            return 0;
        return 1 + max(dfs(node->left), dfs(node->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr)
            return true;
        int l = dfs(root->left);
        int r = dfs(root->right);
        if(abs(l-r) > 1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};