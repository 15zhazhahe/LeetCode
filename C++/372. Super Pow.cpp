class Solution {
public:
    int qpow(int x,int n,int mod)
    {
        int res = 1;
        while(n)
        {
            if(n&1)
                res = res*x%mod;
            x = x*x%mod;
            n >>= 1;
        }
        return res;
    }
    int eular(int n)
    {
        int res = n;
        for(int i=2;i*i<=n;i++)
        {
            if(n % i == 0)
            {
                res = res / i * (i-1);
                while(n % i == 0)
                    n /= i;
            }
        }
        if(n>1)
            res = res/n*(n-1);
        return res;
    }
    int superPow(int a, vector<int>& b) {
        a = a%1337;
        int phi = eular(1337);
        int res = 0;
        for(auto num: b)
            res = (res * 10 % phi + num) % phi;
        return qpow(a,res, 1337);
    }
};