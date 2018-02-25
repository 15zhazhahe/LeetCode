class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        int ans = 0;
        for(auto house: houses)
        {
            int res = INT_MAX;
            auto pos = lower_bound(heaters.begin(),heaters.end(),house);
            if(pos != heaters.end())
                res = *pos-house;
            if(pos != heaters.begin())
                res = min(res,house-*(pos-1));
            ans = max(ans,res);
        }
        return ans;
    }
};