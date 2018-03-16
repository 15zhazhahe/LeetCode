class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        string ans = "";
        int len = s.length();
        for(int i=0;i<numRows;i++)
        {
            int t1 = 2*i, t2 = 2*(numRows-1-i);
            int k = i;
            if(t1 == 0 || t2 == 0)
            {
                t1 = max(t1,t2);
                while(k<len)
                {
                    ans += s[k];
                    k += t1;
                }
            }
            else
            {
                while(k<len)
                {
                    ans += s[k];
                    k += t2;
                    if(k >= len)
                        break;
                    ans += s[k];
                    k += t1;
                }
            }
        }
        return ans;
    }
};