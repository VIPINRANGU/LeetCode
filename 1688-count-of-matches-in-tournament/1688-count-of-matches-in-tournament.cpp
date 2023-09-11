class Solution {
public:
    int long long count=0;
    int numberOfMatches(int n) {
        while(n>1){
            if(n%2!=0){
                n=n+1;
                count-=1;
            }
            n=n/2;
            count+=n;
        }
        return count;
    }
};