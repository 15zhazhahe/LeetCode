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
    TreeNode* dfs(int l, int r, vector<int>& nums)
    {
        if(l == r)
            return nullptr;
        int m = (l+r)/2;
        TreeNode* node = new TreeNode(nums[m]);
        node->left = dfs(l, m, nums);
        node->right = dfs(m+1, r, nums);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return dfs(0, nums.size(), nums);
    }
};