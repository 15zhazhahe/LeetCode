class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int>maple;
        for(auto num: nums)
            maple[num] += 1;
        int ans = 0;
        for(auto num: nums)
        {
            if(maple[num+1]>0)
                ans = max(ans,maple[num]+maple[num+1]);
        }
        return ans;
    }
};