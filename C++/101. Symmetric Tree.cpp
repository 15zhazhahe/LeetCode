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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)
            return true;
        queue<TreeNode*> q1, q2;
        q1.push(root->left);
        q2.push(root->right);
        while(!q1.empty() && !q2.empty())
        {
            TreeNode* now1 = q1.front();
            TreeNode* now2 = q2.front();
            q1.pop();
            q2.pop();
            if(now1 == nullptr && now2 == nullptr)
                continue;
            if(now1 == nullptr || now2 == nullptr)
                return false;
            if(now1->val != now2->val)
                return false;
            q1.push(now1->left);
            q1.push(now1->right);
            q2.push(now2->right);
            q2.push(now2->left);
        }
        return true;
    }
};