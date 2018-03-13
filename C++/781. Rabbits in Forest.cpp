class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> maple;
        int ans = 0;
        for(auto answer: answers)
        {
            if(answer == 0)
                ans += 1;
            else
                maple[answer] += 1;
        }
        for(auto &i: maple)
        {
            if(i.second <= i.first + 1)
                ans += i.first + 1;
            else
            {
                int flag = i.second%(i.first + 1)!=0 ? 1 : 0;
                ans += (i.second / (i.first + 1) + flag)*(i.first + 1);
            }
        }
            
        return ans;
    }
};