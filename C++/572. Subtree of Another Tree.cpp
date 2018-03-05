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
    bool dfs(TreeNode* s, TreeNode* t)
    {
        if(s==nullptr || t==nullptr)
            return s == t;
        if(s->val != t->val)
            return false;
        return dfs(s->left, t->left) && dfs(s->right, t->right);
        
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s==nullptr)
            return s==t;
        if(dfs(s, t))
            return true;
        return isSubtree(s->left, t) || isSubtree(s->right, t);
    }
};