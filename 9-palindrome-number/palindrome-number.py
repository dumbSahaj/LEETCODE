class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        b = 0
        c = x
        while (x>0):
            b = b*10 + x%10
            x = x//10
        
        if (b == c):
            return True
        else:
            return False
        