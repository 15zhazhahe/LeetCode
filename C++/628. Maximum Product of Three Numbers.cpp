class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a1 = -10000,a2 = -10000,a3 = -10000;
        int b1 = 10000, b2 = 10000;
        for(auto num : nums)
        {
            if(num>a1)
            {
                a3 = a2;
                a2 = a1;
                a1 = num;
            }
            else if(num>a2)
            {
                a3 = a2;
                a2 = num;
            }
            else if(num>a3)
                a3 = num;
            if(num<b1)
            {
                b2 = b1;
                b1 = num;
            }
            else if(num < b2)
                b2 = num;
        }
        return max(a1*a2*a3,a1*b1*b2);
    }
};