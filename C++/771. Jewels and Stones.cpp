class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int lenj = J.length();
        int lens = S.length();
        int ans = 0;
        for(int i=0;i<lens;i++)
        {
            for(int j=0;j<lenj;j++)
            {
                if(S[i]==J[j])
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }

};