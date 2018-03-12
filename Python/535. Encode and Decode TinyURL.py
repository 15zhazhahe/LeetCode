class Codec:

    def __init__(self):
        self.d1 = dict()
        self.d2 = dict()
        self.n = 0
        
    def encode(self, longUrl):
        """Encodes a URL to a shortened URL.
        
        :type longUrl: str
        :rtype: str
        """
        if self.d1.get(longUrl) is None:
            self.d1[longUrl] = self.n + 1
            self.d2[self.n + 1] = longUrl
            self.n += 1
        return "http://tinyurl.com/" + str(self.d1[longUrl])
        

    def decode(self, shortUrl):
        """Decodes a shortened URL to its original URL.
        
        :type shortUrl: str
        :rtype: str
        """
        tmp = int(shortUrl.split('/')[-1])
        return self.d2[tmp]
        

# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(url))