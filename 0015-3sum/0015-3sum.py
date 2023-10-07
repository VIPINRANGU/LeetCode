from typing import List

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort() 
        n = len(nums)
        sol = []

        for f in range(n - 2):
            if f > 0 and nums[f] == nums[f - 1]:
                continue  
            l, r = f + 1, n - 1

            while l < r:
                total = nums[f] + nums[l] + nums[r]

                if total == 0:
                    sol.append([nums[f], nums[l], nums[r]])
                    while l < r and nums[l] == nums[l + 1]:
                        l += 1  
                    while l < r and nums[r] == nums[r - 1]:
                        r -= 1  
                    l += 1
                    r -= 1
                elif total < 0:
                    l += 1
                else:
                    r -= 1

        return sol
