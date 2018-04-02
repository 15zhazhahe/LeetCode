class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> maple;
        maple[0] = 1;
        int sum = 0, ans = 0;
        for(auto num: nums)
        {
            sum += num;
            if(maple.find(sum - k) != maple.end())
                ans += maple[sum-k];
            maple[sum] += 1;
        }
        return ans;
    }
};