class Solution1 {
public:
    string reverseVowels(string s) {
        unordered_map<char, int> maple;
        maple['a'] = maple['A'] = 1;
        maple['e'] = maple['E'] = 1;
        maple['o'] = maple['O'] = 1;
        maple['i'] = maple['I'] = 1;
        maple['u'] = maple['U'] = 1;
        int len = s.length();
        int l = 0, r = len-1;
        while(l<r)
        {
            while(l<len && maple.find(s[l])==maple.end())
                l++;
            while(r>=0 && maple.find(s[r])==maple.end())
                r--;
            if(l<r)
                swap(s[l],s[r]);
            l++, r--;
        }
        return s;
    }
};

class Solution2 {
public:
    string reverseVowels(string s) {
        int len = s.length();
        int l = 0, r = len-1;
        while(l<r)
        {
            l = s.find_first_of("aeoiuAEOIU", l);
            r = s.find_last_of("aeoiuAEOIU", r);
            if(l<r)
                swap(s[l],s[r]);
            l++, r--;
        }
        return s;
    }
};