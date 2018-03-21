class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cnt = 0;
        for(int i=0;cnt<s.length(),i<t.length();i++)
        {
            if(s[cnt]==t[i])
                cnt++;
        }
        return cnt == s.length();
    }
};