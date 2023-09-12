class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        arrsol=[]
        arr1=Counter(arr1)
        arr=[]
        for i in arr2 :
            arrsol+=[i]*arr1[i]
        for i in arr1:
            if i not in arr2:
                arr+=[i]*arr1[i]
        arr=sorted(arr)
        arrsol+=arr
        return arrsol
        