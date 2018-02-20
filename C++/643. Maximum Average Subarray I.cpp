class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ans = 0,len = nums.size();
        for(int i = 0;i<k;i++)
            ans += nums[i];
        int sum = ans;
        for(int i=k;i<len;i++)
        {
            sum = sum+nums[i] - nums[i-k];
            ans = max(sum,ans);
        }
        return 1.0*ans/k;
    }
};