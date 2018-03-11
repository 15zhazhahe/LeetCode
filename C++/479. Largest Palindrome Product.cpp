class Solution {
public:
    long long work(int n)
    {
        string s = to_string(n);
        reverse(s.begin(),s.end());
        return stol(to_string(n) + s);
    }
    int largestPalindrome(int n) {
        if(n==1)
            return 9;
        int l = pow(10, n-1);
        int r = pow(10, n) - 1;
        for(int i=r;i>=l;i--)
        {
            long long tmp = work(i);
            for(long long j=r;j*j>=tmp;j--)
            {
                if(tmp % j == 0 && tmp/j <= r)
                    return tmp % 1337;
            }
        }
    }
};