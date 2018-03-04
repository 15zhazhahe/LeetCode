class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(target >= letters.back())
            return letters[0];
        else
        {
            for(auto letter: letters)
            {
                if(letter > target)
                    return letter;
            }
        }
        
    }
};