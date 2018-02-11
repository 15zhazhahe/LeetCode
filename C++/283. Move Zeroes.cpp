class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int cnt = 0;
        for(int i=0;i<len;i++)
            if(nums[i]) nums[cnt++] = nums[i];
        while(cnt < len)
            nums[cnt++] = 0;
    }
};