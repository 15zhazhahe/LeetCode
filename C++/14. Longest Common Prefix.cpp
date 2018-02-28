class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs.size()==0)
            return ans;
        int len = strs[0].length();
        for(int i = 0;i<len;i++)
        {
            for(auto str: strs)
            {
                if(i>=str.length() || str[i] != strs[0][i])
                    return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};