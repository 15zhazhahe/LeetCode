class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] > nums[i+1])
            {
                if(ans != INT_MAX)
                    return false;
                ans = i;
            }
        }
        if(ans == INT_MAX || ans == 0 || ans == nums.size()-2)
            return true;
        else if(nums[ans-1] <= nums[ans+1] 
                || nums[ans] <= nums[ans+2])
            return true;
        return false;
            
    }
};