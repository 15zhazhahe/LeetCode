// Time: O(n)
class Solution {
public:
   int findComplement(int num) {
        long long i = 1;
        for(;i<=num;i<<=1);
        return (i-1)^num;
    }
};