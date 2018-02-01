/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// Time: O(n)
class Solution {
public:
    int slove(TreeNode* node, int flag)
    {
        if(node==nullptr)
            return 0;
        if(node->left==nullptr && node->right==nullptr)
        {
            if(flag) return node->val;
            return 0;
        }
        return slove(node->right, 0)+slove(node->left, 1);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return slove(root, 0);
    }
};