class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> solution ={-1,-1};
        int left=0,right=nums.size()-1;
        while (left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                solution[0]=mid;
                right=mid-1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }  
        }
        left=0,right=nums.size()-1;
        while (left<=right){
           int mid=left+(right-left)/2;
            if(nums[mid]==target){
                solution[1]=mid;
                left=mid+1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }  
        }
        return solution;
        
    }
};
