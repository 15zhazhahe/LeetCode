// Time:  O(n)
// Space: O(n)
class Solution {
public:
    string reverseWords(string s) {
        int last = 0;
        for(int i = 0;i<(int)s.length();i++)
        {
            if(i==s.length()-1 || s[i+1]==' ')
            {
                for(int j=last,k=i;j<k;j++,k--)
                    swap(s[k],s[j]);
                last = i+2;
                //cout<<s<<endl;
            }
        }
        return s;
    }
};