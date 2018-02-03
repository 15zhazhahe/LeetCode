/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    map<int, Employee*> maple;
    int dfs(int id)
    {
        int sum = maple[id]->importance;
        int len = maple[id]->subordinates.size();
        for(int i=0;i<len;i++)
            sum += dfs(maple[id]->subordinates[i]);
        return sum;
    }
    int getImportance(vector<Employee*> employees, int id) {
        maple.clear();
        int len = employees.size();
        for(int i=0;i<len;i++)
            maple[employees[i]->id] = employees[i];
        return dfs(id);
    }
};