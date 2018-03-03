class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1)
            return 0;
        vector<bool> is_prime(n, true);
        int ans = 0;
        is_prime[0] = is_prime[1] = false;
        for(int i = 2;i<n;i++)
        {
            if(is_prime[i])
            {
                ans++;
                for(int j=2*i;j<n;j+=i)
                    is_prime[j] = false;
            }
        }
        return ans;
    }
};