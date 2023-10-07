class Solution:
    def trap(self, height: List[int]) -> int:
        sol=0
        n=len(height)
        lmax=[0]*len(height)
        rmax=[0]*len(height)
        lmax[0]=height[0]
        rmax[len(height)-1]=height[n-1]
        for i in range(1,len(height)):
            lmax[i]=max(lmax[i-1],height[i])
        for i in range (n-2,0,-1):
            rmax[i]=max(rmax[i+1],height[i])
        for i in range(1,len(height)-1):
            sol+=max(0,min(lmax[i],rmax[i])-height[i])
        return sol

        