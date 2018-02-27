class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        map<char, char> maple;
        maple[']'] = '[';
        maple['}'] = '{';
        maple[')'] = '(';
        for(auto c: s)
        {
            if(c=='{' || c=='(' || c=='[')
                ans.push(c);
            else if(ans.empty() || ans.top() != maple[c])
                return false;
            else
                ans.pop();
        }
        return ans.empty();
    }
};