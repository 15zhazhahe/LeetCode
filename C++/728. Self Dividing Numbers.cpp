// Time: O(nlog(r))
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            int tmp = i,flag = 1;
            while(tmp)
            {
                int k = tmp%10;
                if(k==0 || i%k!=0)
                {
                    flag = 0;
                    break;
                }
                tmp /= 10;
            }
            if(flag)
                ans.push_back(i);
        }
        return ans;
    }
};