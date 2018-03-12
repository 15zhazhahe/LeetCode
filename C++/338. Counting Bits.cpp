class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1);
        for(int i=1;i<=num;i++)
        {
            //ans[i] = ans[i/2] + i%2;
            ans[i] = ans[i&(i-1)] + 1;
        }
        return ans;
    }
};