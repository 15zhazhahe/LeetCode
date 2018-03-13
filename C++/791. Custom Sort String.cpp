class Solution {
public:
    string customSortString(string S, string T) {
        int cnt = 0;
        vector<int> vis(26, 25);
        vector<string> tmp(30, "");
        for(auto c: S)
            vis[c-'a'] = cnt++;
        for(auto c: T)
            tmp[vis[c-'a']].push_back(c);
        ostringstream ans;
        for(int i=0;i<=25;i++)
            ans << tmp[i];
        return ans.str();
    }
};