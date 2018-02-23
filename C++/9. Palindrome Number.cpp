class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int sum1 = 0, sum2 = x;
        while(x)
        {
            sum1 = sum1*10 + x%10;
            x /= 10;
        }
        return sum1 == sum2;
    }
};