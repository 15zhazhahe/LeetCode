class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> vis1(26, 0);
        vector<int> vis2(26, 0);
        vector<int> ans;
        if(s.length() < p.length())
            return ans;
        for(int i=0;i<p.length();i++)
        {
            vis1[s[i]-'a']++;
            vis2[p[i]-'a']++;
        }
        if(vis1 == vis2)
            ans.push_back(0);
        for(int i=p.length();i<s.length();i++)
        {
            vis1[s[i]-'a']++;
            vis1[s[i-p.length()]-'a']--;
            if(vis1 == vis2)
                ans.push_back(i-p.length()+1);
        }
        return ans;
    }
};