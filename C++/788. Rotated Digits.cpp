class Solution {
public:
    int rotatedDigits(int N) {
        int ans = 0;
        for(int i=2;i<=N;i++)
        {
            string tmp = to_string(i);
            int f1 = 0,f2 = 0;
            for(auto c: tmp)
            {
                if(c=='2' || c=='5' || c=='6' || c=='9')
                    f1 = 1;
                if(c=='3' || c=='4' || c=='7')
                {
                    f2 = 1;
                    break;
                }
            }
            if(f1 && !f2)
                ans++;
        }
        return ans;
    }
};