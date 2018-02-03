class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        int cnt = 0,ans = 0;
        for(int i=0;i<len;i++)
        {
            if(ans==nums[i])
                cnt++;
            else
                cnt--;
            if(cnt<0)
            {
                cnt = 0;
                ans = nums[i];
            }
        }
        return ans;
    }
};