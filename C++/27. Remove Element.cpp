class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int ans = 0;
        for(int i=0;i<len;i++)
        {
            if(nums[i]!=val)
                nums[ans++] = nums[i];
        }
        return ans;
    }
};