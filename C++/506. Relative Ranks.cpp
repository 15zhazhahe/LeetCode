class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        priority_queue<pair<int,int> > q;
        vector<string> ans(nums.size());
        int len = nums.size();
        for(int i=0;i<len;i++)
            q.push({nums[i], i});
        int cnt = 1;
        while(!q.empty())
        {
            if(cnt==1)
                ans[q.top().second] = "Gold Medal";
            else if(cnt==2)
                ans[q.top().second] = "Silver Medal";
            else if(cnt==3)
                ans[q.top().second] = "Bronze Medal";
            else
                ans[q.top().second] = to_string(cnt);
            cnt++;
            q.pop();
        }
        return ans;
    }
};