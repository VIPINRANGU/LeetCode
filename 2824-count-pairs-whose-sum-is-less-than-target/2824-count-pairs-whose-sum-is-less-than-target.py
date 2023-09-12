class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
        left,right=0,len(nums)-1
        c=0
        nums=sorted(nums)
        while left<right:
            curr_sum=nums[left]+nums[right]
            if curr_sum<target:
                c+=right-left
                left+=1
            else:
                right-=1
        return c