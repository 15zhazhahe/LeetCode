class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        vector<int> sum(len);
        if(len==0)
            return -1;
        sum[0] = nums[0];
        for(int i=1;i<len;i++)
            sum[i] = sum[i-1]+nums[i];
        for(int i=0;i<len;i++)
        {
            int left = i==0?0:sum[i-1];
            int right = sum[len-1]-sum[i];
            if(left==right)
                return i;
        }
        return -1;
    }
};