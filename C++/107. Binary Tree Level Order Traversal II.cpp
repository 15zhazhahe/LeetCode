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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > ans;
        queue<TreeNode*>q;
        if(root)
            q.push(root);
        while(!q.empty())
        {
            vector<int> tmp;
            int cnt = q.size();
            while(cnt)
            {
                TreeNode* now = q.front();
                q.pop();
                cnt--;
                tmp.push_back(now->val);
                if(now->left)
                    q.push(now->left);
                if(now->right)
                    q.push(now->right);
            }
            ans.push_back(tmp);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};