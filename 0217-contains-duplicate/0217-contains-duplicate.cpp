class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int>  sets;
        for (auto i:nums){
            if(sets.find(i)!=sets.end()){
                return true;
            }
            else{
            sets.insert(i);
        }
        }
        return false;
    }
};