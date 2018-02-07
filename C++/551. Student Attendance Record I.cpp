class Solution {
public:
    bool checkRecord(string s) {
        int c1 = 0, c2 = 0;
        for(auto c: s)
        {
            if(c=='A') c1++;
            if(c=='L') c2++;
            else c2 = 0;
            if(c1>1 || c2>2)
                return false;
        }
        return true;
    }
};