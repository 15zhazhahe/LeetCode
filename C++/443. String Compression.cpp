class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0,cnt = 1;
        int len = chars.size();
        char c = chars[0];
        for(int i = 1;i<len;i++)
        {
            if(chars[i]!=chars[i-1])
            {
                chars[ans++] = c;
                string tmp = to_string(cnt);
                if(cnt>1)
                {
                    for(int j=0;j<tmp.length();j++)
                        chars[ans++] = tmp[j];    
                }
                c = chars[i];
                cnt = 1;
            }
            else
                cnt++;
        }
        chars[ans++] = c;
        string tmp = to_string(cnt);
        if(cnt>1)
        {
            for(int j=0;j<tmp.length();j++)
                chars[ans++] = tmp[j];    
        }
        for(int i=ans;i<len;i++)
            chars.pop_back();
        return ans;
    }
};