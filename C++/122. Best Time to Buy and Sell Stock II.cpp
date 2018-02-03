class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0,len = prices.size();
        for(int i=1;i<len;i++)
            ans += max(0,prices[i]-prices[i-1]);
        return ans;
    }
};