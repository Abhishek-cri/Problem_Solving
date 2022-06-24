class Solution(object):
    def countAndSay(self, n):
        if n == 1:
            return "1"
        last=self.countAndSay(n-1)
        ans=""
        count=1
        for i in range(len(last)):
            if  i == len(last)-1 or last[i]!=last[i+1]:
                ans += str(count) + last[i]
                count=1
            else:
                count+=1
        return ans