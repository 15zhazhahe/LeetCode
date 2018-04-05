class Solution {
public:
    int search(vector<int>& nums, int x)
    {
        int l = 0, r = nums.size() - 1;
        while(l <= r)
        {
            int mid = (r-l)/2 + l;
            if(nums[mid] >= x)
                r = mid-1;
            else
                l = mid+1;
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = search(nums, target);
        int r = search(nums, target + 1) - 1;
        if(l >= nums.size() || nums[l] != target)
            return {-1, -1};
        return {l, r};
    }
};