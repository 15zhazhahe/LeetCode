class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int row=1,col = 0;
        for(auto c: S)
        {
            int num = widths[c-'a'];
            if(col+num > 100)
            {
                row += 1;
                col = num;
            }
            else
                col += num;
        }
        return {row, col};
    }
};