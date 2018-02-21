class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while(n != 1)
        {
            string ns = to_string(n);
            n = 0;
            for(int i=0;i<ns.length();i++)
                n += (ns[i]-'0')*(ns[i]-'0');
            if(s.find(n) != s.end())
                return false;
            s.insert(n);
        }
        return true;
    }
};