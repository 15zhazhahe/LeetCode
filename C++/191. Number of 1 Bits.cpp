class Solution1 {
public:
    int hammingWeight(uint32_t n) {
        bitset<100> s(n);
        return s.count();
    }
};

class Solution2 {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n)
        {
            n &= (n-1);
            ans++;
        }
        return ans;
    }
};