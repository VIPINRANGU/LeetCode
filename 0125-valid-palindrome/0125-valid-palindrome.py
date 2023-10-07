class Solution:
    def isPalindrome(self, s: str) -> bool:
        s.lower()
        s.replace(" ","")
        tmp=''
        for i in s :
            if i.isalnum():
                tmp+=i
        tmp=tmp.lower()
        tmp1=tmp
        tmp1=tmp1[::-1]
        n=len(tmp)
        # print(tmp,"tmp")
        # print(tmp1,"tmp1")
        for i in range(n//2):
            if(tmp[i]!=tmp1[i]):
                return False
        return True