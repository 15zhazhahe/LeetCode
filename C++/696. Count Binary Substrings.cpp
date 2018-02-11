class Solution {
public:
    int countBinarySubstrings(string s) {
        int len = s.length();
        int last = 0,now = 1,ans = 0;
        for(int i=1;i<len;i++)
        {
            if(s[i]==s[i-1])
                now++;
            else
            {
                last = now;
                now = 1;
            }
            if(last>=now)
                ans++;
        }
        return ans;
        
    }
};