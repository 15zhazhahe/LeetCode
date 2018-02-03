class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        string ans;
        string tmp;
        if(num<0)
        {
            num = -num;
            ans += "-";
        }
        while(num)
        {
            tmp += (char)(num%7+'0');
            num /= 7;
        }
        reverse(tmp.begin(),tmp.end());
        return ans+tmp;
    }
};