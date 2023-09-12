class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        arr=[0]*len(indices)
        j=0
        for i in indices:
            arr[i]=s[j]
            j+=1
        arr=''.join(arr)
        return arr