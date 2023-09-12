class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        mod_arr = [0] * k
        mod_arr[0] = 1
        curr_mod = 0
        for num in nums:
            curr_mod = (num + curr_mod) % k
            mod_arr[curr_mod] += 1

        return sum([n*(n-1)//2 for n in mod_arr])
