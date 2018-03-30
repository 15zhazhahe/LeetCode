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
    vector<int> ans;
    void dfs(TreeNode* node, int depth)
    {
        if(node == nullptr)
            return ;
        if(depth == ans.size())
            ans.push_back(node->val);
        dfs(node->right, depth+1);
        dfs(node->left, depth+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};