class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<32;i++)
        {
            int tmp = 0;
            for(auto &num: nums)
            {
                if((num>>i)%2==1)
                    tmp++;
            }
            ans += tmp*(nums.size()-tmp);
        }
        return ans;
    }
};