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
    bool dfs(TreeNode* node, int sum, int target)
    {
        sum += node->val;
        if(sum == target && !node->left && !node->right)
            return true;
        if(node->left && dfs(node->left, sum, target))
            return true;
        if(node->right && dfs(node->right, sum, target))
            return true;
        return false;
            
        
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == nullptr)
            return false;
        return dfs(root, 0, sum);
    }
};