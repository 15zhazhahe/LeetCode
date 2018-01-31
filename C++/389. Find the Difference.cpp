// Time O(n+m)
class Solution {
public:
    char findTheDifference(string s, string t) {
        s = s+t;
        int len = s.length();
        char ans = 0;
        for(int i=0;i<=len;i++)
            ans ^= s[i];
        return ans;
    }
};