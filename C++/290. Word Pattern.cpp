class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> tmp;
        string s;
        istringstream in(str);
        while(in >> s)
            tmp.push_back(s);
        int len1 = pattern.length();
        int len2 = tmp.size();
        if(len1 != len2)
            return false;
        unordered_map<string,char> maple1;
        unordered_map<char,string> maple2;
        for(int i=0;i<len1;i++)
        {
            if(maple1.find(tmp[i])==maple1.end())
            {
                if(maple2.find(pattern[i])==maple2.end())
                {
                    maple2[pattern[i]] = tmp[i];
                    maple1[tmp[i]] = pattern[i];
                }
                else
                    return false;
            }
            else if(maple1[tmp[i]]!=pattern[i])
                return false;
        }
        return true;
    }
};