class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> ans;
        stack<int> s;
        unordered_map<int, int> maple;
        for(auto num: nums)
        {
            while(!s.empty() && s.top() < num)
            {
                maple[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }
        for(auto num: findNums)
        {
            if(maple.find(num) != maple.end())
                ans.push_back(maple[num]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};