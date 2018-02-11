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
    vector<int> a;
    void dfs(TreeNode* node)
    {
        if(node==nullptr)
            return ;
        dfs(node->left);
        a.push_back(node->val);
        dfs(node->right);
    }
    int minDiffInBST(TreeNode* root) {
        a.clear();    
        dfs(root);
        int ans = -1, len = a.size();
        for(int i=1;i<len;i++)
        {
            if(ans == -1)
                ans = a[i]-a[i-1];
            else
                ans = min(ans,a[i]-a[i-1]);
        }
        return ans;
    }
};