class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(numbers.size()-1);
        while(ans[0]+1<ans[1])
        {
            if(numbers[ans[0]]+numbers[ans[1]]>target)
                ans[1]--;
            else if(numbers[ans[0]]+numbers[ans[1]]<target)
                ans[0]++;
            else
                break;
        }
        ans[0]++,ans[1]++;
        return ans;
    }
};