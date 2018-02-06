class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> maple;
        int len1 = ransomNote.length();
        int len2 = magazine.length();
        for(int i = 0;i<len2;i++)
            maple[magazine[i]]++;
        for(int i=0;i<len1;i++)
        {
            if(maple.find(ransomNote[i])==maple.end())
                return false;
            else if(maple[ransomNote[i]]==0)
                return false;
            else
                maple[ransomNote[i]]--;
        }
        return true;
    }
};