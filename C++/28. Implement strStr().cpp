class Solution {
public:
    int strStr(string haystack, string needle) {
        int k = -1, i = 0, len = needle.length();
        if(len==0)
            return 0;
        vector<int> nex(len+1,-1);
        while(i<len)
        {
            if(k==-1 || needle[i] == needle[k])
            {
                i++,k++;
                nex[i] = k;
            }
            else
                k = nex[k];
        }
        int j = 0;
        i = 0;
        int len1 = haystack.length(), len2 = needle.length();
        while(i<len1 && j<len2)
        {
            if(haystack[i] == needle[j])
            {
                i++;
                j++;
            }
            else if(j==0)
                i++;
            else
                j = nex[j];
        }
        if(j==len2)
            return i-len2;
        return -1;
    }
};