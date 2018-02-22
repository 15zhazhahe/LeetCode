class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        int len = S.length(), cnt = 0;
        string ans = "";
        int first = 0;
        for(int i=len-1;i>=0;i--)
        {
            if(S[i]=='-')
                continue;
            if(cnt == K)
            {
                ans = '-' + ans;
                cnt = 0;
            }
            ans = (char)toupper(S[i]) + ans;
            cnt++;
        }
        return ans;
    }
};