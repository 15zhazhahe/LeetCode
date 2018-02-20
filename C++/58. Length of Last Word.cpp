class Solution1 {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        stringstream c(s);
        string tmp;
        while(c>>tmp)
            ans = tmp.length();
        return ans;
    }
};

class Solution2 {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, tail = s.length()-1;
        while(s[tail]==' ' && tail >=0)
            tail--;
        while(tail >= 0 && s[tail] != ' ')
        {
            tail--;
            ans++;
        }
        return ans;
    }
};2