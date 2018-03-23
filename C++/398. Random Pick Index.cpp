class Solution {
    vector<int> _nums;
public:
    Solution(vector<int> nums) {
        _nums = nums;
    }
    
    int pick(int target) {
        int cnt = 0, ans = 0;
        for(int i=0;i<_nums.size();i++)
        {
            if(target != _nums[i])
                continue;
            cnt += 1;
            if(cnt == 1)
                ans = i;
            else
            {
                if(!(rand()%cnt))
                    ans = i;
            }
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * int param_1 = obj.pick(target);
 * 水塘抽样
 */