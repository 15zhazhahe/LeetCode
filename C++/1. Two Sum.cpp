class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> maple;
        vector<int> ans;
        int len = nums.size();
        for(int i=0;i<len;i++)
        {
            int tmp = target - nums[i];
            if(maple.find(tmp) != maple.end())
            {
                ans.push_back(maple[tmp]);
                ans.push_back(i);
            }
            maple[nums[i]] = i;
        }
        return ans;
    }
};