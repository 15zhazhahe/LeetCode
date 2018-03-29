class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for(int i=0;i<nums.size();)
        {
            int l = i,r = i;
            while(r+1<nums.size() && nums[r+1] - 1 == nums[r])
                r+=1;
            if(l<r)
                ans.push_back(to_string(nums[l]) + "->" + to_string(nums[r]));
            else
                ans.push_back(to_string(nums[l]));
            i = r+1;
        }
        return ans;
    }
};