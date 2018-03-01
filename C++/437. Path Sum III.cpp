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
    int dfs(TreeNode* node, int sum, int target)
    {
        if(node == nullptr)
            return 0;
        return dfs(node->left, sum + node->val, target)
            + dfs(node->right, sum + node->val, target)
            + (sum + node->val == target);
    }
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr)
            return 0;
        return pathSum(root->left, sum) + pathSum(root->right, sum) + dfs(root, 0, sum);
    }
};

class Solution2 {
public:
    int ans;
    unordered_map<int, int> maple;
    void dfs(TreeNode* node, int sum, int target)
    {
        sum += node->val;
        if(maple.count(sum-target))
            ans += maple[sum-target];
        maple[sum]++;
        if(node->left)
            dfs(node->left, sum, target);
        if(node->right)
            dfs(node->right, sum, target);
        maple[sum]--;
        sum -= node->val;
    }
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr)
            return 0;
        ans = 0;
        maple[0] = 1;
        dfs(root, 0, sum);
        return ans;
    }
};