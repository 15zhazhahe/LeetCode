class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int sum = nums[0],ans = nums[0];
        for(int i=1;i<len;i++)
        {
            if(sum < 0)
                sum = 0;
            sum += nums[i];
            ans = max(ans,sum);
        }
        return ans;
    }
};