class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int cnt = B.length()/A.length()+3;
        string a;
        for(int i = 1;i<=cnt;i++)
        {
            a += A;
            if(a.find(B) != string::npos)
                return i;
        }
        return -1;
    }
};