class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ma = -1,ans = -1,sec = -1;
        int len = nums.size();
        for(int i=0;i<len;i++)
        {
            if(nums[i]>ma)
            {
                sec = ma;
                ma = nums[i];
                ans = i;
            }
            else if(nums[i]>sec)
                sec = nums[i];
        }
        printf("%d %d\n",ma, sec);
        return ma >= 2*sec?ans:-1;
    }
};