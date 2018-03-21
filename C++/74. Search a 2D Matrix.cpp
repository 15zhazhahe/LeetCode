class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0)
            return false;
        int m = matrix.size(), n = matrix[0].size();
        int j = n-1, i = 0;
        while(i<m && j>=0)
        {
            if(matrix[i][j] == target)
                return true;
            else if(target > matrix[i][j])
                i++;
            else if(target < matrix[i][j])
                j--;
        }
        return false;
    }
};