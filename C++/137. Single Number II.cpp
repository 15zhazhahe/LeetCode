class Solution1 {
public:
    int singleNumber(vector<int>& nums) {
        int s1 = 0, s2 = 0, s3 = 0;
        for(auto num: nums)
        {
            s2 |= s1 & num;
            s1 ^= num;
            s3 = s1 & s2;
            s1 &= ~s3;
            s2 &= ~s3;
        }
        return s1;
    }
};

class Solution2 {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<32;i++)
        {
            int cnt = 0;
            for(auto num: nums)
            {
                if((num >> i) & 1 == 1)
                    cnt += 1;
            }
            cnt %= 3;
            if(cnt == 1)
                ans |= 1<<i;
        }
        return ans;
    }
};