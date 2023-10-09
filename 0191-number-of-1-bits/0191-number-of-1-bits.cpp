class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sol=0;
        for(int i=0;i<32;i++){
            sol+=((n>>i)&1);
        }
        return sol;
    }
};