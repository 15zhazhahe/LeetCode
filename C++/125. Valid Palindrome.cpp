class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;
        while(l<r)
        {
            while(l < s.length() && !isalnum(s[l]))
                l++;
            while(r >= 0 && !isalnum(s[r]))
                r--;
            if(l==s.length() && r==0)
                return true;
            if(toupper(s[l]) != toupper(s[r]))
                return false;
            l++, r--;
        }
        return true;
    }
};