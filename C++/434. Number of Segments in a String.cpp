class Solution1 {
public:
    int countSegments(string s) {
        int ans = 0, len = s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i] != ' ' && (i+1 == len || s[i+1] == ' '))
                ans++;
        }
        return ans;
    }
};

class Solution2 {
public:
    int countSegments(string s) {
        stringstream c(s);
        string tmp;
        int ans = 0;
        while(c>>tmp)
            ans++;
        return ans;
    }
};