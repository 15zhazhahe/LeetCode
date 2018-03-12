class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int a = 0;
        for(auto num: nums)
            a = a^num;
        vector<int> ans(2,0);
        int last = (a&(a-1))^ a;
        for(auto num: nums)
        {
            if((num & last) == 0)
                ans[0] = ans[0]^num;
            else
                ans[1] = ans[1]^num;
        }
        return ans;
    }
};