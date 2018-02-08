class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int sum = 0,ans = 0;
        int len = nums.size();
        for(int i=0;i<len;i++)
        {
            if(i==0 || nums[i]>nums[i-1])
                sum++;
            else
                sum = 1;
            ans = max(ans,sum);
        }
        return ans;
    }
};