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
    string tree2str(TreeNode* t) {
        string ans = "";
        if(t==nullptr)
            return ans;
        ans += to_string(t->val);
        if(t->left || t->right)
        {
            ans += "(" + tree2str(t->left) + ")";
            if(t->right)
                ans += "("+ tree2str(t->right) + ")";
        }
        return ans;
        
    }
};