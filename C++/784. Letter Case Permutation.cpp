class Solution {
public:
    void dfs(string s,int i,vector<string> &ans)
    {
        if(i==s.length())
        {
            ans.push_back(s);
            return ;
        }
        if(isalpha(s[i]))
        {
            if(s[i]>='a')
                s[i] = s[i]-'a'+'A';
            else
                s[i] = s[i]-'A'+'a';
            dfs(s,i+1,ans);
            if(s[i]>='a')
                s[i] = s[i]-'a'+'A';
            else
                s[i] = s[i]-'A'+'a';
        }
        dfs(s,i+1,ans);
    }
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        dfs(S,0,ans);
        return ans;
    }
};