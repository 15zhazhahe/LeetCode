class Solution:
    def floodFill(self, image, sr, sc, newColor):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type newColor: int
        :rtype: List[List[int]]
        """
        dx = [0, 1, -1, 0]
        dy = [1, 0, 0, -1]
        n, m = len(image), len(image[0])
        maple = dict()
        q = list()
        color = image[sr][sc]
        image[sr][sc] = newColor
        maple[(sr, sc)] = 1
        q.append((sr, sc))
        while len(q) > 0:
            node = q.pop(0)
            for i in range(0,4):
                tx = node[0] + dx[i]
                ty = node[1] + dy[i]
                if tx < 0 or ty < 0:
                    continue
                if tx >= n or ty >= m:
                    continue
                if image[tx][ty] == color and maple.get((tx, ty)) is None:
                    maple[(tx, ty)] = 1
                    image[tx][ty] = newColor
                    q.append((tx, ty))
        return image