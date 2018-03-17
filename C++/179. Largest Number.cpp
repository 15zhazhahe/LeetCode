class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> tmp;
        for(auto num: nums)
            tmp.push_back(to_string(num));
        sort(tmp.begin(),tmp.end(), [](string s1,string s2){return s1+s2>s2+s1;});
        string ans = "";
        for(auto s: tmp)
            ans += s;
        if(ans[0]=='0')
            return "0";
        return ans;
    }
};