// Time: O(len)
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int len = ops.size();
        for(int i=0;i<len;i++)
        {
            m = min(m, ops[i][0]);
            n = min(n, ops[i][1]);
        }
        return n*m;
    }
};