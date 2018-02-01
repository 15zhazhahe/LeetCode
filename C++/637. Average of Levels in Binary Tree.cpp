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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            double sum = 0;
            int cnt = q.size();
            for(int i=0;i<cnt;i++)
            {
                TreeNode* node = q.front();
                sum += node->val;
                q.pop();
                if(node->left!=nullptr)
                    q.push(node->left);
                if(node->right!=nullptr)
                    q.push(node->right);
            }
            ans.push_back(sum/cnt);
        }
        return ans;
    }
};