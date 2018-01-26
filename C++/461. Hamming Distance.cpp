// Time:  O(log(x^y))
// Space: O(1)
class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x^y;
        int ans = 0;
        while(z)
        {
            ans += z%2;
            z >>= 1;
        }
        return ans;
    }
};