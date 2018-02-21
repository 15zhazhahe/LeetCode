class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = nums[0],res = 0;
        int len = nums.size();
        for(auto num: nums)
            ans = min(num, ans);
        for(int i=0;i<len;i++)
            res += nums[i]-ans;
        return res;
    }
};