// Time: O(n)
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int len = ops.size();
        vector<int>scores;
        int ans = 0;
        for(int i=0;i<len;i++)
        {
            int score = 0,flag = 1;
            if(ops[i] == "C")
            {
                score = scores.back();
                scores.pop_back();
                ans -= score;
                flag = 0;
            }
            else if(ops[i] == "D")
            {
                score = 2*scores.back();
                ans += score;
            }
            else if(ops[i] == "+")
            {
                int score1 = scores.back();
                scores.pop_back();
                int score2 = scores.back();
                scores.pop_back();
                scores.push_back(score2);
                scores.push_back(score1);
                score = score1 + score2;
                ans += score;
            }
            else
            {
                score = atoi(ops[i].c_str());
                ans += score;
            }
            if(flag)
                scores.push_back(score);
        }
        return ans;
    }
};