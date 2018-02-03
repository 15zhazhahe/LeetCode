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
    vector<string> ans;
    void dfs(TreeNode* node,string s)
    {
        if(node->left==nullptr && node->right==nullptr)
        {
            ans.push_back(s+to_string(node->val));
            return ;
        }
        if(node->left != nullptr)
            dfs(node->left, s+to_string(node->val)+"->");
        if(node->right != nullptr)
            dfs(node->right, s+to_string(node->val)+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        ans.clear();
        if(root == nullptr) return ans;
        dfs(root,"");
        return ans;
    }
};