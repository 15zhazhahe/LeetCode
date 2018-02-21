class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> maple;
        for(auto num: nums1)
            maple[num]++;
        for(auto num: nums2)
            if(maple[num] >= 1)
            {
                ans.push_back(num);
                maple[num]--;
            }
        return ans;
    }
};