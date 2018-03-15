class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        long long tmp = n;
        if(tmp < 0)
        {
            tmp = -tmp;
            x = 1.0/x;
        }
        while(tmp > 0)
        {
            if(tmp%2!=0)
                res = res*x;
            x = x*x;
            tmp >>= 1;
        }
        return res;
    }
};