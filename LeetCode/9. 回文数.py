class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        stri=str(x)
        leni=len(stri)
        for i in range(0,leni):
            if(stri[leni-1-i]!=stri[i]):
                return False
        return True
