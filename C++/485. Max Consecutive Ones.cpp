// Time: O(n)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0,sum = 0;
        for(auto num: nums)
        {
            if(num) sum++;
            else sum = 0;
            ans = max(sum,ans);
        }
        return ans;
    }
};