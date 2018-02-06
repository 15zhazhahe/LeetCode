class Solution {
public:
    int firstUniqChar(string s) {
        int a[30] = {0};
        int len = s.length();
        for(int i=0;i<len;i++)
            a[s[i]-'a']++;
        for(int i=0;i<len;i++)
        {
            if(a[s[i]-'a'] == 1)
                return i;
        }
        return -1;
    }
};