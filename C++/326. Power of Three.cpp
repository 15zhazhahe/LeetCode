class Solution {
public:
    bool isPowerOfThree(int n) {
        long long tmp = 1;
        while(tmp<n)
            tmp *= 3;
        return tmp == n;
    }
};