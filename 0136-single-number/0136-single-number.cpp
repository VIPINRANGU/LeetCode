class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sol=0;
        for (auto i : nums){
            sol=sol^i;
        }
        return sol;
    }
};