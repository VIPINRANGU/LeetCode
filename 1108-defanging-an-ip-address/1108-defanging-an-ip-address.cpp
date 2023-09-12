class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for(auto i:address){
            if(i=='.'){
                s=s+"[.]";
            }
            else{
                s=s+i;
                
            }
        }
        return s;
    }
};