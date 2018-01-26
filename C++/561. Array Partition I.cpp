// Time:  O(nlog(n))
// Space: O(1)
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(unsigned i=0;i<nums.size();i+=2)
            ans += nums[i];
        return ans;
    }
};