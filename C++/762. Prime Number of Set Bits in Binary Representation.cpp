// Time: O(r*sqrt(r))
class Solution {
public:
    int is_prime(int x)
    {
        if(x<2)
            return false;
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
                return false;
        }
        return true;
    }
    int countPrimeSetBits(int L, int R) {
        int ans = 0;
        for(int i=L;i<=R;i++)
        {
            bitset<20> b(i);
            int cnt = b.count();
            if(is_prime(cnt))
                ans++;
        }
        return ans;
    }
};