class Solution {
public:
    int myAtoi(string str) {
        int flag = 1;
        long ans = 0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')
                continue;
            if(str[i]=='+' || str[i]=='-')
            {
                flag = str[i] == '-' ? -1 : 1;
                i++;
            }
            while(str[i] >= '0' && str[i] <= '9')
            {
                ans = ans*10 + str[i]-'0';
                if(ans*flag >= INT_MAX)
                    return INT_MAX;
                if(ans*flag <= INT_MIN)
                    return INT_MIN;
                i++;
            }
            return ans*flag;
        }
            
        return ans;
    }
};