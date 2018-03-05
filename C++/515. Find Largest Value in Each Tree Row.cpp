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
    void dfs(TreeNode* node, int depth, vector<int> &ans)
    {
        if(node == nullptr)
            return ;
        if(ans.size()<=depth)
            ans.push_back(node->val);
        else if(ans[depth] < node->val)
            ans[depth] = node->val;
        dfs(node->left, depth+1, ans);
        dfs(node->right, depth+1, ans);
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        dfs(root, 0, ans);
        return ans;
    }
};