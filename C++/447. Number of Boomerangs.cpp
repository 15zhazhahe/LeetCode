class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int len = points.size();
        unordered_map<int, int> maple;
        int ans = 0;
        for(int i=0;i<len;i++)
        {
            maple.clear();
            for(int j=0;j<len;j++)
            {
                if(i==j) continue;
                int dx = (points[i].first-points[j].first);
                int dy = (points[i].second-points[j].second);
                int tmp = dx*dx+dy*dy;
                maple[tmp]++;
            }
            
            for(auto &m: maple)
            {
                if(m.second >= 2)
                {
                    int tmp = m.second;
                    ans += tmp*(tmp-1);
                }
            }
        }
        return ans;
    }
};