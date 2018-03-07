class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0;
        unordered_map<char, int> maple;
        for(auto c: s)
            maple[c] += 1;
        for(auto& c: maple)
            ans += (c.second/2)*2;
        return ans == s.length() ? ans : ans+1;
    }
};