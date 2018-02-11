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
    unordered_map<int, int> maple;
    bool dfs(TreeNode* node, int k)
    {
        if(node == nullptr) return false;
        if(maple.find(k-node->val)!=maple.end())
            return true;
        maple[node->val] = 1;
        return dfs(node->left, k) || dfs(node->right, k);
    }
    bool findTarget(TreeNode* root, int k) {
        maple.clear();
        return dfs(root,k);
    }
};