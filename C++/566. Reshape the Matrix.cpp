// Time: O(r*c)
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int R = nums.size(), C = nums[0].size();
        if(R*C != r*c)
            return nums;
        vector<vector<int>> ans;
        vector<int> tmp;
        int cnt = 0;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                tmp.push_back(nums[i][j]);
                cnt++;
                if(cnt==c)
                {
                    ans.push_back(tmp);
                    cnt = 0;
                    tmp.clear();
                }
            }
        }
        return ans;
    }
};