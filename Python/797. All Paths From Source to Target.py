class Solution:
    def allPathsSourceTarget(self, graph):
        """
        :type graph: List[List[int]]
        :rtype: List[List[int]]
        """
        
        n = len(graph)
        ans = list()
        node = [0, [0]]
        q = [node]
        while len(q) > 0:
            now = q.pop(0)
            if now[0] == n-1:
                ans.append(now[1])
            u = now[0]
            for i in range(len(graph[u])):
                tmp = []
                tmp.append(graph[u][i])
                tmp.append(now[1][:])
                tmp[1].append(graph[u][i])
                q.append(tmp)
        return ans