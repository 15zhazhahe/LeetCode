/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*
对于一颗二叉搜索树来说,两个节点的最近公共祖先一定是,
该祖先的值介于两个节点之间
*/
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while((root->val - p->val)*(root->val - q->val) > 0)
        {
            if(root->val < p->val)
                root = root->right;
            else
                root = root->left;
        }
        return root;
    }
};