class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int>maple;
        unordered_map<int, int>cnt;
        int ans = 0, ma = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(maple.find(nums[i]) == maple.end())
                maple[nums[i]] = i;
            cnt[nums[i]]++;
            if(cnt[nums[i]] == ma)
                ans = min(ans, i - maple[nums[i]] + 1);
            if(cnt[nums[i]] > ma)
            {
                ma = cnt[nums[i]];
                ans = i - maple[nums[i]] + 1;
            }
        }
        return ans;
    }
};