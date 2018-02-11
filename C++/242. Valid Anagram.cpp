class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        if(len1 != len2)
            return false;
        unordered_map<int,int> maple;
        for(int i=0;i<len1;i++)
        {
            maple[s[i]]++;
            maple[t[i]]--;
        }
        for(auto cnt: maple)
        {
            if(cnt.second != 0)
                return false;
        }
        return true;
    }
};