class Solution {
public:
    void dfs(int now, vector<vector<int> > g, vector<int> path, vector<vector<int> >&ans)
    {
        path.push_back(now);
        if(now == g.size()-1)
        {
            ans.push_back(path);
            return ;
        }
        for(auto it: g[now])
            dfs(it, g, path, ans);
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path;
        vector<vector<int> > ans;
        dfs(0,graph,path,ans);
        return ans;
    }
};