class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        while(--n)
        {
            string tmp = "";
            int cnt = 0;
            char p = ans[0];
            for(auto c: ans)
            {
                if(p == c)
                    cnt += 1;
                else
                {
                    tmp += to_string(cnt) + p;
                    p = c;
                    cnt = 1;
                }
            }
            tmp += to_string(cnt) + p;
            ans = tmp;
        }
        return ans;
    }
};