class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        n=len(numbers)
        l,r=0,n-1
        sol=[]
        while l<r :
            if numbers[l]+numbers[r]==target :
                sol.append(l+1)
                sol.append(r+1)
                return sol
            elif numbers[l]+numbers[r]<target:
                l+=1
            else:
                r-=1
        