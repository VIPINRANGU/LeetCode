class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int siz=nums.size();
        unordered_set<int> s(nums.begin(),nums.end());
        int sol=0;
        for(auto i :  nums){
            if(s.find(i-1)==s.end()){
                int counter=1;
                int temp=i+1;
                while(s.find(temp)!=s.end()){
                    counter++;
                    temp++;
                }
                sol=max(sol,counter);
            }
        }
        return sol;
    }
};