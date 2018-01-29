// Time: O(n)
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> ans;
        for(auto candie : candies)
            ans.insert(candie);
        return min(ans.size(), candies.size()/2);
    }
};