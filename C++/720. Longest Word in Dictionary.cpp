class Solution {
public:
    string longestWord(vector<string>& words) {
        set<string> s;
        sort(words.begin(),words.end());
        string ans;
        for(auto word: words)
        {
            if(word.size()==1||s.find(word.substr(0,word.size()-1)) != s.end())
            {
                s.insert(word);
                if(word.size() > ans.size())
                    ans = word;
            }
        }
        return ans;
    }
};