class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len = nums.size();
        int s1 = 0, s2 = 0;
        for(int i=0;i<len;i++)
        {
            int tmp = abs(nums[i]);
            s2 ^= ((i+1)^tmp);
            if(nums[tmp-1] < 0)
                s1 = tmp;
            else
                nums[tmp-1] *= -1; 
        }
        return {s1,s2^s1};
    }
};