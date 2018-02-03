class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(!n) return false;
        long long a = n;
        return (a&(a-1)) == 0;
    }
};