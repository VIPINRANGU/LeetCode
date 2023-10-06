class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre_prod(nums.size(), 1);  
        vector<int> suf_prod(nums.size(), 1); 

        
        for (int i = 1; i < nums.size(); i++) {
            pre_prod[i] = pre_prod[i - 1] * nums[i - 1];
        }

       
        for (int i = nums.size() - 2; i >= 0; i--) {
            suf_prod[i] = suf_prod[i + 1] * nums[i + 1];
        }

      
        vector<int> sol(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            sol[i] = pre_prod[i] * suf_prod[i];
        }

        return sol;
    }
};