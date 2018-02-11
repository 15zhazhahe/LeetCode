class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int len = bits.size();
        int ans = true;
        for(int i=0;i<len;)
        {
            if(bits[i])
            {
                ans = false;
                i += 2;
            }
            else
            {
                ans = true;
                i += 1;
            }
        }
        return ans;
    }
};