class Solution {
public:
    int romanToInt(string s) {
        map<char, int> maple;
        maple['I'] = 1; maple['V'] = 5;
        maple['X'] = 10, maple['L'] = 50;
        maple['C'] = 100, maple['D'] = 500;
        maple['M'] = 1000;
        int len = s.length();
        int sum = maple[s.back()];
        for(int i=len-2;i>=0;i--)
        {
            if(maple[s[i]]<maple[s[i+1]])
                sum -= maple[s[i]];
            else
                sum += maple[s[i]];
        }
        return sum;
    }
};