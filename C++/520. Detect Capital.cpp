class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.length();
        int f1 = 0,f2 = 0;
        for(int i=1;i<len;i++)
        {
            if(word[i]>='a' && word[i]<='z')
                f1 = 1;
            if(word[i]>='A' && word[i]<='Z')
                f2 = 1;
        }
        if(len==1) return true;
        if(word[0]>='A' && word[0]<='Z')
            return f1+f2==1;
        else
            return f1 && !f2;
    }
};