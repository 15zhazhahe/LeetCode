class Solution {
public:
    string simplifyPath(string path) {
        vector<string> res;
        string tmp, ans ;
        int i = 0, len = path.length();
        while(i<len)
        {
            string tmp = "";
            while(path[i] != '/' && i<len)
            {
                tmp += path[i];
                i++;
            }
            i++;
            if(tmp == ".")
                continue;
            else if(tmp == "..")
            {
                if(res.size() > 0)
                    res.pop_back();
            }
            else if(tmp.length() > 0)
                res.push_back(tmp);
        }
        if(res.size() == 0)
            return "/";
        for(auto s: res)
            ans = ans + "/" + s;
        return ans;
            
    }
};