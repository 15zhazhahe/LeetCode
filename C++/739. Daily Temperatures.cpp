class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<pair<int, int>> s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && s.top().second < temperatures[i])
            {
                int index = s.top().first;
                s.pop();
                ans[index] = i-index;
            }
            s.push(make_pair(i, temperatures[i]));
        }
        return ans;
    }
};