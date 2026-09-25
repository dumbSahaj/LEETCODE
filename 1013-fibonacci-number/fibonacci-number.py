class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        rootfive = sqrt(5)
        nth = int((((1+rootfive)/2)**n-((1-rootfive)/2)**n)/rootfive)
        return nth
        