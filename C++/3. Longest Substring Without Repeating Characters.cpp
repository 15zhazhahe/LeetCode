class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_map<char, int>maple;
        int last = 0;
        for(int i=0;i<s.length();i++)
        {
            char c = s[i];
            if(maple.find(c) != maple.end())
                last = max(maple[c]+1, last);
            maple[c] = i;
            ans = max(ans, i - last + 1);
        }
        return ans;
    }
};