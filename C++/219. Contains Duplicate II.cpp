class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> s;
        int len = nums.size();
        for(int i=0;i<len;i++)
        {
            if(i>k) s.erase(nums[i-k-1]);
            if(s.find(nums[i])!=s.end())
                return true;
            s.insert(nums[i]);
        }
        return false;
    }
};