class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> tmp = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string, int> maple;
        for(auto word: words)
        {
            string s;
            for(auto c: word)
                s += tmp[c-'a'];
            maple[s] = 1;
        }
        return maple.size();
    }
};