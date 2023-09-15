class Solution:
    def countWords(self, words1: List[str], words2: List[str]) -> int:
        cnt=0
        for i in words1:
            if words1.count(i)==1 and words2.count(i)==1 and i in words2:
                cnt+=1
        return (cnt)
        