class Solution {
public:
    string toHex(int num) {
        string a = "0123456789abcdef";
        if(num==0) return "0";
        string ans = "";
        int cnt = 0;
        while(num && cnt<8)
        {
            ans += a[(num & 0xf)];
            num >>= 4;
            cnt++;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};