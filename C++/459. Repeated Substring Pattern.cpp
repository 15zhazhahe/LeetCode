class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        vector<int> nex(s.length()+1, -1);
        int k = -1, i = 0;
        while(i < s.length())
        {
            if(k == -1 || s[i] == s[k])
            {
                i++, k++;
                nex[i] = k;
            }
            else
                k = nex[k];
        }
        int len = s.length();
        return nex[len] && nex[len] % (len-nex[len]) == 0;
    }
};