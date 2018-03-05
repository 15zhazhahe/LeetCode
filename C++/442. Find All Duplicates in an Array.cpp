class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(auto num: nums)
        {
            int v = abs(num);
            if(nums[v-1] < 0)
                ans.push_back(v);
            else
                nums[v-1] = -nums[v-1];
        }
        return ans;
    }
};