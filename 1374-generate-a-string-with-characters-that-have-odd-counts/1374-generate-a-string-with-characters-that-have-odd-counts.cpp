class Solution {
public:
    string generateTheString(int n) {
        string ans;
        if(n%2==0 && n>0){
            n--;ans="a";
        }
        while(n){
            ans+="b";
            n--;
        }
        return ans;
    }
};