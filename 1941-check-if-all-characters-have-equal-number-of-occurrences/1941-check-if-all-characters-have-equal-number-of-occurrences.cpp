class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> tab;int temp=0;
        for(auto i:s){
            tab[i]++;
        }temp=tab[s[0]];
        for(auto i:tab){
            if(temp!=i.second){
                return false;
            }
        }
        return true;
        
    }
};