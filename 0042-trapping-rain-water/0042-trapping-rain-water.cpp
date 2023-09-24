class Solution {
public:
    int trap(vector<int>& height) {
        long long int n=height.size(),lmax=height[0],rmax=height[n-1],lpoi=1,rpoi=n-2,sol=0;
        while(lpoi<=rpoi){
            if(height[lpoi]>=lmax){
                lmax=height[lpoi++];
            }
            else if(height[rpoi]>=rmax){
                rmax=height[rpoi--];
            }
            else if(height[lpoi]<=lmax && lmax<rmax){
                sol+=lmax-height[lpoi++];
            }
            else{
                sol+=rmax-height[rpoi--];
            }   
        }
        return sol;
    }
};
