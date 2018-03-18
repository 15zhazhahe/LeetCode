class Solution {
public:
    int nthUglyNumber(int n) {
        unordered_map<long long, int>maple;
        priority_queue<long long,vector<long long>,greater<long long> > q;
        q.push(1);
        int cnt = 0,ans = 1;
        while(cnt < n)
        {
            long long now = q.top();
            q.pop();
            if(maple.find(now)!=maple.end())
                continue;
            maple[now] = 1;
            cnt += 1;
            if(cnt == n)
                ans = now;
            q.push(now*2);
            q.push(now*3);
            q.push(now*5);
        }
        return ans;
    }
};