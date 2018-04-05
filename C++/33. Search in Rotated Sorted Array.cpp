class Solution1 {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return -1;
        int l = 0, r = nums.size()-1;
        while(l <= r)
        {
            int mid = (r-l)/2 + l;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] >= nums[l])
            {
                if(target >= nums[l] && target < nums[mid])
                    r = mid-1;
                else
                    l = mid+1;
            }
            else
            {
                if(target > nums[mid] && target <= nums[r])
                    l = mid+1;
                else
                    r = mid-1;
                    
            }
        }
        return -1;
    }
};

class Solution2 {
public:
    int search(vector<int>& nums, int target) {
        int pos = nums.size();
        if(pos==0)
            return -1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            {
                pos = i;
                break;
            }
        }
        int l = 0, r = pos;
        if(target < nums[l])
        {
            l = pos;
            r = nums.size();
        }
        if(l == nums.size())
            return -1;
        if(target > nums[pos-1])
            return -1;
        while(l <= r)
        {
            int mid = (r-l)/2 + l;
            if(target == nums[mid])
                return mid;
            if(target > nums[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        return -1;
    }
};