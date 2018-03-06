class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int>maple;
        vector<string> ans;
        int res = INT_MAX;
        for(int i=0;i<list1.size();i++)
            maple[list1[i]] = i;
        for(int i=0;i<list2.size();i++)
        {
            if(maple.find(list2[i]) != maple.end())
            {
                if(i + maple[list2[i]] < res)
                {
                    res = i + maple[list2[i]];
                    ans.clear();
                    ans.push_back(list2[i]);
                }
                else if(i + maple[list2[i]] == res)
                    ans.push_back(list2[i]);
            }
        }
        return ans;
    }
};