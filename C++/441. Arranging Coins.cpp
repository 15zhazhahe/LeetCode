class Solution1 {
public:
    int arrangeCoins(int n) {
        long long l = 1,r = n;
        while(l<r)
        {
            long long mid = l + (r - l + 1) / 2;
            if(mid*mid+mid > 2LL*n)
                r = mid-1;
            else
                l = mid;
        }
        return r;
    }
};
class Solution2 {
public:
    int arrangeCoins(int n) {
        return sqrt(2.0*n+1.0/4) - 0.5;
    }
};