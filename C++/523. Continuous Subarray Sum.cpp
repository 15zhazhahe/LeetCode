class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>maple;
        int sum = 0;
        maple[0] = -1;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            if(k) sum %= k;
            if(maple.find(sum) != maple.end())
            {
                if(i-maple[sum]>1)
                    return true;
            }
            else
                maple[sum] = i;
        }
        return false;
    }
};