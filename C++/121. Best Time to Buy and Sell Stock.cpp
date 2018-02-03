class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int ans = 0;
        if(len==0) return 0;
        int mi = prices[0];
        for(int i=0;i<len;i++)
        {
            if(prices[i]<mi)
                mi = prices[i];
            ans = max(ans,prices[i]-mi);
        }
        return ans;
    }
};