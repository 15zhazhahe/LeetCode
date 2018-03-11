class Solution {
public:
    int findNthDigit(int n) {
        long long d = 1,b = 9;
        long long num = 1;
        while(n - d*b > 0)
        {
            n -= d*b;
            d++,b*=10;
            num *= 10;
        }
        num += n / d;
        int i = n % d;
        if(i == 0)
            return (num-1)%10;
        while(i<d)
        {
            i+=1;
            num /= 10;
        }
        
        return num % 10;
    }
};