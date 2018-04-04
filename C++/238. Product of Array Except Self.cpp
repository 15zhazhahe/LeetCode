class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int sum = 1, cnt = 0;
        for(int num: nums)
        {
            if(num) sum *= num;
            else
                cnt++;
        }
        for(int i = 0;i<nums.size(); i++)
        {
            if(cnt >= 2)
                continue;
            else if(cnt == 1)
            {
                if(nums[i] == 0)
                    ans[i] = sum;
            }
            else
                ans[i] = sum / nums[i];
        }
        return ans;
    }
};