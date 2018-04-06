// Time: O(n)
// Space: O(1)
class Solution {
public:
    void reverseWords(string &s) {
        int len = s.length();
        int i = 0;
        int l = 0, r = 0;
        while(i<len)
        {
            while(i<len && s[i]==' ')
                i++;
            if(i>=len)
                break;
            if(l != r)
                s[r++] = ' ';
            l = r;
            while(i<len && s[i] != ' ')
                s[r++] = s[i++];
            reverse(s.begin()+l, s.begin()+r);
        }
        s.resize(r);
        reverse(s.begin(), s.end());
    }
};
// Time: O(n)
// Space: O(n)
class Solution2 {
public:
    void reverseWords(string &s) {
        int len = s.length();
        int i = 0;
        string ans = "";
        while(s[i] == ' ')
            i++;
        while(s[len-1] == ' ')
            len--;
        while(i<len)
        {
            string tmp = "";
            while(i<len && s[i] != ' ')
            {
                tmp += s[i];
                i++;
            }
            ans = tmp + ans;
            if(i == len)
                break;
            while(s[i] == ' ')
                i++;
            ans = ' ' + ans;
        }
        s = ans;
    }
};