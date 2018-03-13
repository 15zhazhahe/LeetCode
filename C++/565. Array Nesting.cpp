class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<int> vis(nums.size(), 0);
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            int j = nums[i];
            int tmp = 0;
            while(!vis[j])
            {
                vis[j] = 1;
                j = nums[j];
                tmp += 1;
            }
            ans = max(ans, tmp);
        }
        return ans;
    }
};