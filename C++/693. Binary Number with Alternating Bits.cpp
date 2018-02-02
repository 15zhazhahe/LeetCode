class Solution {
public:
    bool hasAlternatingBits(int n) {
        int ans = (n>>1) ^ n;
        return (ans & (ans+1)) == 0;
    }
};