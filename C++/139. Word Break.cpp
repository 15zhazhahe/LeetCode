class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, int>maple;
        for(auto word:wordDict)
            maple[word] = 1;
        vector<bool> dp(s.length()+1,false);
        dp[0] = true;
        for(int i=0;i<s.length()+1;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(maple.find(s.substr(j, i-j))!=maple.end() && dp[j])
                    dp[i] = true;
            }
        }
        return dp[s.length()];
    }
};