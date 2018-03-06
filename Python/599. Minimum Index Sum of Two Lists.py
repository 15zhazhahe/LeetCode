class Solution:
    def findRestaurant(self, list1, list2):
        """
        :type list1: List[str]
        :type list2: List[str]
        :rtype: List[str]
        """
        ans, maple = list(), dict()
        res = float('inf')
        for i in range(len(list1)):
            maple[list1[i]] = i
        for i in range(len(list2)):
            if maple.get(list2[i]) != None:
                if i + maple[list2[i]] < res:
                    res = i + maple[list2[i]]
                    ans = list()
                    ans.append(list2[i])
                elif i + maple[list2[i]] == res:
                    ans.append(list2[i])
        return ans