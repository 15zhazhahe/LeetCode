class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> ans;
        for(int i=0;i<12;i++)
        {
            for(int j=0;j<60;j++)
            {
                bitset<10> s1(i);
                bitset<10> s2(j);
                if(s1.count() + s2.count() == num)
                {
                    char tmp[5];
                    sprintf(tmp, "%d:%02d", i, j);
                    ans.push_back(tmp);
               }
            }
        }
        return ans;
    }
};