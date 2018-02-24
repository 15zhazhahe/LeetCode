class Solution1 {
public:
    int thirdMax(vector<int>& nums) {
        map<int, int> maple;
        for(auto num: nums)
            maple[num] = num;
        map<int,int>::iterator it = maple.begin();
        int k = maple.size()-2,ans;
        while(it != maple.end())
        {
            if(maple.size() >=3 && k==0)
                break;
            ans = it->second;
            k--;
            it++;
        }
        return ans;
            
    }
};

class Solution2 {
public:
    int thirdMax(vector<int>& nums) {
        long long ans1, ans2, ans3;
        ans1 = ans2 = ans3 = LONG_MIN;
        for(auto num: nums)
        {
            if(ans1==num || ans2==num || ans3==num)
                continue;
            if(ans1<num)
            {
                ans3 = ans2;
                ans2 = ans1;
                ans1 = num;
            }
            else if(ans2<num)
            {
                ans3 = ans2;
                ans2 = num;
            }
            else if(ans3<num)
                ans3 = num;
        }
        return ans3==LONG_MIN?ans1:ans3;
    }
};