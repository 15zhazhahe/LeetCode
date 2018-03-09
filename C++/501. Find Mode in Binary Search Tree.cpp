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
    int cnt;
    unordered_map<int, int>maple;
    void dfs(TreeNode* node)
    {
        if(node==nullptr)
            return ;
        maple[node->val]++;
        if(maple[node->val] > cnt)
        {
            cnt = maple[node->val];
            ans.clear();
            ans.push_back(node->val);
        }
        else if(maple[node->val] == cnt)
            ans.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }
    vector<int> findMode(TreeNode* root) {
        ans.clear();
        cnt = 0;
        maple.clear();
        dfs(root);
        return ans;
    }
};