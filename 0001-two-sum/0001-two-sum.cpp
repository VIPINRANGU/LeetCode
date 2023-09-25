class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    if(i<j){
                        vector<int> sol;
                        sol.push_back(i);
                        sol.push_back(j);
                        return sol;
                    }
                    vector<int> sol;
                        sol.push_back(j);
                        sol.push_back(i);
                        return sol;           
                }
            }
        }
        vector <int> sol;
        return sol;
    }
};