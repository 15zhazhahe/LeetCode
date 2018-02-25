class Solution:
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        for i in range(len(flowerbed)):
            if flowerbed[i] == 0:
                if i == 0 or flowerbed[i-1] == 0:
                    if(i == len(flowerbed) - 1 or flowerbed[i+1] == 0):
                        n -= 1
                        flowerbed[i] = 1
            if n <= 0:
                return True
        return False