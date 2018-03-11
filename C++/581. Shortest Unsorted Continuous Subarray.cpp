class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int ans = 0;
        int l = 0, r = nums.size()-1;
        while(l<nums.size()-1 && nums[l] <= nums[l+1])
            l += 1;
        while(r>0 && nums[r] >= nums[r-1])
            r -= 1;
        if(l < r)
        {
            int mi = nums[l], ma = nums[r];
            for(int i=l;i<=r;i++)
            {
                mi = min(mi,nums[i]);
                ma = max(ma,nums[i]);
            }
            while(l>=0 && nums[l] > mi)
                l--;
            while(r<nums.size() && nums[r] < ma)
                r++;
            return r-l-1;
        }
        return ans;
    }
};