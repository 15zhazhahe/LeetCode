class Solution {
public:
    bool rotateString(string A, string B) {
        vector<int> nex(B.size()+1, -1);
        int i = 0,k = -1, j = 0;
        A = A+A;
        while(i<B.size())
        {
            if(k==-1 || B[i] == B[k])
            {
                i++, k++;
                nex[i] = k;
            }
            else
                k = nex[k];
        }
        i = 0;
        while(i<A.size() && j<B.size())
        {
            if(A[i] == B[j])
            {
                i++;
                j++;
            }
            else if(j==0)
                i++;
            else
                j = nex[j];
        }
        return j == B.size();
    }
};