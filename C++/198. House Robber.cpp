class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        int len = nums.size();
        if(len==0)
            return 0;
        for(int i=0;i<len;i++)
        {
            if(i==0)
                dp[i] = nums[i];
            else if(i==1)
                dp[i] = max(dp[i-1],nums[i]);
            else
                dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[len-1];
    }
};