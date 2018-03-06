class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0)
            return 0;
        unordered_map<int, int> maple;
        for(auto num: nums)
            maple[num] += 1;
        int ans = 0;
        for(auto &it: maple)
        {
            if(k==0 && it.second>1)
                ans += 1;
            else if(k != 0 && maple.find(it.first + k) != maple.end())
                ans += 1;
        }
        return ans;
    }
};