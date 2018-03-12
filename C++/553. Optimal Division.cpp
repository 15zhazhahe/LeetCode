class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string ans = to_string(nums[0]);
        if(nums.size() == 1)
            return ans;
        if(nums.size() == 2)
            return ans+'/' + to_string(nums[1]);
        ans += "/(";
        for(int i=1;i<nums.size();i++)
        {
            if(i==1)
                ans += to_string(nums[i]);
            else
                ans += '/' + to_string(nums[i]);
        }
            
        ans += ')';
        return ans;
        
    }
};