/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution1 {
public:
    int dfs(TreeNode* node)
    {
        if(node==nullptr)
            return 0;
        return max(dfs(node->left), dfs(node->right)) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
            return 0;
        int len = dfs(root->left) + dfs(root->right);
        int ans = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right));
        return max(ans, len);
    }
};


class Solution2 {
public:
    int ans;
    int dfs(TreeNode* node)
    {
        if(node==nullptr)
            return 0;
        int left = dfs(node->left);
        int right = dfs(node->right);
        ans = max(ans,left+right);
        return max(left, right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 0;
        dfs(root);
        return ans;
    }
};