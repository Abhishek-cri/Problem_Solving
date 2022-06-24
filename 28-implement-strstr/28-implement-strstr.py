class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        index=-1
        if needle in haystack:
            index=haystack.find(needle)
            
        return index
        