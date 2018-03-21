class Solution {
public:
    bool canJump(vector<int>& nums) {
        int step = 0, i;
        for(i=0;i<nums.size() && i<=step;i++)
            step = max(i+nums[i],step);
        return i == nums.size();
    }
};