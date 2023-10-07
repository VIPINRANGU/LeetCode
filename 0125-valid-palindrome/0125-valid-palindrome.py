class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        s=s.replace(' ','')
        tru=""
        for i in s:
            if(i.isalnum()):
                tru+=i
        l,r=0,len(tru)-1
        while l<r :
            if tru[l]==tru[r]:
                l+=1
                r-=1
            else:
                return False
        return True