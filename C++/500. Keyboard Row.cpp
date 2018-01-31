// Time: O(n*m)
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> cnt {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        vector<string> ans;
        int len = words.size();
        for(int i=0;i<len;i++)
        {
            
            int d[3] = {0,0,0};
            for(int j=0;j<words[i].length();j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(cnt[k].find(tolower(words[i][j]))!=-1)
                        d[k] = 1;
                }
            }
            if(d[0]+d[1]+d[2]==1)
                ans.push_back(words[i]);
        }
        return ans;
    }
};