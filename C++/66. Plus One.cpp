/*
一个整数用一个数组来表示,
现在让你给这个整数加上一个1
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        for(int i=len-1;i>=0;i--)
        {
            if(digits[i]==9)
                digits[i] = 0;
            else
            {
                digits[i] += 1;
                return digits;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};