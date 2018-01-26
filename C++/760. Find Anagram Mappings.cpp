// Time:  O(n)
// Space: O(n)
class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        map<int, int> maple;
        int lenA = A.size();
        int lenB = B.size();
        for(int i=0;i<lenB;i++)
            maple[B[i]] = i;
        for(int i=0;i<lenA;i++)
            ans.push_back(maple[A[i]]);
        return ans;
    }
};