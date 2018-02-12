class Solution1 {
public:
    bool isIsomorphic(string s, string t) {
        int len = s.length();
        unordered_map<char,char> maple1;
        unordered_map<char,char> maple2;
        for(int i=0;i<len;i++)
        {
            if(maple1.find(s[i])==maple1.end())
            {
                if(maple2.find(t[i])==maple2.end())
                {
                    maple2[t[i]] = s[i];
                    maple1[s[i]] = t[i];
                }
                else
                    return false;
            }
            else if(maple1[s[i]]!=t[i])
                return false;
        }
        return true;
    }
};

class Solution2 {
public:
    bool isIsomorphic(string s, string t) {
        int len = s.length();
        int vis1[256] = {0},vis2[256] = {0};
        for(int i=0;i<len;i++)
        {
            if(vis1[s[i]]!=vis2[t[i]])
                return false;
            vis1[s[i]] = i+1;
            vis2[t[i]] = i+1;
        }
        return true;
    }
};